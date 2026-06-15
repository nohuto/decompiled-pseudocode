/*
 * XREFs of WPP_SF_qSg @ 0x180090B50
 * Callers:
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x18008C050 (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qSg(__int64 a1, __int64 a2, __int64 a3, ...)
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
  return EtwTraceMessage(a1, 43LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, 162LL, (__int64 *)va);
}
