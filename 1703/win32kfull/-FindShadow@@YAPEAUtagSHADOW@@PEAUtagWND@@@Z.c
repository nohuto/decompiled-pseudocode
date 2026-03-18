/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0021428
 * Callers:
 *     WindowHasShadow @ 0x1C00213F8 (WindowHasShadow.c)
 *     UpdateWindowMonitor @ 0x1C005F450 (UpdateWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzUpdateShadowAlpha @ 0x1C011E960 (zzzUpdateShadowAlpha.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C020B794 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C020B868 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C020B8D0 (zzzMoveShadow.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax

  for ( result = gpshadowFirst;
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}
