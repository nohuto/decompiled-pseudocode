/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18000F194
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x18000F280 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18000F118 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001189C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180075400 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     EtwppTemplate_qq @ 0x1800754E8 (EtwppTemplate_qq.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  unsigned int i; // edi
  CWindowData *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CSecondaryWindowRepresentation::ReleaseAllResources(this);
  v2 = (CBaseObject *)*((_QWORD *)this + 58);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 65);
  if ( v6 )
    CBaseObject::Release(v6);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( dword_1800BE044
    && (unsigned __int8)(byte_1800BE048 - 1) > 2u
    && (qword_1800BE030 & 0x8000000000000001uLL) != 0
    && (qword_1800BE038 & 0x8000000000000001uLL) == qword_1800BE038 )
  {
    v11 = *((_QWORD *)this + 4);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 40);
    else
      v12 = 0LL;
    EtwppTemplate_qq(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &EtwTraceInfo_9003, this, v12);
  }
  v8 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v8 )
    CWindowData::RemoveSecondaryWindowRepresentation(v8, this);
  v9 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v10 )
    CBaseObject::Release(v10);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 128);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
