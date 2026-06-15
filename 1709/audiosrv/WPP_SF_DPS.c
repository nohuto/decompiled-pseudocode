/*
 * XREFs of WPP_SF_DPS @ 0x1800AD514
 * Callers:
 *     ServiceDeviceEvent @ 0x1800AD01C (ServiceDeviceEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DPS(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  __int64 v6; // rax
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  if ( a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a6 + 2 * v6) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, 24LL, &v8);
}
