/*
 * XREFs of ??$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCThread@ComTaskPool@Internal@Windows@@@12@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@@Z @ 0x1800167F0
 * Callers:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800059DC (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CThread,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &>(
        _QWORD *a1,
        int *a2,
        int *a3)
{
  _DWORD *v6; // rbx
  bool v7; // zf
  int v8; // eax
  int v9; // ecx

  *a1 = 0LL;
  v6 = operator new(0xA8uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v6 )
  {
    v7 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v8 = *a3;
    v9 = *a2;
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( !v7 )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    *((_QWORD *)v6 + 2) = 0LL;
    *(_QWORD *)v6 = &Windows::Internal::ComTaskPool::CThread::`vftable';
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    v6[12] = -2147467259;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    v6[20] = v9;
    v6[21] = v8 & 9;
    *((_QWORD *)v6 + 11) = 0LL;
    *((_BYTE *)v6 + 96) = 1;
    *((_QWORD *)v6 + 13) = 0LL;
    *((_QWORD *)v6 + 14) = 0LL;
    *((_BYTE *)v6 + 120) = 0;
    *((_QWORD *)v6 + 16) = 1LL;
    v6[34] = 0;
    *((_QWORD *)v6 + 18) = 0LL;
    *((_QWORD *)v6 + 19) = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v6;
  }
  return a1;
}
