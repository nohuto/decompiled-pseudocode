/*
 * XREFs of ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0
 * Callers:
 *     ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800C4D68 (-Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgSco.c)
 *     ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180152E80 (--1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??_GdataproviderBamoPeer@@UEAAPEAXI@Z @ 0x1801531C0 (--_GdataproviderBamoPeer@@UEAAPEAXI@Z.c)
 *     ??_GdataproviderBamoPeerImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180153200 (--_GdataproviderBamoPeerImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ?OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180153E40 (-OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ?OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154240 (-OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?Release@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ @ 0x180154620 (-Release@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z @ 0x180168370 (--_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180168430 (--_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z @ 0x180168470 (--_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180169110 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18016C4D0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoImplObject::Release(
        Microsoft::BamoImpl::BamoImplObject *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
      a4);
    __debugbreak();
  }
  if ( !v4 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoImplObject *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v4;
}
