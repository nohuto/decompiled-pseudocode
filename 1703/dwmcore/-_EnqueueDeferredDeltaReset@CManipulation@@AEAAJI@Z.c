/*
 * XREFs of ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x180168AD4
 * Callers:
 *     ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180167BE0 (-GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulation::_EnqueueDeferredDeltaReset(CManipulation *this, int a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  int v5; // r9d
  char v6; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  int ManipulationManager; // eax
  __int64 v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CManipulationManager *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = a2 - 1;
  if ( !v3 )
  {
    v9 = *((_BYTE *)this + 408);
    v7 = v9 & 1;
    v8 = v9 | 1;
LABEL_7:
    *((_BYTE *)this + 408) = v8;
    if ( !v7 )
    {
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v14);
      ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v14);
      v4 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        v13 = 895;
        goto LABEL_12;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v14 + 2) + 560LL) + 96LL))(*(_QWORD *)(*((_QWORD *)v14 + 2) + 560LL));
      ManipulationManager = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), CManipulation *, __int64))(*(_QWORD *)v11 + 128LL))(
                              v11,
                              CManipulation::s_ResetDeltaProperties,
                              this,
                              4LL);
      v4 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        v13 = 900;
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
    v6 = *((_BYTE *)this + 408);
    v7 = (v6 & 2) != 0;
    v8 = v6 | 2;
    goto LABEL_7;
  }
  v4 = -2147024809;
  v13 = 890;
  v5 = -2147024809;
LABEL_4:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v13);
LABEL_14:
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v14);
  return v4;
}
