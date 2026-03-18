/*
 * XREFs of TtmpCallSetDisplayState @ 0x1406D7540
 * Callers:
 *     TtmpPushTerminalState @ 0x1406D7B20 (TtmpPushTerminalState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmpStartCallout @ 0x1406D7C4C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406D7D40 (TtmpStopCallout.c)
 */

void __fastcall TtmpCallSetDisplayState(int a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // rdi
  int v7; // ebx
  _BYTE v8[48]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 56);
  if ( v3 )
  {
    memset(v8, 0, 0x28uLL);
    TtmpStartCallout((unsigned int)v8, a1, a2, 4, (__int64)v3, a3);
    v7 = v3(*(_QWORD *)(a2 + 24), a3);
    TtmpStopCallout(v8, (unsigned int)v7);
    if ( v7 < 0 )
      TtmiLogError("TtmpCallSetDisplayState", 2290, v7, -1);
  }
}
