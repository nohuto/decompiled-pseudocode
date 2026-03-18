/*
 * XREFs of ?FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0053B44
 * Callers:
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0053754 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C0131BB4 (-BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00558DC (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::CMouseConfig::FindMouseConfiguration(CInputConfig::CMouseConfig *this)
{
  bool v2; // bp
  __int64 v3; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  struct _SINGLE_LIST_ENTRY *v5; // rcx
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]

  *((_QWORD *)this + 2) = 0LL;
  v2 = !*(_DWORD *)this && !*((_DWORD *)this + 1);
  v3 = 0LL;
  Next = gpInputConfig->Next;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
    (CInpLockSharedIfNeeded *)&v8,
    (struct CInpPushLock *)&CInputConfig::slock);
  while ( 1 )
  {
    v5 = Next + 1;
    v6 = (unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64);
    if ( !v6 )
      break;
    LOBYTE(v5) = *(_BYTE *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64))
                          + 8) & 1;
    if ( v2 )
    {
      v7 = *(_BYTE *)(((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64)) + 8) & 1;
    }
    else
    {
      if ( *(_QWORD *)this == *(_QWORD *)((unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64)) )
      {
LABEL_9:
        *((_QWORD *)this + 2) = v6;
        break;
      }
      v7 = 0;
    }
    if ( v7 )
      goto LABEL_9;
    if ( (_BYTE)v5 || !v3 )
      v3 = (unsigned __int64)&Next[1] & ((unsigned __int128)-(__int128)(unsigned __int64)Next >> 64);
    Next = Next->Next;
  }
  if ( !v9 )
  {
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_QWORD *)this + 2) )
  {
    *((_QWORD *)this + 2) = v3;
    if ( !v3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v6);
  }
}
