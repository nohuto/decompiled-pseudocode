/*
 * XREFs of ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0124768
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0007524 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C00CE990 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z.c)
 */

char __fastcall UnblockDeferredInput(struct tagTHREADINFO *a1)
{
  char v1; // si
  __int64 *v4; // rbx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 296) & 0x10000000) != 0 )
  {
    v4 = *(__int64 **)(*((_QWORD *)a1 + 51) + 24LL);
    if ( !v4 )
      goto LABEL_11;
    do
    {
      if ( (*((_DWORD *)v4 + 25) & 0x10000) != 0 && (struct tagTHREADINFO *)v4[13] == a1 )
        break;
      v4 = (__int64 *)*v4;
    }
    while ( v4 );
    if ( !v4 || (unsigned int)KeyboardInputTelemetry::GetKeyboardInputLatency(v4[16]) > 0x2710 )
    {
LABEL_11:
      v1 = 1;
      if ( v4 )
        HandleDeferredInput(a1, 1);
      else
        *((_DWORD *)a1 + 296) &= ~0x10000000u;
    }
  }
  return v1;
}
