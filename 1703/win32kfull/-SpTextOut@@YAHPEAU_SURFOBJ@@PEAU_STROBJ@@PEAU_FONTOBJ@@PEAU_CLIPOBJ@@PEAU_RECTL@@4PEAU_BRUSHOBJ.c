/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C007AB30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
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
  _BOOL8 v11; // rdi
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
  bool v39; // zf
  __int64 ThreadWin32Thread; // rax
  struct _STROBJ *v41; // r8
  LONG top; // r10d
  __int64 v43; // r9
  ULONG v44; // r10d
  _DWORD *v45; // r11
  _DWORD *v46; // r9
  ULONG v47; // r10d
  _DWORD *v48; // r8
  struct _STROBJ *v49; // rax
  LONG v50; // r9d
  __int64 v51; // r8
  ULONG v52; // r9d
  _DWORD *v53; // r10
  _DWORD *v54; // r8
  ULONG v55; // r9d
  _DWORD *v56; // rax
  struct _SURFOBJ *v57; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v58; // [rsp+68h] [rbp-98h]
  BOOL (__stdcall *v59)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [rsp+70h] [rbp-90h]
  struct _STROBJ *v60; // [rsp+78h] [rbp-88h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  __int64 v62; // [rsp+88h] [rbp-78h]
  struct _RECTL *v63; // [rsp+90h] [rbp-70h]
  struct _POINTL v64; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v65; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v66; // [rsp+A8h] [rbp-58h] BYREF
  struct _POINTL *v67; // [rsp+B0h] [rbp-50h]
  struct _BRUSHOBJ *v68; // [rsp+B8h] [rbp-48h]
  struct _BRUSHOBJ *v69; // [rsp+C0h] [rbp-40h]
  struct _RECTL *v70; // [rsp+C8h] [rbp-38h]
  struct _FONTOBJ *v71; // [rsp+D0h] [rbp-30h]
  struct _RECTL *v72; // [rsp+D8h] [rbp-28h]
  _DWORD v73[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v74[114]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = a6;
  v11 = 0LL;
  v57 = a1;
  v12 = a2;
  v60 = a2;
  v71 = a3;
  v15 = 1;
  v70 = a5;
  v69 = a7;
  v68 = a8;
  v67 = a9;
  flFontType = a3->flFontType;
  ppco = a4;
  v72 = a6;
  v62 = 0LL;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
    {
      v39 = ((_DWORD)hdev[536] & 0x4000) == 0;
      v62 = 0LL;
      if ( v39 )
      {
        v11 = 1LL;
        v62 = 1LL;
      }
    }
    else
    {
      v11 = ((_DWORD)hdev[460] & 0x1000000) == 0;
      v62 = v11;
    }
  }
  cGlyphs = v12[1].cGlyphs;
  v58 = cGlyphs;
  p_rclBkGround = a6;
  if ( !a6 )
    p_rclBkGround = &v12->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v74, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v74, &v57, &v64, &ppco) )
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
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 8) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v19 = v57;
            v59 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
            goto LABEL_10;
          }
          v19 = v57;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v19) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
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
        v26 = v64;
        y = v64.y;
        v63 = v10;
        if ( v10 )
        {
          v25 = (struct _RECTL *)v73;
          v28 = v64.x + v10->left;
          v63 = (struct _RECTL *)v73;
          v73[0] = v28;
          v73[2] = v64.x + v10->right;
          v73[1] = v64.y + v10->top;
          v73[3] = v64.y + v10->bottom;
        }
        v29 = v64.y;
        x = v64.x;
        if ( v64.x || v64.y )
        {
          v41 = v60;
          v60->rclBkGround.left += v64.x;
          v41->rclBkGround.right += v26.x;
          v41->rclBkGround.top += y;
          v41->rclBkGround.bottom += y;
          top = v41[1].rclBkGround.top;
          if ( (top & 0x100) != 0 )
          {
            x *= 16;
            v29 = 16 * y;
          }
          v43 = *(_QWORD *)&v41[1].rclBkGround.bottom;
          if ( (top & 0x1400) != 0 )
          {
            v44 = v41->cGlyphs;
            v45 = *(_DWORD **)&v41[4].rclBkGround.bottom;
            if ( v41->cGlyphs )
            {
              v46 = (_DWORD *)(v43 + 20);
              do
              {
                if ( *v45 == v41[5].cGlyphs )
                {
                  *(v46 - 1) += x;
                  --v44;
                  *v46 += v29;
                }
                v46 += 6;
                ++v45;
              }
              while ( v44 );
              v25 = v63;
            }
          }
          else if ( v41->ulCharInc )
          {
            *(_DWORD *)(v43 + 16) += x;
            *(_DWORD *)(v43 + 20) += v29;
          }
          else
          {
            v47 = v41->cGlyphs;
            if ( v41->cGlyphs )
            {
              v48 = (_DWORD *)(v43 + 20);
              do
              {
                *(v48 - 1) += x;
                *v48 += v29;
                v48 += 6;
                --v47;
              }
              while ( v47 );
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
            v66 = v26;
            RGNOBJ::bOffset((RGNOBJ *)&v24[2].rclBounds.top, &v66);
            v25 = v63;
          }
        }
        v31 = -y;
        v32 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v59)(
                v19,
                v60,
                v71,
                v24,
                v70,
                v25,
                v69,
                v68,
                v67,
                a10);
        v33 = -v26.x;
        v34 = v31;
        v35 = v33;
        if ( v33 || v31 )
        {
          v49 = v60;
          v60->rclBkGround.left += v33;
          v49->rclBkGround.right += v33;
          v49->rclBkGround.top += v31;
          v49->rclBkGround.bottom += v31;
          v50 = v49[1].rclBkGround.top;
          if ( (v50 & 0x100) != 0 )
          {
            v35 = 16 * v33;
            v34 = 16 * v31;
          }
          v51 = *(_QWORD *)&v49[1].rclBkGround.bottom;
          if ( (v50 & 0x1400) != 0 )
          {
            v52 = v49->cGlyphs;
            v53 = *(_DWORD **)&v49[4].rclBkGround.bottom;
            if ( v49->cGlyphs )
            {
              v54 = (_DWORD *)(v51 + 20);
              do
              {
                if ( *v53 == v49[5].cGlyphs )
                {
                  *(v54 - 1) += v35;
                  --v52;
                  *v54 += v34;
                }
                v54 += 6;
                ++v53;
              }
              while ( v52 );
              v10 = v72;
            }
          }
          else if ( v49->ulCharInc )
          {
            *(_DWORD *)(v51 + 16) += v35;
            *(_DWORD *)(v51 + 20) += v34;
          }
          else
          {
            v55 = v49->cGlyphs;
            if ( v49->cGlyphs )
            {
              v56 = (_DWORD *)(v51 + 20);
              do
              {
                *(v56 - 1) += v35;
                *v56 += v34;
                v56 += 6;
                --v55;
              }
              while ( v55 );
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
            v65.x = v33;
            v65.y = v31;
            RGNOBJ::bOffset((RGNOBJ *)&v24[2].rclBounds.top, &v65);
          }
        }
        v15 &= v32;
        if ( v23 )
          GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
        cGlyphs = v58;
      }
      v36 = ENUMUNDERLAYS::bEnum(v74, &v57, &v64, &ppco);
      v12 = v60;
      v11 = v62;
    }
    while ( v36 );
  }
  return v15;
}
