/*
 * XREFs of WPP_SF_dSD @ 0x1800AE230
 * Callers:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004197C (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dSD(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  int v7; // [rsp+88h] [rbp+20h] BYREF

  v7 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a5 + 2 * v5) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, 111LL, &v7);
}
