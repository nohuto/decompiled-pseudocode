/*
 * XREFs of ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x180154754
 * Callers:
 *     ?AckProxyReference@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I_N@Z @ 0x180153240 (-AckProxyReference@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I_N@Z.c)
 *     ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154CC0 (-Thunk_RequestDisposeProxy_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v4; // rax

  if ( *((int *)a3 + 4) <= 0 )
  {
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoPeerImpl *, _QWORD))(*(_QWORD *)a2 + 72LL))(
      a2,
      *((unsigned int *)this + 6));
    v4 = *(_QWORD *)a3;
    *((_BYTE *)a3 + 32) = 0;
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(v4 + 48))(a3);
  }
}
