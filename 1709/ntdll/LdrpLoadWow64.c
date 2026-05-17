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

__int64 __fastcall LdrpLoadWow64(__int16 *a1)
{
  int Dll; // eax
  unsigned int v2; // ebx
  unsigned int v3; // ebx
  unsigned __int16 **v4; // rdi
  int ProcedureAddressForCaller; // esi
  char v7; // cl
  char v8; // al
  int v9; // [rsp+30h] [rbp-258h]
  int v10; // [rsp+38h] [rbp-250h]
  int v11; // [rsp+40h] [rbp-248h] BYREF
  char *v12; // [rsp+48h] [rbp-240h]
  char v13; // [rsp+50h] [rbp-238h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+0h]

  v11 = 34078720;
  v12 = &v13;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v11, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)&v11, L"wow64.dll");
  Dll = LdrLoadDll(0LL, 0LL, (__int64)&v11, &Wow64Handle);
  v2 = Dll;
  if ( Dll < 0 )
  {
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3062,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &v11,
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
    v4 = (unsigned __int16 **)&off_180113E00;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(Wow64Handle, *v4, 0, (__int64 *)v4[1], 0, retaddr);
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
        &v11,
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
