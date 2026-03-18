/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C006F270
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C006F220 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1C00A5454 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00A732C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
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
  struct _SURFOBJ *v11; // r13
  struct _POINTL *v12; // r15
  _DWORD *v13; // r12
  unsigned int v14; // ebx
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rsi
  BOOL updated; // eax
  USHORT *p_iType; // rbx
  HDEV v21; // rax
  BOOL (__stdcall *v22)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  CLIPOBJ *v23; // r12
  LONG x; // ebx
  LONG y; // r13d
  int v26; // edx
  int v27; // edx
  int v28; // r14d
  __int64 (__fastcall *v29)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  USHORT *v31; // rbx
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  _DWORD *v33; // r10
  struct _POINTL *v34; // r8
  struct _POINTL v35; // rbx
  _DWORD *v36; // rdx
  LONG v37; // r12d
  CLIPOBJ *v38; // r15
  LONG v39; // r12d
  LONG v40; // ebx
  int v41; // r14d
  int v42; // edx
  int v43; // r8d
  _DWORD *v44; // r15
  USHORT *v45; // rbx
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v47; // eax
  __int64 v48; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v50; // rax
  struct _SURFOBJ *v51; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+78h] [rbp-88h]
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // [rsp+80h] [rbp-80h]
  CLIPOBJ *ppco; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v55; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h]
  _DWORD v60[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _SURFOBJ *v61; // [rsp+C0h] [rbp-40h]
  _DWORD v62[2]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v63[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL v64; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v65[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTL *v66; // [rsp+E8h] [rbp-18h]
  _DWORD v67[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  struct _POINTL v70; // [rsp+108h] [rbp+8h] BYREF
  struct _POINTL *v71; // [rsp+110h] [rbp+10h]
  struct _RECTL v72; // [rsp+118h] [rbp+18h] BYREF
  _DWORD v73[4]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v74[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v75[2]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v76[912]; // [rsp+160h] [rbp+60h] BYREF

  v11 = a2;
  v12 = a7;
  v69 = (__int64)a3;
  v13 = 0LL;
  v61 = a2;
  v14 = 1;
  ppco = a4;
  v66 = a8;
  v58 = (__int64)a10;
  v51 = a1;
  v59 = (__int64)a5;
  v56 = a7;
  v68 = (__int64)a9;
  v52 = 1;
  if ( a2 )
    hdev = a2->hdev;
  else
    hdev = 0LL;
  if ( !hdev || a2 != *((struct _SURFOBJ **)hdev + 14) )
  {
    v72 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v76, a1, a4, a6);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v76, &v51, &v55, &ppco) )
        return v14;
      v16 = v51;
      v17 = 0LL;
      if ( v51
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v51) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
      {
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
        GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
      }
      v18 = 0LL;
      if ( v11
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
      {
        v18 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
        GreLockDisplayDevice(*(_QWORD *)(v18 + 48));
      }
      updated = 1;
      if ( v17 && *(_WORD *)(v17 + 100) == 1 )
        updated = EngUpdateDeviceSurface((SURFOBJ *)(v17 + 24), &ppco);
      if ( updated )
      {
        if ( a11 == 52428 )
        {
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x400) != 0 || !v11->hdev )
          {
            p_iType = &v16->iType;
            if ( v16->iType == 1 )
            {
              if ( (unsigned int)bAllowShareAccess(v16) )
              {
                if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                  && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
                {
                  goto LABEL_112;
                }
                v16 = v51;
              }
              if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v16) )
              {
                if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
                {
                  goto LABEL_118;
                }
                v16 = v51;
              }
            }
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x400) == 0 )
            {
LABEL_119:
              v22 = EngCopyBits;
              goto LABEL_22;
            }
            v21 = v16->hdev;
          }
          else
          {
            if ( v11->iType != 1 )
              goto LABEL_56;
            if ( (unsigned int)bAllowShareAccess(v11) )
            {
              if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
              {
                v16 = v51;
                goto LABEL_100;
              }
LABEL_112:
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v16 = v51;
              v22 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(ThreadWin32Thread + 280) + 80LL);
LABEL_22:
              v23 = ppco;
              x = v55.x;
              y = v55.y;
              LODWORD(v57) = gptlZero.x;
              LODWORD(v53) = gptlZero.y;
              if ( ppco )
                CLIPOBJ_vOffset(ppco, v55.x, v55.y);
              v26 = (int)v53;
              LODWORD(v53) = 0;
              v27 = v56->y + v26;
              v73[0] = x + v72.left;
              v60[1] = v27;
              v73[2] = x + v72.right;
              v73[1] = y + v72.top;
              v73[3] = y + v72.bottom;
              v60[0] = v56->x + v57;
              if ( v22 )
                v28 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))v22)(
                        v16,
                        v61,
                        v23,
                        v59,
                        v73,
                        v60);
              else
                v28 = (int)v53;
              if ( v23 )
                CLIPOBJ_vOffset(v23, -x, -y);
              v11 = v61;
              v14 = v28 & v52;
              goto LABEL_29;
            }
LABEL_100:
            if ( v11->iType == 1 && (unsigned int)bAllowShareAccess(v11) )
            {
              if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
              {
                v16 = v51;
                goto LABEL_56;
              }
LABEL_118:
              v16 = v51;
              goto LABEL_119;
            }
LABEL_56:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x400) == 0 )
              goto LABEL_119;
            v21 = v11->hdev;
          }
          v22 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v21 + 166);
          goto LABEL_22;
        }
        if ( (unsigned __int8)a11 == a11 >> 8 )
        {
          v31 = &v16->iType;
          if ( v16->iType != 1 )
            goto LABEL_40;
          if ( (unsigned int)bAllowShareAccess(v16) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
            {
              v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v16 = v51;
              v32 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v48 + 280) + 72LL);
              goto LABEL_42;
            }
            v16 = v51;
          }
          if ( *v31 == 1 && (unsigned int)bAllowShareAccess(v16) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              v16 = v51;
              goto LABEL_129;
            }
            v16 = v51;
          }
LABEL_40:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 1) != 0 )
          {
            v32 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 165);
LABEL_42:
            v33 = (_DWORD *)v58;
            v34 = v12;
            v35 = v55;
            v36 = (_DWORD *)v58;
            v37 = v55.y;
            v71 = v12;
            v38 = ppco;
            v57 = v58;
            v53 = v32;
            if ( ppco && (v55.x || v55.y) )
            {
              ppco->rclBounds.left += v55.x;
              v38->rclBounds.right += v35.x;
              v38->rclBounds.top += v37;
              v38->rclBounds.bottom += v37;
              if ( v38->iDComplexity )
              {
                v70 = v35;
                RGNOBJ::bOffset((RGNOBJ *)&v38[2].rclBounds.top, &v70);
                v36 = (_DWORD *)v57;
                v34 = v71;
                v33 = (_DWORD *)v57;
              }
            }
            v74[0] = v35.x + v72.left;
            v74[2] = v35.x + v72.right;
            v74[1] = v37 + v72.top;
            v74[3] = v37 + v72.bottom;
            if ( v56 )
            {
              v34 = (struct _POINTL *)v62;
              v62[0] = gptlZero.x + v56->x;
              v62[1] = gptlZero.y + v56->y;
            }
            if ( v33 )
            {
              v36 = v63;
              v63[0] = v35.x + *v33;
              v63[1] = v37 + v33[1];
            }
            v39 = -v37;
            v40 = -v35.x;
            v41 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, _DWORD *, unsigned int))v53)(
                    v16,
                    v11,
                    v69,
                    v38,
                    v59,
                    v74,
                    v34,
                    v66,
                    v68,
                    v36,
                    a11);
            if ( v38 && (v40 || v39) )
            {
              v38->rclBounds.left += v40;
              v38->rclBounds.right += v40;
              v38->rclBounds.top += v39;
              v38->rclBounds.bottom += v39;
              if ( v38->iDComplexity )
              {
                v64.x = v40;
                v64.y = v39;
                RGNOBJ::bOffset((RGNOBJ *)&v38[2].rclBounds.top, &v64);
              }
            }
            v14 = v41 & v52;
            goto LABEL_29;
          }
LABEL_129:
          v32 = EngBitBlt;
          goto LABEL_42;
        }
        *(struct _RECTL *)v75 = v72;
        if ( !ppco || bIntersect(&ppco->rclBounds, &v72, (struct _RECTL *)v75) )
        {
          v42 = LODWORD(v75[0]) - v72.left;
          v43 = HIDWORD(v75[0]) - v72.top;
          if ( v12 )
          {
            v13 = v65;
            v65[0] = v42 + v12->x;
            v65[1] = v43 + v12->y;
          }
          v44 = 0LL;
          if ( v66 )
          {
            v44 = v67;
            v67[0] = v42 + v66->x;
            v67[1] = v43 + v66->y;
          }
          v45 = &v16->iType;
          if ( v16->iType == 1 )
          {
            if ( (unsigned int)bAllowShareAccess(v16) )
            {
              if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
              {
                v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                LODWORD(v16) = (_DWORD)v51;
                v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v50 + 280) + 72LL);
                goto LABEL_75;
              }
              v16 = v51;
            }
            if ( *v45 != 1 || !(unsigned int)bAllowShareAccess(v16) )
              goto LABEL_73;
            if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
            {
              v16 = v51;
              goto LABEL_73;
            }
            LODWORD(v16) = (_DWORD)v51;
            goto LABEL_147;
          }
LABEL_73:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 1) != 0 )
          {
            v46 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 165);
            goto LABEL_75;
          }
LABEL_147:
          v46 = EngBitBlt;
LABEL_75:
          v47 = OffBitBlt(
                  (int)v46,
                  (int)&v55,
                  (int)v16,
                  (int)&gptlZero,
                  (__int64)v11,
                  v69,
                  ppco,
                  v59,
                  (__int64)v75,
                  (__int64)v13,
                  (__int64)v44,
                  v68,
                  v58,
                  a11);
          v14 = v47 & v52;
LABEL_29:
          v12 = v56;
          v13 = 0LL;
          v52 = v14;
        }
      }
      if ( v18 )
        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
      if ( v17 )
        GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
  }
  v29 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
  if ( a1 == a2 )
    v29 = bSpBltScreenToScreen;
  return (unsigned int)v29(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
