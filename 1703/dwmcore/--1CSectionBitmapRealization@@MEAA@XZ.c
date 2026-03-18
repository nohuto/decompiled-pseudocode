/*
 * XREFs of ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1801B47F0
 * Callers:
 *     ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x1801B48A0 (--_ECSectionBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSectionBitmapRealization::~CSectionBitmapRealization(CSectionBitmapRealization *this)
{
  __int64 v2; // rcx
  void *v3; // rdi
  HANDLE CurrentProcess; // rax
  void *v5; // rcx

  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSectionBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CSectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 14) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 57);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (void *)*((_QWORD *)this + 54);
  if ( v3 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v3);
    *((_QWORD *)this + 54) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 51);
  if ( v5 )
    CloseHandle(v5);
  CBitmapRealization::~CBitmapRealization(this);
}
