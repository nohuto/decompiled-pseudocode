/*
 * XREFs of ??1CImage@@EEAA@XZ @ 0x180019664
 * Callers:
 *     ??_GCImage@@EEAAPEAXI@Z @ 0x180019410 (--_GCImage@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImage::~CImage(CImage *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *(_QWORD *)this = &CImage::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 35) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 36) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 37) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 38) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 39) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual(this);
}
