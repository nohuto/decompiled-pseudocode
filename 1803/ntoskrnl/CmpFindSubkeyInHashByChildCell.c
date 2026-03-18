/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x1405E2080
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpUnlockHashEntry @ 0x14049D070 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404ACECC (CmpLockTwoKcbsShared.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     CmpIsKcbLockAllowed @ 0x1405C2DF4 (CmpIsKcbLockAllowed.c)
 *     CmpLockHashEntryShared @ 0x1405E2210 (CmpLockHashEntryShared.c)
 *     CmpHashCompressedComponent @ 0x1405E227C (CmpHashCompressedComponent.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  int v5; // ebx
  unsigned __int64 *v6; // r12
  ULONG_PTR v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID *v18; // r13
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 i; // rdi
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  ULONG_PTR v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rdx
  ULONG_PTR v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128i v35; // [rsp+20h] [rbp-48h] BYREF
  int v36; // [rsp+70h] [rbp+8h] BYREF
  int v37; // [rsp+74h] [rbp+Ch]
  __int64 v38; // [rsp+80h] [rbp+18h]

  v5 = *(_DWORD *)(a1 + 8);
  v6 = a5;
  v36 = -1;
  v37 = 0;
  v9 = a1;
  v10 = *(_QWORD *)(a3 + 1640);
  *a5 = 0LL;
  v38 = v10;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v36);
  if ( !v12 )
    return 3221225626LL;
  v13 = *(_WORD *)(v12 + 72);
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v14 = CmpHashCompressedComponent(v12 + 76, v13);
  }
  else
  {
    v35.m128i_i64[1] = v12 + 76;
    v35.m128i_i16[0] = v13;
    v35.m128i_i16[1] = v13;
    v14 = CmpHashUnicodeComponent(&v35);
  }
  v15 = 37 * v5 + v14;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v36);
  CmpUnlockTwoKcbs(v9, a2, v16, v17);
  v18 = (PVOID *)(v9 + 24);
  CmpLockHashEntryShared(*(_QWORD *)(v9 + 24), v15);
  CmpLockTwoKcbsShared(v9, a2);
  for ( i = *(_QWORD *)(v38
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a3 + 1648) - 1) & ((101027 * (v15 ^ (v15 >> 9))) ^ ((unsigned __int64)(101027 * (v15 ^ (v15 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v15 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && a3 == *(_QWORD *)(i + 16) )
    {
      v22 = i - 8;
      if ( CmpIsKcbLockAllowed(v9, v22, &a5) )
      {
        if ( !a2 || CmpIsKcbLockAllowed(a2, v22, &a5) )
        {
          v9 = v22;
        }
        else
        {
          CmpUnlockKcb(v32, v31, v33, v34);
          ExAcquirePushLockSharedEx(v22 + 40, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 48));
          v9 = a2;
        }
      }
      else
      {
        CmpUnlockKcb(v24, v23, v25, v26);
        ExAcquirePushLockSharedEx(v22 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 48));
      }
      ExAcquirePushLockSharedEx(v9 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 48));
      if ( CmpReferenceKeyControlBlock(v22) )
        *v6 = v22;
      CmpUnlockKcb(v22, v27, v28, v29);
      break;
    }
  }
  CmpUnlockHashEntry(*v18, v15, v19, v20);
  return 0LL;
}
