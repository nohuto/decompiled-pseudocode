/*
 * XREFs of StorPortRegistryRead @ 0x1C0015E80
 * Callers:
 *     <none>
 * Callees:
 *     PortMiniportRegistryRead @ 0x1C0015FC0 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1C001611C (PortBuildRegKeyName.c)
 *     StorpPortRegistryValidate @ 0x1C0016228 (StorpPortRegistryValidate.c)
 */

char __fastcall StorPortRegistryRead(__int64 a1, const char *a2, __int64 a3, unsigned int a4, __int64 a5, int *a6)
{
  __int64 v8; // rax
  __int64 v9; // r14
  _DWORD *v10; // rdi
  int v11; // edx
  int v12; // eax
  char v13; // si
  int v14; // eax
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
  v8 = *(_QWORD *)(a1 - 16);
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
  v10 = (_DWORD *)(*(_QWORD *)v8 + 2088LL);
  if ( !(unsigned __int8)StorpPortRegistryValidate(v10, a5, a6) )
    return 0;
  v12 = *a6;
  v10[13] = v11 - v10[8];
  v13 = 0;
  v10[11] = v12;
  *a6 = 0;
  if ( (int)PortBuildRegKeyName((PCUNICODE_STRING)(v9 + 40), &Destination) >= 0 )
  {
    RtlInitAnsiString(&DestinationString, a2);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      v14 = ((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryRead)(
              &Destination,
              &UnicodeString,
              a4,
              v10);
      if ( v14 >= 0 )
      {
        v13 = 1;
        *a6 = v10[11];
      }
      else if ( v14 == -1073741789 )
      {
        *a6 = v10[12];
      }
      else
      {
        *a6 = 0;
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v13;
}
