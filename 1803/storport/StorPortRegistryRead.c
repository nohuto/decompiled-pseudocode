/*
 * XREFs of StorPortRegistryRead @ 0x1C0030EE0
 * Callers:
 *     <none>
 * Callees:
 *     StorpPortRegistryValidate @ 0x1C0033520 (StorpPortRegistryValidate.c)
 *     PortBuildRegKeyName @ 0x1C0047B74 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryRead @ 0x1C0047CA0 (PortMiniportRegistryRead.c)
 */

char __fastcall StorPortRegistryRead(__int64 a1, const char *a2, __int64 a3, unsigned int a4, __int64 a5, int *a6)
{
  __int64 v9; // rax
  __int64 v10; // r14
  _DWORD *v11; // rdi
  int v12; // edx
  int v13; // eax
  char v14; // si
  int v15; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( KeGetCurrentIrql() )
  {
    *a6 = 0;
    return 0;
  }
  v9 = *(_QWORD *)(a1 - 16);
  v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
  v11 = (_DWORD *)(*(_QWORD *)v9 + 2088LL);
  if ( !(unsigned __int8)StorpPortRegistryValidate(v11, a5, a6) )
    return 0;
  v13 = *a6;
  v11[13] = v12 - v11[8];
  v14 = 0;
  v11[11] = v13;
  *a6 = 0;
  if ( (int)PortBuildRegKeyName((PCUNICODE_STRING)(v10 + 40), &Destination) >= 0 )
  {
    RtlInitAnsiString(&DestinationString, a2);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      v15 = ((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryRead)(
              &Destination,
              &UnicodeString,
              a4,
              v11);
      if ( v15 < 0 )
      {
        if ( v15 == -1073741789 )
          *a6 = v11[12];
        else
          *a6 = 0;
      }
      else
      {
        v14 = 1;
        *a6 = v11[11];
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v14;
}
