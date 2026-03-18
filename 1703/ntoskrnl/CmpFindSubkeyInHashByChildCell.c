/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x140572568
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpUnlockHashEntry @ 0x140490B2C (CmpUnlockHashEntry.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 *     CmpLockHashEntryShared @ 0x1405726E4 (CmpLockHashEntryShared.c)
 *     CmpHashCompressedComponent @ 0x140572750 (CmpHashCompressedComponent.c)
 *     CmpIsKcbLockAllowed @ 0x1405727B4 (CmpIsKcbLockAllowed.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        unsigned __int64 a1,
        unsigned __int64 a2,
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
  ULONG_PTR v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // rcx
  __m128i v23; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+64h] [rbp+Ch]

  v24 = -1;
  v6 = *(_QWORD *)(a3 + 2800);
  v7 = *(_DWORD *)(a1 + 8);
  v9 = a5;
  v25 = 0;
  *a5 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v24);
  if ( !v12 )
    return 3221225626LL;
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v14 = CmpHashCompressedComponent(v12 + 76, *(unsigned __int16 *)(v12 + 72), v13);
  }
  else
  {
    v23.m128i_i64[1] = v12 + 76;
    v23.m128i_i16[0] = *(_WORD *)(v12 + 72);
    v23.m128i_i16[1] = v23.m128i_i16[0];
    v14 = CmpHashUnicodeComponent(&v23);
  }
  v15 = 37 * v7 + v14;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v24);
  CmpUnlockTwoKcbs((void *)a1, a2);
  CmpLockHashEntryShared(*(_QWORD *)(a1 + 24), v15);
  CmpLockTwoKcbsShared(a1, a2);
  for ( i = *(_QWORD *)(v6
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a3 + 2808) - 1) & ((101027 * (v15 ^ (v15 >> 9))) ^ ((unsigned __int64)(101027 * (v15 ^ (v15 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v15 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && a3 == *(_QWORD *)(i + 16) )
    {
      v17 = i - 8;
      if ( (unsigned __int8)CmpIsKcbLockAllowed(a1, v17, &a5) )
      {
        if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v18, &a5) )
        {
          v20 = v17;
        }
        else
        {
          CmpUnlockKcb(v22);
          CmpLockKcbShared(v17);
          v20 = a2;
        }
      }
      else
      {
        CmpUnlockKcb(v19);
        CmpLockKcbShared(v17);
        v20 = a1;
      }
      CmpLockKcbShared(v20);
      if ( CmpReferenceKeyControlBlock(v17) )
        *v9 = v17;
      CmpUnlockKcb(v17);
      break;
    }
  }
  CmpUnlockHashEntry(*(_QWORD *)(a1 + 24), v15);
  return 0LL;
}
