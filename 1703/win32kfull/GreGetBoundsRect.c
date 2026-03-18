/*
 * XREFs of GreGetBoundsRect @ 0x1C00E0588
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C00E0520 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  DC *v5; // rdx
  unsigned int v6; // edi
  char *v7; // rbx
  struct REGION *v9; // rax
  __int64 v10; // rcx
  LONG v11; // edx
  LONG v12; // r9d
  LONG v13; // r10d
  LONG v14; // ecx
  __int128 v15; // xmm0
  LONG v16; // ecx
  LONG v17; // eax
  LONG v18; // edx
  LONG v19; // r8d
  LONG v20; // eax
  LONG v21; // r9d
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // edx
  LONG v28; // r8d
  LONG v29; // ecx
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // r9d
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  DC *v38; // [rsp+20h] [rbp-59h] BYREF
  int v39; // [rsp+28h] [rbp-51h]
  int v40; // [rsp+2Ch] [rbp-4Dh]
  __m128i v41; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v42[32]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v43; // [rsp+60h] [rbp-19h]
  int v44; // [rsp+68h] [rbp-11h]
  int v45; // [rsp+6Ch] [rbp-Dh]
  struct _POINTL v46[2]; // [rsp+90h] [rbp+17h] BYREF
  LONG x; // [rsp+A0h] [rbp+27h]
  LONG y; // [rsp+A4h] [rbp+2Bh]
  LONG v49; // [rsp+A8h] [rbp+2Fh]
  LONG v50; // [rsp+ACh] [rbp+33h]

  v38 = 0LL;
  v39 = 0;
  v40 = 0;
  XDCOBJ::vLock(&v38, a1);
  v5 = v38;
  v6 = 3;
  if ( !v38 )
    return 0;
  v7 = 0LL;
  if ( a3 < 0 )
  {
    v7 = (char *)v38 + 1480;
    if ( *((_DWORD *)v38 + 370) < *((_DWORD *)v38 + 372) && *((_DWORD *)v38 + 371) < *((_DWORD *)v38 + 373) )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( (a3 & 0x4000) != 0 )
  {
    v7 = (char *)v38 + 1496;
    if ( !IsRectEmptyInl((const struct tagRECT *)((char *)v38 + 1496)) )
    {
LABEL_9:
      *(_OWORD *)&a2->x = *(_OWORD *)v7;
      goto LABEL_10;
    }
    goto LABEL_4;
  }
  if ( IsRectEmptyInl((const struct tagRECT *)((char *)v38 + 1512)) )
  {
LABEL_4:
    v6 = 1;
    goto LABEL_5;
  }
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v42, (struct XDCOBJ *)&v38, 0);
  if ( (v42[24] & 1) != 0 )
  {
    v9 = XDCOBJ::prgnEffRao(&v38);
    v7 = (char *)v38 + 1512;
    v41 = *(__m128i *)((char *)v9 + 88);
    v10 = (*((_BYTE *)v38 + 40) & 1) != 0 ? 8 : 0;
    v11 = _mm_cvtsi128_si32(v41) - *(_DWORD *)((char *)v38 + v10 + 1432);
    v12 = v41.m128i_i32[2] - *(_DWORD *)((char *)v38 + v10 + 1432);
    LODWORD(v9) = *(_DWORD *)((char *)v38 + v10 + 1436);
    v13 = v41.m128i_i32[3] - (_DWORD)v9;
    v14 = v41.m128i_i32[1] - (_DWORD)v9;
    if ( *((_DWORD *)v38 + 378) > v11 )
      v11 = *(_DWORD *)v7;
    a2->x = v11;
    if ( *((_DWORD *)v7 + 2) < v12 )
      v12 = *((_DWORD *)v7 + 2);
    a2[1].x = v12;
    if ( *((_DWORD *)v7 + 1) > v14 )
      v14 = *((_DWORD *)v7 + 1);
    a2->y = v14;
    if ( *((_DWORD *)v7 + 3) < v13 )
      v13 = *((_DWORD *)v7 + 3);
    a2[1].y = v13;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v41, (struct XDCOBJ *)&v38, 1026);
    if ( !v41.m128i_i64[0] )
      goto LABEL_28;
    if ( (*(_BYTE *)(v41.m128i_i64[0] + 32) & 1) != 0 )
    {
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)&v41, a2, 2LL) )
        goto LABEL_26;
      goto LABEL_28;
    }
    v15 = *(_OWORD *)&a2->x;
    x = a2->x;
    y = a2[1].y;
    v49 = a2[1].x;
    v50 = a2->y;
    *(_OWORD *)&v46[0].x = v15;
    if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)&v41, v46, 4LL) )
    {
LABEL_28:
      v6 = 0;
      goto LABEL_26;
    }
    v16 = v46[1].x;
    v17 = v46[1].x;
    v18 = v46[0].x;
    v19 = x;
    if ( v46[0].x < v46[1].x )
      v17 = v46[0].x;
    if ( v17 >= x )
    {
      v20 = x;
    }
    else
    {
      v20 = v46[1].x;
      if ( v46[0].x < v46[1].x )
        v20 = v46[0].x;
    }
    v21 = v49;
    if ( v20 >= v49 )
    {
      v23 = v49;
    }
    else
    {
      v22 = v46[1].x;
      if ( v46[0].x < v46[1].x )
        v22 = v46[0].x;
      if ( v22 >= x )
      {
        v23 = x;
      }
      else
      {
        v23 = v46[1].x;
        if ( v46[0].x < v46[1].x )
          v23 = v46[0].x;
      }
    }
    a2->x = v23;
    v24 = v16;
    if ( v18 > v16 )
      v24 = v18;
    if ( v24 <= v19 )
    {
      v25 = v19;
    }
    else
    {
      v25 = v16;
      if ( v18 > v16 )
        v25 = v18;
    }
    if ( v25 <= v21 )
    {
      v16 = v21;
    }
    else
    {
      v26 = v16;
      if ( v18 > v16 )
        v26 = v18;
      if ( v26 <= v19 )
      {
        v16 = v19;
      }
      else if ( v18 > v16 )
      {
        v16 = v18;
      }
    }
    v27 = v46[0].y;
    v28 = y;
    a2[1].x = v16;
    v29 = v46[1].y;
    v30 = v46[1].y;
    if ( v27 < v46[1].y )
      v30 = v27;
    if ( v30 >= v28 )
    {
      v31 = v28;
    }
    else
    {
      v31 = v46[1].y;
      if ( v27 < v46[1].y )
        v31 = v27;
    }
    v32 = v50;
    if ( v31 >= v50 )
    {
      v34 = v50;
    }
    else
    {
      v33 = v46[1].y;
      if ( v27 < v46[1].y )
        v33 = v27;
      if ( v33 >= v28 )
      {
        v34 = v28;
      }
      else
      {
        v34 = v46[1].y;
        if ( v27 < v46[1].y )
          v34 = v27;
      }
    }
    a2->y = v34;
    v35 = v29;
    if ( v27 > v29 )
      v35 = v27;
    if ( v35 <= v28 )
    {
      v36 = v28;
    }
    else
    {
      v36 = v29;
      if ( v27 > v29 )
        v36 = v27;
    }
    if ( v36 <= v32 )
    {
      v29 = v32;
    }
    else
    {
      v37 = v29;
      if ( v27 > v29 )
        v37 = v27;
      if ( v37 <= v28 )
      {
        v29 = v28;
      }
      else if ( v27 > v29 )
      {
        v29 = v27;
      }
    }
    a2[1].y = v29;
  }
  else
  {
    v6 = XDCOBJ::bFullScreen((XDCOBJ *)&v38) != 0;
  }
LABEL_26:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v42);
  v5 = v38;
  if ( v6 == 3 )
  {
LABEL_10:
    if ( (a3 & 1) != 0 )
    {
      *((_DWORD *)v7 + 1) = 0x7FFFFFFF;
      *(_DWORD *)v7 = 0x7FFFFFFF;
      *((_DWORD *)v7 + 3) = 0x80000000;
      *((_DWORD *)v7 + 2) = 0x80000000;
      v5 = v38;
    }
  }
LABEL_5:
  if ( v5 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v38);
    _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
  }
  return v6;
}
