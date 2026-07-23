/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x180002930
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180029F10 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpResolveDelayloadAddress @ 0x1800029F4 (LdrpResolveDelayloadAddress.c)
 *     LdrpGetDelayloadExportDll @ 0x180022A6C (LdrpGetDelayloadExportDll.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpRedirectDelayloadFailure @ 0x180083A48 (LdrpRedirectDelayloadFailure.c)
 */

__int64 __fastcall LdrpHandleUnprotectedDelayLoad(int a1, int a2, int a3, __int64 a4, __int64 *a5, int a6)
{
  __int64 v10; // rdi
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  int DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (unsigned int)&BaseAddress, a6, (__int64)a5);
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    if ( g_ShimsEnabled )
      v12 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    else
      v12 = 0LL;
    v10 = LdrpResolveDelayloadAddress(a1, (_DWORD)BaseAddress, a2, (_DWORD)a5, v12, (__int64)&DelayloadExportDll);
    LdrpDereferenceModule(BaseAddress);
    Status = DelayloadExportDll;
  }
  if ( Status >= 0
    || (v10 = LdrpRedirectDelayloadFailure(a1, (int)BaseAddress, a2, a3, a4, (__int64)a5, Status)) != 0
    && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
