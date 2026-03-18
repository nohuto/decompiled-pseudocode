/*
 * XREFs of ??1CDXGIEnumeration@@MEAA@XZ @ 0x1800CAB74
 * Callers:
 *     ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x1800CA750 (--_ECDXGIEnumeration@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDXGIEnumeration::~CDXGIEnumeration(CDXGIEnumeration *this)
{
  unsigned int v2; // edi
  void *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CDXGIEnumeration::`vftable';
  v2 = 0;
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 27) )
    {
      v4 = *((_QWORD *)this + 2);
      if ( !v4 )
        goto LABEL_6;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 184LL))(v4, *((unsigned int *)this + 26));
      v3 = (void *)*((_QWORD *)this + 12);
    }
    CloseHandle(v3);
  }
LABEL_6:
  if ( *((_DWORD *)this + 22) )
  {
    do
      ReleaseInterfaceNoNULL<CPolygon>(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v2++));
    while ( v2 < *((_DWORD *)this + 22) );
  }
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 2));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 3));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 4));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 5));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 6));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
