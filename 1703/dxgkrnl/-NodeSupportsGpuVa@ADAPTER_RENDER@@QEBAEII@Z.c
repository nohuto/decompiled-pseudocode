/*
 * XREFs of ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0005528
 * Callers:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001078 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00FB684 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C00FC280 (DxgkCreateContextVirtual.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ADAPTER_RENDER::NodeSupportsGpuVa(ADAPTER_RENDER *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  char v4; // cl
  __int64 v5; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2192LL) + 48LL * a2 + 24);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = 74LL * a3;
  if ( *(_BYTE *)(v5 + v3 + 72) || *(_BYTE *)(v5 + v3 + 73) )
    return 1;
  return v4;
}
