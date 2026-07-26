/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___ @ 0x1C00EA858
 * Callers:
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00EAEEC (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 * Callees:
 *     KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4____0 @ 0x1C00EA8E8 (KRegKey--QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb_ea_1C00EA8E8.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___(
        __int64 a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  __int64 result; // rax
  __int16 v5; // cx
  int v6; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v7; // [rsp+28h] [rbp-10h]

  v6 = 0;
  v7 = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"Export";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  result = v2 == 0 ? 0xC000000D : 0;
  if ( v2 )
    v5 = 0x7FFF - v2;
  else
    v5 = 0;
  if ( v2 )
  {
    v7 = L"Export";
    LOWORD(v6) = 2 * v5;
    HIWORD(v6) = 2 * v5 + 2;
    return KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4____0(
             a1,
             &v6);
  }
  return result;
}
