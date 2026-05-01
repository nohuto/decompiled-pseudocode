/*
 * XREFs of ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18008D560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008D18C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18008D6D0 (-v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetMarshalSizeMax(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r12
  IUnknown *v12; // rdx
  signed int StdMarshaler; // ebx
  unsigned int *v14; // rsi
  __int64 (__fastcall *v15)(CImmersiveWindowFactoryBase *__hidden, const struct _GUID *, void *, unsigned int, void *, unsigned int, unsigned int *); // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // edx
  int v19; // r8d
  unsigned int v20; // eax
  void *v22[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v22[0] = 0LL;
  *a7 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v12, v22);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(void *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)v22[0] + 32LL))(
                     v22[0],
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     &a7);
    if ( StdMarshaler >= 0 )
    {
      v14 = (unsigned int *)&this[2];
      v15 = (__int64 (__fastcall *)(CImmersiveWindowFactoryBase *__hidden, const struct _GUID *, void *, unsigned int, void *, unsigned int, unsigned int *))*((_QWORD *)this->Ptr + 10);
      v16 = v15 == CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax
          ? CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
              (CImmersiveWindowFactoryBase *)this,
              a2,
              a3,
              a4,
              a5,
              a6,
              (unsigned int *)&this[2])
          : ((__int64 (__fastcall *)(RTL_SRWLOCK *, const struct _GUID *, void *, _QWORD, void *))v15)(
              this,
              a2,
              a3,
              a4,
              a5);
      StdMarshaler = v16;
      if ( v16 >= 0 )
      {
        v17 = *v14;
        v18 = -1;
        v19 = -1;
        v20 = *v14 + 4;
        if ( v20 >= *v14 )
          v19 = *v14 + 4;
        StdMarshaler = v20 < v17 ? 0x80070216 : 0;
        if ( v20 >= v17 )
        {
          if ( v19 + (int)a7 >= (unsigned int)a7 )
            v18 = v19 + (_DWORD)a7;
          StdMarshaler = v19 + (int)a7 < (unsigned int)a7 ? 0x80070216 : 0;
          *v7 = v18;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
  return (unsigned int)StdMarshaler;
}
