/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801CE998
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801CFC38 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CE44C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax

  EnterCriticalSection(&stru_1802D66B8);
  v4 = 0;
  if ( byte_1802D66B4 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147023781, 0x98u);
  }
  else
  {
    v5 = operator new(0x18uLL);
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v5 + 2, a3);
      v6 = (_QWORD *)qword_1802D66A8;
      if ( *(void ***)qword_1802D66A8 != &CManipulationManager::s_InputQueue )
        __fastfail(3u);
      *v5 = &CManipulationManager::s_InputQueue;
      v5[1] = v6;
      *v6 = v5;
      ++dword_1802D66B0;
      qword_1802D66A8 = (__int64)v5;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Bu);
    }
  }
  LeaveCriticalSection(&stru_1802D66B8);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(a3);
  return v4;
}
