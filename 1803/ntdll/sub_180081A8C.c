/*
 * XREFs of sub_180081A8C @ 0x180081A8C
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_180081A8C(PCUNICODE_STRING Source)
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
  v1 = LdrLoadDll(0LL, 0LL, &Destination, &qword_18015C2A0);
  v2 = v1;
  if ( v1 < 0 )
  {
    v7 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      v9 = v1;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3063,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &Destination,
        v9);
      v7 = dword_180156A70;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    return v2;
  }
  else
  {
    sub_1800259B4(0);
    v3 = 0;
    v4 = (PANSI_STRING *)&off_180110DE0;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(qword_18015C2A0, *v4, 0, (PVOID *)v4[1], 0, Callback);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v3;
      v4 += 2;
      if ( v3 >= 5 )
        goto LABEL_5;
    }
    v8 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      v10 = ProcedureAddressForCaller;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3086,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_180110DE0 + 2 * v3),
        &Destination,
        v10);
      v8 = dword_180156A70;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
LABEL_5:
    sub_1800259B4(1);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
