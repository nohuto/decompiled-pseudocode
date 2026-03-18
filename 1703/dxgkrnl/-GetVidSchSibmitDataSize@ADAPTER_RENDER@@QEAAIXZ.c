/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0005808
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0004B20 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C010A22C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(DXGADAPTER **this)
{
  __int64 v1; // rdx
  int v2; // r8d

  if ( DXGADAPTER::IsDxgmms2(this[2]) )
    return *(_DWORD *)(v1 + 2152) * (48 * v2 + ((8 * v2 + 167) & 0xFFFFFFF8)) + 8 * (v2 + 56);
  else
    return 936LL;
}
