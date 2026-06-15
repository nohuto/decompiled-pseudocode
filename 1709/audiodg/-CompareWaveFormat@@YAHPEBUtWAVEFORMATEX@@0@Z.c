/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001AD00
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x1400091F0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140009E90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140010890 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x14001E517 (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  WORD wFormatTag; // r9
  __int16 v4; // r8
  __int128 v5; // xmm1
  __int16 v6; // r11
  __int64 v7; // xmm0_8
  int v8; // r10d
  WORD v9; // r9
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  int v12; // r9d
  __int16 v13; // dx
  int v14; // ecx
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  WORD nChannels; // di
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  WORD v24; // di
  __int128 v25; // xmm0
  int v26; // eax
  __int128 Buf2; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v28[24]; // [rsp+30h] [rbp-50h]
  __int128 Buf1; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v30[24]; // [rsp+58h] [rbp-28h]

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    wFormatTag = a1->wFormatTag;
    v4 = -2;
    if ( a1->wFormatTag == 0xFFFE )
    {
      if ( a1->cbSize != 22 )
      {
        v18 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v18 )
          v18 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v18 )
        {
          v19 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v19 )
            v19 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v19 )
            return v2;
        }
      }
      v5 = *(_OWORD *)&a1->cbSize;
      Buf1 = *(_OWORD *)&a1->wFormatTag;
      v6 = Buf1;
      v7 = *(_QWORD *)&a1[1].wBitsPerSample;
      *(_OWORD *)v30 = v5;
      v8 = DWORD1(v5);
      *(_QWORD *)&v30[16] = v7;
    }
    else
    {
      if ( a1->cbSize && ((wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v21 = *(_OWORD *)&a1->wFormatTag;
      *(_WORD *)&v30[2] = a1->wBitsPerSample;
      v6 = -2;
      v8 = (nChannels == 1) + 3;
      Buf1 = v21;
      *(_DWORD *)&v30[4] = v8;
      *(GUID *)&v30[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      LOWORD(Buf1) = -2;
      *(_DWORD *)&v30[8] = wFormatTag;
    }
    v9 = a2->wFormatTag;
    *(_WORD *)v30 = 22;
    if ( v9 != 0xFFFE )
    {
      if ( a2->cbSize && ((v9 - 1) & 0xFFFD) != 0 )
        return v2;
      v24 = a2->nChannels;
      if ( (unsigned __int16)(v24 - 1) > 1u || ((a2->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v25 = *(_OWORD *)&a2->wFormatTag;
      v26 = v9;
      *(_WORD *)&v28[2] = a2->wBitsPerSample;
      v12 = (v24 == 1) + 3;
      Buf2 = v25;
      *(_DWORD *)&v28[4] = v12;
      *(GUID *)&v28[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      LOWORD(Buf2) = -2;
      *(_DWORD *)&v28[8] = v26;
      goto LABEL_9;
    }
    if ( a2->cbSize == 22 )
      goto LABEL_8;
    v22 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v22 )
      v22 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v22 )
      goto LABEL_8;
    v23 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v23 )
      v23 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v23 )
    {
LABEL_8:
      v10 = *(_OWORD *)&a2->cbSize;
      Buf2 = *(_OWORD *)&a2->wFormatTag;
      v4 = Buf2;
      v11 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)v28 = v10;
      v12 = DWORD1(v10);
      *(_QWORD *)&v28[16] = v11;
LABEL_9:
      *(_WORD *)v28 = 22;
      if ( WORD1(Buf1) )
      {
        v13 = WORD1(Buf2);
      }
      else
      {
        v13 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v14 = DWORD1(Buf2);
      }
      else
      {
        v14 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v15 = HIWORD(Buf2);
      }
      else
      {
        v15 = 0;
        HIDWORD(Buf2) = 0;
      }
      if ( !v8 )
      {
        v12 = 0;
        *(_DWORD *)&v28[4] = 0;
      }
      if ( !v6 )
      {
        v4 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v13 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v14 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v15 )
        HIDWORD(Buf1) = 0;
      if ( !v12 )
        *(_DWORD *)&v30[4] = 0;
      if ( !v4 )
        LOWORD(Buf1) = 0;
      v16 = *(_QWORD *)&v30[8] - *(_QWORD *)&v28[8];
      if ( *(_QWORD *)&v30[8] == *(_QWORD *)&v28[8] )
        v16 = *(_QWORD *)&v30[16] - *(_QWORD *)&v28[16];
      if ( !v16 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
