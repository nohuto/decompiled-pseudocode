/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180022CD0
 * Callers:
 *     sub_180023294 @ 0x180023294 (sub_180023294.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CB140 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CB310 @ 0x1800CB310 (sub_1800CB310.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  void *ForwarderString; // rbx
  int v10; // ecx
  char *v11; // rsi
  int v12; // eax
  char v13; // cl
  char v15; // al
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-38h] BYREF

  ForwarderString = 0LL;
  if ( ((Flags & 0xFFFFDFFF) == 8 || (~((dword_1801596D4 & 4 | 0x7B) << 8) & Flags) == 0)
    && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    v10 = sub_18001FA3C((unsigned __int64)ParentModuleBase, (__int64 *)BaseAddress, 0LL);
    if ( v10 < 0 )
    {
      v15 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1118,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          ParentModuleBase,
          v10);
        v15 = dword_180156A70;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v11 = (char *)BaseAddress[0];
      if ( ThunkAddress->u1.ForwarderString - (unsigned __int64)ParentModuleBase < *((unsigned int *)BaseAddress[0] + 16) )
      {
        if ( (*((_DWORD *)BaseAddress[0] + 26) & 0x8000) != 0 )
        {
          ForwarderString = (void *)sub_18000F300(
                                      (__int64)BaseAddress[0],
                                      (__int64)DelayloadDescriptor,
                                      (__int64)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
        }
        else
        {
          ForwarderString = (void *)sub_1800CB310(
                                      (int)BaseAddress[0],
                                      (int)DelayloadDescriptor,
                                      (int)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
          if ( ForwarderString )
          {
            if ( (unsigned int)sub_18001F704() )
            {
              v12 = sub_18004FEB8(ParentModuleBase);
              if ( v12 < 0 )
              {
                v13 = dword_180156A70;
                if ( (dword_180156A70 & 3) != 0 )
                {
                  sub_1800CA554(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1097,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in t"
                    "he DLL based at 0x%p.Status = 0x%x\n",
                    ParentModuleBase,
                    v12);
                  v13 = dword_180156A70;
                }
                if ( (v13 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      sub_18001F5FC(v11);
    }
  }
  return ForwarderString;
}
