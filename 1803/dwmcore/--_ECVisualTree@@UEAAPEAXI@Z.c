/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180040FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18004104C (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18004CFEC (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800A29B8 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CVisualTree *__fastcall CVisualTree::`vector deleting destructor'(CVisual **this, char a2)
{
  CVisual *v4; // rcx

  *this = (CVisual *)&CVisualTree::`vftable';
  CVisualTree::ReleaseTreeDatas((CVisualTree *)this);
  v4 = this[3];
  if ( v4 )
  {
    CVisual::SetVisualTreeNoRef(v4, 0LL);
    ReleaseInterfaceNoNULL<IWICBitmap>((__int64)this[3]);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 147);
  CPreComputeContext::~CPreComputeContext((CPreComputeContext *)(this + 8));
  *this = (CVisual *)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly((dataproviderBamoConnection *)this);
    else
      operator delete(this);
  }
  return (CVisualTree *)this;
}
