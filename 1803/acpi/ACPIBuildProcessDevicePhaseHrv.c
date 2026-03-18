/*
 * XREFs of ACPIBuildProcessDevicePhaseHrv @ 0x1C000D5C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHrv(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // rax
  unsigned int v4; // ebx
  volatile signed __int32 *v5; // rbp

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1448233055);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 12;
  v5 = (volatile signed __int32 *)v3;
  if ( !v3 )
    goto LABEL_6;
  if ( (*(_BYTE *)(v1 + 952) & 8) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 8uLL);
    v4 = ACPIGet(v1, 0x5652485Fu, 537149442, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 584, 0LL);
    *(_DWORD *)(a1 + 32) = 11;
  }
  AMLIDereferenceHandleEx(v5);
  if ( v4 == 259 )
    return 0;
  else
LABEL_6:
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}
