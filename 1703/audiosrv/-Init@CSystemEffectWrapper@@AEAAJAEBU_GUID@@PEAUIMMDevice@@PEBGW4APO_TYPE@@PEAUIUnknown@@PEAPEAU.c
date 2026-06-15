/*
 * XREFs of ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1800CF994
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1800CF678 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800826D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x1800CF0E4 (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1800CF1EC (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::Init(
        __int64 a1,
        const struct _GUID *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _GUID v7; // xmm0
  const WCHAR **v8; // r14
  int v12; // eax
  __int64 v13; // r8
  const struct _GUID *v14; // r9
  size_t v15; // r9
  int v16; // ebx
  int Instance; // eax
  __int64 v18; // rcx
  int v19; // r8d
  const WCHAR *v20; // rdx
  LPVOID *v22; // [rsp+20h] [rbp-58h]
  __int128 v23; // [rsp+50h] [rbp-28h] BYREF

  v7 = *a2;
  v8 = (const WCHAR **)(a1 + 96);
  *(_DWORD *)(a1 + 104) = a5;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(struct _GUID *)(a1 + 80) = v7;
  if ( a3 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 40LL))(a3, a1 + 96);
  }
  else
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    v12 = _AllocStringWorker<CTCoAllocPolicy>(a1, (__int64)a2, a4, v15, (__int64)v22, (void **)(a1 + 96));
  }
  a5 = v12;
  v16 = v12;
  if ( v12 >= 0 )
  {
    Instance = APOCatchCoCreateInstance(
                 a2,
                 (struct IUnknown *)(a1 + 8),
                 v13,
                 v14,
                 (LPVOID *)(a1 + 72),
                 (struct _EXCEPTION_POINTERS *)&a5);
    v16 = Instance;
    if ( Instance >= 0 )
    {
      v16 = a5;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 104);
      v20 = *v8;
      v23 = *(_OWORD *)(a1 + 80);
      APOTrackAndLogException(v18, v20, v19, (__int64)&v23, (__int64)"CSystemEffectWrapper::Init", 81, Instance);
    }
    if ( v16 >= 0 )
      *a7 = a1 + 8;
  }
  return (unsigned int)v16;
}
