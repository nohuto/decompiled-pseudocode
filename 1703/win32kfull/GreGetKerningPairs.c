/*
 * XREFs of GreGetKerningPairs @ 0x1C01283C8
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1C01282E0 (NtGdiGetKerningPairs.c)
 *     GreGetCharacterPlacementW @ 0x1C0298268 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C002C974 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C01285C4 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C0128954 (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  char v5; // r14
  struct _FD_XFORM *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v10; // r9
  struct _FD_KERNINGPAIR *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  struct _FD_XFORM *v16; // [rsp+20h] [rbp-68h] BYREF
  struct _FD_KERNINGPAIR *v17; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  float v19; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+44h] [rbp-44h]
  _QWORD v21[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v22; // [rsp+58h] [rbp-30h]
  unsigned __int64 v23; // [rsp+60h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  if ( !v21[0] )
    goto LABEL_27;
  v5 = 0;
  v16 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v16, (struct XDCOBJ *)v21, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v16[33].eXX);
  if ( !v16
    || (v6 = v16,
        v18[0] = *(_QWORD *)&v16[7].eXX,
        !bGetNtoWScale((struct EFLOAT *)&v19, (struct DCOBJ *)v21, (struct RFONTOBJ *)&v16, (struct PFEOBJ *)v18)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
LABEL_27:
    DCOBJ::~DCOBJ((DCOBJ *)v21);
    return 0LL;
  }
  v7 = *(_QWORD **)&v6[7].eXX;
  v8 = *(_QWORD *)&v16[7].eYX;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 88) + 32LL) & 0x8000) != 0 )
  {
    v18[0] = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v5 = 1;
    ++*(_DWORD *)(v8 + 68);
    SEMOBJ::vUnlock((SEMOBJ *)v18);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
  v18[0] = v7;
  if ( a2 && a3 )
  {
    if ( PFEOBJ::cKernPairs((PFEOBJ *)v18, &v17) < a2 )
      a2 = PFEOBJ::cKernPairs((PFEOBJ *)v18, &v17);
    v10 = a3 + 8LL * a2;
    while ( a3 < v10 )
    {
      v11 = v17;
      *(_WORD *)a3 = v17->wcFirst;
      *(_WORD *)(a3 + 2) = v11->wcSecond;
      LODWORD(v12) = 0;
      *(float *)&v16 = (float)v11->fwdKern * v19;
      v13 = (unsigned __int8)((int)v16 >> 23) - 118;
      v20 = v13;
      if ( v13 <= 40 )
      {
        v14 = (unsigned int)v16 & 0x7FFFFF | 0x800000LL;
        v22 = v14;
        if ( v13 < 0 )
          v15 = v14 >> (118 - (unsigned __int8)((int)v16 >> 23));
        else
          v15 = v14 << v13;
        v22 = v15 + 0x80000000LL;
        v12 = (v15 + 0x80000000LL) >> 32;
        v20 = v12;
        if ( (int)v16 < 0 )
          LODWORD(v12) = -(int)v12;
      }
      *(_DWORD *)(a3 + 4) = v12;
      ++v17;
      a3 += 8LL;
      v23 = a3;
    }
  }
  else
  {
    a2 = *(_DWORD *)(v7[4] + 164LL);
  }
  if ( v5 )
  {
    v18[0] = *v7;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v18);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v21);
  return a2;
}
