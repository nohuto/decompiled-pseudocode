/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C001E550
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C001E500 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001D83C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C011A5C8 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _POINTL *v11; // rsi
  unsigned int v13; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rdi
  USHORT *p_iType; // rsi
  __int64 (__fastcall *v19)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *); // r11
  CLIPOBJ *v20; // r10
  LONG y; // r8d
  LONG x; // esi
  LONG v23; // eax
  int v24; // edx
  LONG v25; // eax
  USHORT *v27; // rsi
  __int64 (__fastcall *v28)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, _DWORD *, unsigned int); // r10
  CLIPOBJ *v29; // r8
  _DWORD *v30; // r9
  struct _POINTL *v31; // r11
  LONG v32; // edx
  struct _POINTL v33; // rsi
  int v34; // eax
  LONG v35; // esi
  struct _CLIPOBJ *v36; // rdx
  LONG v37; // ecx
  int v38; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 (__fastcall *v40)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  int v41; // edx
  int v42; // r8d
  int v43; // ecx
  int v44; // ecx
  USHORT *v45; // rsi
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  struct _SURFOBJ *v49; // [rsp+70h] [rbp-90h] BYREF
  LONG v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v52; // [rsp+88h] [rbp-78h]
  struct _POINTL *v53; // [rsp+90h] [rbp-70h]
  CLIPOBJ *ppco; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v55; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL *v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  _DWORD v60[2]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v61[2]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v62[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct _POINTL v63; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v64[2]; // [rsp+E8h] [rbp-18h] BYREF
  struct _POINTL *v65; // [rsp+F0h] [rbp-10h]
  _DWORD v66[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  struct _POINTL v69; // [rsp+110h] [rbp+10h] BYREF
  struct _RECTL v70; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v71[4]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v72[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v73[2]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v74[912]; // [rsp+160h] [rbp+60h] BYREF

  v11 = a7;
  v13 = 1;
  v68 = (__int64)a3;
  ppco = a4;
  v59 = (__int64)a5;
  v57 = (__int64)a10;
  v49 = a1;
  v53 = a7;
  v65 = a8;
  v67 = (__int64)a9;
  if ( a2 && (hdev = a2->hdev) != 0LL && a2 == *((struct _SURFOBJ **)hdev + 14) )
  {
    v40 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
    if ( a1 == a2 )
      v40 = bSpBltScreenToScreen;
    return v40(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  }
  else
  {
    v70 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v74, a1, a4, a6);
    if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v74, &v49, &v55, &ppco) )
    {
      while ( 1 )
      {
        v15 = v49;
        v16 = 0LL;
        if ( v49
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v49) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x200) == 0 )
        {
          v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
          GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
        }
        v17 = 0LL;
        if ( a2
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
        {
          v17 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
          GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
        }
        if ( !v16 || *(_WORD *)(v16 + 100) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(v16 + 24), &ppco) )
          break;
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
LABEL_68:
        GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
LABEL_29:
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v74, &v49, &v55, &ppco) )
          return v13;
      }
      if ( a11 == 52428 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x400) == 0 && a2->hdev )
        {
          if ( a2->iType != 1 )
            goto LABEL_48;
          if ( !(unsigned int)bAllowShareAccess(a2) )
            goto LABEL_105;
          if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
            || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
          {
            v15 = v49;
LABEL_105:
            if ( a2->iType != 1 || !(unsigned int)bAllowShareAccess(a2) )
            {
LABEL_48:
              if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 )
              {
                v19 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))*((_QWORD *)a2->hdev + 166);
                goto LABEL_18;
              }
              goto LABEL_120;
            }
            if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
            {
              v15 = v49;
              goto LABEL_48;
            }
LABEL_119:
            v15 = v49;
            goto LABEL_120;
          }
LABEL_61:
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v15 = v49;
          v19 = *(__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)(ThreadWin32Thread + 280) + 80LL);
          goto LABEL_18;
        }
        p_iType = &v15->iType;
        if ( v15->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(v15) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
            {
              goto LABEL_61;
            }
            v15 = v49;
          }
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v15) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
            {
              goto LABEL_119;
            }
            v15 = v49;
          }
        }
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x400) != 0 )
        {
          v19 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))*((_QWORD *)v15->hdev + 166);
LABEL_18:
          v20 = ppco;
          y = v55.y;
          x = v55.x;
          v50 = gptlZero.x;
          LODWORD(v58) = gptlZero.y;
          v51 = (__int64)v19;
          v52 = ppco;
          LODWORD(v56) = v55.y;
          if ( ppco )
          {
            CLIPOBJ_vOffset(ppco, v55.x, v55.y);
            v20 = v52;
            v19 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))v51;
            y = (int)v56;
          }
          v71[0] = x + v70.left;
          v23 = v53->y;
          v71[2] = x + v70.right;
          v71[1] = y + v70.top;
          v71[3] = y + v70.bottom;
          v24 = v23 + v58;
          v60[0] = v53->x + v50;
          v25 = 0;
          v60[1] = v24;
          v50 = 0;
          if ( v19 )
          {
            v25 = v19(v15, a2, v20, v59, v71, v60);
            y = (int)v56;
            v50 = v25;
          }
          if ( v52 )
          {
            CLIPOBJ_vOffset(v52, -x, -y);
            v25 = v50;
          }
          goto LABEL_24;
        }
LABEL_120:
        v19 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))EngCopyBits;
        goto LABEL_18;
      }
      if ( (unsigned __int8)a11 == a11 >> 8 )
      {
        v27 = &v15->iType;
        if ( v15->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(v15) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
            {
              v47 = W32GetThreadWin32Thread(KeGetCurrentThread());
              v15 = v49;
              v28 = *(__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, _DWORD *, unsigned int))(*(_QWORD *)(v47 + 280) + 72LL);
              goto LABEL_35;
            }
            v15 = v49;
          }
          if ( *v27 == 1 && (unsigned int)bAllowShareAccess(v15) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
            {
              v15 = v49;
              goto LABEL_128;
            }
            v15 = v49;
          }
        }
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 1) != 0 )
        {
          v28 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, _DWORD *, unsigned int))*((_QWORD *)v15->hdev + 165);
LABEL_35:
          v29 = ppco;
          v30 = (_DWORD *)v57;
          v31 = v53;
          v32 = v55.y;
          v33 = v55;
          v51 = (__int64)v28;
          v58 = v57;
          v56 = v53;
          v52 = ppco;
          v50 = v55.y;
          if ( ppco && (v55.x || v55.y) )
          {
            ppco->rclBounds.left += v55.x;
            v29->rclBounds.right += v33.x;
            v29->rclBounds.top += v32;
            v29->rclBounds.bottom += v32;
            if ( v29->iDComplexity )
            {
              v69 = v33;
              RGNOBJ::bOffset((RGNOBJ *)&v29[2].rclBounds.top, &v69);
              v32 = v50;
              v29 = v52;
              v30 = (_DWORD *)v58;
              v28 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, _DWORD *, unsigned int))v51;
              v31 = v56;
            }
          }
          v72[0] = v33.x + v70.left;
          v72[2] = v33.x + v70.right;
          v72[1] = v32 + v70.top;
          v72[3] = v32 + v70.bottom;
          if ( v53 )
          {
            v31 = (struct _POINTL *)v61;
            v61[0] = gptlZero.x + v53->x;
            v61[1] = gptlZero.y + v53->y;
          }
          if ( v57 )
          {
            v30 = v62;
            v62[0] = v33.x + *(_DWORD *)v57;
            v62[1] = v32 + *(_DWORD *)(v57 + 4);
          }
          v34 = v28(v15, a2, v68, v29, v59, v72, v31, v65, v67, v30, a11);
          v35 = -v33.x;
          v36 = v52;
          v37 = -v50;
          v38 = v34;
          if ( v52 && (v35 || v50) )
          {
            v52->rclBounds.left += v35;
            v36->rclBounds.right += v35;
            v36->rclBounds.top += v37;
            v36->rclBounds.bottom += v37;
            if ( v36->iDComplexity )
            {
              v63.y = v37;
              v63.x = v35;
              RGNOBJ::bOffset((RGNOBJ *)&v36[2].rclBounds.top, &v63);
            }
          }
          v13 &= v38;
          goto LABEL_25;
        }
LABEL_128:
        v28 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, _DWORD *, unsigned int))EngBitBlt;
        goto LABEL_35;
      }
      *(struct _RECTL *)v73 = v70;
      if ( ppco && !bIntersect(&ppco->rclBounds, &v70, (struct _RECTL *)v73) )
        goto LABEL_26;
      v41 = LODWORD(v73[0]) - v70.left;
      v42 = HIDWORD(v73[0]) - v70.top;
      v51 = 0LL;
      if ( v11 )
      {
        v43 = v41 + v11->x;
        v51 = (__int64)v64;
        v64[0] = v43;
        v64[1] = v42 + v11->y;
      }
      v52 = 0LL;
      if ( v65 )
      {
        v44 = v41 + v65->x;
        v52 = (struct _CLIPOBJ *)v66;
        v66[0] = v44;
        v66[1] = v42 + v65->y;
      }
      v45 = &v15->iType;
      if ( v15->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v15) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            v48 = W32GetThreadWin32Thread(KeGetCurrentThread());
            LODWORD(v15) = (_DWORD)v49;
            v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v48 + 280) + 72LL);
            goto LABEL_78;
          }
          v15 = v49;
        }
        if ( *v45 == 1 && (unsigned int)bAllowShareAccess(v15) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
          {
            LODWORD(v15) = (_DWORD)v49;
            goto LABEL_146;
          }
          v15 = v49;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 1) != 0 )
      {
        v46 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v15->hdev + 165);
LABEL_78:
        v25 = OffBitBlt(
                (int)v46,
                (int)&v55,
                (int)v15,
                (int)&gptlZero,
                (__int64)a2,
                v68,
                ppco,
                v59,
                (__int64)v73,
                v51,
                (__int64)v52,
                v67,
                v57,
                a11);
LABEL_24:
        v13 &= v25;
LABEL_25:
        v11 = v53;
LABEL_26:
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        if ( !v16 )
          goto LABEL_29;
        goto LABEL_68;
      }
LABEL_146:
      v46 = EngBitBlt;
      goto LABEL_78;
    }
    return v13;
  }
}
