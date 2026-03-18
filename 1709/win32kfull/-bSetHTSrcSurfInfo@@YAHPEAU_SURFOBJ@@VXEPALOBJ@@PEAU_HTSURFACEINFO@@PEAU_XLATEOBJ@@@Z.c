/*
 * XREFs of ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C003EADC
 * Callers:
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C009BA0C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C009BCC0 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall bSetHTSrcSurfInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // r12d
  char v9; // r14
  unsigned int v10; // ecx
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  char v15; // al
  __int64 result; // rax
  unsigned int v17; // edx
  __int128 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF

  v21 = a2;
  v7 = *(_DWORD *)(a2 + 24) & 2;
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      v10 = 2;
LABEL_19:
      v9 = 4;
      goto LABEL_7;
    case 2:
      v10 = 16;
      goto LABEL_19;
    case 3:
      v10 = 256;
      goto LABEL_19;
  }
  if ( *(_DWORD *)(a1 + 72) != 4 )
  {
    if ( *(_DWORD *)(a1 + 72) == 5 )
    {
      v9 = 3;
      v10 = 0;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(a1 + 72) != 6 )
      return 0LL;
    v10 = 3;
    v7 = 1;
    goto LABEL_19;
  }
  v9 = 2;
  v10 = 3;
  v7 = 1;
LABEL_7:
  BYTE10(v18) = *(_BYTE *)(a1 + 72);
  HIDWORD(v18) = *(_DWORD *)(a1 + 32);
  LODWORD(v19) = *(_DWORD *)(a1 + 36);
  DWORD1(v19) = *(_DWORD *)(a1 + 64);
  *((_QWORD *)&v19 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v18 = a1;
  BYTE11(v18) = 4;
  WORD4(v18) = (*(_BYTE *)(a1 + 78) & 1) != 0;
  v11 = 3;
  if ( !v7 )
    v11 = *(_DWORD *)(a2 + 28);
  if ( v11 > v10 )
    v11 = v10;
  v12 = AllocThreadBufferWithTag(4 * v11 + 24, 1668573255LL, 0LL);
  v20 = v12;
  v13 = v12;
  if ( !v12 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  *(_BYTE *)(v12 + 3) = 0;
  v14 = v12 + 24;
  *(_QWORD *)(v12 + 16) = v12 + 24;
  *(_BYTE *)v12 = 0;
  *(_DWORD *)(v12 + 4) = 0;
  v15 = 0;
  if ( (*(_BYTE *)(a2 + 24) & 8) != 0 )
    v15 = 4;
  *(_BYTE *)(v13 + 2) = v9;
  *(_BYTE *)(v13 + 3) = v15;
  if ( v7 )
  {
    *(_BYTE *)(v13 + 1) = 0;
    *(_DWORD *)(v13 + 8) = 3;
    if ( (*(_DWORD *)(a2 + 24) & 2) != 0 )
    {
      *(_DWORD *)v14 = **(_DWORD **)(a2 + 120);
      *(_DWORD *)(v14 + 4) = *(_DWORD *)(*(_QWORD *)(a2 + 120) + 4LL);
      *(_DWORD *)(v14 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 120) + 8LL);
    }
    else
    {
      *(_DWORD *)(v14 + 4) = 65280;
      if ( (*(_DWORD *)(a2 + 24) & 8) != 0 )
      {
        *(_DWORD *)v14 = 16711680;
        *(_DWORD *)(v14 + 8) = 255;
      }
      else
      {
        *(_DWORD *)v14 = 255;
        *(_DWORD *)(v14 + 8) = 16711680;
      }
    }
  }
  else
  {
    *(_BYTE *)(v13 + 1) = 1;
    *(_DWORD *)(v13 + 8) = v11;
    *(_DWORD *)(v13 + 4) = 255;
    if ( v11 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v21) && a4 && (*(_DWORD *)(a4 + 76) & 0x100) != 0 )
      {
        *(_DWORD *)v14 = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 28));
        *(_DWORD *)(v14 + 4) = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 32));
      }
      else
      {
        XEPALOBJ::ulGetEntries((XEPALOBJ *)&v21, v17, v11, (struct tagPALETTEENTRY *)v14, v17);
      }
    }
  }
  result = 1LL;
  *(_OWORD *)a3 = v18;
  *(_OWORD *)(a3 + 16) = v19;
  *(_QWORD *)(a3 + 32) = v20;
  return result;
}
