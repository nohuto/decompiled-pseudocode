/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0299D30
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C0299C00 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0039204 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C003DEC0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C003DFF0 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02B37F4 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(__int64 a1, struct PFF *a2)
{
  struct PDEV *v2; // rax
  char v3; // di
  struct PFF *v4; // rsi
  unsigned int v6; // r14d
  struct _IFIMETRICS *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r9
  struct _IFIMETRICS *v10; // rsi
  struct _FD_GLYPHSET *v11; // rax
  struct _IFIMETRICS *v12; // rax
  unsigned __int64 v14; // r8
  struct _IFIMETRICS *v15; // rdx
  unsigned __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  struct PDEV *v19; // [rsp+98h] [rbp+48h] BYREF
  __int64 *v20; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+58h] BYREF

  v2 = (struct PDEV *)*((_QWORD *)a2 + 11);
  v3 = 0;
  v4 = a2;
  v18[0] = a2;
  v19 = v2;
  if ( *((_DWORD *)a2 + 36) )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = PDEVOBJ::QueryFont(&v19, *((struct DHPDEV__ **)v4 + 12), a1, v6, &v17);
      if ( !v7 )
        return v3;
      v8 = *((_QWORD *)v4 + v6 + 27);
      v20 = (__int64 *)v8;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(*(void **)(v8 + 32), v7) )
        break;
      v10 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree((PFFOBJ *)v18, *((struct DHPDEV__ **)v4 + 12), a1, v6, 3u, &v16);
      if ( !v10 )
        return v3;
      v11 = PFEOBJ::pfdg(&v20);
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v11, v10) )
      {
        v14 = v16;
LABEL_15:
        v15 = v10;
LABEL_17:
        PDEVOBJ::Free(&v19, v15, v14, v9);
        return v3;
      }
      if ( *(_QWORD *)(v8 + 48) )
      {
        v12 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree(
                                      (PFFOBJ *)v18,
                                      *(struct DHPDEV__ **)(v18[0] + 96LL),
                                      a1,
                                      v6,
                                      2u,
                                      &v21);
        v10 = v12;
        if ( !v12 )
          return v3;
        if ( !UmfdAllocation::UpdateKernelmodeAllocation(*(void **)(v8 + 48), v12) )
        {
          v14 = v21;
          goto LABEL_15;
        }
      }
      v4 = (struct PFF *)v18[0];
      if ( v6++ >= *(_DWORD *)(v18[0] + 144LL) )
        return 1;
    }
    v14 = v17;
    v15 = v7;
    goto LABEL_17;
  }
  return 1;
}
