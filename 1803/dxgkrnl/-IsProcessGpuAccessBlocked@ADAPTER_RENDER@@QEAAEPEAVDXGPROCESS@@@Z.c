/*
 * XREFs of ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00A5780
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A27B0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00A2C70 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C00D8EB8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall ADAPTER_RENDER::IsProcessGpuAccessBlocked(ADAPTER_RENDER *this, struct DXGPROCESS *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // rax

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
    return 0;
  v2 = *((_QWORD *)a2 + 9);
  v3 = *((_QWORD *)this + 66);
  v4 = *((_QWORD *)this + 65);
  if ( v2 )
    v2 = *(_QWORD *)(v2 + 8LL * (unsigned int)(*(_DWORD *)v4 - 1) + 16);
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1008LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 + 8) + 848LL))(v3, v2);
}
