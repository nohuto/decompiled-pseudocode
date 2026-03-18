/*
 * XREFs of NtGdiBeginPath @ 0x1C0136F30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiBeginPath(HDC a1)
{
  DC *v1; // rbx
  unsigned int v2; // edi
  int v4; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-88h] BYREF
  struct HPATH__ **v7; // [rsp+38h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = (DC *)v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *(_QWORD *)(v5[0] + 168LL) )
    {
      v4 = *(_DWORD *)(v5[0] + 176LL);
      if ( (v4 & 2) != 0 )
        *(_DWORD *)(v5[0] + 176LL) = v4 & 0xFFFFFFFD;
      *((_DWORD *)v1 + 44) &= ~1u;
      DC::hpath(v1, 0LL);
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( v7 )
    {
      DC::hpath(v1, *v7);
      *((_DWORD *)v1 + 44) |= 1u;
      v2 = 1;
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v2;
}
