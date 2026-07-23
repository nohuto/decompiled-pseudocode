/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x18003A360
 * Callers:
 *     sub_18003A2D4 @ 0x18003A2D4 (sub_18003A2D4.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800D5B80 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     sub_180004ED8 @ 0x180004ED8 (sub_180004ED8.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
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
  int v10; // r10d
  char v11; // al
  int v12; // ecx
  char *v13; // rsi
  int v14; // eax
  char v15; // cl
  char v17; // al
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-38h] BYREF

  ForwarderString = 0LL;
  if ( (Flags & 0xFFFFDFFF) == 8 )
    goto LABEL_5;
  v10 = 32512;
  if ( (dword_180158674 & 4) == 0 )
    v10 = 31488;
  if ( (~v10 & Flags) != 0 )
    v11 = 0;
  else
LABEL_5:
    v11 = 1;
  if ( v11 && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    v12 = sub_180030264((ULONG_PTR)ParentModuleBase, (__int64 *)BaseAddress, 0LL);
    if ( v12 < 0 )
    {
      v17 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1118,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          ParentModuleBase,
          v12);
        v17 = dword_180155A10;
      }
      if ( (v17 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v13 = (char *)BaseAddress[0];
      if ( ThunkAddress->u1.ForwarderString - (unsigned __int64)ParentModuleBase < *((unsigned int *)BaseAddress[0] + 16) )
      {
        if ( (*((_DWORD *)BaseAddress[0] + 26) & 0x8000) != 0 )
        {
          ForwarderString = (void *)sub_1800324E0(
                                      (__int64)BaseAddress[0],
                                      (__int64)DelayloadDescriptor,
                                      (__int64)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
        }
        else
        {
          ForwarderString = (void *)sub_180004ED8(
                                      (int)BaseAddress[0],
                                      (int)DelayloadDescriptor,
                                      (int)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64 *)ThunkAddress,
                                      Flags);
          if ( ForwarderString )
          {
            if ( sub_180030138() )
            {
              v14 = sub_180001328(
                      (char *)ParentModuleBase,
                      (int)ThunkAddress - (int)ParentModuleBase,
                      (int)ThunkAddress - (int)ParentModuleBase);
              if ( v14 < 0 )
              {
                v15 = dword_180155A10;
                if ( (dword_180155A10 & 3) != 0 )
                {
                  sub_1800D5274(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1097,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in t"
                    "he DLL based at 0x%p.Status = 0x%x\n",
                    ParentModuleBase,
                    v14);
                  v15 = dword_180155A10;
                }
                if ( (v15 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      sub_18003015C(v13);
    }
  }
  return ForwarderString;
}
