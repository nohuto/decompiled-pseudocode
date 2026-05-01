/*
 * XREFs of ?GetNormalDisplayNameFromAppId@@YAJPEBGPEAPEAG@Z @ 0x18017CA08
 * Callers:
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1800C85A4 (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetNormalDisplayNameFromAppId(const unsigned __int16 *a1, unsigned __int16 **a2)
{
  HRESULT v3; // ebx
  void *v4; // rcx
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v6 = 0LL;
  v3 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4100u,
         L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &v6);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(void *, _QWORD, unsigned __int16 **))(*(_QWORD *)v6 + 40LL))(v6, 0LL, a2);
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)v3;
}
