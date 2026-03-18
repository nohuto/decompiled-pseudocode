/*
 * XREFs of GreConvertRedirectionToMemDC @ 0x1C027F2C4
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009EAEC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C013534C (UpdateSpriteArea.c)
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  MDCOBJA::MDCOBJA((MDCOBJA *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    if ( !*(_DWORD *)(v7[0] + 32LL) )
    {
      v5 = *(_QWORD *)(v7[0] + 48LL);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2144) & 0x400) != 0 )
        {
          *(_DWORD *)(v7[0] + 36LL) &= 0xFFFFBFFE;
          v3 = 1;
          *(_DWORD *)(v4 + 32) = 1;
          if ( a2 )
            *(_DWORD *)(*(_QWORD *)(v4 + 512) + 112LL) &= ~0x800u;
        }
      }
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v7);
  return v3;
}
