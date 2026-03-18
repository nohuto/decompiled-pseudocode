/*
 * XREFs of GreConvertRedirectionToMemDC @ 0x1C027BDF4
 * Callers:
 *     UpdateSpriteArea @ 0x1C00E4894 (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E61EC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v8, a1, a3);
  v5 = v8[0];
  if ( v8[0] )
  {
    if ( !*(_DWORD *)(v8[0] + 32LL) )
    {
      v6 = *(_QWORD *)(v8[0] + 48LL);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 2144) & 0x400) != 0 )
        {
          *(_DWORD *)(v8[0] + 36LL) &= 0xFFFFBFFE;
          v4 = 1;
          *(_DWORD *)(v5 + 32) = 1;
          if ( a2 )
            *(_DWORD *)(*(_QWORD *)(v5 + 512) + 112LL) &= ~0x800u;
        }
      }
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v8);
  }
  return v4;
}
