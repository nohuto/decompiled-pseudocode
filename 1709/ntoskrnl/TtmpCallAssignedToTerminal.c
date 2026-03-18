/*
 * XREFs of TtmpCallAssignedToTerminal @ 0x14070D684
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x14070D4B0 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmpStartCallout @ 0x14070DFD4 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x14070E0C8 (TtmpStopCallout.c)
 */

void __fastcall TtmpCallAssignedToTerminal(int a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // rdi
  int v5; // ebx
  _BYTE v6[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 48);
  if ( v2 )
  {
    memset(v6, 0, 0x28uLL);
    TtmpStartCallout((unsigned int)v6, a1, a2, 1, (__int64)v2, *(_DWORD *)(a2 + 596));
    v5 = v2(*(_QWORD *)(a2 + 24), *(unsigned int *)(a2 + 596));
    TtmpStopCallout(v6, (unsigned int)v5);
    if ( v5 < 0 )
      TtmiLogError("TtmpCallAssignedToTerminal", 2233, v5, -1);
  }
}
