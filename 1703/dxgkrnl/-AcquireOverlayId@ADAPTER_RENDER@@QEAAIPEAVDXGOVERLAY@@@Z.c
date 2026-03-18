/*
 * XREFs of ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C01733EC
 * Callers:
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C019A274 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::AcquireOverlayId(
        ADAPTER_RENDER *this,
        struct DXGOVERLAY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  _QWORD *i; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v6 + 24) = 2710LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0LL;
  v8 = *(_DWORD *)(*((_QWORD *)this + 2) + 1652LL);
  if ( !v8 )
    return 0xFFFFFFFFLL;
  for ( i = (_QWORD *)((char *)this + 488); *i; ++i )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v8 )
      return 0xFFFFFFFFLL;
  }
  *((_QWORD *)this + v7 + 61) = a2;
  return (unsigned int)v7;
}
