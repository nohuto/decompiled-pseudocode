/*
 * XREFs of ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x180073160
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CRenderingTechnique@@UEAAKXZ @ 0x180071A40 (-Release@CRenderingTechnique@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x180076FC8 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x18008B980 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CBrushRenderingEffect *__fastcall CBrushRenderingEffect::`vector deleting destructor'(
        CBrushRenderingEffect *this,
        char a2)
{
  CDrawListBitmap *v3; // rsi
  __int64 v5; // rdi
  CRenderingTechnique *v6; // rcx
  void (*v7)(void); // rax
  struct CObjectCache *ObjectCache; // rax

  v3 = (CBrushRenderingEffect *)((char *)this + 120);
  v5 = 4LL;
  do
  {
    v3 = (CDrawListBitmap *)((char *)v3 - 24);
    CDrawListBitmap::~CDrawListBitmap(v3);
    --v5;
  }
  while ( v5 );
  v6 = (CRenderingTechnique *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v7 == (char *)CRenderingTechnique::Release )
      CRenderingTechnique::Release(v6);
    else
      v7();
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v6);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
