/*
 * XREFs of ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x18019A41C
 * Callers:
 *     ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801990B0 (-GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulation::_EnqueueDeferredDeltaReset(CManipulation *this, int a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  int v5; // r9d
  unsigned __int8 v6; // cl
  char v7; // al
  char v8; // cl
  int ManipulationManager; // eax
  __int64 v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CManipulationManager *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = a2 - 1;
  if ( !v3 )
  {
    v8 = *((_BYTE *)this + 440);
    v7 = v8 | 1;
LABEL_7:
    *((_BYTE *)this + 440) = v7;
    if ( (v8 & 1) == 0 )
    {
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v13);
      ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 2), &v13);
      v4 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        v12 = 1024;
        goto LABEL_12;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v13 + 2) + 552LL) + 96LL))(*(_QWORD *)(*((_QWORD *)v13 + 2) + 552LL));
      ManipulationManager = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), CManipulation *, __int64))(*(_QWORD *)v10 + 128LL))(
                              v10,
                              CManipulation::s_ResetDeltaProperties,
                              this,
                              4LL);
      v4 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        v12 = 1029;
LABEL_12:
        v5 = ManipulationManager;
        goto LABEL_4;
      }
    }
    v4 = 0;
    goto LABEL_14;
  }
  if ( v3 == 2 )
  {
    v6 = *((_BYTE *)this + 440);
    v7 = v6 | 2;
    v8 = v6 >> 1;
    goto LABEL_7;
  }
  v4 = -2147024809;
  v12 = 1019;
  v5 = -2147024809;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v12);
LABEL_14:
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v13);
  return v4;
}
