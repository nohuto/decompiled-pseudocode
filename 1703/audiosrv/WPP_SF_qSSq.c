/*
 * XREFs of WPP_SF_qSSq @ 0x18009FB44
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x180031658 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_qSSq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a5 + 2 * v5) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, 41LL, &v7);
}
