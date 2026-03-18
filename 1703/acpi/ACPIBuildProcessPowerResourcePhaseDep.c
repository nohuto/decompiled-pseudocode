/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044000
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  _SLIST_ENTRY *v2; // rbp
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  char v8; // al
  __int64 v9; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_SLIST_ENTRY *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 5;
  v4 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v6 = AMLIGetNamedChild(*(__int64 **)(v1 + 32), 1346716767);
  if ( !v6 )
    goto LABEL_7;
  v7 = *(volatile signed __int32 **)(a1 + 56);
  if ( v7 )
  {
    AMLIDereferenceHandleEx(v7, v5);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v8 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v6;
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (v8 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  v4 = AMLIAsyncEvalObject(v6, v2, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
  if ( v4 != 259 )
LABEL_7:
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v6, v4, (__int64)v2, a1);
  if ( v6 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6, v9);
  return v4;
}
