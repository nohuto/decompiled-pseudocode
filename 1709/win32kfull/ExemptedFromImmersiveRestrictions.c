/*
 * XREFs of ExemptedFromImmersiveRestrictions @ 0x1C01B5244
 * Callers:
 *     xxxEnableWindow @ 0x1C009DF50 (xxxEnableWindow.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall ExemptedFromImmersiveRestrictions(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 400);
  if ( *(int *)(v3 + 12) < 0 || (unsigned int)IsImmersiveBroker(v3) )
    return 1LL;
  LOBYTE(v2) = IAMThreadAccessGranted((const struct tagTHREADINFO *)a1);
  return v2;
}
