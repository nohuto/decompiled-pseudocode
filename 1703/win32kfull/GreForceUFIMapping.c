/*
 * XREFs of GreForceUFIMapping @ 0x1C00EBED8
 * Callers:
 *     NtGdiForceUFIMapping @ 0x1C00EBE90 (NtGdiForceUFIMapping.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
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
    XDCOBJ::RestoreAttributes((XDCOBJ *)v7);
    v3 = 1;
    _InterlockedDecrement((volatile signed __int32 *)v7[0] + 3);
  }
  return v3;
}
