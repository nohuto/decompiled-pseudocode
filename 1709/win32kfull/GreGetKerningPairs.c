/*
 * XREFs of GreGetKerningPairs @ 0x1C01301D8
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1C01300F0 (NtGdiGetKerningPairs.c)
 *     GreGetCharacterPlacementW @ 0x1C0294920 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C01303D4 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C01305AC (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  char v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _FD_XFORM *v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // r15
  unsigned __int64 v12; // r9
  struct _FD_KERNINGPAIR *v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdx
  struct _FD_XFORM *v18; // [rsp+20h] [rbp-68h] BYREF
  struct _FD_KERNINGPAIR *v19; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-58h] BYREF
  float v21; // [rsp+40h] [rbp-48h] BYREF
  int v22; // [rsp+44h] [rbp-44h]
  _QWORD v23[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v24; // [rsp+58h] [rbp-30h]
  unsigned __int64 v25; // [rsp+60h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( !v23[0] )
    goto LABEL_27;
  v5 = 0;
  v18 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v18, (struct XDCOBJ *)v23, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v18[33].eXX);
  if ( !v18
    || (v8 = v18,
        v20[0] = *(_QWORD *)&v18[7].eXX,
        !bGetNtoWScale((struct EFLOAT *)&v21, (struct DCOBJ *)v23, (struct RFONTOBJ *)&v18, (struct PFEOBJ *)v20)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18, v6, v7);
LABEL_27:
    DCOBJ::~DCOBJ((DCOBJ *)v23);
    return 0LL;
  }
  v9 = *(_QWORD **)&v8[7].eXX;
  v10 = *(_QWORD *)&v18[7].eYX;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 32LL) & 0x8000) != 0 )
  {
    v20[0] = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v5 = 1;
    ++*(_DWORD *)(v10 + 68);
    SEMOBJ::vUnlock((SEMOBJ *)v20);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18, v6, v7);
  v20[0] = v9;
  if ( a2 && a3 )
  {
    if ( PFEOBJ::cKernPairs((PFEOBJ *)v20, &v19) < a2 )
      a2 = PFEOBJ::cKernPairs((PFEOBJ *)v20, &v19);
    v12 = a3 + 8LL * a2;
    while ( a3 < v12 )
    {
      v13 = v19;
      *(_WORD *)a3 = v19->wcFirst;
      *(_WORD *)(a3 + 2) = v13->wcSecond;
      LODWORD(v14) = 0;
      *(float *)&v18 = (float)v13->fwdKern * v21;
      v15 = (unsigned __int8)((int)v18 >> 23) - 118;
      v22 = v15;
      if ( v15 <= 40 )
      {
        v16 = (unsigned int)v18 & 0x7FFFFF | 0x800000LL;
        v24 = v16;
        if ( v15 < 0 )
          v17 = v16 >> (118 - (unsigned __int8)((int)v18 >> 23));
        else
          v17 = v16 << v15;
        v24 = v17 + 0x80000000LL;
        v14 = (v17 + 0x80000000LL) >> 32;
        v22 = v14;
        if ( (int)v18 < 0 )
          LODWORD(v14) = -(int)v14;
      }
      *(_DWORD *)(a3 + 4) = v14;
      ++v19;
      a3 += 8LL;
      v25 = a3;
    }
  }
  else
  {
    a2 = *(_DWORD *)(v9[4] + 164LL);
  }
  if ( v5 )
  {
    v20[0] = *v9;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v20);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return a2;
}
