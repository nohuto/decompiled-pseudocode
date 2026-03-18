/*
 * XREFs of ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F56B8
 * Callers:
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C003BEFC (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00C15BC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00C16B8 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0273D04 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C003BEFC (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall bComputeQuickLookup(struct _QUICKLOOKUP *a1, struct PFE *a2, int a3)
{
  ULONG v3; // ebx
  struct _QUICKLOOKUP *v5; // rsi
  unsigned __int16 v6; // r14
  int v7; // edi
  struct _FD_GLYPHSET *v8; // rax
  struct _FD_GLYPHSET *v9; // r15
  ULONG cRuns; // eax
  WCRUN *awcrun; // rdx
  __int64 v12; // r9
  int wcLow; // r8d
  int cGlyphs; // r10d
  void **v15; // rsi
  USHORT v16; // r14
  __int64 v17; // r10
  int v18; // r11d
  unsigned int v19; // eax
  __int64 v20; // r9
  __int64 v22; // r10
  unsigned int v23; // edi
  unsigned int v24; // r8d
  unsigned int v25; // eax
  _DWORD *v26; // rdi
  unsigned __int64 i; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // [rsp+68h] [rbp+10h]
  __int64 *v31; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v31 = (__int64 *)a2;
  v5 = a1;
  v6 = 0;
  LOWORD(v7) = -1;
  if ( a2 )
  {
    if ( !a1 )
      v5 = PFEOBJ::pql((struct PFE **)&v31);
    if ( !a3 && *((_QWORD *)v5 + 1) )
    {
      return 1;
    }
    else
    {
      v8 = PFEOBJ::pfdg(&v31);
      v9 = v8;
      if ( v8 )
      {
        cRuns = v8->cRuns;
        if ( cRuns )
        {
          awcrun = v9->awcrun;
          v12 = cRuns;
          do
          {
            wcLow = awcrun->wcLow;
            cGlyphs = awcrun->cGlyphs;
            if ( (unsigned __int16)v7 > (unsigned __int16)wcLow )
              LOWORD(v7) = awcrun->wcLow;
            if ( v6 < (unsigned int)(wcLow + cGlyphs) )
              v6 = wcLow + cGlyphs - 1;
            ++awcrun;
            --v12;
          }
          while ( v12 );
        }
        *(_WORD *)v5 = v7;
        *((_WORD *)v5 + 1) = v6;
        v15 = (void **)((char *)v5 + 8);
        if ( a3 )
        {
          if ( *v15 )
            memset(*v15, 0, 0x2000uLL);
          else
            *v15 = PALLOCMEM2(0x2000uLL, 1802400071LL, 1);
          LOWORD(v7) = 0;
        }
        else
        {
          *v15 = PALLOCMEM2((unsigned int)(4 * ((v6 - (unsigned __int16)v7 + 32) / 32)), 1802400071LL, 1);
        }
        if ( *v15 )
        {
          if ( v9->cRuns )
          {
            v7 = (unsigned __int16)v7;
            v30 = (unsigned __int16)v7;
            do
            {
              v16 = v9->awcrun[v3].cGlyphs;
              v17 = (unsigned int)((v9->awcrun[v3].wcLow - v7) / 32);
              v18 = (v9->awcrun[v3].wcLow - v7) % 32;
              v19 = (v9->awcrun[v3].wcLow - 1 + v16 - v7) / 32;
              v20 = v19;
              if ( (_DWORD)v17 == v19 )
              {
                *((_DWORD *)*v15 + v17) |= (unsigned int)(-1 << (32 - v16)) >> v18;
              }
              else
              {
                *((_DWORD *)*v15 + v17) |= 0xFFFFFFFF >> v18;
                v22 = (unsigned int)(v17 + 1);
                v23 = v19 - v22;
                v24 = v22;
                if ( (unsigned int)v22 < v19
                  && v23 >= 4
                  && ((char *)*v15 + 4 * v22 > (char *)v15 || (char *)*v15 + 4 * v19 - 4 < (char *)v15) )
                {
                  v25 = v19 - (v23 & 3);
                  do
                    v24 += 4;
                  while ( v24 < v25 );
                  v26 = (char *)*v15 + 4 * v22;
                  for ( i = (16 * ((unsigned __int64)(v25 - (unsigned int)v22 + 3) >> 2)) >> 2; i; --i )
                    *v26++ = -1;
                }
                if ( v24 < (unsigned int)v20 )
                {
                  v28 = 4LL * v24;
                  v29 = (unsigned int)v20 - v24;
                  do
                  {
                    *(_DWORD *)((char *)*v15 + v28) = -1;
                    v28 += 4LL;
                    --v29;
                  }
                  while ( v29 );
                }
                *((_DWORD *)*v15 + v20) |= -1 << (31 - (v9->awcrun[v3].wcLow - v30 - 1 + v9->awcrun[v3].cGlyphs) % 32);
              }
              v7 = v30;
              ++v3;
            }
            while ( v3 < v9->cRuns );
          }
          PFEOBJ::vFreepfdg(&v31);
          return 1;
        }
        else
        {
          PFEOBJ::vFreepfdg(&v31);
        }
      }
    }
  }
  return v3;
}
