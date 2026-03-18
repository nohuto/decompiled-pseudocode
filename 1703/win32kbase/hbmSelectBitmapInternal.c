/*
 * XREFs of hbmSelectBitmapInternal @ 0x1C00A02A0
 * Callers:
 *     hbmSelectBitmap @ 0x1C007E7E0 (hbmSelectBitmap.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002CB3C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C002CB74 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?bSessionMappedDIBSection@SURFACE@@QEAAHXZ @ 0x1C002CB94 (-bSessionMappedDIBSection@SURFACE@@QEAAHXZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C00379E0 (--1SEMOBJEXORSHARED@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A10 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0037B40 (GreAcquireSemaphoreSharedInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0039510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00397F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C003A530 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     bIsCompatible @ 0x1C0059C10 (bIsCompatible.c)
 *     UserIsGDIScalingApplicable @ 0x1C0071560 (UserIsGDIScalingApplicable.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 *     UserGetHwndDpi @ 0x1C0097D60 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C0098070 (GreGetScaledLogPixels.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009FA3C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00E8B34 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

void *__fastcall hbmSelectBitmapInternal(HDC a1, void *a2, int a3, int a4, int a5)
{
  unsigned int v6; // r14d
  void *v9; // rdi
  __int64 v10; // rbx
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  int v12; // esi
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  DC *v16; // rdi
  __int64 v17; // rcx
  int ObjectOwner; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  DC *v21; // rdi
  __int64 v22; // rax
  SURFACE *v23; // r14
  unsigned int v24; // r12d
  int *v25; // r15
  void *v26; // rcx
  __m128 v27; // xmm0
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  void *v32; // rcx
  __m128 v33; // xmm0
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int16 v44; // [rsp+30h] [rbp-50h] BYREF
  DC *v45[2]; // [rsp+38h] [rbp-48h] BYREF
  int *v46; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-30h]
  void *v48; // [rsp+58h] [rbp-28h]
  int *v49; // [rsp+60h] [rbp-20h] BYREF
  struct _BASEOBJECT *v50; // [rsp+68h] [rbp-18h] BYREF
  PERESOURCE v51; // [rsp+70h] [rbp-10h] BYREF

  v48 = 0LL;
  v6 = (unsigned int)a1;
  v49 = 0LL;
  v45[0] = 0LL;
  v45[1] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v45, a1);
  if ( v45[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v44);
    v10 = HmgShareLockCheck((unsigned int)a2, 5);
    if ( !v10 )
    {
LABEL_99:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
      goto LABEL_100;
    }
    v12 = 1;
    v51 = ghsemGreLock;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem");
    }
    else
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    }
    GreAcquireHmgrSemaphore(v14, v13, v15);
    v16 = v45[0];
    v46 = (int *)*((_QWORD *)v45[0] + 6);
    ObjectOwner = GreGetObjectOwner(v6, 1);
    if ( *((_DWORD *)v16 + 8) != 1
      || *(_DWORD *)(v10 + 168)
      && ((*(_DWORD *)v10 & 0x800000) == 0 || (*(_WORD *)(v10 + 102) & 0x200) == 0)
      && *(_QWORD *)(v10 + 160) != *(_QWORD *)v16 )
    {
      goto LABEL_97;
    }
    if ( !(unsigned int)bIsCompatible(&v50, *(_QWORD *)(v10 + 128), v10, (__int64)v46, 1) )
      goto LABEL_97;
    v21 = v45[0];
    v17 = *(_QWORD *)(v10 + 48);
    v22 = *((_QWORD *)v45[0] + 6);
    if ( !gAllowPrinterSurfaceInDisplayDC )
    {
      if ( v22 )
      {
        if ( v17 )
        {
          v17 = (unsigned int)(*(_DWORD *)(v22 + 32) ^ *(_DWORD *)(v17 + 32));
          if ( (v17 & 1) != 0 )
            goto LABEL_97;
        }
      }
    }
    if ( ObjectOwner && (*(_DWORD *)(v10 + 112) & 0x800) != 0 || !a5 && !ObjectOwner )
      goto LABEL_97;
    v23 = (SURFACE *)*((_QWORD *)v45[0] + 64);
    v17 = 0x4000000LL;
    if ( !v23 )
      v23 = SURFACE::pdibDefault;
    if ( ((*((_DWORD *)v23 + 28) & 0x4000000) == 0
       || (*(_DWORD *)(v10 + 112) & 0x4000000) == 0
       || (*((_DWORD *)v23 + 29) & 0x200) != 0)
      && !a4
      && !a3 )
    {
LABEL_97:
      GreReleaseHmgrSemaphore(v17);
LABEL_98:
      SEMOBJEXORSHARED::~SEMOBJEXORSHARED(&v51);
      v9 = v48;
      goto LABEL_99;
    }
    v47 = *(_DWORD *)(*((_QWORD *)v45[0] + 10) + 312LL);
    v24 = v47 & 7;
    if ( (v47 & 7) != 0 )
    {
      DC::dwSetLayout(v45[0], -1, 0);
      v21 = v45[0];
    }
    v17 = (__int64)v50;
    if ( *(struct _BASEOBJECT **)(v10 + 128) != v50 )
    {
      *(_DWORD *)(v10 + 112) |= 0x8000000u;
      *(_QWORD *)(v10 + 128) = v17;
      if ( v17 )
        INC_SHARE_REF_CNT((struct _BASEOBJECT *)v17);
      v21 = v45[0];
    }
    if ( (*((_DWORD *)v23 + 28) & 0x1000000) != 0 )
      v25 = *(int **)v23;
    else
      v25 = v49;
    v48 = (void *)*((_QWORD *)v23 + 4);
    if ( a2 == v48 )
    {
LABEL_94:
      if ( v24 )
        DC::dwSetLayout(v21, -1, v47);
      if ( !v12 )
        goto LABEL_98;
      goto LABEL_97;
    }
    if ( (SURFACE *)v10 == SURFACE::pdibDefault )
    {
      v26 = (void *)*((_QWORD *)v21 + 60);
      *((_QWORD *)v21 + 64) = 0LL;
      if ( v26
        && (unsigned int)UserIsGDIScalingApplicable(v26, v19, v20)
        && (unsigned int)UserGetHwndDpi(*((void **)v21 + 60), &v44)
        && v44 != 96 )
      {
        v27 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v44));
        v27.m128_f32[0] = v27.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v21, _mm_unpacklo_ps(v27, v27).m128_u64[0]);
      }
      else
      {
        v28 = *((_DWORD *)v21 + 134);
        if ( (v28 & 1) != 0 )
        {
          *(_QWORD *)((char *)v21 + 548) = 0LL;
          *((_DWORD *)v21 + 9) |= 0x10u;
          *(_QWORD *)((char *)v21 + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          *((_DWORD *)v21 + 134) = v28 & 0xFFFFFFF8 | 4;
        }
      }
      goto LABEL_60;
    }
    *((_QWORD *)v21 + 64) = v10;
    if ( (unsigned int)DC::bDpiScaledSurface(v21) )
    {
      v31 = *(_QWORD *)(v10 + 596);
    }
    else
    {
      v32 = (void *)*((_QWORD *)v21 + 60);
      if ( !v32
        || !(unsigned int)UserIsGDIScalingApplicable(v32, v29, v30)
        || !(unsigned int)UserGetHwndDpi(*((void **)v21 + 60), &v44)
        || v44 == 96 )
      {
        v34 = *((_DWORD *)v21 + 134);
        if ( (v34 & 1) != 0 )
        {
          *(_QWORD *)((char *)v21 + 548) = 0LL;
          *((_DWORD *)v21 + 9) |= 0x10u;
          *(_QWORD *)((char *)v21 + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          *((_DWORD *)v21 + 134) = v34 & 0xFFFFFFF8 | 4;
        }
        goto LABEL_55;
      }
      v33 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v44));
      v33.m128_f32[0] = v33.m128_f32[0] / 96.0;
      v31 = _mm_unpacklo_ps(v33, v33).m128_u64[0];
    }
    DC::vSetDpiScaling(v21, v31);
LABEL_55:
    if ( (*(_DWORD *)v10 & 0x800000) != 0 && (*(_WORD *)(v10 + 102) & 0x200) != 0
      || (unsigned int)SURFACE::bSessionMappedDIBSection((SURFACE *)v10) )
    {
      *((_DWORD *)v45[0] + 9) |= 0x10000u;
    }
    else
    {
      *((_DWORD *)v45[0] + 9) &= ~0x10000u;
    }
LABEL_60:
    *((_QWORD *)v45[0] + 66) = *(_QWORD *)(v10 + 56);
    *(_DWORD *)(*((_QWORD *)v45[0] + 10) + 8LL) |= 0xFu;
    if ( v23 != SURFACE::pdibDefault )
    {
      if ( (*((_DWORD *)v23 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
        vMirrorIncludeNotifyWrap(v45, v23, 0LL);
      SURFACE::vDec_cRef(v23);
      if ( !*((_DWORD *)v23 + 42) )
      {
        if ( v25 )
          v25 = *(int **)v23;
        if ( (*((_DWORD *)v23 + 28) & 0x8000000) != 0 )
        {
          v49 = (int *)*((_QWORD *)v23 + 16);
          *((_QWORD *)v23 + 16) = 0LL;
          XEPALOBJ::vUnrefPalette(&v49);
        }
        *((_DWORD *)v23 + 28) &= ~0x8000000u;
      }
    }
    if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
      vMirrorIncludeNotifyWrap(v45, v10, 1LL);
    v35 = *(_DWORD *)(v10 + 112);
    if ( (v35 & 0x4000) != 0 || (v35 & 0x800010) != 0 && (v46[8] & 1) != 0 )
      *((_DWORD *)v45[0] + 9) |= 0x200u;
    else
      *((_DWORD *)v45[0] + 9) &= ~0x200u;
    v36 = *((_DWORD *)v45[0] + 9);
    if ( (*(_DWORD *)(v10 + 112) & v36 & 0x200) != 0 )
      v37 = v36 | 0x8000;
    else
      v37 = v36 & 0xFFFF7FFF;
    *((_DWORD *)v45[0] + 9) = v37;
    if ( (SURFACE *)v10 != SURFACE::pdibDefault )
    {
      INC_SHARE_REF_CNT((struct _BASEOBJECT *)v10);
      ++*(_DWORD *)(v10 + 168);
      if ( (*(_DWORD *)v10 & 0x800000) == 0 || (*(_WORD *)(v10 + 102) & 0x200) == 0 )
      {
        *(_QWORD *)(v10 + 160) = *(_QWORD *)v45[0];
        *(_QWORD *)(v10 + 48) = *((_QWORD *)v45[0] + 6);
      }
    }
    v38 = SURFACE::bDIBSection((SURFACE *)v10);
    v39 = *((_QWORD *)v45[0] + 10);
    if ( v38 )
      *(_DWORD *)(v39 + 8) |= 0x4000u;
    else
      *(_DWORD *)(v39 + 8) &= ~0x4000u;
    v40 = SURFACE::bDIBSection((SURFACE *)v10);
    v41 = *((_QWORD *)v45[0] + 10);
    if ( v40 )
      *(_QWORD *)(v41 + 128) = *(_QWORD *)(v10 + 216);
    else
      *(_QWORD *)(v41 + 128) = 0LL;
    DEC_SHARE_REF_CNT((int *)v10);
    v10 = 0LL;
    GreReleaseHmgrSemaphore(v42);
    v12 = 0;
    DC::bSetDefaultRegion(v45[0]);
    DC::vUpdate_VisRect(v45[0], *((struct REGION **)v45[0] + 192));
    if ( v25 )
    {
      v46 = (int *)HmgShareLockCheck((unsigned int)v25, 5);
      SURFREF::bDeleteSurface(&v46, 0LL);
      v48 = gahStockObjects[21];
      v17 = (__int64)v46;
      if ( v46 )
        DEC_SHARE_REF_CNT(v46);
    }
    v21 = v45[0];
    goto LABEL_94;
  }
LABEL_100:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v45);
  if ( v10 )
    DEC_SHARE_REF_CNT((int *)v10);
  return v9;
}
