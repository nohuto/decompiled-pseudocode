/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C00BB224
 * Callers:
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00B7EA0 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00BAED8 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        wchar_t *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  __int64 v6; // r9
  wchar_t *v7; // rax
  __int64 result; // rax
  __int16 v9; // cx
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v10.Length = 0;
  v10.Buffer = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueBoolean(this, &v10, a3, a4);
  v6 = 0x7FFFLL;
  v7 = a2;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  result = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
    v9 = 0x7FFF - v6;
  else
    v9 = 0;
  if ( v6 )
  {
    v10.Buffer = a2;
    v10.Length = 2 * v9;
    v10.MaximumLength = 2 * v9 + 2;
    return KRegKey::QueryValueBoolean(this, &v10, a3, a4);
  }
  return result;
}
