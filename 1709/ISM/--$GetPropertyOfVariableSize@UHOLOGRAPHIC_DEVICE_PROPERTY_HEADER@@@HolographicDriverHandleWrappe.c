/*
 * XREFs of ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800BBB04
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@@234@@Z @ 0x1800B63D0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800AE32C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800AF558 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        LPVOID *a5)
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
  const char *v21; // [rsp+28h] [rbp-28h]
  unsigned int *v22; // [rsp+30h] [rbp-20h]
  unsigned int v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v25; // [rsp+98h] [rbp+48h] BYREF
  unsigned int bAlertable; // [rsp+A8h] [rbp+58h] BYREF
  int v27; // [rsp+ACh] [rbp+5Ch]

  v27 = HIDWORD(a4);
  v25 = 0;
  bAlertable = 0;
  v5 = 1;
  v8 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         this,
         0x5B8414u,
         a3,
         0x10u,
         &bAlertable,
         4u,
         &v25);
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
  if ( v25 == 4 )
  {
    v13 = bAlertable;
    if ( bAlertable <= 0xFFFFFFFB )
    {
      v14 = (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)a5;
      v15 = bAlertable + 4;
      v16 = 0;
      while ( 1 )
      {
        v17 = (void *)*((_QWORD *)v14 + 2);
        *((_QWORD *)v14 + 2) = 0LL;
        if ( v17 )
          operator delete(v17);
        *(_QWORD *)v14 = 4LL;
        if ( v13 < (unsigned __int64)a5[1] )
          break;
        v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
               (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)a5,
               v13);
        if ( v9 < 0 )
          goto LABEL_24;
        v18 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
                this,
                0x5B8414u,
                a3,
                0x10u,
                a5[2],
                v15,
                &v25);
        v9 = v18;
        if ( v18 < 0 )
        {
          v10 = (unsigned int)v18;
          v11 = 424LL;
          goto LABEL_25;
        }
        if ( v25 < 4 )
        {
          v12 = 431LL;
          goto LABEL_7;
        }
        v14 = (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)a5;
        v13 = *(_DWORD *)a5[2];
        if ( v13 > 0xFFFFFFFB )
        {
          v12 = 432LL;
          goto LABEL_7;
        }
        v15 = v13 + 4;
        if ( v25 == v13 + 4 )
        {
          v5 = 0;
          v9 = 0;
          goto LABEL_27;
        }
        if ( (unsigned int)++v16 >= 0xA )
        {
          v23 = v13 + 4;
          v9 = -2147418113;
          LODWORD(v22) = v25;
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
            *(_DWORD *)a5[2],
            v23,
            5997588);
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
  v14 = (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)a5;
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
