/*
 * XREFs of ??1CBitmapLock@@UEAA@XZ @ 0x180042F70
 * Callers:
 *     ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x180042D90 (--_GCBitmapLock@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(CBitmapLock *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLock::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 10) = &CBitmapLock::`vftable'{for `IWICBitmapLock'};
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, *((unsigned int *)this + 36));
    v3 = *((_QWORD *)this + 19);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 19) = 0LL;
    }
    v4 = *((_QWORD *)this + 12);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( *((_BYTE *)this + 89) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 16));
      *((_QWORD *)this + 16) = 0LL;
      *((_DWORD *)this + 34) = 0;
    }
  }
  *((_BYTE *)this + 88) = 0;
  *((_QWORD *)this + 2) = &CMTALock::`vftable';
  if ( *((_BYTE *)this + 64) )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    *((_BYTE *)this + 64) = 0;
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
