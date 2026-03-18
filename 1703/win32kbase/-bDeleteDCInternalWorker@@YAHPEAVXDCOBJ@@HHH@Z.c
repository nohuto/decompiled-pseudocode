/*
 * XREFs of ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 * Callees:
 *     bFreeDCAttributesWorker @ 0x1C002BBD0 (bFreeDCAttributesWorker.c)
 *     HmgPentryFromPobj @ 0x1C0030630 (HmgPentryFromPobj.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003195C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C003A614 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003A694 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C003B1BC (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 */

__int64 __fastcall bDeleteDCInternalWorker(DC **this, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // edi
  DC *v8; // rcx
  DC *v9; // rcx
  __int64 v10; // rax
  DC *v11; // r10
  REGION *v12; // rax
  REGION *v13; // rcx
  DC *v14; // r10
  REGION *v15; // rax
  REGION *v16; // rcx
  REGION *v17; // rcx
  REGION *v18; // rcx
  PDEV *v19; // rbx
  PDEV *v21; // [rsp+20h] [rbp-18h] BYREF
  PDEV *v22; // [rsp+28h] [rbp-10h] BYREF

  v7 = 0;
  XDCOBJ::bCleanDC(this, a4);
  if ( a2 || (*((_DWORD *)*this + 9) & 8) == 0 )
  {
    if ( !a3 )
      bFreeDCAttributesWorker(*this);
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 19));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 20));
    DEC_SHARE_REF_CNT(*((int **)*this + 13));
    v8 = *this;
    v21 = (PDEV *)*((_QWORD *)*this + 6);
    DC::vReleaseVis(v8);
    v9 = *this;
    *((_DWORD *)v9 + 9) |= 0x10u;
    v10 = HmgPentryFromPobj(v9);
    *(_BYTE *)(v10 + 15) |= 4u;
    if ( DC::prgnVisSnap(*this) )
    {
      v12 = DC::prgnVisSnap(v11);
      REGION::vDeleteREGION(v12);
    }
    v13 = (REGION *)*((_QWORD *)*this + 195);
    if ( v13 )
      REGION::vDeleteREGION(v13);
    if ( DC::prgnRao(*this) )
    {
      v15 = DC::prgnRao(v14);
      REGION::vDeleteREGION(v15);
    }
    v16 = (REGION *)*((_QWORD *)*this + 196);
    if ( v16 )
      REGION::vDeleteREGION(v16);
    v17 = (REGION *)*((_QWORD *)*this + 197);
    if ( v17 )
      REGION::vDeleteREGION(v17);
    v18 = (REGION *)*((_QWORD *)*this + 198);
    if ( v18 )
      REGION::vDeleteREGION(v18);
    v22 = (PDEV *)*((_QWORD *)*this + 7);
    v19 = v22;
    XDCOBJ::bDeleteDC(this, a3);
    PDEVOBJ::vUnreferencePdev(&v21, a3 != 0);
    if ( v19 )
      PDEVOBJ::vUnreferencePdev(&v22, a3 != 0);
    return 1;
  }
  return v7;
}
