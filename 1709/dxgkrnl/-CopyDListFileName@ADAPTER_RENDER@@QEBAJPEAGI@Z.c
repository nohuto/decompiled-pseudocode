/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0176EEC
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1C00012D8 (RtlStringCbCopyNW.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

NTSTATUS __fastcall ADAPTER_RENDER::CopyDListFileName(ADAPTER_RENDER *this, unsigned __int16 *a2)
{
  size_t v4; // rdx
  const wchar_t *v5; // r8
  unsigned __int16 v6; // ax

  if ( (*((_BYTE *)DXGPROCESS::GetCurrent((__int64)this, (__int64)a2) + 307) & 1) != 0 )
  {
    v5 = (const wchar_t *)*((_QWORD *)this + 51);
    v6 = *((_WORD *)this + 200);
  }
  else
  {
    v5 = (const wchar_t *)*((_QWORD *)this + 49);
    v6 = *((_WORD *)this + 192);
  }
  if ( a2 )
    *a2 = 0;
  return RtlStringCbCopyNW(a2, v4, v5, v6);
}
