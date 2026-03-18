/*
 * XREFs of MiDeleteValidSystemPte @ 0x14022FBD0
 * Callers:
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiDeleteValidSystemPte(
        unsigned __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v7; // rdx
  int *v8; // r10
  __int64 v9; // rdi
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR PteShadow; // rax
  BOOL v12; // ebx
  unsigned __int64 v13; // rdx
  __int64 v14[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v15; // [rsp+48h] [rbp-30h] BYREF
  int v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+54h] [rbp-24h]

  v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(BugCheckParameter2);
  v9 = v7 - 0x58000000000LL;
  BugCheckParameter4 = *(_QWORD *)(v7 - 0x58000000000LL + 8);
  if ( (unsigned __int64 *)(BugCheckParameter4 | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    PteShadow = *BugCheckParameter2;
    if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow();
    }
    KeBugCheckEx(0x1Au, 0x401uLL, (ULONG_PTR)BugCheckParameter2, PteShadow, BugCheckParameter4);
  }
  if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
  {
    v13 = (__int64)((unsigned __int128)(v7 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    KeBugCheckEx(
      0x1Au,
      0x405uLL,
      (ULONG_PTR)BugCheckParameter2,
      v13 + (v13 >> 63),
      *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  }
  MiInsertTbFlushEntry(v8, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  *BugCheckParameter2 = 0LL;
  if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    MiWritePteShadow();
  }
  v12 = (BYTE4(PerfGlobalGroupMask) & 1) != 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL;
  MiLockPageAtDpcInline(v9);
  *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
  if ( v12 )
  {
    memset(v14, 0, sizeof(v14));
    MiIdentifyPfn((_OWORD *)v9, v14);
  }
  *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0xF8 | 5;
  *(_QWORD *)v9 = *a5;
  *a5 = v9;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 )
  {
    v17 = 0;
    v15 = v14;
    v16 = 24;
    EtwTraceKernelEvent((__int64)&v15, 1u, 0x20000001u, 0x277u, 0x11401B02u);
  }
}
