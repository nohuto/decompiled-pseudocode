/*
 * XREFs of ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180034080
 * Callers:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x180019268 (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180047B70 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CAppAudioSessionId@@QEAA@XZ @ 0x180047D04 (--1CAppAudioSessionId@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlStringMgr::Free(ATL::CAtlStringMgr *this, struct ATL::CStringData *a2)
{
  HANDLE *v2; // rcx
  void (__fastcall *v3)(HANDLE *, void *); // rax

  v2 = (HANDLE *)*((_QWORD *)this + 1);
  v3 = (void (__fastcall *)(HANDLE *, void *))*((_QWORD *)*v2 + 1);
  if ( v3 == ATL::CWin32Heap::Free )
  {
    if ( a2 )
      HeapFree(v2[1], 0, a2);
  }
  else
  {
    v3(v2, a2);
  }
}
