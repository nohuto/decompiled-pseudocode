/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x1C000ED50
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned int v4; // esi
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  char v7; // al

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 5;
  v4 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v5 = (volatile signed __int32 *)AMLIGetNamedChild(*(_QWORD **)(v1 + 32), 1346716767);
  if ( !v5 )
    goto LABEL_7;
  v6 = *(volatile signed __int32 **)(a1 + 56);
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v7 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v5;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (v7 & 4) != 0 )
    _InterlockedIncrement(v5 + 2);
  v4 = AMLIAsyncEvalObject(v5, v2, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
  if ( v4 != 259 )
LABEL_7:
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v5, v4, v2, a1);
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  return v4;
}
