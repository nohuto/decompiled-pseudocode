/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00AF470
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00384F8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetTextFaceW @ 0x1C00AEF00 (GreGetTextFaceW.c)
 *     GreGetCharSet @ 0x1C00B0B68 (GreGetCharSet.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026A3B0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00AEB2C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02944AC (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v6; // rdi
  struct _POINTL *v7; // rsi
  int v8; // r13d
  __int64 v10; // r11
  __int64 v12; // rbp
  char v13; // bl
  unsigned int v14; // eax
  int v15; // r12d
  int v16; // r9d
  int v17; // r10d
  __int64 v18; // rbx
  struct PFE *v19; // rsi
  int v20; // ecx
  char v21; // al
  unsigned int *v22; // rbx
  struct PFE *result; // rax
  __int64 v24; // rcx
  unsigned int v25; // edx
  char v26; // r8
  int v27; // edx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // ecx
  struct tagPvtData *v31; // rax
  char v32; // al
  unsigned int v33; // [rsp+50h] [rbp-68h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  _QWORD v35[11]; // [rsp+60h] [rbp-58h] BYREF
  int v36; // [rsp+C0h] [rbp+8h]
  int v37; // [rsp+C8h] [rbp+10h]

  v6 = *(_QWORD *)a2;
  v7 = a4;
  v8 = 0;
  v36 = 0;
  v33 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v12 = *(_QWORD *)this + 40LL;
  v34 = v10;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 1) != 0 )
  {
    v15 = a6;
  }
  else
  {
    v13 = *(_BYTE *)(*(_QWORD *)this + 302LL);
    if ( ((*(_DWORD *)(v6 + 36) & 1) != 0 || *(_DWORD *)(v6 + 32) == 1)
      && ((gulFontInformation & 2) != 0 && v13 != 3 || (unsigned __int8)(v13 - 4) <= 2u)
      && *(_QWORD *)(v6 + 512) )
    {
      GreAcquireHmgrSemaphore();
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 512LL) + 96LL);
      v33 = v14;
      if ( v14 == 6 || v14 >= 4 && v14 <= 5 )
      {
        v8 = 0x10000;
        if ( v13 == 6 )
        {
          v8 = 1342242816;
        }
        else if ( v13 == 5 || (gulFontInformation & 0x10) != 0 )
        {
          v8 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      v10 = v34;
    }
    v15 = a6;
    if ( !a6 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(gpGdiSharedMemory + 1573016LL) )
      {
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
      }
      v16 = 0;
      v36 = 0;
      if ( *(int *)(*(_QWORD *)this + 32LL) > 0 )
      {
        v17 = 1;
        v18 = v12;
        v37 = 1;
        while ( 1 )
        {
          if ( v10 == *(_QWORD *)v18
            && *(float *)(v18 + 8) == *(float *)(v6 + 336)
            && *(float *)(v18 + 12) == *(float *)(v6 + 340)
            && *(float *)(v18 + 16) == *(float *)(v6 + 344)
            && *(float *)(v18 + 20) == *(float *)(v6 + 348) )
          {
            v19 = *(struct PFE **)(v18 + 24);
            if ( v19 )
            {
              v35[0] = *(_QWORD *)v19;
              if ( *(struct PFT **const *)(v35[0] + 128LL) != gpPFTPrivate
                || (v31 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v35), v16 = v36, v17 = v37, v10 = v34, v31) )
              {
                if ( v8 )
                {
                  if ( (*(_DWORD *)(v18 + 32) & 0x10010000) == v8 && v33 == *(_DWORD *)(v18 + 48) )
                  {
LABEL_53:
                    v22 = a5;
                    *a3 = *(_DWORD *)(56LL * v16 + v12 + 32);
                    a4->x = *(_DWORD *)(56LL * v16 + v12 + 36);
                    a4->y = *(_DWORD *)(56LL * v16 + v12 + 40);
                    *a5 = *(_DWORD *)(56LL * v16 + v12 + 44);
                    goto LABEL_54;
                  }
                }
                else if ( (*(_DWORD *)(v18 + 32) & 0x10000) == 0 )
                {
                  goto LABEL_53;
                }
              }
            }
            v20 = *(_DWORD *)(*(_QWORD *)this + 32LL);
            if ( v17 < v20 )
            {
              memmove(
                (void *)(v12 + 56LL * v16),
                (const void *)(v12 + 56LL * v17),
                (unsigned int)(56 * (v20 - v16) - 56));
              v16 = v36;
              v17 = v37;
              v10 = v34;
            }
            --v16;
            --v17;
            --*(_DWORD *)(*(_QWORD *)this + 32LL);
            v18 -= 56LL;
          }
          ++v16;
          ++v17;
          v36 = v16;
          v18 += 56LL;
          v37 = v17;
          if ( v16 >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
          {
            v7 = a4;
            break;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 28LL) & 2) != 0
    && ((v30 = *(_DWORD *)(*(_QWORD *)a2 + 536LL), (v30 & 1) == 0) || (v30 & 2) != 0) )
  {
    v21 = 64;
  }
  else
  {
    v21 = 0;
  }
  v22 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 276LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 208LL),
             (__int64)a3,
             v21,
             a3,
             v7,
             a5,
             v15);
  v19 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 1) != 0 )
      goto LABEL_54;
    if ( v8 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
      {
        *a3 |= 0x10000u;
        v24 = *(_QWORD *)a2;
        v25 = *a3;
        if ( ((*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) != 0 || *(_DWORD *)(v24 + 32) == 1)
          && *(_QWORD *)(v24 + 512)
          && (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
        {
          v26 = *(_BYTE *)(*(_QWORD *)this + 302LL);
          if ( v26 == 6 )
          {
            v27 = v25 | 0x50000000;
            goto LABEL_47;
          }
          if ( v26 != 4 && (v26 == 5 || (gulFontInformation & 0x12) == 0x12) )
          {
            v27 = v25 | 0x10000000;
LABEL_47:
            *a3 = v27;
          }
        }
      }
    }
    if ( !v15 )
    {
      v28 = v36;
      if ( v36 >= 3 )
      {
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        v28 = 0;
      }
      v29 = 56LL * v28;
      *(_QWORD *)(v29 + v12) = v34;
      *(_QWORD *)(v29 + v12 + 24) = v19;
      *(_DWORD *)(v29 + v12 + 32) = *a3;
      *(_DWORD *)(v29 + v12 + 36) = a4->x;
      *(_DWORD *)(v29 + v12 + 40) = a4->y;
      *(_DWORD *)(v29 + v12 + 8) = *(_DWORD *)(v6 + 336);
      *(_DWORD *)(v29 + v12 + 12) = *(_DWORD *)(v6 + 340);
      *(_DWORD *)(v29 + v12 + 16) = *(_DWORD *)(v6 + 344);
      *(_DWORD *)(v29 + v12 + 20) = *(_DWORD *)(v6 + 348);
      *(_DWORD *)(v29 + v12 + 44) = *a5;
      *(_DWORD *)(v29 + v12 + 48) = v33;
      ++*(_DWORD *)(*(_QWORD *)this + 32LL);
    }
LABEL_54:
    if ( !fFontAssocStatus || (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) != 0 )
      goto LABEL_55;
    v32 = fFontAssocStatus | gForceFontAssocCodePage;
    if ( *((_BYTE *)v22 + 3) )
    {
      if ( *((unsigned __int8 *)v22 + 3) != 255 || (v32 & 1) == 0 )
        goto LABEL_55;
    }
    else if ( (v32 & 2) == 0 )
    {
      goto LABEL_55;
    }
    *v22 = *v22 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
LABEL_55:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 64LL) = *v22 >> 8;
    result = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) &= ~0x10u;
  }
  return result;
}
