/*
 * XREFs of WPP_SF_Ld @ 0x180132694
 * Callers:
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38 (_lambda_0d74f069fa796de4b01adcedcd59308d_--operator().c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180014950 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800476B0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005D314 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18011B870 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Ld(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, va, 4LL, 0LL);
}
