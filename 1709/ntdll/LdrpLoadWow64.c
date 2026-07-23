/*
 * XREFs of LdrpLoadWow64 @ 0x1800846F4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     LdrLoadDll @ 0x180035920 (LdrLoadDll.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
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
  Destination.Buffer = (wchar_t *)&v12;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  v1 = LdrLoadDll(0LL, 0LL, &Destination, &Wow64Handle);
  v2 = v1;
  if ( v1 < 0 )
  {
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = v1;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3062,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &Destination,
        v9);
      v7 = LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    return v2;
  }
  else
  {
    LdrProtectMrdata(0);
    v3 = 0;
    v4 = (PANSI_STRING *)&off_180113E00;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(Wow64Handle, *v4, 0, (PVOID *)v4[1], 0, Callback);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v3;
      v4 += 2;
      if ( v3 >= 5 )
        goto LABEL_5;
    }
    v8 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v10 = ProcedureAddressForCaller;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3085,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_180113E00 + 2 * v3),
        &Destination,
        v10);
      v8 = LdrpDebugFlags;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
LABEL_5:
    LdrProtectMrdata(1);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
