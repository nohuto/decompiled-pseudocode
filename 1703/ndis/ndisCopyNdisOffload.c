/*
 * XREFs of ndisCopyNdisOffload @ 0x1C0022484
 * Callers:
 *     ndisQueryFilterOffloadCaps @ 0x1C00498F0 (ndisQueryFilterOffloadCaps.c)
 *     ndisQueryMiniportOffloadCaps @ 0x1C00499C4 (ndisQueryMiniportOffloadCaps.c)
 *     ndisOidPreOffloadHwCaps @ 0x1C00BD360 (ndisOidPreOffloadHwCaps.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisCopyNdisOffload(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v5; // eax

  if ( a3 >= 0xBC )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
    v5 = *(_DWORD *)(a2 + 184);
    *(_DWORD *)(a1 + 184) = v5;
    *(_BYTE *)(a1 + 1) = 5;
    *(_WORD *)(a1 + 2) = 188;
    *a4 = 188;
  }
  else
  {
    if ( a3 < 0xB1 )
    {
      if ( a3 < 0x9C )
      {
        if ( a3 < 0x90 )
        {
          LOBYTE(v5) = 112;
          if ( a3 < 0x70 )
          {
            *a4 = 0;
          }
          else
          {
            *(_OWORD *)a1 = *(_OWORD *)a2;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
            *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
            *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
            *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
            *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
            *(_BYTE *)(a1 + 1) = 1;
            *(_WORD *)(a1 + 2) = 112;
            *a4 = 112;
          }
        }
        else
        {
          *(_OWORD *)a1 = *(_OWORD *)a2;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
          *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
          *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
          *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
          *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
          *(_BYTE *)(a1 + 1) = 2;
          *(_WORD *)(a1 + 2) = 144;
          *a4 = 144;
        }
      }
      else
      {
        *(_OWORD *)a1 = *(_OWORD *)a2;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
        *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
        *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
        *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
        *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
        *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
        v5 = *(_DWORD *)(a2 + 152);
        *(_DWORD *)(a1 + 152) = v5;
        *(_BYTE *)(a1 + 1) = 3;
        *(_WORD *)(a1 + 2) = 156;
        *a4 = 156;
      }
      return v5;
    }
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
    LOBYTE(v5) = *(_BYTE *)(a2 + 176);
    *(_BYTE *)(a1 + 176) = v5;
    *(_BYTE *)(a1 + 1) = 4;
    *(_WORD *)(a1 + 2) = 177;
    *a4 = 177;
  }
  if ( a5 )
  {
    if ( *(_BYTE *)(a2 + 1) == 3 )
    {
      v5 = *(_DWORD *)(a2 + 148);
      if ( (((unsigned __int8)v5 | (unsigned __int8)((v5 | ((v5 | (v5 >> 8)) >> 4)) >> 4)) & 0xF) != 0 )
        *(_BYTE *)(a1 + 176) |= 1u;
    }
  }
  return v5;
}
