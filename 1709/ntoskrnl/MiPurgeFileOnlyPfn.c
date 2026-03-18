/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x1402238B4
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x1402224DC (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x140223640 (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x140223D6C (MiSubsectionProtosCreated.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *PrototypePteDirect; // rax
  unsigned int v5; // esi
  _QWORD *v6; // r14
  __int64 *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR v13; // rbx
  __int64 PteShadow; // rdx
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v17; // rax
  char v18; // al
  _BYTE v19[88]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v20; // [rsp+90h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), a2, a3);
  v5 = 0;
  v20 = 17;
  v6 = PrototypePteDirect;
  v7 = (__int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos(PrototypePteDirect, 32, (__int64)v19);
  v10 = MiCheckProtoPtePageState((ULONG_PTR)v7, &v20, v8, v9);
  if ( v10 )
  {
    v13 = MiLockLeafPage(v7, 0LL, v11, v12);
    if ( v13 )
    {
      PteShadow = *v7;
      if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v21 = PteShadow;
      if ( (PteShadow & 1) != 0 || v13 != 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v21) - 0x58000000000LL )
        goto LABEL_7;
      v17 = *(_QWORD *)(v13 + 16);
      if ( (v17 & 0x400) == 0 || (v17 & 1) != 0 || (__int64 *)(*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != v7 )
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v7, *(_QWORD *)(v13 + 8), BugCheckParameter4);
      v18 = *(_BYTE *)(v13 + 34);
      if ( (v18 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v18 & 0x10) != 0 )
        {
          if ( *(char *)(v13 + 35) >= 0 )
            MiPersistPage((__int64)(v13 + 0x58000000000LL) / 48);
          *(_BYTE *)(v13 + 34) &= ~0x10u;
        }
        MiDeleteTransitionPte((ULONG_PTR *)v7, v13, 2u, 1);
        v5 = 1;
      }
    }
  }
  if ( v20 != 17 )
    MiUnlockProtoPoolPage(v10, v20);
  return MiSubsectionProtosCreated(v6, v19, 0LL, v5);
}
