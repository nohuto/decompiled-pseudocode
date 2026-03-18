/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18018A258
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800D20A0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180134F3C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  int v5; // r9d
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&stru_18023E7A8);
  if ( byte_18023E7A4 )
  {
    v5 = -2147023781;
    v9 = 152;
LABEL_3:
    v4 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v9);
    goto LABEL_12;
  }
  v6 = operator new(0x18uLL);
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v5 = -2147024882;
    v9 = 155;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v6 + 2, a3);
  v7 = (_QWORD *)qword_18023E798;
  if ( *(void ***)qword_18023E798 != &CManipulationManager::s_InputQueue )
    __fastfail(3u);
  *v6 = &CManipulationManager::s_InputQueue;
  v6[1] = v7;
  *v7 = v6;
  ++dword_18023E7A0;
  qword_18023E798 = (__int64)v6;
LABEL_12:
  LeaveCriticalSection(&stru_18023E7A8);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(a3);
  return v4;
}
