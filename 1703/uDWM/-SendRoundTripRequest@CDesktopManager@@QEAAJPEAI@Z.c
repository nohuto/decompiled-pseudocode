/*
 * XREFs of ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180023188
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180022880 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180075250 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendRoundTripRequest(CDesktopManager *this, unsigned int *a2)
{
  unsigned int v2; // esi
  int v4; // eax
  unsigned int v5; // ebx

  v2 = *((_DWORD *)this + 163);
  *((_DWORD *)this + 163) = v2 + 1;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4), v2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4C8u);
  }
  else if ( a2 )
  {
    *a2 = v2;
  }
  return v5;
}
