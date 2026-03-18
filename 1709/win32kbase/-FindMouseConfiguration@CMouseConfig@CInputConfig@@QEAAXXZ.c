/*
 * XREFs of ?FindMouseConfiguration@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0060FFC
 * Callers:
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0061224 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C012FBA0 (-BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0017930 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

void __fastcall CInputConfig::CMouseConfig::FindMouseConfiguration(
        CInputConfig::CMouseConfig *this,
        struct CInpPushLock *a2)
{
  bool v3; // bp
  struct _SINGLE_LIST_ENTRY *v4; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  char v6; // al
  struct _SINGLE_LIST_ENTRY *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]

  *((_QWORD *)this + 2) = 0LL;
  v3 = !*(_DWORD *)this && !*((_DWORD *)this + 1);
  v4 = 0LL;
  Next = gpInputConfig->Next;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v8, a2);
  while ( Next )
  {
    v7 = Next + 1;
    if ( Next == (struct _SINGLE_LIST_ENTRY *)-8LL )
      break;
    if ( v3 )
    {
      v6 = (__int64)Next[2].Next & 1;
    }
    else
    {
      if ( *(_DWORD *)this == LODWORD(v7->Next) && *((_DWORD *)this + 1) == HIDWORD(Next[1].Next) )
      {
LABEL_8:
        *((_QWORD *)this + 2) = v7;
        break;
      }
      v6 = 0;
    }
    if ( v6 )
      goto LABEL_8;
    if ( ((__int64)Next[2].Next & 1) != 0 || !v4 )
      v4 = Next + 1;
    Next = Next->Next;
  }
  if ( !v9 )
  {
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_QWORD *)this + 2) )
    *((_QWORD *)this + 2) = v4;
}
