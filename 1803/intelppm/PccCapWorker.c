/*
 * XREFs of PccCapWorker @ 0x1C000EB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C0020AD0 (ProcLibCapChange.c)
 *     RegisterKernelCap @ 0x1C0030F10 (RegisterKernelCap.c)
 */

void __fastcall PccCapWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rdi
  unsigned int *v3; // rbx
  unsigned int v4; // esi
  char v5; // bl

  do
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C001AAF0);
    v2 = qword_1C001A628;
    LOBYTE(word_1C001AB04) = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C001AAF0);
    do
    {
      v3 = *(unsigned int **)(v2 - 8);
      v4 = *(_DWORD *)(v2 + 40);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001A5D8,
        0LL);
      if ( v4 != v3[177] )
      {
        ProcLibCapChange(v3, v3[108], v3[120], v4);
        RegisterKernelCap(v3);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001A5D8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
        WdfDriverGlobals,
        qword_1C001AAF0);
      v2 = *(_QWORD *)v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
        WdfDriverGlobals,
        qword_1C001AAF0);
    }
    while ( (__int64 *)v2 != &qword_1C001A628 );
    v5 = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C001AAF0);
    if ( !(_BYTE)word_1C001AB04 )
    {
      word_1C001AB04 = 0;
      v5 = 0;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C001AAF0);
  }
  while ( v5 );
}
