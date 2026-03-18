/*
 * XREFs of PopEtIsrDpcQuery @ 0x140459780
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1404579D0 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     KeQueryCycleTimeStatsProcessor @ 0x1400134B4 (KeQueryCycleTimeStatsProcessor.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PopEtIsrDpcQuery(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-70h] BYREF
  __int16 v10; // [rsp+38h] [rbp-60h]
  _QWORD v11[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_OWORD **)(a1 + 1856);
  memset(a2, 0, 0x1B0uLL);
  v9[1] = (unsigned __int16 *)qword_140401408[0];
  v9[0] = (unsigned __int16 *)KeActiveProcessors;
  v10 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v8, v9);
    if ( (_DWORD)result )
      break;
    KeQueryCycleTimeStatsProcessor(KiProcessorBlock[v8], v11);
    v5 = a2;
    v6 = 4LL;
    do
    {
      v7 = 2LL;
      do
      {
        *v5 += *(_QWORD *)((char *)v5 + (char *)v11 - (char *)a2);
        ++v5;
        --v7;
      }
      while ( v7 );
      --v6;
    }
    while ( v6 );
  }
  *v2 = *a2;
  v2[1] = a2[1];
  v2[2] = a2[2];
  v2[3] = a2[3];
  return result;
}
