/*
 * XREFs of CanForceForeground @ 0x1C0090A90
 * Callers:
 *     CheckAllowForeground @ 0x1C0090860 (CheckAllowForeground.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00CB9BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CC3F4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _AllowSetForegroundWindow @ 0x1C0110E60 (_AllowSetForegroundWindow.c)
 *     _LockSetForegroundWindow @ 0x1C01B4F00 (_LockSetForegroundWindow.c)
 *     xxxHardErrorControl @ 0x1C020DE0C (xxxHardErrorControl.c)
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
  v4 = (_QWORD *)*((_QWORD *)PtiLastWoken + 50);
  if ( v4 == (_QWORD *)a1
    || !gptiForeground
    || *(_QWORD *)(gptiForeground + 400LL) == a1
    || (*(_DWORD *)(a1 + 12) & 0x80100) != 0
    || a1 == gppiInputProvider
    || !gpqForeground
    || !gfDebugForegroundIgnoreDebugPort
    && (PsGetProcessDebugPort(*v4) || PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 400LL))) )
  {
    return 1LL;
  }
  v5 = (unsigned int *)UPDWORDPointer(0x2000LL);
  LOBYTE(v3) = CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v5);
  return v3;
}
