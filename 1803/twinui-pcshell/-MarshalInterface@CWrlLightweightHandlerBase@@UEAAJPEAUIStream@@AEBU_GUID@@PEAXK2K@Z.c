/*
 * XREFs of ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18008D390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18000C550 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008D18C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18008D6D0 (-v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?v_MarshalAdditionalData@CImmersiveWindowFactoryBase@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18008D740 (-v_MarshalAdditionalData@CImmersiveWindowFactoryBase@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800F95EC (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::MarshalInterface(
        RTL_SRWLOCK *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  IUnknown *v11; // rdx
  signed int StdMarshaler; // edi
  __int64 (__fastcall *v13)(CImmersiveWindowFactoryBase *__hidden, const struct _GUID *, void *, unsigned int, void *, unsigned int, unsigned int *); // r10
  int v14; // eax
  int (*v15)(CImmersiveWindowFactoryBase *__hidden, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int); // r10
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 Ptr_low; // rdx
  unsigned __int64 v20; // rcx
  ULONG v21; // ebx
  void *v22; // [rsp+20h] [rbp-40h]
  unsigned int *v23; // [rsp+30h] [rbp-30h]
  void *v24; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF

  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v11, &v24);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v24 + 40LL))(
                     v24,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    if ( StdMarshaler >= 0 )
    {
      v23 = (unsigned int *)&this[2];
      v13 = (__int64 (__fastcall *)(CImmersiveWindowFactoryBase *__hidden, const struct _GUID *, void *, unsigned int, void *, unsigned int, unsigned int *))*((_QWORD *)this->Ptr + 10);
      HIDWORD(v22) = HIDWORD(a6);
      v14 = v13 == CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax
          ? CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
              (CImmersiveWindowFactoryBase *)this,
              a3,
              a4,
              a5,
              a6,
              a7,
              v23)
          : ((__int64 (__fastcall *)(RTL_SRWLOCK *, const struct _GUID *, void *, _QWORD))v13)(this, a3, a4, a5);
      StdMarshaler = v14;
      if ( v14 >= 0 )
      {
        StdMarshaler = IStream_Write(a2, &this[2], 4u);
        if ( StdMarshaler >= 0 )
        {
          StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)a2 + 40LL))(
                           a2,
                           0LL,
                           1LL,
                           &v27);
          if ( StdMarshaler >= 0 )
          {
            v15 = (int (*)(CImmersiveWindowFactoryBase *__hidden, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))*((_QWORD *)this->Ptr + 11);
            LODWORD(v23) = a7;
            LODWORD(v22) = a5;
            v16 = v15 == CImmersiveWindowFactoryBase::v_MarshalAdditionalData
                ? CImmersiveWindowFactoryBase::v_MarshalAdditionalData(
                    (CImmersiveWindowFactoryBase *)this,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7)
                : ((__int64 (__fastcall *)(RTL_SRWLOCK *, struct IStream *, const struct _GUID *, void *, void *, void *, unsigned int *))v15)(
                    this,
                    a2,
                    a3,
                    a4,
                    v22,
                    a6,
                    v23);
            StdMarshaler = v16;
            if ( v16 >= 0 )
            {
              StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)a2 + 40LL))(
                               a2,
                               0LL,
                               1LL,
                               &v26);
              if ( StdMarshaler >= 0 )
              {
                v17 = v26 - v27;
                Ptr_low = LODWORD(this[2].Ptr);
                if ( v26 - v27 > Ptr_low )
                {
                  StdMarshaler = -2147467259;
                }
                else if ( v26 - v27 < Ptr_low )
                {
                  v20 = Ptr_low < v17 ? -1LL : Ptr_low - v17;
                  StdMarshaler = Ptr_low < v17 ? 0x80070216 : 0;
                  if ( Ptr_low >= v17 )
                  {
                    v21 = -1;
                    if ( v20 <= 0xFFFFFFFF )
                      v21 = v20;
                    StdMarshaler = v20 > 0xFFFFFFFF ? 0x80070216 : 0;
                    if ( v20 <= 0xFFFFFFFF )
                    {
                      pv = 0LL;
                      if ( is_mul_ok(v21, 1uLL) )
                      {
                        StdMarshaler = CTCoAllocPolicy::Alloc((void *)v21, 1, v21, &pv);
                        if ( StdMarshaler >= 0 )
                          StdMarshaler = IStream_Write(a2, pv, v21);
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
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  return (unsigned int)StdMarshaler;
}
