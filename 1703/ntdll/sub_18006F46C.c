/*
 * XREFs of sub_18006F46C @ 0x18006F46C
 * Callers:
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 *     sub_1800D6F80 @ 0x1800D6F80 (sub_1800D6F80.c)
 * Callees:
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlInitString @ 0x18003AB50 (RtlInitString.c)
 *     LdrGetProcedureAddressEx @ 0x18006F800 (LdrGetProcedureAddressEx.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 sub_18006F46C()
{
  NTSTATUS v0; // ebx
  char v2; // al
  PVOID v3; // [rsp+30h] [rbp-50h] BYREF
  PVOID v4; // [rsp+38h] [rbp-48h] BYREF
  PVOID v5; // [rsp+40h] [rbp-40h] BYREF
  PVOID v6; // [rsp+48h] [rbp-38h] BYREF
  PVOID v7; // [rsp+50h] [rbp-30h] BYREF
  PVOID v8; // [rsp+58h] [rbp-28h] BYREF
  PVOID v9; // [rsp+60h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  PVOID ProcedureAddress; // [rsp+A0h] [rbp+20h] BYREF
  PVOID v12; // [rsp+A8h] [rbp+28h] BYREF
  PVOID v13; // [rsp+B0h] [rbp+30h] BYREF
  PVOID v14; // [rsp+B8h] [rbp+38h] BYREF

  RtlInitString(&DestinationString, "SE_InitializeEngine");
  v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &ProcedureAddress, 0);
  if ( v0 >= 0 )
  {
    RtlInitString(&DestinationString, "SE_ShimDllLoaded");
    v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v12, 0);
    if ( v0 >= 0 )
    {
      RtlInitString(&DestinationString, "SE_InstallBeforeInit");
      v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v13, 0);
      if ( v0 >= 0 )
      {
        RtlInitString(&DestinationString, "SE_InstallAfterInit");
        v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v14, 0);
        if ( v0 >= 0 )
        {
          RtlInitString(&DestinationString, "SE_DllLoaded");
          v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v3, 0);
          if ( v0 >= 0 )
          {
            RtlInitString(&DestinationString, "SE_DllUnloaded");
            v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v4, 0);
            if ( v0 >= 0 )
            {
              RtlInitString(&DestinationString, "SE_LdrEntryRemoved");
              v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v5, 0);
              if ( v0 >= 0 )
              {
                RtlInitString(&DestinationString, "SE_ProcessDying");
                v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v6, 0);
                if ( v0 >= 0 )
                {
                  RtlInitString(&DestinationString, "SE_LdrResolveDllName");
                  v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v8, 0);
                  if ( v0 >= 0 )
                  {
                    RtlInitString(&DestinationString, "SE_GetProcAddressForCaller");
                    v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v7, 0);
                    if ( v0 >= 0 )
                    {
                      RtlInitString(&DestinationString, "ApphelpCheckModule");
                      v0 = LdrGetProcedureAddressEx(DllHandle, &DestinationString, 0, &v9, 0);
                      if ( v0 >= 0 )
                      {
                        sub_18001DEA8(0);
                        qword_18016B228 = __ROR8__(
                                            (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B200 = __ROR8__(
                                            (unsigned __int64)v12 ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B238 = __ROR8__(
                                            (unsigned __int64)v13 ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B208 = __ROR8__(
                                            (unsigned __int64)v14 ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B250 = __ROR8__((unsigned __int64)v3 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B1E8 = __ROR8__((unsigned __int64)v4 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B240 = __ROR8__((unsigned __int64)v5 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B1F0 = __ROR8__((unsigned __int64)v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B1E0 = __ROR8__((unsigned __int64)v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B230 = __ROR8__((unsigned __int64)v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016B1F8 = __ROR8__((unsigned __int64)v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        sub_18001DEA8(1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v0 < 0 )
  {
    v2 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2138,
        (unsigned int)"LdrpGetShimEngineInterface",
        0,
        "Could not locate procedure \"%s\" in the shim engine DLL\n",
        DestinationString.Buffer);
      v2 = dword_180155A10;
    }
    if ( (v2 & 0x10) != 0 )
      __debugbreak();
    byte_18015BF54 = 0;
    LdrUnloadDll(DllHandle);
    DllHandle = 0LL;
  }
  return (unsigned int)v0;
}
