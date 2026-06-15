/*
 * XREFs of WPP_SF_PSq @ 0x1800B9730
 * Callers:
 *     ServicePowerEvent @ 0x180035224 (ServicePowerEvent.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_PSq(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v7; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  if ( v7 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v7 + 2 * v3) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, 25LL, (__int64 *)va);
}
