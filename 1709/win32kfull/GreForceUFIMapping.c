/*
 * XREFs of GreForceUFIMapping @ 0x1C00FDE3C
 * Callers:
 *     NtGdiForceUFIMapping @ 0x1C00FDDF0 (NtGdiForceUFIMapping.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreForceUFIMapping(HDC a1, __int64 *a2)
{
  unsigned int v3; // ebx
  DC *v4; // rcx
  __int64 v5; // rax
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock(v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    v5 = *a2;
    *((_DWORD *)v7[0] + 66) |= 4u;
    *(_QWORD *)((char *)v4 + 268) = v5;
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    return 1;
  }
  return v3;
}
