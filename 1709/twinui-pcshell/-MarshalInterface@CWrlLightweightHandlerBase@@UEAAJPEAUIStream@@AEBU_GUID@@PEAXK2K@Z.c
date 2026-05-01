/*
 * XREFs of ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1801E16B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800591A8 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18007B35C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E1974 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::MarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  __int64 *v11; // rax
  const struct _GUID *v12; // rdx
  signed int StdMarshaler; // edi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  ULONG v17; // ebx
  __int64 v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h] BYREF

  v20 = 0LL;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v12, (void **)v11);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v20 + 40LL))(
                     v20,
                     pstm,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    if ( StdMarshaler >= 0 )
    {
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       (char *)this + 24);
      if ( StdMarshaler >= 0 )
      {
        StdMarshaler = IStream_Write(pstm, (char *)this + 24, 4u);
        if ( StdMarshaler >= 0 )
        {
          StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                           pstm,
                           0LL,
                           1LL,
                           &v23);
          if ( StdMarshaler >= 0 )
          {
            StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)this + 88LL))(
                             this,
                             pstm,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7);
            if ( StdMarshaler >= 0 )
            {
              StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                               pstm,
                               0LL,
                               1LL,
                               &v22);
              if ( StdMarshaler >= 0 )
              {
                v14 = v22 - v23;
                v15 = *((unsigned int *)this + 6);
                if ( v22 - v23 <= v15 )
                {
                  if ( v22 - v23 < v15 )
                  {
                    if ( v15 < v14 )
                    {
                      StdMarshaler = -2147024362;
                    }
                    else
                    {
                      v16 = v15 - v14;
                      v17 = -1;
                      if ( v16 <= 0xFFFFFFFF )
                        v17 = v16;
                      StdMarshaler = v16 > 0xFFFFFFFF ? 0x80070216 : 0;
                      if ( v16 <= 0xFFFFFFFF )
                      {
                        pv = 0LL;
                        if ( is_mul_ok(v17, 1uLL) )
                        {
                          StdMarshaler = CTCoAllocPolicy::Alloc((IMalloc *)v17, 1, v17, &pv);
                          if ( StdMarshaler >= 0 )
                            StdMarshaler = IStream_Write(pstm, pv, v17);
                        }
                        else
                        {
                          StdMarshaler = -2147024362;
                        }
                        CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
                      }
                    }
                  }
                }
                else
                {
                  StdMarshaler = -2147467259;
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
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)StdMarshaler;
}
