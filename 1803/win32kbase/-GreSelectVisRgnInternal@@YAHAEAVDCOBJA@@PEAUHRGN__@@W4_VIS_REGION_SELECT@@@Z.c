/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgn @ 0x1C00315A0 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C0072E20 (GreSelectVisRgnShared.c)
 * Callees:
 *     GreSetRegionOwner @ 0x1C001E5F0 (GreSetRegionOwner.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0020920 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00209F4 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0021C40 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0023E80 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024040 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C002428C (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C00242E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0024D98 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00257E4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0026880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0026E40 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreGetObjectOwner @ 0x1C002EE00 (GreGetObjectOwner.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  REGION *v3; // rbx
  unsigned int v7; // r14d
  unsigned int *v8; // r15
  struct DC *v9; // r12
  int v10; // edi
  int v11; // edi
  REGION *v13[2]; // [rsp+20h] [rbp-30h] BYREF
  struct REGION *v14[4]; // [rsp+30h] [rbp-20h] BYREF
  struct OBJECT *v15; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v16; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v16 = ghsemVisRgnPublish;
    EngAcquireSemaphore(ghsemVisRgnPublish);
    v7 = 1;
    DC::vReleaseRao(*a1);
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_27;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, a2, 0);
    v8 = (unsigned int *)v14[0];
    if ( v14[0] )
    {
      v9 = *a1;
      if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1) != -2147483630 )
        GrepValidateVisRgn(v9, (struct REGION *)v8);
      v10 = a3 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 2 )
          {
            v3 = (REGION *)*((_QWORD *)*a1 + 191);
            if ( !v3 )
              v3 = prgnDefault;
            if ( v3 != prgnDefault )
            {
              v15 = v3;
              RGNOBJAPI::bSwap(v14, &v15);
              v3 = v15;
LABEL_24:
              *((_QWORD *)*a1 + 191) = v3;
              *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
              goto LABEL_25;
            }
            v7 = 0;
          }
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13, v8[20]);
          v3 = v13[0];
          if ( v13[0] )
            RGNOBJ::vCopy((RGNOBJ *)v13, (struct RGNOBJ *)v14);
          else
            v3 = prgnDefault;
          RGNMEMOBJ::~RGNMEMOBJ(v13);
        }
      }
      else
      {
        v3 = (REGION *)v8;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v14) )
        {
          v7 = 0;
LABEL_25:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v14);
LABEL_27:
          SEMOBJ::vUnlock((SEMOBJ *)&v16);
          return v7;
        }
        v14[0] = 0LL;
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
