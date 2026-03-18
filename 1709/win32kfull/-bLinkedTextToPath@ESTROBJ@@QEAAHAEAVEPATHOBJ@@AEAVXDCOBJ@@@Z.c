/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C029645C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C000D0F8 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C0282DEC (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296678 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(STROBJ *pstro, __int64 pgp, struct XDCOBJ *a3)
{
  __int64 v3; // rax
  __int64 cGlyphs; // r8
  struct EPATHOBJ *v5; // r13
  struct RFONTOBJ *v6; // rsi
  WCHAR *pwszOrg; // r15
  ULONG v9; // edi
  unsigned __int64 v10; // r8
  int v11; // r12d
  struct RFONTOBJ *v12; // rcx
  int v13; // eax
  struct XDCOBJ *v14; // rax
  _DWORD *v15; // r9
  WCHAR *v16; // r14
  WCHAR *v17; // r10
  unsigned __int64 v18; // r11
  __int64 result; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp+40h]
  struct XDCOBJ *v21; // [rsp+70h] [rbp+50h] BYREF
  struct _POINTL v22; // [rsp+78h] [rbp+58h] BYREF

  v21 = a3;
  v3 = *(_QWORD *)&pstro[4].rclBkGround.bottom;
  cGlyphs = pstro->cGlyphs;
  v5 = (struct EPATHOBJ *)pgp;
  v6 = *(struct RFONTOBJ **)&pstro[1].ulCharInc;
  pwszOrg = pstro->pwszOrg;
  v9 = 0;
  pstro->pgp = 0LL;
  v10 = v3 + 4 * cGlyphs;
  *(_QWORD *)&pstro->flAccel = 0LL;
  v20 = v10;
  v11 = *(_DWORD *)(*(_QWORD *)v6 + 848LL) + 4;
  if ( v11 <= 0 )
  {
LABEL_35:
    pstro->pwszOrg = pwszOrg;
    result = 1LL;
    *(_QWORD *)&pstro[1].ulCharInc = v6;
    return result;
  }
  while ( 1 )
  {
    v21 = 0LL;
    *(_QWORD *)&pstro[1].ulCharInc = v6;
    if ( v9 )
    {
      switch ( v9 )
      {
        case 1u:
          if ( !pstro[5].rclBkGround.left )
            goto LABEL_33;
          v14 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 728LL);
          break;
        case 2u:
          if ( !pstro[5].rclBkGround.top )
            goto LABEL_33;
          v14 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 736LL);
          break;
        case 3u:
          if ( !pstro[5].rclBkGround.right )
            goto LABEL_33;
          v14 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 744LL);
          break;
        default:
          pgp = (__int64)pstro[5].pgp;
          if ( pgp )
            v13 = *(_DWORD *)(pgp + 4LL * (v9 - 4));
          else
            v13 = 0;
          if ( !v13 )
            goto LABEL_33;
          pgp = v9 - 4;
          v14 = *(struct XDCOBJ **)(*(_QWORD *)(*(_QWORD *)v6 + 752LL) + 8 * pgp);
          break;
      }
      if ( !v14 )
        goto LABEL_32;
      v21 = v14;
      v12 = (struct RFONTOBJ *)&v21;
    }
    else
    {
      v12 = v6;
    }
    v15 = *(_DWORD **)&pstro[4].rclBkGround.bottom;
    v16 = *(WCHAR **)&pstro[4].rclBkGround.top;
    v17 = pwszOrg;
    v10 = (v10 - (unsigned __int64)v15 + 3) >> 2;
    pgp = 0LL;
    v18 = 0LL;
    if ( (unsigned __int64)v15 > v20 )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        if ( *v15 == v9 )
        {
          *v16++ = *v17;
          pgp = (unsigned int)(pgp + 1);
        }
        ++v17;
        ++v15;
        ++v18;
      }
      while ( v18 < v10 );
      if ( (_DWORD)pgp )
      {
        pstro->pwszOrg = *(LPWSTR *)&pstro[4].rclBkGround.top;
        pstro->cGlyphs = pgp;
        *(_QWORD *)&pstro[1].ulCharInc = v12;
        pstro[5].cGlyphs = v9;
        pstro[1].cGlyphs = 0;
        if ( v9 )
        {
          if ( (unsigned int)bAdjusBaseLine(v12, (struct RFONTOBJ *)&v21, &v22) )
            ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)pstro, &v22);
        }
        if ( !(unsigned int)ESTROBJ::bTextToPathWorkhorse(pstro, v5) )
          break;
      }
    }
LABEL_33:
    v21 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21, pgp, v10);
    if ( (int)++v9 >= v11 )
      goto LABEL_35;
    v10 = v20;
  }
  pstro->pwszOrg = pwszOrg;
  *(_QWORD *)&pstro[1].ulCharInc = v6;
LABEL_32:
  v21 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21, pgp, v10);
  return 0LL;
}
