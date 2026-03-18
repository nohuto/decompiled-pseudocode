/*
 * XREFs of RIMFillDeviceHealthInfo @ 0x1C0101170
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C009B01C (RIMLogDeviceHealthTelemetry.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall RIMFillDeviceHealthInfo(CTouchProcessor *a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // edi
  __int64 v6; // rax
  _OWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF

  memset(v8, 0, 0x2CuLL);
  LODWORD(v8[0]) = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v4 = *(_DWORD *)(a2 + 184);
  LODWORD(v8[1]) = (v4 >> 12) & 1;
  DWORD1(v8[1]) = __CFSHR__(v4, 11);
  DWORD2(v8[1]) = __CFSHR__(v4, 12);
  LODWORD(v8[2]) = (unsigned __int8)(v4 & 0x40) >> 6;
  DWORD1(v8[2]) = !__CFSHR__(v4, 12) && !__CFSHR__(v4, 11) && (v4 & 0x80u) == 0;
  DWORD1(v8[0]) = *(_DWORD *)(a2 + 288);
  DWORD2(v8[0]) = *(_DWORD *)(a2 + 272);
  HIDWORD(v8[0]) = *(_DWORD *)(a2 + 168);
  v5 = (v4 >> 25) & 1;
  if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 472);
    if ( v6 )
      HIDWORD(v8[1]) = -__CFSHR__(*(_DWORD *)(v6 + 260), 15);
  }
  RIMLogDeviceHealthTelemetry();
  if ( a1 >= W32UserProbeAddress )
    a1 = W32UserProbeAddress;
  *(_OWORD *)a1 = v8[0];
  *((_OWORD *)a1 + 1) = v8[1];
  *((_QWORD *)a1 + 4) = *(_QWORD *)&v8[2];
  *((_DWORD *)a1 + 10) = v5;
  return 1LL;
}
