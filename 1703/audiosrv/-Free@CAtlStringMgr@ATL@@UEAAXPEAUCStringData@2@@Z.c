/*
 * XREFs of ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180022BF0
 * Callers:
 *     ??1CAppAudioSessionId@@QEAA@XZ @ 0x18001ECF4 (--1CAppAudioSessionId@@QEAA@XZ.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001F000 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001FCA0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180020360 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021F50 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z @ 0x180023C80 (--_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z.c)
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x180024DE4 (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlStringMgr::Free(ATL::CAtlStringMgr *this, struct ATL::CStringData *a2)
{
  ATL::CWin32Heap *v2; // rcx
  void (*v3)(ATL::CWin32Heap *__hidden, void *); // rax

  v2 = (ATL::CWin32Heap *)*((_QWORD *)this + 1);
  v3 = *(void (**)(ATL::CWin32Heap *__hidden, void *))(*(_QWORD *)v2 + 8LL);
  if ( v3 == ATL::CWin32Heap::Free )
    ATL::CWin32Heap::Free(v2, a2);
  else
    ((void (__fastcall *)(ATL::CWin32Heap *, struct ATL::CStringData *))v3)(v2, a2);
}
