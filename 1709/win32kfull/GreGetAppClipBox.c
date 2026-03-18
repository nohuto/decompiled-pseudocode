/*
 * XREFs of GreGetAppClipBox @ 0x1C000DDFC
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C000DDA0 (NtGdiGetAppClipBox.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027C7C (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027FF8 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  DC *v3; // r14
  struct REGION *v4; // rax
  struct REGION *v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  LONG v9; // r8d
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rbx
  bool v14; // zf
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // edx
  LONG v18; // eax
  LONG v19; // r9d
  LONG v20; // r11d
  LONG v21; // eax
  LONG v22; // edi
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // ecx
  LONG y; // r8d
  bool v27; // cc
  LONG v28; // r10d
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // esi
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  LONG v41; // ecx
  DC *v42; // [rsp+20h] [rbp-79h] BYREF
  __int64 v43; // [rsp+28h] [rbp-71h]
  int v44; // [rsp+30h] [rbp-69h] BYREF
  __int64 v45; // [rsp+38h] [rbp-61h] BYREF
  int v46; // [rsp+44h] [rbp-55h]
  _BYTE v47[32]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v48; // [rsp+70h] [rbp-29h]
  __int64 v49; // [rsp+78h] [rbp-21h]
  struct _POINTL v50; // [rsp+A0h] [rbp+7h] BYREF
  LONG v51; // [rsp+A8h] [rbp+Fh]
  LONG v52; // [rsp+ACh] [rbp+13h]
  LONG x; // [rsp+B0h] [rbp+17h]
  LONG v54; // [rsp+B4h] [rbp+1Bh]
  LONG v55; // [rsp+B8h] [rbp+1Fh]
  LONG v56; // [rsp+BCh] [rbp+23h]

  v42 = 0LL;
  v43 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v42, a1);
  if ( !v42 )
  {
    EngSetLastError(6u);
    v11 = 0;
    goto LABEL_18;
  }
  v48 = 0LL;
  v49 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v47, (struct XDCOBJ *)&v42, 1);
  if ( (v47[24] & 1) != 0 )
  {
    v3 = v42;
    if ( DC::prgnRao(v42) )
      v4 = DC::prgnRao(v3);
    else
      v4 = DC::prgnVisSnap(v3);
    v5 = v4;
    *(_OWORD *)a2 = *(_OWORD *)((char *)v4 + 88);
    if ( *a2 >= a2[2] || a2[1] >= a2[3] )
    {
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      goto LABEL_26;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)&v42, 0x80000402);
    v6 = v45;
    if ( v45 )
    {
      v3 = v42;
      v7 = *((_DWORD *)v42 + 10) & 1LL;
      *a2 -= *((_DWORD *)v42 + 2 * v7 + 358);
      a2[2] -= *((_DWORD *)v3 + 2 * v7 + 358);
      a2[1] -= *((_DWORD *)v3 + 2 * v7 + 359);
      a2[3] -= *((_DWORD *)v3 + 2 * v7 + 359);
      v8 = *(_DWORD *)(v6 + 32);
      v9 = a2[3];
      if ( (v8 & 1) == 0 )
      {
        v15 = a2[2];
        v16 = a2[1];
        v50.x = *a2;
        v51 = v15;
        x = v50.x;
        v55 = v15;
        v54 = v9;
        v56 = v9;
        v50.y = v16;
        v52 = v16;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v45, &v50, 4uLL);
        v17 = v51;
        v18 = v51;
        v19 = v50.x;
        v20 = x;
        if ( v50.x < v51 )
          v18 = v50.x;
        if ( v18 >= x )
        {
          v21 = x;
        }
        else
        {
          v21 = v51;
          if ( v50.x < v51 )
            v21 = v50.x;
        }
        v22 = v55;
        if ( v21 >= v55 )
        {
          v24 = v55;
        }
        else
        {
          v23 = v51;
          if ( v50.x < v51 )
            v23 = v50.x;
          if ( v23 >= x )
          {
            v24 = x;
          }
          else
          {
            v24 = v51;
            if ( v50.x < v51 )
              v24 = v50.x;
          }
        }
        v25 = v52;
        y = v50.y;
        v27 = v50.y < v52;
        v28 = v54;
        *a2 = v24;
        v29 = v25;
        if ( v27 )
          v29 = y;
        if ( v29 >= v28 )
        {
          v30 = v28;
        }
        else
        {
          v30 = v25;
          if ( y < v25 )
            v30 = y;
        }
        v31 = v56;
        if ( v30 >= v56 )
        {
          v33 = v56;
        }
        else
        {
          v32 = v25;
          if ( y < v25 )
            v32 = y;
          if ( v32 >= v28 )
          {
            v33 = v28;
          }
          else
          {
            v33 = v25;
            if ( y < v25 )
              v33 = y;
          }
        }
        a2[1] = v33;
        v34 = v17;
        if ( v19 > v17 )
          v34 = v19;
        if ( v34 <= v20 )
        {
          v35 = v20;
        }
        else
        {
          v35 = v17;
          if ( v19 > v17 )
            v35 = v19;
        }
        if ( v35 <= v22 )
        {
          v17 = v22;
        }
        else
        {
          v36 = v17;
          if ( v19 > v17 )
            v36 = v19;
          if ( v36 <= v20 )
          {
            v17 = v20;
          }
          else if ( v19 > v17 )
          {
            v17 = v19;
          }
        }
        a2[2] = v17;
        v37 = v25;
        if ( y > v25 )
          v37 = y;
        if ( v37 <= v28 )
        {
          v38 = v28;
        }
        else
        {
          v38 = v25;
          if ( y > v25 )
            v38 = y;
        }
        if ( v38 <= v31 )
        {
          v25 = v31;
        }
        else
        {
          v39 = v25;
          if ( y > v25 )
            v39 = y;
          if ( v39 <= v28 )
          {
            v25 = v28;
          }
          else if ( y > v25 )
          {
            v25 = y;
          }
        }
        a2[3] = v25;
        v11 = 3;
        goto LABEL_16;
      }
      if ( (v8 & 0x43) == 0x43 || (v14 = (unsigned int)bCvtPts1(v6, a2, 2LL) == 0, v10 = 0, !v14) )
        v10 = 1;
      if ( v46 )
      {
        ++*a2;
        ++a2[2];
      }
      if ( v10 )
      {
        if ( *((_DWORD *)v5 + 21) != 1 )
        {
          v11 = (*((_DWORD *)v5 + 20) > 0xA0u) + 2;
LABEL_16:
          if ( (*(_DWORD *)(*((_QWORD *)v3 + 10) + 312LL) & 1) != 0 )
          {
            v40 = *a2;
            v41 = a2[2];
            if ( *a2 > v41 )
            {
              *a2 = v41;
              a2[2] = v40;
            }
          }
          goto LABEL_17;
        }
LABEL_26:
        v11 = 1;
        goto LABEL_16;
      }
    }
    goto LABEL_29;
  }
  if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)&v42) )
  {
LABEL_29:
    v11 = 0;
    goto LABEL_17;
  }
  *(_QWORD *)a2 = 0LL;
  v11 = 3;
  *((_QWORD *)a2 + 1) = 0LL;
LABEL_17:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v47);
LABEL_18:
  if ( v42 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v42);
    v44 = 0;
    v12 = *(_QWORD *)v42;
    HmgDecrementExclusiveReferenceCountEx(v42, HIDWORD(v43), &v44);
    if ( v44 )
      bDeleteDCInternalEx(v12, 0LL);
  }
  return v11;
}
