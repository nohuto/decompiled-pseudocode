/*
 * XREFs of PnpInitializeBootStartDriver @ 0x1407F99D8
 * Callers:
 *     PipInitializeEarlyLaunchDrivers @ 0x1407F6E38 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x1407F6F4C (PnpLoadBootFilterDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140036914 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PnpDiagnosticTraceObject @ 0x1400682D8 (PnpDiagnosticTraceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VfDriverInitStarting @ 0x140761DA4 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x1407622D0 (VfDriverInitSuccess.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 *     PnpDoPolicyCheck @ 0x1407F9FC8 (PnpDoPolicyCheck.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x1407FA028 (PnpNotifyEarlyLaunchImageLoad.c)
 */

__int64 __fastcall PnpInitializeBootStartDriver(
        unsigned __int16 *a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v10; // rcx
  __int128 *v13; // r14
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int128 v19; // xmm0
  int inited; // edi
  int v21; // ebx
  _QWORD v23[14]; // [rsp+38h] [rbp-51h] BYREF

  v10 = 0LL;
  a8 = 0;
  v13 = a2;
  if ( a7 )
  {
    memset(v23, 0, 0x68uLL);
    LODWORD(v23[0]) = 0;
    if ( a4 )
    {
      v14 = *(_OWORD *)(a4 + 72);
      v15 = *(_OWORD *)(a4 + 176);
      HIDWORD(v23[0]) = *(_DWORD *)(a4 + 224) & 1;
      LODWORD(v23[11]) = *(_DWORD *)(a4 + 208);
      LODWORD(v23[12]) = *(_DWORD *)(a4 + 216);
      v23[9] = *(_QWORD *)(a4 + 192);
      v16 = *(_DWORD *)(a4 + 212);
      *(_OWORD *)&v23[1] = v14;
      HIDWORD(v23[11]) = v16;
      v17 = *v13;
      HIDWORD(v23[12]) = *(_DWORD *)(a4 + 220);
      v18 = *(_QWORD *)(a4 + 200);
      *(_OWORD *)&v23[3] = v17;
      v23[10] = v18;
      v19 = *(_OWORD *)(a4 + 160);
      *(_OWORD *)&v23[7] = v15;
      *(_OWORD *)&v23[5] = v19;
    }
    else
    {
      *(_OWORD *)&v23[1] = *(_OWORD *)a1;
    }
    PnpNotifyEarlyLaunchImageLoad(v23, &a8);
    v10 = a8;
  }
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)PnpDoPolicyCheck(v10, a2) || !a7 )
  {
    inited = VfDriverInitStarting();
    PnpDiagnosticTraceObject(&KMPnPEvt_BootInit_Start, a1);
    v21 = IopInitializeBuiltinDriver((_DWORD)a1, (_DWORD)v13, a3, a4, a6, a9);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_BootInit_Stop, a1, v21);
    if ( v21 >= 0 )
      VfDriverInitSuccess(inited, a5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v21;
}
