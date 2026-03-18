/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x1C01559B8
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0154250 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpCleanup@@YAXXZ @ 0x1C0081E88 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082070 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0082630 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082DD0 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084ACC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C0154FF0 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 */

__int64 CitpResetTracking(void)
{
  struct _CIT_IMPACT_CONTEXT *v0; // rbx
  int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  const unsigned __int16 *v5; // rdx
  const char *v6; // rdx

  v0 = qword_1C0193750;
  if ( qword_1C0193750
    && (CitpContextFlush(
          qword_1C0193750,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24),
        CitpInvalidateAllWeakReferences(),
        CitpContextTrackingDataCleanup(v0, v3, v4),
        WORD2(qword_1C0193740) = 0,
        CitpParametersLoad((struct _CIT_PARAMETERS *)&dword_1C0193724, v5),
        BYTE4(qword_1C0193740)) )
  {
    v1 = CitpContextTrackingDataStart(v0, v6);
    if ( v1 >= 0 )
      return 0;
  }
  else
  {
    v1 = -1073741637;
  }
  CitpCleanup();
  return (unsigned int)v1;
}
