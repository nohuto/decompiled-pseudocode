/*
 * XREFs of VidSchiFlushPendingFlips @ 0x1C006EC58
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0003F40 (VidSchiSetFlipDevice.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C004F99C (VidSchiWaitFlushCompletion.c)
 */

char __fastcall VidSchiFlushPendingFlips(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int *v5; // rdi
  int v6; // eax
  _QWORD v8[20]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[20]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2 + 2308;
  if ( *(_DWORD *)(a2 + 2308) )
  {
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[4]) |= 4u;
    LODWORD(v8[2]) = 3;
    v8[5] = v2;
    VidSchiWaitFlushCompletion(a1, (__int64)v8, 0x17u);
  }
  v5 = (int *)(a2 + 2312);
  v6 = *v5;
  if ( *v5 && !*(_BYTE *)(a1 + 2816) )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[4]) |= 4u;
    LODWORD(v9[2]) = 1;
    v9[5] = v5;
    LOBYTE(v6) = VidSchiWaitFlushCompletion(a1, (__int64)v9, 0x17u);
  }
  return v6;
}
