/*
 * XREFs of ?InternalRelease@?$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D56F8
 * Callers:
 *     ?GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCallbackRenderer@@@Z @ 0x1801D55A4 (-GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCa.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CWARPCallbackRenderer>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILRefCountBase::Release((CMILRefCountBase *)(v1 + 8));
  }
  return result;
}
