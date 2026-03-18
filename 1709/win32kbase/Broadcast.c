/*
 * XREFs of Broadcast @ 0x1C0061734
 * Callers:
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0061224 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     OpenConnectionToMITEndpoint @ 0x1C0087D60 (OpenConnectionToMITEndpoint.c)
 * Callees:
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0017930 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

_UNKNOWN **__fastcall Broadcast(__int64 a1, struct CInpPushLock *a2)
{
  _UNKNOWN **result; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r14
  unsigned __int64 v4; // rcx
  unsigned int v5; // esi
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // r8
  int v9; // ecx
  struct _SINGLE_LIST_ENTRY *v10; // rax
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  struct _SINGLE_LIST_ENTRY *v15; // xmm0_8
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-88h] BYREF
  char v18; // [rsp+28h] [rbp-80h]
  int v19[24]; // [rsp+40h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = &retaddr;
  if ( gInputConfigConnectionHandle )
  {
    Next = gpInputConfig->Next;
    CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v17, a2);
    while ( Next && Next != (struct _SINGLE_LIST_ENTRY *)-8LL )
    {
      v4 = 72LL * (unsigned int)(HIDWORD(Next[2].Next) - 1);
      if ( v4 > 0xFFFFFFFF || (unsigned int)(v4 + 92) < 0x5C )
        v5 = 0;
      else
        v5 = v4 + 92;
      v6 = (char *)Win32AllocPoolZInit(v5, 1866690121LL);
      v7 = v6;
      if ( !v6 )
        break;
      *(_DWORD *)v6 = 0;
      v8 = 0LL;
      v9 = (int)Next[2].Next;
      *(struct _SINGLE_LIST_ENTRY *)(v6 + 4) = Next[1];
      *((_DWORD *)v6 + 3) = v9;
      *((_DWORD *)v6 + 4) = HIDWORD(Next[2].Next);
      if ( HIDWORD(Next[2].Next) )
      {
        do
        {
          v10 = Next[3].Next;
          v11 = *(_OWORD *)&v10[10 * v8].Next;
          v12 = *(_OWORD *)&v10[10 * v8 + 2].Next;
          v13 = *(_OWORD *)&v10[10 * v8 + 4].Next;
          v14 = *(_OWORD *)&v10[10 * v8 + 6].Next;
          v15 = v10[10 * v8 + 8].Next;
          v16 = 9 * v8;
          *(_OWORD *)&v7[8 * v16 + 20] = v11;
          v8 = (unsigned int)(v8 + 1);
          *(_OWORD *)&v7[8 * v16 + 36] = v12;
          *(_OWORD *)&v7[8 * v16 + 52] = v13;
          *(_OWORD *)&v7[8 * v16 + 68] = v14;
          *(_QWORD *)&v7[8 * v16 + 84] = v15;
        }
        while ( (_DWORD)v8 != HIDWORD(Next[2].Next) );
      }
      CoreMsgSend(gInputConfigConnectionHandle, 0, v7, (const GUID *)v5);
      Win32FreePool((__int64)v7);
      Next = Next->Next;
    }
    if ( !v18 )
    {
      ExReleasePushLockSharedEx(v17, 0LL);
      KeLeaveCriticalRegion();
    }
    v19[0] = 1;
    return (_UNKNOWN **)CoreMsgSend(gInputConfigConnectionHandle, 0, v19, (const GUID *)0x5C);
  }
  return result;
}
