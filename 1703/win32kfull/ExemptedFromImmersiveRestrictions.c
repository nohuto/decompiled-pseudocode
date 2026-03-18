/*
 * XREFs of ExemptedFromImmersiveRestrictions @ 0x1C01B21BC
 * Callers:
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     xxxEnableWindow @ 0x1C00B7870 (xxxEnableWindow.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 */

__int64 __fastcall ExemptedFromImmersiveRestrictions(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 376);
  if ( *(int *)(v3 + 12) < 0 || (unsigned int)IsImmersiveBroker(v3) )
    return 1LL;
  LOBYTE(v2) = IAMThreadAccessGranted((const struct tagTHREADINFO *)a1);
  return v2;
}
