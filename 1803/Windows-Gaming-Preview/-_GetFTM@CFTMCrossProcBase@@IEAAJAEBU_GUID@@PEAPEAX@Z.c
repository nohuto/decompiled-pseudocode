/*
 * XREFs of ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004163C
 * Callers:
 *     ?GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x1800410D0 (-GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z @ 0x180041200 (-DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z.c)
 *     ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180041270 (-GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1800413F0 (-MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 * Callees:
 *     CoCreateFreeThreadedMarshaler_0 @ 0x1800431C2 (CoCreateFreeThreadedMarshaler_0.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::_GetFTM(LPUNKNOWN punkOuter, IUnknown *a2, void **a3)
{
  RTL_SRWLOCK *v3; // r14
  struct IUnknownVtbl *lpVtbl; // rbx
  signed int v7; // edi
  HRESULT v8; // esi
  struct IUnknownVtbl *v9; // rbx
  struct IUnknownVtbl *v10; // rcx
  LPUNKNOWN v11; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp+10h] BYREF

  ppunkMarshal = a2;
  *a3 = 0LL;
  v3 = (RTL_SRWLOCK *)&punkOuter[5];
  AcquireSRWLockShared((PSRWLOCK)&punkOuter[5]);
  lpVtbl = punkOuter[6].lpVtbl;
  v7 = lpVtbl == 0LL ? 0x80004005 : 0;
  ReleaseSRWLockShared(v3);
  if ( !lpVtbl )
  {
    ppunkMarshal = 0LL;
    v8 = CoCreateFreeThreadedMarshaler_0(punkOuter, &ppunkMarshal);
    if ( v8 < 0 )
    {
      v7 = v8;
    }
    else
    {
      AcquireSRWLockExclusive(v3);
      v7 = punkOuter[6].lpVtbl == 0LL ? 0x80004005 : 0;
      if ( !punkOuter[6].lpVtbl )
      {
        v9 = (struct IUnknownVtbl *)ppunkMarshal;
        if ( ppunkMarshal )
        {
          ((void (__fastcall *)(LPUNKNOWN))ppunkMarshal->lpVtbl->AddRef)(ppunkMarshal);
          v10 = punkOuter[6].lpVtbl;
          punkOuter[6].lpVtbl = v9;
          if ( v10 )
            (*((void (__fastcall **)(struct IUnknownVtbl *))v10->QueryInterface + 2))(v10);
        }
        v7 = v8;
      }
      ReleaseSRWLockExclusive(v3);
    }
    v11 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
  }
  if ( v7 >= 0 )
    return (*(unsigned int (__fastcall **)(struct IUnknownVtbl *, GUID *, void **))punkOuter[6].lpVtbl->QueryInterface)(
             punkOuter[6].lpVtbl,
             &GUID_00000003_0000_0000_c000_000000000046,
             a3);
  return (unsigned int)v7;
}
