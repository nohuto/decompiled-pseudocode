/*
 * XREFs of ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800BB8C8
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@@234@@Z @ 0x1800B63D0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800AE32C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800AF558 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        Windows::Internal::Holographic::VariableSizeStructWrapperBase *a5)
{
  char v5; // r15
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v14; // rdi
  DWORD v15; // esi
  int v16; // r14d
  void *v17; // rcx
  int v18; // eax
  void *v19; // rcx
  const char *v21; // [rsp+28h] [rbp-58h]
  unsigned int *v22; // [rsp+30h] [rbp-50h]
  unsigned int v23; // [rsp+40h] [rbp-40h]
  unsigned int v24; // [rsp+50h] [rbp-30h] BYREF
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  _DWORD bAlertable[4]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v5 = 1;
  v26 = 0LL;
  v24 = 0;
  bAlertable[0] = 0;
  v25 = a5;
  *(_QWORD *)&bAlertable[1] = 0LL;
  v8 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         this,
         0x5B8430u,
         a3,
         0x18u,
         bAlertable,
         0xCu,
         &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 398LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)v10);
    goto LABEL_26;
  }
  if ( v24 == 12 )
  {
    v13 = bAlertable[0];
    if ( bAlertable[0] <= 0xFFFFFFF3 )
    {
      v14 = v25;
      v15 = bAlertable[0] + 12;
      v16 = 0;
      while ( 1 )
      {
        v17 = (void *)*((_QWORD *)v14 + 2);
        *((_QWORD *)v14 + 2) = 0LL;
        if ( v17 )
          operator delete(v17);
        *(_QWORD *)v14 = 12LL;
        if ( (unsigned __int64)v13 < *((_QWORD *)v25 + 1) )
          break;
        v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v25, v13);
        if ( v9 < 0 )
          goto LABEL_24;
        v18 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
                this,
                0x5B8430u,
                a3,
                0x18u,
                *((LPVOID *)v25 + 2),
                v15,
                &v24);
        v9 = v18;
        if ( v18 < 0 )
        {
          v10 = (unsigned int)v18;
          v11 = 424LL;
          goto LABEL_25;
        }
        if ( v24 < 0xC )
        {
          v12 = 431LL;
          goto LABEL_7;
        }
        v14 = v25;
        v13 = **((_DWORD **)v25 + 2);
        if ( v13 > 0xFFFFFFF3 )
        {
          v12 = 432LL;
          goto LABEL_7;
        }
        v15 = v13 + 12;
        if ( v24 == v13 + 12 )
        {
          v5 = 0;
          v9 = 0;
          goto LABEL_27;
        }
        if ( (unsigned int)++v16 >= 0xA )
        {
          v23 = v13 + 12;
          v9 = -2147418113;
          LODWORD(v22) = v24;
          LODWORD(v21) = 10;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x1C2,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
            (const char *)0x8000FFFFLL,
            (unsigned __int16 *)"failed to read variable-size property after %u tries: bytesReturned = %u, propertySize ="
                                " %u, totalSize = %u, ioctlCode = 0x%x",
            v21,
            v22,
            **((_DWORD **)v25 + 2),
            v23,
            5997616);
          goto LABEL_26;
        }
      }
      v9 = -2147024809;
LABEL_24:
      v10 = (unsigned int)v9;
      v11 = 414LL;
      goto LABEL_25;
    }
    v12 = 401LL;
  }
  else
  {
    v12 = 400LL;
  }
LABEL_7:
  v9 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
    (const char *)0x8000FFFFLL);
LABEL_26:
  v14 = v25;
LABEL_27:
  if ( v5 )
  {
    v19 = (void *)*((_QWORD *)v14 + 2);
    *((_QWORD *)v14 + 2) = 0LL;
    if ( v19 )
      operator delete(v19);
  }
  return (unsigned int)v9;
}
