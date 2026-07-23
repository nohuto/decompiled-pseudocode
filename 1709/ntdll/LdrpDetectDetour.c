/*
 * XREFs of LdrpDetectDetour @ 0x180006720
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180009F74 (LdrpEnableParallelLoading.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 * Callees:
 *     TpWaitForWork @ 0x18000ABD0 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18000C930 (TpReleaseWork.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

void LdrpDetectDetour()
{
  _QWORD *v0; // rcx
  unsigned int v1; // edx
  __int64 (__fastcall **v2)(int, int, int, int, ULONG, ULONG); // r8
  __int64 v3; // rax
  char v4; // al
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  if ( !LdrpDetourExist )
  {
    v0 = &LdrpThunkSignature;
    v1 = 0;
    v2 = &LdrpCritialLoaderFunctions;
    while ( 1 )
    {
      v3 = *v0 - *(_QWORD *)*v2;
      if ( *v0 == *(_QWORD *)*v2 )
        v3 = v0[1] - *((_QWORD *)*v2 + 1);
      if ( v3 )
        break;
      v0 += 2;
      ++v1;
      ++v2;
      if ( v1 >= 5 )
        goto LABEL_7;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3599,
        (unsigned int)"LdrpDetectDetour",
        2,
        "!!! Detour detected, disable parallel loading\n");
    LdrpDetourExist = 1;
LABEL_7:
    if ( ZwQueryInformationThread(
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           ThreadDynamicCodePolicyInfo,
           &ThreadInformation,
           4u,
           0LL) < 0 )
    {
      v4 = LdrpDetourExist;
    }
    else
    {
      v4 = LdrpDetourExist;
      if ( ThreadInformation == 1 )
        v4 = 1;
      LdrpDetourExist = v4;
    }
    if ( v4 )
    {
      if ( LdrpMapAndSnapWork )
      {
        TpWaitForWork(LdrpMapAndSnapWork, 1u);
        TpReleaseWork(LdrpMapAndSnapWork);
        LdrpMapAndSnapWork = 0LL;
      }
    }
  }
}
