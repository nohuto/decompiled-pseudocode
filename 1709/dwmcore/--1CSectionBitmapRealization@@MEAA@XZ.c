/*
 * XREFs of ??1CSectionBitmapRealization@@MEAA@XZ @ 0x180087DA4
 * Callers:
 *     ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x180087CC0 (--_ECSectionBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSectionBitmapRealization::~CSectionBitmapRealization(CSectionBitmapRealization *this)
{
  __int64 v2; // rcx
  void *v3; // rdi
  HANDLE CurrentProcess; // rax
  void *v5; // rcx

  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCacheSourceRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CSectionBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 49) = &CSectionBitmapRealization::`vftable';
  v2 = *((_QWORD *)this + 54);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (void *)*((_QWORD *)this + 53);
  if ( v3 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v3);
    *((_QWORD *)this + 53) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 50);
  if ( v5 )
    CloseHandle(v5);
  CBitmapRealization::~CBitmapRealization(this);
}
