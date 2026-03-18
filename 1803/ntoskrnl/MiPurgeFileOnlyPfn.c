/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x14025E548
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14025D140 (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x14025E29C (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x14025EA5C (MiSubsectionProtosCreated.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *PrototypePteDirect; // rax
  unsigned int v6; // esi
  _QWORD *v7; // r14
  __int64 *v8; // rdi
  __int64 v9; // rdx
  ULONG_PTR v10; // rbp
  __int64 v11; // r8
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  _BYTE v18[88]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v19; // [rsp+90h] [rbp+8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), a2, a3, a4);
  v6 = 0;
  v19 = 17;
  v7 = PrototypePteDirect;
  v8 = (__int64 *)(v4 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos(PrototypePteDirect, 32, (__int64)v18);
  v10 = MiCheckProtoPtePageState((unsigned __int64)v8, &v19);
  if ( v10 )
  {
    v13 = MiLockLeafPage((unsigned __int64)v8, 0);
    if ( v13 )
    {
      v20 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
      BugCheckParameter4 = v20;
      if ( (v20 & 1) != 0 )
        goto LABEL_4;
      v15 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v20);
      v9 = 0xFFFFFA8000000000uLL;
      if ( v13 != 48 * v15 - 0x58000000000LL )
        goto LABEL_4;
      v16 = *(_QWORD *)(v13 + 16);
      if ( (v16 & 0x400) == 0 || (v16 & 1) != 0 || (__int64 *)(*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != v8 )
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v8, *(_QWORD *)(v13 + 8), BugCheckParameter4);
      v17 = *(_BYTE *)(v13 + 34);
      if ( (v17 & 8) != 0 )
      {
LABEL_4:
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v17 & 0x10) != 0 )
        {
          if ( *(char *)(v13 + 35) >= 0 )
          {
            MiPersistPage(
              (__int64)(v13 + 0x58000000000LL) / 48,
              (__int64)((unsigned __int128)((__int64)(v13 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
              v11,
              BugCheckParameter4);
            v17 = *(_BYTE *)(v13 + 34);
          }
          *(_BYTE *)(v13 + 34) = v17 & 0xEF;
        }
        MiDeleteTransitionPte(v8, v13, 2u, 1);
        v6 = 1;
      }
    }
  }
  LOBYTE(v9) = v19;
  if ( v19 != 17 )
    MiUnlockProtoPoolPage(v10, v9, v11, BugCheckParameter4);
  return MiSubsectionProtosCreated(v7, v18, 0LL, v6);
}
