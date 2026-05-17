/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180029F10
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x18002A86C (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800D1720 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x180001314 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180002930 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrpFindLoadedDllByHandle @ 0x1800292AC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(
        const void *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6)
{
  __int64 v9; // rbx
  int LoadedDllByHandle; // ecx
  __int64 v11; // rsi
  int v12; // eax
  char v13; // cl
  char v15; // al
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF

  v9 = 0LL;
  if ( ((a6 & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a6) == 0) && (*a2 & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)a1, &v16, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1118,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          a1,
          LoadedDllByHandle);
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v9 = *a5;
      v11 = v16;
      if ( *a5 - (__int64)a1 < (unsigned __int64)*(unsigned int *)(v16 + 64) )
      {
        if ( (*(_DWORD *)(v16 + 104) & 0x8000) != 0 )
        {
          v9 = LdrpHandleProtectedDelayload(v16, (__int64)a2, a3, a4, a5, a6);
        }
        else
        {
          v9 = LdrpHandleUnprotectedDelayLoad(v16, (int)a2, a3, a4, a5, a6);
          if ( v9 )
          {
            if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v12 = LdrpUnsuppressAddressTakenIat((__int64)a1, (int)a5 - (int)a1, (int)a5 - (int)a1);
              if ( v12 < 0 )
              {
                v13 = LdrpDebugFlags;
                if ( (LdrpDebugFlags & 3) != 0 )
                {
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1097,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in t"
                    "he DLL based at 0x%p.Status = 0x%x\n",
                    a1,
                    v12);
                  v13 = LdrpDebugFlags;
                }
                if ( (v13 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      LdrpDereferenceModule(v11);
    }
  }
  return v9;
}
