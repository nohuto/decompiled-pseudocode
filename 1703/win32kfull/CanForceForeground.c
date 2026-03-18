/*
 * XREFs of CanForceForeground @ 0x1C001BDE0
 * Callers:
 *     _AllowSetForegroundWindow @ 0x1C00191D0 (_AllowSetForegroundWindow.c)
 *     CheckAllowForeground @ 0x1C001BBA0 (CheckAllowForeground.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00B3D10 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00C8B7C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _LockSetForegroundWindow @ 0x1C01B1D20 (_LockSetForegroundWindow.c)
 *     xxxHardErrorControl @ 0x1C020BE9C (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CanForceForeground(__int64 a1)
{
  struct tagTHREADINFO *PtiLastWoken; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // rdx
  unsigned int *v5; // rax

  PtiLastWoken = CInputGlobals::GetPtiLastWoken(gpInputGlobals);
  v3 = 0;
  if ( !PtiLastWoken )
    return 1LL;
  v4 = (_QWORD *)*((_QWORD *)PtiLastWoken + 47);
  if ( v4 == (_QWORD *)a1
    || !gptiForeground
    || *(_QWORD *)(gptiForeground + 376LL) == a1
    || (*(_DWORD *)(a1 + 12) & 0x80100) != 0
    || a1 == gppiInputProvider
    || !gpqForeground
    || !gfDebugForegroundIgnoreDebugPort
    && (PsGetProcessDebugPort(*v4) || PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 376LL))) )
  {
    return 1LL;
  }
  v5 = (unsigned int *)UPDWORDPointer(0x2000LL);
  LOBYTE(v3) = CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v5);
  return v3;
}
