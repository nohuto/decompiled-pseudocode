/*
 * XREFs of bUMPD @ 0x1C010F7C4
 * Callers:
 *     NtGdiExtEscape @ 0x1C0036CF0 (NtGdiExtEscape.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bUMPD(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3[1] = 0LL;
  XDCOBJ::vLock(v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*((_QWORD *)v3[0] + 6) + 32LL) & 0x8000;
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
