/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgn @ 0x1C0059C20 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C00A1FE0 (GreSelectVisRgnShared.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     GreSetRegionOwner @ 0x1C0042A00 (GreSetRegionOwner.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004333C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0043500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00438D0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C00452A0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0045374 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0046700 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004961C (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     HmgPentryFromPobj @ 0x1C004D460 (HmgPentryFromPobj.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0053194 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     GreGetObjectOwner @ 0x1C0073C80 (GreGetObjectOwner.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, struct HOBJ__ *a2, int a3)
{
  __m128i *v3; // rbx
  unsigned int v7; // r14d
  DC *v8; // rcx
  __int64 v9; // rax
  unsigned int *v10; // r15
  struct DC *v11; // r12
  int v12; // edi
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  REGION *v17[2]; // [rsp+20h] [rbp-30h] BYREF
  struct REGION *v18[4]; // [rsp+30h] [rbp-20h] BYREF
  __m128i *v19; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v20; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v20 = ghsemVisRgnPublish;
    EngAcquireSemaphore(ghsemVisRgnPublish);
    v8 = *a1;
    v7 = 1;
    *((_DWORD *)v8 + 9) |= 0x10u;
    v9 = HmgPentryFromPobj(v8);
    *(_BYTE *)(v9 + 15) |= 4u;
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1, v14, v15);
      goto LABEL_27;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 0);
    v10 = (unsigned int *)v18[0];
    if ( v18[0] )
    {
      v11 = *a1;
      if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1LL) != -2147483630 )
        GrepValidateVisRgn(v11, (struct REGION *)v10);
      v12 = a3 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 2 )
          {
            v3 = (__m128i *)*((_QWORD *)*a1 + 192);
            if ( !v3 )
              v3 = (__m128i *)prgnDefault;
            if ( v3 != (__m128i *)prgnDefault )
            {
              v19 = v3;
              RGNOBJAPI::bSwap(v18, &v19);
              v3 = v19;
LABEL_24:
              *((_QWORD *)*a1 + 192) = v3;
              v3[1].m128i_i32[3] = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
              goto LABEL_25;
            }
            v7 = 0;
          }
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17, v10[20]);
          v3 = (__m128i *)v17[0];
          if ( v17[0] )
            RGNOBJ::vCopy((RGNOBJ *)v17, (struct RGNOBJ *)v18);
          else
            v3 = (__m128i *)prgnDefault;
          RGNMEMOBJ::~RGNMEMOBJ(v17);
        }
      }
      else
      {
        v3 = (__m128i *)v10;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v18) )
        {
          v7 = 0;
LABEL_25:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
LABEL_27:
          SEMOBJ::vUnlock((PERESOURCE *)&v20);
          return v7;
        }
        v18[0] = 0LL;
      }
    }
    else
    {
      v3 = (__m128i *)prgnDefault;
    }
    DC::vReleaseVis(*a1);
    goto LABEL_24;
  }
  return 0;
}
