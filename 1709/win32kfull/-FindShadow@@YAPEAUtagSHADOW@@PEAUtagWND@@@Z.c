/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4
 * Callers:
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     WindowHasShadow @ 0x1C0066870 (WindowHasShadow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C012AEE8 (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1C020CC84 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C020CD58 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C020CDE0 (zzzMoveShadow.c)
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
