/*
 * XREFs of sub_180085C94 @ 0x180085C94
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     LdrLoadDll @ 0x18003AED0 (LdrLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_180085C94(PCUNICODE_STRING Source)
{
  NTSTATUS v1; // eax
  unsigned __int32 v2; // ebx
  unsigned int v3; // ebx
  PANSI_STRING *v4; // rdi
  NTSTATUS ProcedureAddressForCaller; // esi
  char v7; // cl
  char v8; // al
  NTSTATUS v9; // [rsp+30h] [rbp-258h]
  NTSTATUS v10; // [rsp+38h] [rbp-250h]
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-248h] BYREF
  char v12; // [rsp+50h] [rbp-238h] BYREF
  PVOID *Callback; // [rsp+288h] [rbp+0h]

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = (PWCH)&v12;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  v1 = LdrLoadDll(0LL, 0LL, &Destination, &qword_18015B270);
  v2 = v1;
  if ( v1 < 0 )
  {
    v7 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      v9 = v1;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3085,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &Destination,
        v9);
      v7 = dword_180155A10;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    return v2;
  }
  else
  {
    sub_18001DEA8(0);
    v3 = 0;
    v4 = (PANSI_STRING *)&off_180110F80;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(qword_18015B270, *v4, 0, (PVOID *)v4[1], 0, Callback);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v3;
      v4 += 2;
      if ( v3 >= 5 )
        goto LABEL_5;
    }
    v8 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      v10 = ProcedureAddressForCaller;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3108,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_180110F80 + 2 * v3),
        &Destination,
        v10);
      v8 = dword_180155A10;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
LABEL_5:
    sub_18001DEA8(1);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
