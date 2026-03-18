/*
 * XREFs of ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C002567C
 * Callers:
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C017B3E4 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        __int64 a3,
        struct DXGPROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION *a5)
{
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v9; // rax

  v5 = *((_QWORD *)a4 + 8);
  v6 = a3;
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
  if ( !v5 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1100LL;
    WdLogEvent5_WdAssertion(v9);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION *))(*((_QWORD *)this + 1) + 632LL))(
           a2,
           v6,
           v5,
           a5);
}
