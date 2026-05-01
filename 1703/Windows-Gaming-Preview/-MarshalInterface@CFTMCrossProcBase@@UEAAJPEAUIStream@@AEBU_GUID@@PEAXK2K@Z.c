/*
 * XREFs of ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18001F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18001EBD0 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F4EC (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x180029D48 (CoTaskMemFree_0.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcBase::MarshalInterface(
        IUnknown *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  HRESULT FTM; // esi
  _QWORD *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 lpVtbl_low; // rbx
  unsigned __int64 v15; // rbx
  void *v16; // rdi
  int v17; // eax
  void *v18; // rcx
  void *v20; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h] BYREF

  v20 = 0LL;
  FTM = CFTMCrossProcBase::_GetFTM(this, a2, &v20);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, struct _GUID *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v20 + 40LL))(
            v20,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( FTM >= 0 && a5 != 3 )
    {
      v12 = (_QWORD *)((__int64 (__fastcall *)(IUnknown *))this->lpVtbl[3].Release)(this);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v12 || *(_QWORD *)GUID_NULL.Data4 != v12[1] )
      {
        FTM = IStream_Write((IStream *)a2, &this[3], 4u);
        if ( FTM >= 0 )
        {
          FTM = (*(__int64 (__fastcall **)(struct _GUID *, _QWORD, __int64, __int64 *))(*(_QWORD *)&a2->Data1 + 40LL))(
                  a2,
                  0LL,
                  1LL,
                  &v23);
          if ( FTM >= 0 )
          {
            FTM = ((__int64 (__fastcall *)(IUnknown *, struct _GUID *, const struct _GUID *, void *, unsigned int, void *, unsigned int))this->lpVtbl[3].AddRef)(
                    this,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
            if ( FTM >= 0 )
            {
              FTM = (*(__int64 (__fastcall **)(struct _GUID *, _QWORD, __int64, __int64 *))(*(_QWORD *)&a2->Data1 + 40LL))(
                      a2,
                      0LL,
                      1LL,
                      &v22);
              if ( FTM >= 0 )
              {
                v13 = v22 - v23;
                lpVtbl_low = LODWORD(this[3].lpVtbl);
                if ( v22 - v23 <= lpVtbl_low )
                {
                  if ( v22 - v23 < lpVtbl_low )
                  {
                    if ( lpVtbl_low < v13 || (v15 = lpVtbl_low - v13, v15 > 0xFFFFFFFF) )
                    {
                      FTM = -2147024362;
                    }
                    else
                    {
                      v16 = 0LL;
                      pv = 0LL;
                      if ( is_mul_ok((unsigned int)v15, 1uLL) )
                      {
                        v17 = CTCoAllocPolicy::Alloc(
                                (IMalloc *)(unsigned int)v15,
                                ((unsigned int)v15 * (unsigned __int128)1uLL) >> 64,
                                (unsigned int)v15,
                                &pv);
                        v16 = pv;
                        FTM = v17;
                        if ( v17 >= 0 )
                          FTM = IStream_Write((IStream *)a2, pv, v15);
                      }
                      else
                      {
                        FTM = -2147024362;
                      }
                      CoTaskMemFree_0(v16);
                    }
                  }
                }
                else
                {
                  FTM = -2147467259;
                }
              }
            }
          }
        }
      }
    }
  }
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)FTM;
}
