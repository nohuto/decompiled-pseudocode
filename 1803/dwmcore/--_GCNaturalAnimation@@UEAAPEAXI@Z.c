/*
 * XREFs of ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x18016E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18003AEC4 (--1CBaseExpression@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::`scalar deleting destructor'(CNaturalAnimation *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 49);
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
