/*
 * XREFs of MxCopyPage @ 0x14089B084
 * Callers:
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x14089BB44 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  __int64 v5; // r9
  __int64 v6; // rdi
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  BOOL v10; // esi
  __int64 v11; // r8
  __int64 v12; // r8

  Phase0Mapping = MxGetPhase0Mapping();
  v6 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v7 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v7 = MiMakeValidPte((unsigned __int64)v7, BugCheckParameter2, 2684354564LL, v5);
  v10 = MiPteInShadowRange((unsigned __int64)v7);
  if ( v10 )
    MiWritePteShadow(v9, v8, v11);
  KeCopyPage(v6, a2);
  *v7 = ZeroPte;
  if ( v10 )
    MiWritePteShadow((__int64)v7, ZeroPte, v12);
  return KeFlushSingleTb(v6, 0, 1u);
}
