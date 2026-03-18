/*
 * XREFs of IsPciBusAsync @ 0x1C00313DC
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C000F260 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     IsPciBusAsyncWorker @ 0x1C00314C0 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0031AD0 (IsPciDeviceWorker.c)
 *     IsNsobjPciBus @ 0x1C007FC90 (IsNsobjPciBus.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpipAllocatePciBusState @ 0x1C0030A70 (AcpipAllocatePciBusState.c)
 *     IsPciBusAsyncWorker @ 0x1C00314C0 (IsPciBusAsyncWorker.c)
 */

__int64 __fastcall IsPciBusAsync(volatile signed __int32 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v10; // rax
  char *PciBusState; // rax
  char *v12; // rdi
  char v13; // al

  *a4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    goto LABEL_2;
  v10 = *(_QWORD *)(v8 + 8);
  if ( (v10 & 0x2000000) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  if ( (v10 & 0x100000000LL) != 0 )
  {
LABEL_2:
    *a4 = 0;
    return 0LL;
  }
  PciBusState = AcpipAllocatePciBusState();
  v12 = PciBusState;
  if ( !PciBusState )
    return 3221225626LL;
  memset(PciBusState, 0, 0x88uLL);
  v13 = gdwfAMLI;
  *(_QWORD *)v12 = a1;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (v13 & 4) != 0 )
    _InterlockedIncrement(a1 + 2);
  *((_DWORD *)v12 + 10) = -1;
  *((_QWORD *)v12 + 6) = a2;
  *((_QWORD *)v12 + 7) = a3;
  *((_QWORD *)v12 + 8) = a4;
  return IsPciBusAsyncWorker(a1, 0LL, 0LL, v12);
}
