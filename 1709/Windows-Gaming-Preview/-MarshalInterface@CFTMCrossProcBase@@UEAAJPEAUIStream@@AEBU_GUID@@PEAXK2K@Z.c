/*
 * XREFs of ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180040410
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003FD6C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004064C (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x1800421B5 (CoTaskMemFree_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
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
  HRESULT FTM; // edi
  _QWORD *v12; // rax
  void *v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 lpVtbl_low; // rax
  unsigned __int64 v16; // rax
  ULONG v17; // r14d
  int v18; // eax
  void *v19; // rcx
  void *v21; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h] BYREF

  v21 = 0LL;
  FTM = CFTMCrossProcBase::_GetFTM(this, a2, &v21);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, struct _GUID *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v21 + 40LL))(
            v21,
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
        FTM = IStream_Write((IStream *)a2, &this[4], 4u);
        if ( FTM >= 0 )
        {
          v13 = 0LL;
          FTM = (*(__int64 (__fastcall **)(struct _GUID *, _QWORD, __int64, __int64 *))(*(_QWORD *)&a2->Data1 + 40LL))(
                  a2,
                  0LL,
                  1LL,
                  &v24);
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
                      &v23);
              if ( FTM >= 0 )
              {
                v14 = v23 - v24;
                lpVtbl_low = LODWORD(this[4].lpVtbl);
                if ( v23 - v24 <= lpVtbl_low )
                {
                  if ( v23 - v24 < lpVtbl_low )
                  {
                    if ( lpVtbl_low < v14 )
                    {
                      FTM = -2147024362;
                    }
                    else
                    {
                      v16 = lpVtbl_low - v14;
                      v17 = -1;
                      if ( v16 <= 0xFFFFFFFF )
                        v17 = v16;
                      FTM = v16 > 0xFFFFFFFF ? 0x80070216 : 0;
                      if ( v16 <= 0xFFFFFFFF )
                      {
                        pv = 0LL;
                        if ( is_mul_ok(v17, 1uLL) )
                        {
                          v18 = CTCoAllocPolicy::Alloc((IMalloc *)v17, (v17 * (unsigned __int128)1u) >> 64, v17, &pv);
                          v13 = pv;
                          FTM = v18;
                          if ( v18 >= 0 )
                            FTM = IStream_Write((IStream *)a2, pv, v17);
                        }
                        else
                        {
                          FTM = -2147024362;
                        }
                        CoTaskMemFree_0(v13);
                      }
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
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)FTM;
}
