/*
 * XREFs of ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800CCD1C
 * Callers:
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C538C (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x1800C5C80 (-GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B9954 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800BAB98 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        DWORD a2,
        void *lpInBuffer,
        DWORD a4,
        LPVOID *a5)
{
  char v9; // si
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v10; // r10
  DWORD v11; // edi
  int v12; // ebp
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rdx
  const char *v20; // [rsp+28h] [rbp-70h]
  unsigned int *v21; // [rsp+30h] [rbp-68h]
  unsigned int v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h]
  Windows::Internal::Holographic::VariableSizeStructWrapperBase **v24; // [rsp+60h] [rbp-38h]
  char v25; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v23 = -2LL;
  v24 = (Windows::Internal::Holographic::VariableSizeStructWrapperBase **)&a5;
  v9 = 1;
  v25 = 1;
  v10 = (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)a5;
  a5[2] = a5[1];
  *(_QWORD *)v10 = 4LL;
  v22 = 0;
  v11 = 4;
  v12 = 0;
  v13 = (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)a5;
  while ( 1 )
  {
    v14 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v13);
    v15 = v14;
    if ( v14 < 0 )
      break;
    v14 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            this,
            a2,
            lpInBuffer,
            a4,
            a5[1],
            v11,
            &v22);
    v15 = v14;
    if ( v14 < 0 )
    {
      v18 = 340LL;
      goto LABEL_15;
    }
    v13 = (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)a5;
    if ( v22 < 4 )
    {
      v15 = -2147418113;
      v17 = 2147549183LL;
      v18 = 347LL;
      goto LABEL_16;
    }
    v16 = *(unsigned int *)a5[1];
    v11 = v16 + 4;
    if ( v22 == v16 + 4 )
      goto LABEL_11;
    if ( v22 != 4 )
    {
      v15 = -2147418113;
      v17 = 2147549183LL;
      v18 = 354LL;
      goto LABEL_16;
    }
    if ( !*(_DWORD *)a5[1] )
    {
LABEL_11:
      Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)a5);
      v9 = 0;
      v15 = 0;
      goto LABEL_17;
    }
    if ( (unsigned int)++v12 >= 0xA )
    {
      LODWORD(v21) = 4;
      LODWORD(v20) = 10;
      v15 = -2147418113;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x171,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)0x8000FFFFLL,
        (unsigned __int16 *)"failed to read variable-size property after %u tries: bytesReturned = %u, propertySize = %u,"
                            " requiredSize = %zu, ioctlCode = 0x%x",
        v20,
        v21,
        v16,
        v16 + 4,
        a2);
      goto LABEL_17;
    }
  }
  v18 = 331LL;
LABEL_15:
  v17 = (unsigned int)v14;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
    (const char *)v17);
LABEL_17:
  if ( v9 )
    a5[2] = a5[1];
  return v15;
}
