/*
 * XREFs of GrePtInSprite @ 0x1C01370F0
 * Callers:
 *     DCELayerHitTest @ 0x1C010DCA8 (DCELayerHitTest.c)
 *     LayerHitTest @ 0x1C011678C (LayerHitTest.c)
 * Callees:
 *     EngAlphaBlend @ 0x1C0012D70 (EngAlphaBlend.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0092018 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00E78C4 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C024EF9C (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C0259724 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 */

__int64 __fastcall GrePtInSprite(HDEV a1, HWND a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // edi
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r14
  _DWORD *v14; // rcx
  BOOL v15; // eax
  unsigned __int8 v16; // r8
  int v17; // esi
  __int64 v19; // rax
  int v20; // r13d
  int v21; // r12d
  struct _SURFOBJ *v22; // rdx
  struct _SURFOBJ *v23; // rdx
  HDEV v24; // r15
  RECTL si128; // xmm0
  _DWORD *v26; // rsi
  SURFOBJ *v27; // rdx
  SURFOBJ *v28; // rcx
  int v29; // [rsp+44h] [rbp-85h] BYREF
  HDEV v30; // [rsp+48h] [rbp-81h]
  _QWORD v31[3]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v32[8]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v34; // [rsp+78h] [rbp-51h] BYREF
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-49h] BYREF
  XLATEOBJ *v36; // [rsp+88h] [rbp-41h]
  XLATEOBJ *v37; // [rsp+90h] [rbp-39h]
  XLATEOBJ *v38; // [rsp+98h] [rbp-31h]
  RECTL prclSrc; // [rsp+A0h] [rbp-29h] BYREF
  RECTL prclDest; // [rsp+B0h] [rbp-19h] BYREF

  v30 = a1;
  v31[2] = a2;
  v10 = 0;
  v11 = 1;
  v34 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( !a6 || !g_pDwmState )
  {
    v10 = GdiPtInSprite(a1, a2, a3, a4);
    goto LABEL_10;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v33, ghsemSprite);
  v29 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v32, ghsemDwmState, 1);
  DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&prclSrc, a2);
  v12 = *(_QWORD *)&prclSrc.left;
  if ( *(_QWORD *)&prclSrc.left )
  {
    v13 = *(_QWORD *)(*(_QWORD *)&prclSrc.left + 192LL);
    v14 = (_DWORD *)(*(_QWORD *)&prclSrc.left + 56LL);
    *(_QWORD *)&prclSrc.left = __PAIR64__(a4, a3);
    v15 = PtInRect(v14, __PAIR64__(a4, a3));
    v17 = *(_DWORD *)(v12 + 72);
    v10 = v15;
    if ( (v17 & 0xFFFFFFFB) == 0 || v17 == 2 && *(_BYTE *)(v12 + 79) == v16 && *(_BYTE *)(v12 + 78) > v16 || !v15 )
      goto LABEL_8;
    v19 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v13 + 192));
    v20 = a3 - *(_DWORD *)(v12 + 56);
    v21 = a4 - *(_DWORD *)(v12 + 60);
    *(_QWORD *)&prclSrc.left = v19;
    if ( (v17 & 2) != 0 )
    {
      if ( v17 != 3 || *(_BYTE *)(v12 + 79) )
        v11 = 0;
      v23 = *(struct _SURFOBJ **)(v13 + 192);
      v31[0] = 0LL;
      SURFREFVIEW::bMap((SURFREFVIEW *)v31, v23);
      if ( v31[0] && *(_DWORD *)(*(_QWORD *)&prclSrc.left + 96LL) == 6 )
      {
        if ( v11
          && (*(_DWORD *)(v12 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 192), v20, v21, a5) & 0xFFFFFF) )
        {
          v10 = 0;
        }
        if ( v10 )
        {
          v24 = v30;
          si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
          v26 = *(_DWORD **)(*((_QWORD *)v30 + 138) + 56LL);
          *v26 = 0;
          v27 = *(SURFOBJ **)(v13 + 192);
          v28 = (SURFOBJ *)*((_QWORD *)v24 + 138);
          prclSrc.right = v20 + 1;
          prclSrc.bottom = v21 + 1;
          pBlendObj = *(BLENDOBJ *)(v12 + 76);
          prclDest = si128;
          prclSrc.left = v20;
          prclSrc.top = v21;
          v36 = xloIdent;
          v37 = xloIdent;
          v38 = xloIdent;
          EngAlphaBlend(v28, v27, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
          if ( !*v26 )
          {
            *v26 = -1;
            EngAlphaBlend(
              *((SURFOBJ **)v24 + 138),
              *(SURFOBJ **)(v13 + 192),
              0LL,
              xloIdent,
              &prclDest,
              &prclSrc,
              &pBlendObj);
            v10 = *v26 != -1;
          }
        }
        goto LABEL_19;
      }
    }
    else
    {
      if ( v17 != 1 )
      {
LABEL_8:
        DEC_SHARE_REF_CNT(v12);
        goto LABEL_9;
      }
      v22 = *(struct _SURFOBJ **)(v13 + 192);
      v31[0] = 0LL;
      SURFREFVIEW::bMap((SURFREFVIEW *)v31, v22);
      if ( v31[0]
        && *(_DWORD *)(*(_QWORD *)&prclSrc.left + 96LL) == 6
        && (*(_DWORD *)(v12 + 80) & 0xFFFFFF) != (crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 192), v20, v21, a5) & 0xFFFFFF) )
      {
LABEL_19:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
        goto LABEL_8;
      }
    }
    v10 = 0;
    goto LABEL_19;
  }
LABEL_9:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v32);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v29);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v33);
LABEL_10:
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  return v10;
}
