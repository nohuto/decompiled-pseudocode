/*
 * XREFs of MxCopyPage @ 0x140801AEC
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140185390 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x1408026BC (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 *v6; // rbx
  BOOL v7; // esi

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v6 = MiMakeValidPte((unsigned __int64)v6, BugCheckParameter2, -1610612732);
  v7 = MiPteInShadowRange((unsigned __int64)v6);
  if ( v7 )
    MiWritePteShadow();
  KeCopyPage(v5, a2);
  *v6 = 0LL;
  if ( v7 )
    MiWritePteShadow();
  return KeFlushSingleTb(v5, 0, 1u);
}
