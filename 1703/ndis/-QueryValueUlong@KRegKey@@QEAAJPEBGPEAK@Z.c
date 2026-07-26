/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00B11B4
 * Callers:
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEBG@Z @ 0x1C00B8A4C (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, wchar_t *a2, unsigned int *a3)
{
  wchar_t *v6; // rax
  __int64 v7; // rcx
  NTSTATUS result; // eax
  __int16 v9; // dx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+4Ch] [rbp-24h]
  int v14; // [rsp+50h] [rbp-20h]
  unsigned int v15; // [rsp+54h] [rbp-1Ch]

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  if ( !a2 )
  {
LABEL_9:
    result = ZwQueryValueKey(
               this->m_ptr,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 )
    {
      if ( v13 == 4 )
      {
        if ( v14 == 4 )
        {
          *a3 = v15;
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
  v6 = a2;
  v7 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  result = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v9 = 0x7FFF - v7;
  else
    v9 = 0;
  if ( v7 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * v9;
    ValueName.MaximumLength = 2 * v9 + 2;
    goto LABEL_9;
  }
  return result;
}
