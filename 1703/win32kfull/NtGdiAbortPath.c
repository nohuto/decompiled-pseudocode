/*
 * XREFs of NtGdiAbortPath @ 0x1C028C450
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiAbortPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = (DC *)v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *(_QWORD *)(v5[0] + 168LL) )
    {
      v3 = *(_DWORD *)(v5[0] + 176LL);
      if ( (v3 & 2) != 0 )
        *(_DWORD *)(v5[0] + 176LL) = v3 & 0xFFFFFFFD;
      *((_DWORD *)v1 + 44) &= ~1u;
      DC::hpath(v1, 0LL);
    }
    v2 = 1;
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  return v2;
}
