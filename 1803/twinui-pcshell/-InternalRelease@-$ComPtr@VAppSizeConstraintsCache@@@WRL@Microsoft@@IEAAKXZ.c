/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180073B20
 * Callers:
 *     ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800739B4 (-AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppSizeConstraintsCache@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppSizeConstrai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppSizeConstraintsCache>::Release(v1);
  }
  return result;
}
