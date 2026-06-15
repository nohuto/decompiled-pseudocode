/*
 * XREFs of WPP_SF_qSSq @ 0x180089F7C
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18008644C (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids, 41LL, &v7);
}
