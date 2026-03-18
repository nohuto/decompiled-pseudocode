/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x1C00E6448
 * Callers:
 *     UpdateSpriteArea @ 0x1C00E4894 (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E61EC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v8, a1);
  v4 = v8[0];
  *a2 = 0;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 32) == 1 )
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2144) & 0x400) != 0 )
        {
          *(_DWORD *)(v4 + 36) |= 0x4001u;
          v3 = 1;
          *(_DWORD *)(v4 + 32) = 0;
          v7 = *(_QWORD *)(v4 + 512);
          if ( (*(_DWORD *)(v7 + 112) & 0x800) == 0 && !*(_WORD *)(v7 + 100) )
          {
            *(_DWORD *)(v7 + 112) |= 0x800u;
            *a2 = 1;
          }
        }
      }
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}
