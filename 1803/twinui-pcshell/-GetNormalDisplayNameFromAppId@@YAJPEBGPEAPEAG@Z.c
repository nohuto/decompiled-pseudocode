/*
 * XREFs of ?GetNormalDisplayNameFromAppId@@YAJPEBGPEAPEAG@Z @ 0x180302394
 * Callers:
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1801855C4 (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetNormalDisplayNameFromAppId(const unsigned __int16 *a1, unsigned __int16 **a2)
{
  HRESULT v3; // ebx
  void *ppv; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v3 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4100u,
         L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(void *, _QWORD, unsigned __int16 **))(*(_QWORD *)ppv + 40LL))(ppv, 0LL, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v3;
}
