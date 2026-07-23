/*
 * XREFs of sub_180055D80 @ 0x180055D80
 * Callers:
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 *     sub_1800CCA84 @ 0x1800CCA84 (sub_1800CCA84.c)
 * Callees:
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlInitString @ 0x1800404B0 (RtlInitString.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressEx @ 0x1800560C0 (LdrGetProcedureAddressEx.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 sub_180055D80()
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
                        sub_1800259B4(0);
                        qword_18016F238 = __ROR8__(
                                            (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F210 = __ROR8__(
                                            (unsigned __int64)v12 ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F248 = __ROR8__(
                                            (unsigned __int64)v13 ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F218 = __ROR8__(
                                            (unsigned __int64)v14 ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F260 = __ROR8__((unsigned __int64)v3 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F1F8 = __ROR8__((unsigned __int64)v4 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F250 = __ROR8__((unsigned __int64)v5 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F200 = __ROR8__((unsigned __int64)v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F1F0 = __ROR8__((unsigned __int64)v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F240 = __ROR8__((unsigned __int64)v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F208 = __ROR8__((unsigned __int64)v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        sub_1800259B4(1);
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
    v2 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2113,
        (unsigned int)"LdrpGetShimEngineInterface",
        0,
        "Could not locate procedure \"%s\" in the shim engine DLL\n",
        DestinationString.Buffer);
      v2 = dword_180156A70;
    }
    if ( (v2 & 0x10) != 0 )
      __debugbreak();
    byte_18015CFB4 = 0;
    LdrUnloadDll(DllHandle);
    DllHandle = 0LL;
  }
  return (unsigned int)v0;
}
