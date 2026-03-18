/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ @ 0x1C00A6580
 * Callers:
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C00A6530 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 * Callees:
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C004C6B4 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::GetBackingAddress(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v10 = 0LL;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
    (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
    &v10,
    v1,
    v1 + 4096);
  v6 = v10;
  if ( !v10 )
  {
    v7 = *((_QWORD *)this + 4);
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3, v5);
    v8[7] = 0LL;
    v8[3] = 270LL;
    v8[4] = 52LL;
    v8[5] = 20LL;
    v8[6] = v7;
    WdLogEvent5_WdCriticalError(v8);
  }
  return v6 << 12;
}
