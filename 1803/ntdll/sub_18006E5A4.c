/*
 * XREFs of sub_18006E5A4 @ 0x18006E5A4
 * Callers:
 *     sub_18006DC50 @ 0x18006DC50 (sub_18006DC50.c)
 *     sub_18006DE80 @ 0x18006DE80 (sub_18006DE80.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_18006E5A4(PUNICODE_STRING ValueName, unsigned __int32 a2, volatile signed __int32 *a3)
{
  HANDLE v6; // rbx
  unsigned __int32 v7; // ecx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-2Ch]

  if ( !byte_18015C298 )
  {
    Handle = KeyHandle;
    v6 = KeyHandle;
    if ( !KeyHandle )
    {
      if ( ZwOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&ObjectAttributes) < 0 )
      {
LABEL_7:
        v7 = a2;
        goto LABEL_8;
      }
      v6 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)&KeyHandle, (signed __int64)Handle, 0LL);
      if ( v6 )
      {
        ZwClose(Handle);
        Handle = v6;
      }
      else
      {
        v6 = Handle;
      }
    }
    if ( ZwQueryValueKey(v6, ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
      && ResultLength == 16 )
    {
      v7 = v12;
      if ( v12 <= 1 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = 1;
LABEL_8:
  result = (unsigned int)_InterlockedCompareExchange(a3, v7, 0);
  if ( !(_DWORD)result )
    return v7;
  return result;
}
