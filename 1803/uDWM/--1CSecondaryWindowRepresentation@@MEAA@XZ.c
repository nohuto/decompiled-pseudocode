/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18002F370
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x18002F460 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800156C8 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18002F2F4 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18007FDB0 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     McTemplateU0pp @ 0x18007FE90 (McTemplateU0pp.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  unsigned int i; // edi
  CWindowData *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CSecondaryWindowRepresentation::ReleaseAllResources(this);
  v4 = (CBaseObject *)*((_QWORD *)this + 58);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 65);
  if ( v8 )
    CBaseObject::Release(v8);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v13 = *((_QWORD *)this + 4);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 40);
    else
      v14 = 0LL;
    McTemplateU0pp(v8, &RemoveSecondaryWindowRepresentation_Destroy, this, v14);
  }
  v10 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v10 )
    CWindowData::RemoveSecondaryWindowRepresentation(v10, this, v2, v3);
  v11 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v12 )
    CBaseObject::Release(v12);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 128);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
