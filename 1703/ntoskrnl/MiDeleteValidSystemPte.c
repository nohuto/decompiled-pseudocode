/*
 * XREFs of MiDeleteValidSystemPte @ 0x14013BF5C
 * Callers:
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteValidSystemPte(
        _QWORD *BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 v10; // rcx
  BOOL v11; // edi
  __int64 v12; // r8
  __int64 result; // rax
  ULONG_PTR v14; // rax
  ULONG_PTR BugCheckParameter4; // r10
  unsigned __int64 v16; // rdx
  __int64 v17[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-30h] BYREF
  int v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+54h] [rbp-24h]

  v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(BugCheckParameter2);
  v9 = v7 - 0x58000000000LL;
  if ( (_QWORD *)(*(_QWORD *)(v7 - 0x58000000000LL + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x401uLL, (ULONG_PTR)BugCheckParameter2, v14, BugCheckParameter4);
  }
  if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
  {
    v16 = (__int64)((unsigned __int128)(v7 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    KeBugCheckEx(
      0x1Au,
      0x405uLL,
      (ULONG_PTR)BugCheckParameter2,
      v16 + (v16 >> 63),
      *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  }
  MiInsertTbFlushEntry(v8, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  *BugCheckParameter2 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
    MiWritePteShadow(v10);
  v11 = (BYTE4(PerfGlobalGroupMask) & 1) != 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL;
  MiLockPageAtDpcInline(v9);
  *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
  if ( v11 )
  {
    memset(v17, 0, sizeof(v17));
    MiIdentifyPfn((_OWORD *)v9, v17, v12);
  }
  *(_QWORD *)v9 = *a5;
  *a5 = v9;
  *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0xF8 | 5;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 )
  {
    v20 = 0;
    v18 = v17;
    v19 = 24;
    return (__int64)EtwTraceKernelEvent((int)&v18, 1, 0x20000001u, 631, 289413890);
  }
  return result;
}
