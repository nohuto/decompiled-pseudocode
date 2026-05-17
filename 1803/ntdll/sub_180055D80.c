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
  int ProcedureAddress; // ebx
  char v2; // al
  __int64 v3; // [rsp+30h] [rbp-50h] BYREF
  __int64 v4; // [rsp+38h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-40h] BYREF
  __int64 v6; // [rsp+48h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+B8h] [rbp+38h] BYREF

  RtlInitString(&DestinationString, "SE_InitializeEngine");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       qword_18015C340,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v11,
                       0);
  if ( ProcedureAddress >= 0 )
  {
    RtlInitString(&DestinationString, "SE_ShimDllLoaded");
    ProcedureAddress = LdrGetProcedureAddressEx(
                         qword_18015C340,
                         (unsigned int)&DestinationString,
                         0,
                         (unsigned int)&v12,
                         0);
    if ( ProcedureAddress >= 0 )
    {
      RtlInitString(&DestinationString, "SE_InstallBeforeInit");
      ProcedureAddress = LdrGetProcedureAddressEx(
                           qword_18015C340,
                           (unsigned int)&DestinationString,
                           0,
                           (unsigned int)&v13,
                           0);
      if ( ProcedureAddress >= 0 )
      {
        RtlInitString(&DestinationString, "SE_InstallAfterInit");
        ProcedureAddress = LdrGetProcedureAddressEx(
                             qword_18015C340,
                             (unsigned int)&DestinationString,
                             0,
                             (unsigned int)&v14,
                             0);
        if ( ProcedureAddress >= 0 )
        {
          RtlInitString(&DestinationString, "SE_DllLoaded");
          ProcedureAddress = LdrGetProcedureAddressEx(
                               qword_18015C340,
                               (unsigned int)&DestinationString,
                               0,
                               (unsigned int)&v3,
                               0);
          if ( ProcedureAddress >= 0 )
          {
            RtlInitString(&DestinationString, "SE_DllUnloaded");
            ProcedureAddress = LdrGetProcedureAddressEx(
                                 qword_18015C340,
                                 (unsigned int)&DestinationString,
                                 0,
                                 (unsigned int)&v4,
                                 0);
            if ( ProcedureAddress >= 0 )
            {
              RtlInitString(&DestinationString, "SE_LdrEntryRemoved");
              ProcedureAddress = LdrGetProcedureAddressEx(
                                   qword_18015C340,
                                   (unsigned int)&DestinationString,
                                   0,
                                   (unsigned int)&v5,
                                   0);
              if ( ProcedureAddress >= 0 )
              {
                RtlInitString(&DestinationString, "SE_ProcessDying");
                ProcedureAddress = LdrGetProcedureAddressEx(
                                     qword_18015C340,
                                     (unsigned int)&DestinationString,
                                     0,
                                     (unsigned int)&v6,
                                     0);
                if ( ProcedureAddress >= 0 )
                {
                  RtlInitString(&DestinationString, "SE_LdrResolveDllName");
                  ProcedureAddress = LdrGetProcedureAddressEx(
                                       qword_18015C340,
                                       (unsigned int)&DestinationString,
                                       0,
                                       (unsigned int)&v8,
                                       0);
                  if ( ProcedureAddress >= 0 )
                  {
                    RtlInitString(&DestinationString, "SE_GetProcAddressForCaller");
                    ProcedureAddress = LdrGetProcedureAddressEx(
                                         qword_18015C340,
                                         (unsigned int)&DestinationString,
                                         0,
                                         (unsigned int)&v7,
                                         0);
                    if ( ProcedureAddress >= 0 )
                    {
                      RtlInitString(&DestinationString, "ApphelpCheckModule");
                      ProcedureAddress = LdrGetProcedureAddressEx(
                                           qword_18015C340,
                                           (unsigned int)&DestinationString,
                                           0,
                                           (unsigned int)&v9,
                                           0);
                      if ( ProcedureAddress >= 0 )
                      {
                        sub_1800259B4(0);
                        qword_18016F238 = __ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F210 = __ROR8__(v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F248 = __ROR8__(v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F218 = __ROR8__(v14 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F260 = __ROR8__(v3 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F1F8 = __ROR8__(v4 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F250 = __ROR8__(v5 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F200 = __ROR8__(v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F1F0 = __ROR8__(v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F240 = __ROR8__(v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        qword_18016F208 = __ROR8__(v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
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
  if ( ProcedureAddress < 0 )
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
    LdrUnloadDll(qword_18015C340);
    qword_18015C340 = 0LL;
  }
  return (unsigned int)ProcedureAddress;
}
