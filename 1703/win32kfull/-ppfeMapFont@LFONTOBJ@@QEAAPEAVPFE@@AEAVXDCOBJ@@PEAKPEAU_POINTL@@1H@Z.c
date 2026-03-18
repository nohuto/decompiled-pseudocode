/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0089D10
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C002D170 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetTextFaceW @ 0x1C00872D0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetCharSet @ 0x1C00E09EC (GreGetCharSet.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026B638 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00582F4 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0297DDC (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int *a5,
        int a6)
{
  int v7; // r12d
  __int64 v8; // rdx
  struct _POINTL *v9; // r10
  unsigned int *v10; // r11
  __int64 v11; // rsi
  __int64 v13; // rbp
  char v14; // di
  unsigned int v15; // r15d
  int v16; // r13d
  __int64 v17; // r15
  struct PFE *v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int *v21; // r15
  struct PFE *result; // rax
  int v23; // edx
  char v24; // al
  __int64 v25; // rcx
  unsigned int v26; // edx
  char v27; // r8
  int v28; // edx
  __int64 v29; // rcx
  struct tagPvtData *v30; // rax
  char v31; // al
  unsigned int v32; // [rsp+50h] [rbp-78h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  _QWORD v34[12]; // [rsp+68h] [rbp-60h] BYREF
  int v35; // [rsp+D0h] [rbp+8h]
  int v36; // [rsp+D8h] [rbp+10h]
  struct _POINTL *v38; // [rsp+E8h] [rbp+20h]

  v38 = (struct _POINTL *)a4;
  v7 = 0;
  v8 = *(_QWORD *)this;
  v9 = (struct _POINTL *)a4;
  v32 = 0;
  v10 = a3;
  v35 = 0;
  v11 = *(_QWORD *)a2;
  v13 = *(_QWORD *)this + 40LL;
  v33 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 1) != 0 )
  {
    v16 = a6;
  }
  else
  {
    v14 = *(_BYTE *)(v8 + 302);
    if ( ((*(_DWORD *)(v11 + 36) & 1) != 0 || *(_DWORD *)(v11 + 32) == 1)
      && ((gulFontInformation & 2) != 0 && v14 != 3 || (unsigned __int8)(v14 - 4) <= 2u)
      && *(_QWORD *)(v11 + 512) )
    {
      GreAcquireHmgrSemaphore(gulFontInformation, v8);
      v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 512LL) + 96LL);
      v32 = v15;
      if ( v15 == 6 || v15 >= 4 && v15 <= 5 )
      {
        v35 = 0x10000;
        if ( v14 == 6 )
        {
          v35 = 1342242816;
        }
        else if ( v14 == 5 || (gulFontInformation & 0x10) != 0 )
        {
          v35 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      v9 = v38;
      v10 = a3;
    }
    v16 = a6;
    if ( !a6 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(gpGdiSharedMemory + 1573016LL) )
      {
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
      }
      if ( *(int *)(*(_QWORD *)this + 32LL) > 0 )
      {
        LODWORD(a4) = 1;
        v17 = v13;
        v36 = 1;
        do
        {
          if ( v33 == *(_QWORD *)v13
            && *(float *)(v13 + 8) == *(float *)(v11 + 336)
            && *(float *)(v13 + 12) == *(float *)(v11 + 340)
            && *(float *)(v13 + 16) == *(float *)(v11 + 344)
            && *(float *)(v13 + 20) == *(float *)(v11 + 348) )
          {
            v18 = *(struct PFE **)(v13 + 24);
            if ( v18 )
            {
              v34[0] = *(_QWORD *)v18;
              if ( *(struct PFT **const *)(v34[0] + 128LL) != gpPFTPrivate
                || (v30 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v34), LODWORD(a4) = v36, v30) )
              {
                if ( v35 )
                {
                  if ( (*(_DWORD *)(v13 + 32) & 0x10010000) == v35 && v32 == *(_DWORD *)(v13 + 48) )
                  {
LABEL_27:
                    v19 = 56LL * v7;
                    *a3 = *(_DWORD *)(v19 + v17 + 32);
                    v38->x = *(_DWORD *)(v19 + v17 + 36);
                    v38->y = *(_DWORD *)(v19 + v17 + 40);
                    v20 = *(_DWORD *)(v19 + v17 + 44);
                    v21 = a5;
                    *a5 = v20;
                    goto LABEL_28;
                  }
                }
                else if ( (*(_DWORD *)(v13 + 32) & 0x10000) == 0 )
                {
                  goto LABEL_27;
                }
              }
            }
            v23 = *(_DWORD *)(*(_QWORD *)this + 32LL);
            if ( (int)a4 < v23 )
            {
              memmove(
                (void *)(v17 + 56LL * v7),
                (const void *)(v17 + 56LL * (int)a4),
                (unsigned int)(56 * (v23 - v7) - 56));
              LODWORD(a4) = v36;
            }
            --v7;
            LODWORD(a4) = a4 - 1;
            --*(_DWORD *)(*(_QWORD *)this + 32LL);
            v13 -= 56LL;
          }
          a4 = (unsigned int)(a4 + 1);
          ++v7;
          v36 = a4;
          v13 += 56LL;
        }
        while ( v7 < *(_DWORD *)(*(_QWORD *)this + 32LL) );
        v9 = v38;
        v13 = v17;
        v10 = a3;
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 28LL) & 2) == 0 || (*(_DWORD *)(*(_QWORD *)a2 + 536LL) & 3) == 1 )
    v24 = 0;
  else
    v24 = 64;
  v21 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 276LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 208LL),
             a4,
             v24,
             v10,
             v9,
             a5,
             v16);
  v18 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 1) == 0 )
    {
      if ( v35 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
        {
          *a3 |= 0x10000u;
          v25 = *(_QWORD *)a2;
          v26 = *a3;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) != 0 || *(_DWORD *)(v25 + 32) == 1 )
          {
            if ( *(_QWORD *)(v25 + 512) )
            {
              if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
              {
                v27 = *(_BYTE *)(*(_QWORD *)this + 302LL);
                if ( v27 != 4 && ((unsigned __int8)(v27 - 5) <= 1u || (gulFontInformation & 0x12) == 0x12) )
                {
                  if ( v27 == 6 )
                    v28 = v26 | 0x50000000;
                  else
                    v28 = v26 | 0x10000000;
                  *a3 = v28;
                }
              }
            }
          }
        }
      }
      if ( !v16 )
      {
        if ( v7 >= 3 )
        {
          v7 = 0;
          *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        }
        v29 = 56LL * v7;
        *(_QWORD *)(v29 + v13) = v33;
        *(_QWORD *)(v29 + v13 + 24) = result;
        *(_DWORD *)(v29 + v13 + 32) = *a3;
        *(_DWORD *)(v29 + v13 + 36) = v38->x;
        *(_DWORD *)(v29 + v13 + 40) = v38->y;
        *(_DWORD *)(v29 + v13 + 8) = *(_DWORD *)(v11 + 336);
        *(_DWORD *)(v29 + v13 + 12) = *(_DWORD *)(v11 + 340);
        *(_DWORD *)(v29 + v13 + 16) = *(_DWORD *)(v11 + 344);
        *(_DWORD *)(v29 + v13 + 20) = *(_DWORD *)(v11 + 348);
        *(_DWORD *)(v29 + v13 + 44) = *a5;
        *(_DWORD *)(v29 + v13 + 48) = v32;
        ++*(_DWORD *)(*(_QWORD *)this + 32LL);
      }
    }
LABEL_28:
    if ( !fFontAssocStatus || (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) != 0 )
      goto LABEL_29;
    v31 = fFontAssocStatus | gForceFontAssocCodePage;
    if ( *((_BYTE *)v21 + 3) )
    {
      if ( *((unsigned __int8 *)v21 + 3) != 255 || (v31 & 1) == 0 )
        goto LABEL_29;
    }
    else if ( (v31 & 2) == 0 )
    {
      goto LABEL_29;
    }
    *v21 = *v21 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
LABEL_29:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 64LL) = *v21 >> 8;
    result = v18;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) &= ~0x10u;
  }
  return result;
}
