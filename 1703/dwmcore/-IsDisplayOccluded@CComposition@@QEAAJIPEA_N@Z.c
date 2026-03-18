/*
 * XREFs of ?IsDisplayOccluded@CComposition@@QEAAJIPEA_N@Z @ 0x180131C2C
 * Callers:
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::IsDisplayOccluded(CComposition *this, unsigned int a2, bool *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  if ( a2 < *(_DWORD *)(v3 + 96) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL * a2);
    *a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5);
  }
  else
  {
    *a3 = 1;
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, (const int *)"W", 1u, -2147024809, 0x534u);
    MilInstrumentationCheckHR(0x14u, (const int *)"W", 1u, -2147024809, 0xDDBu);
  }
  return v4;
}
