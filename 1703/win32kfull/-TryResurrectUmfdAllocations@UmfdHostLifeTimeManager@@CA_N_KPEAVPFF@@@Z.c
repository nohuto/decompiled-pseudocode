/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C029D650
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C029D510 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C002FCB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0032114 (-QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00321C4 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00322E4 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02B99EC (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(__int64 a1, struct PFF *a2)
{
  char v2; // di
  unsigned int v5; // esi
  void *v6; // r15
  __int64 v7; // rbx
  struct _FD_GLYPHSET *v8; // rax
  void *v9; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF
  __int64 *v15; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  v14 = *((_QWORD *)a2 + 11);
  if ( *((_DWORD *)a2 + 36) )
  {
    v5 = 1;
    while ( 1 )
    {
      v6 = PDEVOBJ::QueryFont((PDEVOBJ *)&v14, *((struct DHPDEV__ **)a2 + 12), a1, v5, &v13);
      if ( !v6 )
        return v2;
      v7 = *((_QWORD *)a2 + v5 + 27);
      v15 = (__int64 *)v7;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(*(void **)(v7 + 32), v6) )
      {
        v11 = v13;
        goto LABEL_16;
      }
      v6 = (void *)PDEVOBJ::QueryFontTree((PDEVOBJ *)&v14, *((struct DHPDEV__ **)a2 + 12), a1, v5, 3u, &v12);
      if ( !v6 )
        return v2;
      v8 = PFEOBJ::pfdg(&v15);
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8, v6) )
        break;
      if ( *(_QWORD *)(v7 + 48) )
      {
        v9 = (void *)PDEVOBJ::QueryFontTree((PDEVOBJ *)&v14, *((struct DHPDEV__ **)a2 + 12), a1, v5, 2u, &v16);
        v6 = v9;
        if ( !v9 )
          return v2;
        if ( !UmfdAllocation::UpdateKernelmodeAllocation(*(void **)(v7 + 48), v9) )
        {
          v11 = v16;
LABEL_16:
          PDEVOBJ::Free((PDEVOBJ *)&v14, v6, v11);
          return v2;
        }
      }
      if ( v5++ >= *((_DWORD *)a2 + 36) )
        return 1;
    }
    v11 = v12;
    goto LABEL_16;
  }
  return 1;
}
