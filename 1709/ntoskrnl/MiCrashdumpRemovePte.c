/*
 * XREFs of MiCrashdumpRemovePte @ 0x14021ADC0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiCrashdumpRemovePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 PteShadow; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = (__int64)(a2 << 25) >> 16;
  if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    PteShadow = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v8 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v8);
      if ( (*(_QWORD *)(48 * v6 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)(v5 + 144) + 8LL))(
          *(_QWORD *)(v5 + 144),
          v6,
          1LL,
          2LL);
    }
  }
  return 0LL;
}
