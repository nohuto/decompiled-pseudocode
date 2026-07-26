/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1128
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00411E8 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AF1CC (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B0E30 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall KRegKey::QueryValueString(HANDLE *a1, wchar_t *a2, void **a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  __int64 result; // rax
  __int16 v7; // cx
  _UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v8.Length = 0;
  v8.Buffer = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueString(a1, &v8, a3);
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 0x7FFF - v4;
  else
    v7 = 0;
  if ( v4 )
  {
    v8.Buffer = a2;
    v8.Length = 2 * v7;
    v8.MaximumLength = 2 * v7 + 2;
    return KRegKey::QueryValueString(a1, &v8, a3);
  }
  return result;
}
