/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0028D00
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  struct _RECTL *v10; // r15
  BOOL v11; // edi
  struct _STROBJ *v12; // rbx
  unsigned int v15; // r12d
  FLONG flFontType; // ecx
  ULONG cGlyphs; // esi
  struct _RECTL *p_rclBkGround; // r9
  struct _SURFOBJ *v19; // r14
  struct _SURFOBJ *v20; // rcx
  __int64 v21; // rax
  USHORT *p_iType; // rbx
  __int64 v23; // rdi
  CLIPOBJ *v24; // r13
  struct _RECTL *v25; // rax
  struct _POINTL v26; // rbx
  LONG y; // esi
  int v28; // ecx
  LONG v29; // ecx
  LONG x; // edx
  LONG v31; // esi
  int v32; // r14d
  LONG v33; // ebx
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  HDEV hdev; // rax
  __int64 ThreadWin32Thread; // rax
  struct _STROBJ *v40; // r8
  LONG top; // r10d
  __int64 v42; // r9
  ULONG v43; // r10d
  _DWORD *v44; // r11
  _DWORD *v45; // r9
  ULONG v46; // r10d
  _DWORD *v47; // r8
  struct _STROBJ *v48; // rax
  LONG v49; // r9d
  __int64 v50; // r8
  ULONG v51; // r9d
  _DWORD *v52; // r10
  _DWORD *v53; // r8
  ULONG v54; // r9d
  _DWORD *v55; // rax
  BOOL v56; // [rsp+60h] [rbp-A0h]
  struct _SURFOBJ *v57; // [rsp+68h] [rbp-98h] BYREF
  ULONG v58; // [rsp+70h] [rbp-90h]
  BOOL (__stdcall *v59)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [rsp+78h] [rbp-88h]
  struct _STROBJ *v60; // [rsp+80h] [rbp-80h]
  CLIPOBJ *ppco; // [rsp+88h] [rbp-78h] BYREF
  struct _RECTL *v62; // [rsp+90h] [rbp-70h]
  struct _POINTL v63; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v64; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v65; // [rsp+A8h] [rbp-58h] BYREF
  struct _POINTL *v66; // [rsp+B0h] [rbp-50h]
  struct _BRUSHOBJ *v67; // [rsp+B8h] [rbp-48h]
  struct _BRUSHOBJ *v68; // [rsp+C0h] [rbp-40h]
  struct _RECTL *v69; // [rsp+C8h] [rbp-38h]
  struct _FONTOBJ *v70; // [rsp+D0h] [rbp-30h]
  struct _RECTL *v71; // [rsp+D8h] [rbp-28h]
  _DWORD v72[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v73[912]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = a6;
  v11 = 0;
  v57 = a1;
  v12 = a2;
  v60 = a2;
  v70 = a3;
  v15 = 1;
  v69 = a5;
  v68 = a7;
  v67 = a8;
  v66 = a9;
  flFontType = a3->flFontType;
  ppco = a4;
  v71 = a6;
  v56 = 0;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
      v11 = ((*((_DWORD *)hdev + 536) >> 14) & 1) == 0;
    else
      v11 = ((_DWORD)hdev[460] & 0x1000000) == 0;
    v56 = v11;
  }
  cGlyphs = v12[1].cGlyphs;
  v58 = cGlyphs;
  p_rclBkGround = a6;
  if ( !a6 )
    p_rclBkGround = &v12->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v73, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v73, &v57, &v63, &ppco) )
  {
    do
    {
      v19 = v57;
      v20 = v57;
      v12[1].cGlyphs = cGlyphs;
      v21 = SURFOBJ_TO_SURFACE_NOT_NULL(v20);
      if ( (*(_DWORD *)(v21 + 116) & 1) == 0 && (*(_DWORD *)(v21 + 112) & 0x800) != 0 && *(_WORD *)(v21 + 100) == 3 )
      {
        v59 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
        goto LABEL_10;
      }
      if ( v11 )
        goto LABEL_35;
      p_iType = &v19->iType;
      if ( v19->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v19) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 8) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v19 = v57;
            v59 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
            goto LABEL_10;
          }
          v19 = v57;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v19) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
          {
            v19 = v57;
LABEL_35:
            v59 = EngTextOut;
            goto LABEL_10;
          }
          v19 = v57;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 8) == 0 )
        goto LABEL_35;
      v59 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v19->hdev + 168);
LABEL_10:
      v23 = 0LL;
      if ( v19
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x200) == 0
        && (v23 = SURFOBJ_TO_SURFACE_NOT_NULL(v19),
            GreLockDisplayDevice(*(_QWORD *)(v23 + 48)),
            *(_WORD *)(v23 + 100) == 1)
        && !EngUpdateDeviceSurface((SURFOBJ *)(v23 + 24), &ppco) )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
      }
      else
      {
        v24 = ppco;
        v25 = v10;
        v26 = v63;
        y = v63.y;
        v62 = v10;
        if ( v10 )
        {
          v25 = (struct _RECTL *)v72;
          v28 = v63.x + v10->left;
          v62 = (struct _RECTL *)v72;
          v72[0] = v28;
          v72[2] = v63.x + v10->right;
          v72[1] = v63.y + v10->top;
          v72[3] = v63.y + v10->bottom;
        }
        v29 = v63.y;
        x = v63.x;
        if ( v63.x || v63.y )
        {
          v40 = v60;
          v60->rclBkGround.left += v63.x;
          v40->rclBkGround.right += v26.x;
          v40->rclBkGround.top += y;
          v40->rclBkGround.bottom += y;
          top = v40[1].rclBkGround.top;
          if ( (top & 0x100) != 0 )
          {
            x *= 16;
            v29 = 16 * y;
          }
          v42 = *(_QWORD *)&v40[1].rclBkGround.bottom;
          if ( (top & 0x1400) != 0 )
          {
            v43 = v40->cGlyphs;
            v44 = *(_DWORD **)&v40[4].rclBkGround.bottom;
            if ( v40->cGlyphs )
            {
              v45 = (_DWORD *)(v42 + 20);
              do
              {
                if ( *v44 == v40[5].cGlyphs )
                {
                  *(v45 - 1) += x;
                  --v43;
                  *v45 += v29;
                }
                v45 += 6;
                ++v44;
              }
              while ( v43 );
              v25 = v62;
            }
          }
          else if ( v40->ulCharInc )
          {
            *(_DWORD *)(v42 + 16) += x;
            *(_DWORD *)(v42 + 20) += v29;
          }
          else
          {
            v46 = v40->cGlyphs;
            if ( v40->cGlyphs )
            {
              v47 = (_DWORD *)(v42 + 20);
              do
              {
                *(v47 - 1) += x;
                *v47 += v29;
                v47 += 6;
                --v46;
              }
              while ( v46 );
            }
          }
        }
        if ( v24 && (v26.x || y) )
        {
          v24->rclBounds.left += v26.x;
          v24->rclBounds.right += v26.x;
          v24->rclBounds.top += y;
          v24->rclBounds.bottom += y;
          if ( v24->iDComplexity )
          {
            v65 = v26;
            RGNOBJ::bOffset((RGNOBJ *)&v24[2].rclBounds.top, &v65);
            v25 = v62;
          }
        }
        v31 = -y;
        v32 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v59)(
                v19,
                v60,
                v70,
                v24,
                v69,
                v25,
                v68,
                v67,
                v66,
                a10);
        v33 = -v26.x;
        v34 = v31;
        v35 = v33;
        if ( v33 || v31 )
        {
          v48 = v60;
          v60->rclBkGround.left += v33;
          v48->rclBkGround.right += v33;
          v48->rclBkGround.top += v31;
          v48->rclBkGround.bottom += v31;
          v49 = v48[1].rclBkGround.top;
          if ( (v49 & 0x100) != 0 )
          {
            v35 = 16 * v33;
            v34 = 16 * v31;
          }
          v50 = *(_QWORD *)&v48[1].rclBkGround.bottom;
          if ( (v49 & 0x1400) != 0 )
          {
            v51 = v48->cGlyphs;
            v52 = *(_DWORD **)&v48[4].rclBkGround.bottom;
            if ( v48->cGlyphs )
            {
              v53 = (_DWORD *)(v50 + 20);
              do
              {
                if ( *v52 == v48[5].cGlyphs )
                {
                  *(v53 - 1) += v35;
                  --v51;
                  *v53 += v34;
                }
                v53 += 6;
                ++v52;
              }
              while ( v51 );
              v10 = v71;
            }
          }
          else if ( v48->ulCharInc )
          {
            *(_DWORD *)(v50 + 16) += v35;
            *(_DWORD *)(v50 + 20) += v34;
          }
          else
          {
            v54 = v48->cGlyphs;
            if ( v48->cGlyphs )
            {
              v55 = (_DWORD *)(v50 + 20);
              do
              {
                *(v55 - 1) += v35;
                *v55 += v34;
                v55 += 6;
                --v54;
              }
              while ( v54 );
            }
          }
        }
        if ( v24 && (v33 || v31) )
        {
          v24->rclBounds.left += v33;
          v24->rclBounds.right += v33;
          v24->rclBounds.top += v31;
          v24->rclBounds.bottom += v31;
          if ( v24->iDComplexity )
          {
            v64.x = v33;
            v64.y = v31;
            RGNOBJ::bOffset((RGNOBJ *)&v24[2].rclBounds.top, &v64);
          }
        }
        v15 &= v32;
        if ( v23 )
          GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
        cGlyphs = v58;
      }
      v36 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v73, &v57, &v63, &ppco);
      v12 = v60;
      v11 = v56;
    }
    while ( v36 );
  }
  return v15;
}
