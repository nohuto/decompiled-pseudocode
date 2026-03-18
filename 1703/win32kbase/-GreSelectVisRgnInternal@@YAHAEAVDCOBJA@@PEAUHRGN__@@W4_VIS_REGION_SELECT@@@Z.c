/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002BD78
 * Callers:
 *     GreSelectVisRgn @ 0x1C002B720 (GreSelectVisRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C00980A0 (GreSelectVisRgnShared.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x1C0030630 (HmgPentryFromPobj.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0039510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003A694 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C003C240 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C003C314 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003D750 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003E500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C003E990 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreSetRegionOwner @ 0x1C0043350 (GreSetRegionOwner.c)
 *     GreGetObjectOwner @ 0x1C007B630 (GreGetObjectOwner.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  struct REGION *v3; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned int *v9; // r15
  struct DC *v10; // r12
  int v11; // edi
  int v12; // edi
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  struct REGION *v15[4]; // [rsp+30h] [rbp-20h] BYREF
  struct REGION *v16; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v17; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v17 = ghsemVisRgnPublish;
    EngAcquireSemaphore(ghsemVisRgnPublish);
    v7 = 1;
    *((_DWORD *)*a1 + 9) |= 0x10u;
    v8 = HmgPentryFromPobj();
    *(_BYTE *)(v8 + 15) |= 4u;
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_27;
    }
    GreSetRegionOwner(a2, 0LL);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v15, a2, 0);
    v9 = (unsigned int *)v15[0];
    if ( v15[0] )
    {
      v10 = *a1;
      if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1LL) != -2147483630 )
        GrepValidateVisRgn(v10, (struct REGION *)v9);
      v11 = a3 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 2 )
          {
            v3 = (struct REGION *)*((_QWORD *)*a1 + 192);
            if ( !v3 )
              v3 = prgnDefault;
            if ( v3 != prgnDefault )
            {
              v16 = v3;
              RGNOBJAPI::bSwap((RGNOBJAPI *)v15, (struct RGNOBJ *)&v16);
              v3 = v16;
LABEL_24:
              *((_QWORD *)*a1 + 192) = v3;
              *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
              goto LABEL_25;
            }
            v7 = 0;
          }
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14, v9[20]);
          v3 = (struct REGION *)v14[0];
          if ( v14[0] )
            RGNOBJ::vCopy((RGNOBJ *)v14, (struct RGNOBJ *)v15);
          else
            v3 = prgnDefault;
          RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v14);
        }
      }
      else
      {
        v3 = (struct REGION *)v9;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v15) )
        {
          v7 = 0;
LABEL_25:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v15);
LABEL_27:
          SEMOBJ::vUnlock((SEMOBJ *)&v17);
          return v7;
        }
        v15[0] = 0LL;
      }
    }
    else
    {
      v3 = prgnDefault;
    }
    DC::vReleaseVis(*a1);
    goto LABEL_24;
  }
  return 0;
}
