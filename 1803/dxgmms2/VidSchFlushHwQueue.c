/*
 * XREFs of VidSchFlushHwQueue @ 0x1C00BE940
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedReadUlong @ 0x1C0012B74 (VidSchiInterlockedReadUlong.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0078FEC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushHwQueue(__int64 a1)
{
  __int64 v1; // rsi
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD v5[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (_DWORD *)(a1 + 88);
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 32LL);
  if ( *(_DWORD *)(a1 + 88) )
  {
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[4]) |= 0x50u;
    LODWORD(v5[2]) = 1;
    v5[5] = v2;
    LODWORD(v5[6]) = *(unsigned __int16 *)(*(_QWORD *)(v1 + 16) + 4LL);
    VidSchiWaitFlushCompletion(v3, (__int64)v5, 0x16u);
  }
  return VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v3 + 1904), v2);
}
