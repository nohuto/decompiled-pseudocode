/*
 * XREFs of RegisterKernelCoordinatedLpiStates @ 0x1C00235A0
 * Callers:
 *     RegisterIdleComplete @ 0x1C00230A4 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C001A6C4 (AcpiGetCoordinatedLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0020E20 (PepNotifyCoordinatedLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002C0F4 (LpiTranslateCoordinatedIdleStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedLpiStates(__int64 a1)
{
  int CoordinatedLpiStates; // eax
  int v3; // ebx
  unsigned __int16 v4; // r9
  _DWORD *v5; // rsi
  __int64 v6; // rbx
  void *v7; // rax
  __int64 v8; // rbp
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  CoordinatedLpiStates = AcpiGetCoordinatedLpiStates(a1, &qword_1C0011948);
  v3 = CoordinatedLpiStates;
  if ( CoordinatedLpiStates >= 0 )
  {
    v5 = (_DWORD *)qword_1C0011948;
    if ( !*(_DWORD *)qword_1C0011948 )
      return 0;
    v3 = LpiTranslateCoordinatedIdleStates(a1, qword_1C0011948, (unsigned int)&v11, (unsigned int)&v12, (__int64)&v13);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v6 = v11;
    *(_QWORD *)(v11 + 32) = PepQueryPlatformStateResidency;
    if ( (*(_QWORD *)(a1 + 264) & 0x100000000000LL) != 0 )
    {
      *(_QWORD *)(v6 + 16) = PepNotifyLpiPreExecute;
      v7 = PepNotifyLpiComplete;
    }
    else
    {
      v7 = AcpiCStateIdleCancel;
    }
    v8 = v12;
    *(_QWORD *)(v6 + 24) = v7;
    if ( (*(_QWORD *)(a1 + 264) & 0x100000000000LL) != 0 )
      PepNotifyCoordinatedLpiStates(a1, v5, (unsigned int *)v6, v8);
    qword_1C0011940 = v13;
    qword_1C0011930 = v6;
    qword_1C0011938 = v8;
    CoordinatedLpiStates = ((__int64 (__fastcall *)(__int64))qword_1C0011620)(v6);
    v3 = CoordinatedLpiStates;
    if ( CoordinatedLpiStates >= 0 )
      return 0;
    v4 = 24;
  }
  else
  {
    v4 = 23;
  }
  v10 = CoordinatedLpiStates;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    3u,
    v4,
    (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids,
    v10);
  return (unsigned int)v3;
}
