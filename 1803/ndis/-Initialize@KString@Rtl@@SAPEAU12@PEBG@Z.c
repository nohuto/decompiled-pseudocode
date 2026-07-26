/*
 * XREFs of ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00B7E20
 * Callers:
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00B72D0 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     _lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_::operator() @ 0x1C00EAA6C (_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_--operator().c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B9E68 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

struct Rtl::KString *__fastcall Rtl::KString::Initialize(wchar_t *a1)
{
  __int64 v1; // rdx
  wchar_t *v2; // r8
  __int16 v3; // ax
  struct _UNICODE_STRING v5; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v5.Length = 0;
  v5.Buffer = 0LL;
  if ( !a1 )
    return Rtl::KString::Initialize(&v5);
  v1 = 0x7FFFLL;
  v2 = a1;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v1;
  }
  while ( v1 );
  if ( v1 )
    v3 = 0x7FFF - v1;
  else
    v3 = 0;
  if ( v1 )
  {
    v5.Buffer = a1;
    v5.Length = 2 * v3;
    v5.MaximumLength = 2 * v3 + 2;
    return Rtl::KString::Initialize(&v5);
  }
  return 0LL;
}
