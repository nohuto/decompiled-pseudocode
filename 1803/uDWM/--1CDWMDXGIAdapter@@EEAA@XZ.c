/*
 * XREFs of ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x180034C10
 * Callers:
 *     ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x180034830 (--_ECDWMDXGIAdapter@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMDXGIAdapter::~CDWMDXGIAdapter(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int i; // edi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx

  *(_QWORD *)this = &CDWMDXGIAdapter::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  for ( i = 0; i < *((_DWORD *)this + 94); ++i )
  {
    v5 = *((_QWORD *)this + 44);
    v6 = 280LL * i;
    v7 = *(_QWORD *)(v6 + v5);
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*(_QWORD *)(v6 + v5));
      v5 = *((_QWORD *)this + 44);
    }
    v8 = *(_QWORD *)(v6 + v5 + 8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 352);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
