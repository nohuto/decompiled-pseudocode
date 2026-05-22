/*
 * XREFs of ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x1800B5C70
 * Callers:
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x1800BF430 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@2@Z @ 0x1800B2784 (-GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_N.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodeForPose(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        const struct DirectX::XMFLOAT4X3 *a3,
        struct SPATIAL_NODE_ID *a4)
{
  __int128 v8; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 result; // rax
  char *v14; // rdi
  __int64 v15; // rbx
  _DWORD *v16; // rcx
  HolographicDriverClientContinuousTrace *v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp-49h] BYREF
  __int128 v19; // [rsp+48h] [rbp-41h]
  _OWORD InBuffer[4]; // [rsp+60h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v19 = 0uLL;
  *(_OWORD *)a4 = 0uLL;
  memset(InBuffer, 0, sizeof(InBuffer));
  v8 = *(_OWORD *)a2;
  v9 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 10);
  v10 = *(_OWORD *)a3;
  v18 = 0;
  InBuffer[0] = v8;
  v11 = *((_OWORD *)a3 + 1);
  InBuffer[1] = v10;
  v12 = *((_OWORD *)a3 + 2);
  InBuffer[2] = v11;
  InBuffer[3] = v12;
  result = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
             v9,
             0x5B8420u,
             InBuffer,
             0x40u,
             a4,
             0x10u,
             &v18);
  if ( (int)result >= 0 )
  {
    if ( v18 == 16 )
    {
      v14 = (char *)this - 8;
      v15 = *((_QWORD *)this + 10);
      v16 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
      if ( v16 )
      {
        if ( *v16 )
        {
          HolographicDriverClientContinuousTrace::Instance();
          HolographicDriverClientContinuousTrace::GetStaticNodeForPose_(
            v17,
            v14,
            (const struct _GUID *)(v15 + 12),
            a2,
            a3,
            a4);
        }
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x232,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
  }
  return result;
}
