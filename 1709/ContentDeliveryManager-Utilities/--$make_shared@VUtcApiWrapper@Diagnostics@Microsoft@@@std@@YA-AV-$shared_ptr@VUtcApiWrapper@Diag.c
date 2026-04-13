/*
 * XREFs of ??$make_shared@VUtcApiWrapper@Diagnostics@Microsoft@@@std@@YA?AV?$shared_ptr@VUtcApiWrapper@Diagnostics@Microsoft@@@0@XZ @ 0x180018658
 * Callers:
 *     ?DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ @ 0x180010C10 (-DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<Microsoft::Diagnostics::UtcApiWrapper>(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rsi

  v2 = (char *)operator new(0x20uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v4 = v2 + 16;
    if ( v3 != (char *)-16LL )
    {
      *v4 = 0LL;
      *((_QWORD *)v3 + 3) = 0LL;
      *((_QWORD *)v3 + 3) = 0LL;
      *v4 = &Microsoft::Diagnostics::UtcWrapperBase::`vftable';
    }
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = (volatile signed __int32 *)a1[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v5)(v5, 1LL);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
