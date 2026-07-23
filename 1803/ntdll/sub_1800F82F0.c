/*
 * XREFs of sub_1800F82F0 @ 0x1800F82F0
 * Callers:
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006F7EC @ 0x18006F7EC (sub_18006F7EC.c)
 */

__int64 __fastcall sub_1800F82F0(HANDLE KeyHandle, _BYTE *a2)
{
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1;
  v8 = 4;
  LODWORD(v7) = 4;
  if ( !a2 || !KeyHandle )
    return 3221225485LL;
  *a2 = 0;
  RtlInitUnicodeString(&DestinationString, L"MachineUILock");
  result = sub_18006F7EC(KeyHandle, &DestinationString, &v8, &v6, (ULONG *)&v7);
  if ( (int)result >= 0 )
  {
    if ( v6 == 1 )
    {
      *a2 = 1;
    }
    else if ( v6 )
    {
      return 3221225473LL;
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
