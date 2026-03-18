/*
 * XREFs of MNItemHitTest @ 0x1C0203EA8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxMenuItemFromPoint @ 0x1C0217B68 (xxxMenuItemFromPoint.c)
 * Callees:
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall MNItemHitTest(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r10
  __int64 v6; // r9
  bool v7; // sf
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // edi
  _DWORD *v16; // r10
  unsigned int v17; // r9d
  __int64 v18; // r10
  unsigned int v19; // r11d
  __int64 v20; // r10
  int *v21; // r10
  int v22; // edx
  int v23; // ecx
  __int64 v24; // r10
  unsigned int v25; // r11d
  int v26; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+24h] [rbp-1Ch]
  int v28; // [rsp+28h] [rbp-18h]
  int v29; // [rsp+2Ch] [rbp-14h]
  unsigned __int64 v30; // [rsp+60h] [rbp+20h]

  v30 = a3;
  v3 = *(_DWORD *)(a1 + 68);
  v4 = a1;
  if ( !v3 )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    v26 = *(_DWORD *)(a2 + 128) + 3;
    v28 = *(_DWORD *)(a2 + 136) - 3;
    v27 = *(_DWORD *)(a2 + 132) + 3;
    v29 = *(_DWORD *)(a2 + 140) - 3;
    if ( !PtInRect(&v26, a3) )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v6 + 66) & 0x40) != 0 )
      LODWORD(v30) = *(_DWORD *)(v6 + 152) - v30;
    else
      LODWORD(v30) = v30 - *(_DWORD *)(v6 + 144);
    v7 = HIDWORD(v30) - *(_DWORD *)(v6 + 148) < 0;
    v8 = HIDWORD(v30) - *(_DWORD *)(v6 + 148);
    HIDWORD(v30) = v8;
    if ( v7 )
      return 4294967293LL;
    if ( v8 >= *(_DWORD *)(v4 + 76) )
      return 4294967292LL;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 66) & 0x40) != 0 )
      LODWORD(v30) = *(_DWORD *)(a2 + 136) - a3;
    else
      LODWORD(v30) = a3 - *(_DWORD *)(a2 + 128);
    HIDWORD(v30) = HIDWORD(a3) - *(_DWORD *)(a2 + 132);
  }
  v9 = -1;
  if ( (*(_DWORD *)(v4 + 144) & 3) != 0 )
  {
    v10 = *(unsigned int *)(v4 + 136);
    if ( (_DWORD)v10 == -1 || (unsigned int)v10 >= v3 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(v4 + 96) + 152 * v10;
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 80);
      v13 = 0;
      v26 = 0;
      v14 = 0;
      v27 = 0;
      v28 = v12;
      if ( (unsigned int)v10 < v3 )
      {
        v15 = *(_DWORD *)(v4 + 76);
        v16 = (_DWORD *)(v11 + 84);
        do
        {
          if ( v13 >= v15 )
            break;
          v14 += *v16;
          v29 = v14;
          if ( PtInRect(&v26, v30) )
            return v17;
          v27 = v14;
          v16 = (_DWORD *)(v18 + 152);
          v13 = v14;
        }
        while ( v17 + 1 < v19 );
      }
    }
    return v9;
  }
  v20 = *(_QWORD *)(v4 + 96);
  if ( !v3 )
    return v9;
  v21 = (int *)(v20 + 72);
  while ( 1 )
  {
    v22 = v21[1];
    v26 = *v21;
    v28 = v21[2] + v26;
    v23 = v22 + v21[3];
    v27 = v22;
    v29 = v23;
    if ( PtInRect(&v26, v30) )
      break;
    v21 = (int *)(v24 + 152);
    if ( v17 + 1 >= v25 )
      return v9;
  }
  return v17;
}
