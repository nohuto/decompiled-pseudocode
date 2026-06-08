/*
 * XREFs of ProcLibCapChange @ 0x1C001F970
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001CD0 (EvtDeviceD0Entry.c)
 *     PccCapWorker @ 0x1C000DF90 (PccCapWorker.c)
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00259D0 (CpcGuaranteedNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0029750 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C002A2F0 (AcpiTStateNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0030220 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  BOOLEAN result; // al
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 712);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 720) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 712) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 892) == 0;
    *(_QWORD *)(a1 + 712) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 744), (LARGE_INTEGER)-3000000000LL, 300000, (PKDPC)(a1 + 808));
      *(_BYTE *)(a1 + 892) = 1;
    }
    if ( !*(_BYTE *)(a1 + 1044) )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 896), (LARGE_INTEGER)-711573504LL, 86400000, (PKDPC)(a1 + 960));
      *(_BYTE *)(a1 + 1044) = 1;
    }
  }
  if ( a2 != *(_DWORD *)(a1 + 432) )
  {
    ++*(_DWORD *)(a1 + 728);
    *(_DWORD *)(a1 + 432) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 480) )
  {
    ++*(_DWORD *)(a1 + 732);
    *(_DWORD *)(a1 + 480) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 708) )
  {
    ++*(_DWORD *)(a1 + 736);
    *(_DWORD *)(a1 + 708) = a4;
  }
  return result;
}
