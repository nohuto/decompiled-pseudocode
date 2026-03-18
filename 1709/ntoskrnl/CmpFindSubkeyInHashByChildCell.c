/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x140562984
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpUnlockHashEntry @ 0x140478118 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404827AC (CmpLockTwoKcbsShared.c)
 *     CmpIsKcbLockAllowed @ 0x140562910 (CmpIsKcbLockAllowed.c)
 *     CmpLockHashEntryShared @ 0x140562B08 (CmpLockHashEntryShared.c)
 *     CmpHashCompressedComponent @ 0x140562B74 (CmpHashCompressedComponent.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR *a5)
{
  __int64 v6; // r13
  int v7; // edi
  ULONG_PTR *v9; // r12
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // ebx
  __int64 i; // rdi
  ULONG_PTR v18; // rdi
  __int64 v19; // rdx
  ULONG_PTR v20; // rcx
  ULONG_PTR v21; // rcx
  __m128i v22; // [rsp+20h] [rbp-38h] BYREF
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+64h] [rbp+Ch]

  v23 = -1;
  v6 = *(_QWORD *)(a3 + 2800);
  v7 = *(_DWORD *)(a1 + 8);
  v9 = a5;
  v24 = 0;
  *a5 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v23);
  if ( !v12 )
    return 3221225626LL;
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v14 = CmpHashCompressedComponent(v12 + 76, *(unsigned __int16 *)(v12 + 72), v13);
  }
  else
  {
    v22.m128i_i64[1] = v12 + 76;
    v22.m128i_i16[0] = *(_WORD *)(v12 + 72);
    v22.m128i_i16[1] = v22.m128i_i16[0];
    v14 = CmpHashUnicodeComponent(&v22);
  }
  v15 = 37 * v7 + v14;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v23);
  CmpUnlockTwoKcbs(a1, a2);
  CmpLockHashEntryShared(*(_QWORD *)(a1 + 24), v15);
  CmpLockTwoKcbsShared(a1, a2);
  for ( i = *(_QWORD *)(v6
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a3 + 2808) - 1) & ((101027 * (v15 ^ (v15 >> 9))) ^ ((unsigned __int64)(101027 * (v15 ^ (v15 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v15 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && a3 == *(_QWORD *)(i + 16) )
    {
      v18 = i - 8;
      if ( CmpIsKcbLockAllowed(a1, v18, &a5) )
      {
        if ( !a2 || CmpIsKcbLockAllowed(a2, v19, &a5) )
        {
          ExAcquirePushLockSharedEx(v18 + 40, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 48));
        }
        else
        {
          CmpUnlockKcb(v21);
          ExAcquirePushLockSharedEx(v18 + 40, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 48));
          ExAcquirePushLockSharedEx(a2 + 40, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
        }
      }
      else
      {
        CmpUnlockKcb(v20);
        ExAcquirePushLockSharedEx(v18 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 48));
        ExAcquirePushLockSharedEx(a1 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
      }
      if ( (unsigned __int8)CmpReferenceKeyControlBlock(v18) )
        *v9 = v18;
      CmpUnlockKcb(v18);
      break;
    }
  }
  CmpUnlockHashEntry(*(PVOID *)(a1 + 24), v15);
  return 0LL;
}
