/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002358
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C004CA30 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C004E07C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C004EB0C (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0073778 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0074418 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
