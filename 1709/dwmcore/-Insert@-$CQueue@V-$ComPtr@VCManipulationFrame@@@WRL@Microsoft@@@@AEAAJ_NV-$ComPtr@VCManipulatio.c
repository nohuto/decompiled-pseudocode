/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180196154
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019757C (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180195874 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  DWORD v4; // edi
  DWORD v5; // r9d
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&stru_180272518);
  if ( byte_180272514 )
  {
    v5 = -2147023781;
    v9 = 152;
LABEL_3:
    v4 = v5;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v9);
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
  v7 = (_QWORD *)qword_180272508;
  if ( *(void ***)qword_180272508 != &CManipulationManager::s_InputQueue )
    __fastfail(3u);
  *v6 = &CManipulationManager::s_InputQueue;
  v6[1] = v7;
  *v7 = v6;
  ++dword_180272510;
  qword_180272508 = (__int64)v6;
LABEL_12:
  LeaveCriticalSection(&stru_180272518);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(a3);
  return v4;
}
