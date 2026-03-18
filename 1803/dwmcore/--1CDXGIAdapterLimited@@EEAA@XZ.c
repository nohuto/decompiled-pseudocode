/*
 * XREFs of ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x1800CB440
 * Callers:
 *     ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x1800CAE80 (--_GCDXGIAdapterLimited@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDXGIAdapterLimited::~CDXGIAdapterLimited(CDXGIAdapterLimited *this)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  _QWORD *v4; // r14
  __int64 v5; // rbx

  *(_QWORD *)this = &CDXGIAdapterLimited::`vftable';
  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 4));
  v4 = (_QWORD *)((char *)this + 368);
  if ( *((_DWORD *)this + 98) )
  {
    do
    {
      v5 = 280LL * v2;
      ReleaseInterfaceNoNULL<IWICBitmap>(*(_QWORD *)(*v4 + v5));
      ReleaseInterfaceNoNULL<IWICBitmap>(*(_QWORD *)(*v4 + v5 + 8));
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 98) );
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 368);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
