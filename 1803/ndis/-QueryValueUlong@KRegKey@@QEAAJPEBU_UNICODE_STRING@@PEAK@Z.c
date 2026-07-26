/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00BB480
 * Callers:
 *     ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C00BAC4C (-QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00ED8EC (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, struct _UNICODE_STRING *a2, unsigned int *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+40h] [rbp-28h]
  unsigned int v9; // [rsp+44h] [rbp-24h]

  result = ZwQueryValueKey(this->m_ptr, a2, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v7 == 4 )
    {
      if ( v8 == 4 )
      {
        *a3 = v9;
        return 0;
      }
      else
      {
        return -1073741789;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
