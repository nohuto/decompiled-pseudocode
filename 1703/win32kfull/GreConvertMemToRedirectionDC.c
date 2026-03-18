/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x1C009ED74
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009EAEC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C013534C (UpdateSpriteArea.c)
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  MDCOBJA::MDCOBJA((MDCOBJA *)v8, a1);
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
          *(_DWORD *)(v4 + 32) = 0;
          v3 = 1;
          v6 = *(_QWORD *)(v4 + 512);
          if ( (*(_DWORD *)(v6 + 112) & 0x800) == 0 && !*(_WORD *)(v6 + 100) )
          {
            *(_DWORD *)(v6 + 112) |= 0x800u;
            *a2 = 1;
          }
        }
      }
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v8);
  return v3;
}
