/*
 * XREFs of GreGetAppClipBox @ 0x1C009499C
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C0094940 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B1C8 (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  DC *v3; // r14
  struct REGION *v4; // rax
  struct REGION *v5; // rsi
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  LONG v8; // r8d
  int v9; // eax
  unsigned int v10; // edi
  bool v12; // zf
  LONG v13; // ecx
  LONG v14; // eax
  LONG v15; // edx
  LONG v16; // eax
  LONG v17; // r9d
  LONG v18; // r11d
  LONG v19; // eax
  LONG v20; // edi
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // ecx
  LONG y; // r8d
  bool v25; // cc
  LONG v26; // r10d
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // esi
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // ecx
  LONG v39; // eax
  DC *v40[2]; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-59h] BYREF
  int v42; // [rsp+3Ch] [rbp-4Dh]
  _BYTE v43[32]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v44; // [rsp+60h] [rbp-29h]
  __int64 v45; // [rsp+68h] [rbp-21h]
  struct _POINTL v46; // [rsp+90h] [rbp+7h] BYREF
  LONG v47; // [rsp+98h] [rbp+Fh]
  LONG v48; // [rsp+9Ch] [rbp+13h]
  LONG x; // [rsp+A0h] [rbp+17h]
  LONG v50; // [rsp+A4h] [rbp+1Bh]
  LONG v51; // [rsp+A8h] [rbp+1Fh]
  LONG v52; // [rsp+ACh] [rbp+23h]

  v40[0] = 0LL;
  v40[1] = 0LL;
  XDCOBJ::vLock(v40, a1);
  if ( v40[0] )
  {
    v44 = 0LL;
    v45 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v43, (struct XDCOBJ *)v40, 1);
    if ( (v43[24] & 1) != 0 )
    {
      v3 = v40[0];
      if ( DC::prgnRao(v40[0]) )
        v4 = DC::prgnRao(v3);
      else
        v4 = DC::prgnVisSnap(v3);
      v5 = v4;
      *(_OWORD *)a2 = *(_OWORD *)((char *)v4 + 88);
      if ( *a2 >= a2[2] || a2[1] >= a2[3] )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
        goto LABEL_25;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v41, (struct XDCOBJ *)v40, 0x80000402);
      v6 = v41;
      if ( v41 )
      {
        v3 = v40[0];
        v7 = (*((_BYTE *)v40[0] + 40) & 1) != 0 ? 8 : 0;
        *a2 -= *(_DWORD *)((char *)v40[0] + v7 + 1432);
        a2[2] -= *(_DWORD *)((char *)v3 + v7 + 1432);
        a2[1] -= *(_DWORD *)((char *)v3 + v7 + 1436);
        a2[3] -= *(_DWORD *)((char *)v3 + v7 + 1436);
        v8 = a2[3];
        if ( (*(_BYTE *)(v6 + 32) & 1) == 0 )
        {
          v13 = a2[2];
          v14 = a2[1];
          v46.x = *a2;
          v47 = v13;
          x = v46.x;
          v51 = v13;
          v50 = v8;
          v52 = v8;
          v46.y = v14;
          v48 = v14;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v41, &v46, 4uLL);
          v15 = v47;
          v16 = v47;
          v17 = v46.x;
          v18 = x;
          if ( v46.x < v47 )
            v16 = v46.x;
          if ( v16 >= x )
          {
            v19 = x;
          }
          else
          {
            v19 = v47;
            if ( v46.x < v47 )
              v19 = v46.x;
          }
          v20 = v51;
          if ( v19 >= v51 )
          {
            v22 = v51;
          }
          else
          {
            v21 = v47;
            if ( v46.x < v47 )
              v21 = v46.x;
            if ( v21 >= x )
            {
              v22 = x;
            }
            else
            {
              v22 = v47;
              if ( v46.x < v47 )
                v22 = v46.x;
            }
          }
          v23 = v48;
          y = v46.y;
          v25 = v46.y < v48;
          v26 = v50;
          *a2 = v22;
          v27 = v23;
          if ( v25 )
            v27 = y;
          if ( v27 >= v26 )
          {
            v28 = v26;
          }
          else
          {
            v28 = v23;
            if ( y < v23 )
              v28 = y;
          }
          v29 = v52;
          if ( v28 >= v52 )
          {
            v31 = v52;
          }
          else
          {
            v30 = v23;
            if ( y < v23 )
              v30 = y;
            if ( v30 >= v26 )
            {
              v31 = v26;
            }
            else
            {
              v31 = v23;
              if ( y < v23 )
                v31 = y;
            }
          }
          a2[1] = v31;
          v32 = v15;
          if ( v17 > v15 )
            v32 = v17;
          if ( v32 <= v18 )
          {
            v33 = v18;
          }
          else
          {
            v33 = v15;
            if ( v17 > v15 )
              v33 = v17;
          }
          if ( v33 <= v20 )
          {
            v15 = v20;
          }
          else
          {
            v34 = v15;
            if ( v17 > v15 )
              v34 = v17;
            if ( v34 <= v18 )
            {
              v15 = v18;
            }
            else if ( v17 > v15 )
            {
              v15 = v17;
            }
          }
          a2[2] = v15;
          v35 = v23;
          if ( y > v23 )
            v35 = y;
          if ( v35 <= v26 )
          {
            v36 = v26;
          }
          else
          {
            v36 = v23;
            if ( y > v23 )
              v36 = y;
          }
          if ( v36 <= v29 )
          {
            v23 = v29;
          }
          else
          {
            v37 = v23;
            if ( y > v23 )
              v37 = y;
            if ( v37 <= v26 )
            {
              v23 = v26;
            }
            else if ( y > v23 )
            {
              v23 = y;
            }
          }
          a2[3] = v23;
          v10 = 3;
          goto LABEL_16;
        }
        if ( (*(_DWORD *)(v6 + 32) & 0x43) == 0x43 || (v12 = (unsigned int)bCvtPts1(v6, a2, 2LL) == 0, v9 = 0, !v12) )
          v9 = 1;
        if ( v42 )
        {
          ++*a2;
          ++a2[2];
        }
        if ( v9 )
        {
          if ( *((_DWORD *)v5 + 21) != 1 )
          {
            v10 = (*((_DWORD *)v5 + 20) > 0xA0u) + 2;
LABEL_16:
            if ( (*(_DWORD *)(*((_QWORD *)v3 + 10) + 312LL) & 1) != 0 )
            {
              v38 = *a2;
              v39 = a2[2];
              if ( *a2 > v39 )
              {
                *a2 = v39;
                a2[2] = v38;
              }
            }
            goto LABEL_17;
          }
LABEL_25:
          v10 = 1;
          goto LABEL_16;
        }
      }
    }
    else if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v40) )
    {
      *(_QWORD *)a2 = 0LL;
      v10 = 3;
      *((_QWORD *)a2 + 1) = 0LL;
LABEL_17:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v43);
      goto LABEL_18;
    }
    v10 = 0;
    goto LABEL_17;
  }
  EngSetLastError(6u);
  v10 = 0;
LABEL_18:
  if ( v40[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v40);
    _InterlockedDecrement((volatile signed __int32 *)v40[0] + 3);
  }
  return v10;
}
