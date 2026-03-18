/*
 * XREFs of GetPointerDeviceConfig @ 0x1C00615F0
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0017930 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

__int64 __fastcall GetPointerDeviceConfig(__int64 a1, struct CInpPushLock *a2, _OWORD *a3)
{
  int v6; // esi
  struct _SINGLE_LIST_ENTRY *Next; // r14
  int Next_high; // r9d
  __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // rdx
  int v12; // eax
  char v13; // al
  struct _SINGLE_LIST_ENTRY *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  char v17; // [rsp+28h] [rbp-20h]

  v6 = -1073741823;
  Next = gpInputConfig->Next;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v16, a2);
  while ( Next )
  {
    v14 = Next + 1;
    if ( Next == (struct _SINGLE_LIST_ENTRY *)-8LL )
      break;
    if ( *(_DWORD *)(a1 + 776) )
    {
      Next_high = HIDWORD(Next[2].Next);
      v9 = 0LL;
      v10 = *(_DWORD *)(a1 + 792);
      if ( !Next_high )
        goto LABEL_10;
      while ( 1 )
      {
        v11 = (__int64)&Next[3].Next[10 * v9];
        v12 = *(_DWORD *)(v11 + 16);
        if ( (v12 & 2) != 0 )
        {
          if ( v10 == 4 )
          {
            v13 = v12 & 1;
          }
          else if ( v10 )
          {
            if ( *(_DWORD *)(v11 + 24) == *(_DWORD *)(a1 + 1308)
              && *(_DWORD *)(v11 + 28) == *(_DWORD *)(a1 + 1312)
              && *(_DWORD *)(v11 + 32) == *(_DWORD *)(a1 + 1316) )
            {
LABEL_9:
              *(_QWORD *)a2 = v14;
              v6 = 0;
              *a3 = *(_OWORD *)v11;
              a3[1] = *(_OWORD *)(v11 + 16);
              a3[2] = *(_OWORD *)(v11 + 32);
              a3[3] = *(_OWORD *)(v11 + 48);
              a3[4] = *(_OWORD *)(v11 + 64);
              goto LABEL_10;
            }
            v13 = 0;
          }
          else
          {
            v13 = *(_QWORD *)(v11 + 72) == *(_QWORD *)(a1 + 784);
          }
          if ( v13 )
            goto LABEL_9;
        }
        v9 = (unsigned int)(v9 + 1);
        if ( (_DWORD)v9 == Next_high )
          goto LABEL_10;
      }
    }
    if ( ((__int64)Next[2].Next & 1) != 0 )
    {
      *(_QWORD *)a2 = v14;
      v6 = 0;
      *a3 = *(_OWORD *)&Next[4].Next;
      a3[1] = *(_OWORD *)&Next[6].Next;
      a3[2] = *(_OWORD *)&Next[8].Next;
      a3[3] = *(_OWORD *)&Next[10].Next;
      a3[4] = *(_OWORD *)&Next[12].Next;
      break;
    }
LABEL_10:
    if ( v6 >= 0 )
      break;
    Next = Next->Next;
  }
  if ( !v17 )
  {
    ExReleasePushLockSharedEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v6;
}
