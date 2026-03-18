/*
 * XREFs of DpiFdoInvalidateChildStatus @ 0x1C01C4DD8
 * Callers:
 *     DpiPdoPollingWorkItem @ 0x1C01CE8B0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011233C (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildStatus(__int64 a1, int a2, char a3, unsigned __int8 a4, char a5, __int64 a6)
{
  __int64 v6; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 168));
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3144), 1u);
  v17 = a4;
  BYTE1(v17) = a3;
  v16[1] = a6;
  BYTE2(v17) = 1;
  v16[0] = a2 & 0xFFFFFF | 0x1000000u | (unsigned __int64)((unsigned __int8)(a5 != 0) << 28);
  v10 = DpiDxgkDdiDisplayDetectControl(v6, *(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), (unsigned int *)v16);
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdError(v14);
  }
  ExReleaseResourceLite((PERESOURCE)(v6 + 3144));
  KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
