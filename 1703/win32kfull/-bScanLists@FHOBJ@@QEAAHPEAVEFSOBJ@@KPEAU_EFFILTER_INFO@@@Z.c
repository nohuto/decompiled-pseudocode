/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C002DEA8
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C002CD1C (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C002E9A8 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C002ED28 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C011260C (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0297DDC (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, int a3, struct _EFFILTER_INFO *a4)
{
  struct EFSOBJ *v6; // rdi
  unsigned int v7; // r12d
  __int64 i; // rbp
  __int64 *v9; // rbx
  int v10; // eax
  _DWORD *v11; // r8
  int v12; // edx
  _QWORD *v13; // r14
  int v14; // r15d
  __int64 v15; // rdx
  struct tagPvtData *v17; // rax
  unsigned int v18; // eax
  __int64 *v20; // [rsp+38h] [rbp-70h] BYREF
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a2;
  v7 = (a3 == 2) | 2;
  if ( a3 != 3 )
    v7 = a3 == 2;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
      return 1LL;
    v13 = *(_QWORD **)(i + 8);
    if ( v13 )
    {
      if ( (*(_DWORD *)(i + 32) & 2) == 0 )
        break;
    }
LABEL_11:
    ;
  }
  v14 = 0;
  *((_DWORD *)a4 + 7) = 1;
  memset(v22, 0, sizeof(v22));
  *((_DWORD *)a4 + 8) = *(_DWORD *)(i + 24);
  while ( 1 )
  {
    v9 = (__int64 *)v13[1];
    v20 = v9;
    v10 = *((_DWORD *)v9 + 3);
    v11 = (_DWORD *)v9[4];
    if ( (v10 & 2) != 0 )
      goto LABEL_10;
    v12 = v11[12];
    if ( (v12 & 0x800000) != 0 || (v10 & 8) != 0 || *((_DWORD *)a4 + 6) && (v12 & 2) != 0 )
      goto LABEL_10;
    if ( *((_DWORD *)a4 + 3) && (v12 & 1) != 0
      || *((_DWORD *)a4 + 4) && (v12 & 1) == 0
      || *(_DWORD *)a4
      && (v12 & 2) != 0
      && (v10 & 1) == 0
      && (*((_DWORD *)a4 + 1) != v11[32] || *((_DWORD *)a4 + 2) != v11[33])
      || *((_DWORD *)a4 + 7) && *((_DWORD *)a4 + 8) && (v12 & 2) != 0 )
    {
      goto LABEL_10;
    }
    v15 = *v9;
    v21 = v15;
    if ( *(struct PFT **const *)(v15 + 128) == gpPFTPrivate )
    {
      v17 = PFFOBJ::pPvtDataMatch((PFFOBJ *)&v21);
      if ( !v17 || *((_DWORD *)v17 + 1) )
        goto LABEL_10;
    }
    else if ( !*(_DWORD *)(v15 + 56) )
    {
      goto LABEL_10;
    }
    if ( *((_DWORD *)a4 + 5) && (*((_DWORD *)v9 + 3) & 1) == 0 || (*((_DWORD *)v9 + 3) & 0x44) != 0 )
      goto LABEL_10;
    if ( *((_DWORD *)a4 + 9) != 1 )
    {
      if ( jMapCharset(*((_BYTE *)a4 + 36), (struct PFEOBJ *)&v20) != *((_BYTE *)a4 + 36) )
        goto LABEL_10;
      v6 = a2;
    }
    if ( a3 != 1 )
      break;
    v18 = efstyCompute(v22, &v20);
    if ( !v14 || v18 == 5 )
    {
      if ( !(unsigned int)EFSOBJ::bAdd(v6, v9, v18, 0LL, 1) )
        return 0LL;
      v14 = 1;
    }
LABEL_10:
    v13 = (_QWORD *)*v13;
    v6 = a2;
    if ( !v13 )
      goto LABEL_11;
  }
  if ( (unsigned int)EFSOBJ::bAdd(v6, v9, 0LL, v7, *((_DWORD *)a4 + 9)) )
    goto LABEL_11;
  return 0LL;
}
