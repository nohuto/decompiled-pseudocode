/*
 * XREFs of ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800C4C50
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800D2BD0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_N.c)
 * Callees:
 *     memcpy_s @ 0x180001740 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAA@XZ @ 0x18009CA90 (--1VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800BAB98 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800BEE34 (-GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NOD.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodePoses(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        unsigned int a3,
        const struct SPATIAL_NODE_ID *a4,
        struct SPATIAL_GRAPH_STATIC_NODE_POSE *Destination)
{
  DWORD v6; // r15d
  __int64 v7; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  const struct SPATIAL_NODE_ID *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  void *bAlertable; // rcx
  int v20; // eax
  unsigned int *v21; // rbx
  __int64 v22; // rax
  int v23; // edi
  float *v24; // r15
  unsigned int i; // r14d
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  HolographicDriverClientContinuousTrace *v28; // rcx
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  BOOL v31[4]; // [rsp+48h] [rbp-38h]
  __int64 v32; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-20h] BYREF
  void *lpInBuffer[2]; // [rsp+68h] [rbp-18h]
  __int64 v35; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v38; // [rsp+D0h] [rbp+50h] BYREF

  v33 = 0LL;
  v35 = 0LL;
  v6 = 16 * a3 + 20;
  v7 = a3;
  *(_OWORD *)lpInBuffer = 0LL;
  v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v33);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = lpInBuffer[0];
    if ( lpInBuffer[0] )
      v12 = (char *)lpInBuffer[0] + v33;
    memset_0(v12, 0, v6);
    v12[4] = v7;
    *(_OWORD *)v12 = *(_OWORD *)a2;
    if ( (_DWORD)v7 )
    {
      v13 = a4;
      v14 = v7;
      do
      {
        v15 = *(_OWORD *)v13;
        v13 = (const struct SPATIAL_NODE_ID *)((char *)v13 + 16);
        *(_OWORD *)((char *)v13 + (char *)v12 - (char *)a4 + 4) = v15;
        --v14;
      }
      while ( v14 );
    }
    v30 = 0LL;
    v32 = 0LL;
    *(_OWORD *)v31 = 0LL;
    v16 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v30);
    v10 = v16;
    if ( v16 >= 0 )
    {
      v38 = 0;
      bAlertable = *(void **)v31;
      if ( *(_QWORD *)v31 )
        bAlertable = (void *)(v30 + *(_QWORD *)v31);
      v20 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
              *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 12),
              0x5B8424u,
              v12,
              v6,
              bAlertable,
              68 * (int)v7 + 4,
              &v38);
      v10 = v20;
      if ( v20 >= 0 )
      {
        if ( v38 == 68 * (_DWORD)v7 + 4 )
        {
          v21 = *(unsigned int **)v31;
          if ( *(_QWORD *)v31 )
            v21 = (unsigned int *)(v30 + *(_QWORD *)v31);
          v22 = *v21;
          if ( (_DWORD)v22 == (_DWORD)v7 )
          {
            v23 = 0;
            if ( (_DWORD)v22 )
            {
              while ( 2 )
              {
                v24 = (float *)&v21[17 * v23 + 5];
                for ( i = 0; i < 0xC; ++i )
                {
                  if ( (_fpclass(*v24) & 0x207) != 0 )
                  {
                    v10 = -2147024883;
                    v18 = 1071LL;
                    goto LABEL_32;
                  }
                  ++v24;
                }
                v22 = *v21;
                if ( ++v23 < (unsigned int)v22 )
                  continue;
                break;
              }
            }
            memcpy_s(Destination, 68 * v7, v21 + 1, 68 * v22);
            v27 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
            if ( v27 && *v27 )
            {
              HolographicDriverClientContinuousTrace::Instance();
              HolographicDriverClientContinuousTrace::GetStaticNodePoses_(
                v28,
                (char *)this - 8,
                (const struct _GUID *)((char *)this + 72),
                a2,
                v7,
                a4);
            }
            v10 = 0;
            goto LABEL_29;
          }
          v10 = -2147418113;
          v18 = 1067LL;
        }
        else
        {
          v10 = -2147418113;
          v18 = 1063LL;
        }
LABEL_32:
        v17 = v10;
      }
      else
      {
        v17 = (unsigned int)v20;
        v18 = 1061LL;
      }
    }
    else
    {
      v17 = (unsigned int)v16;
      v18 = 1051LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v17);
LABEL_29:
    Windows::Internal::Holographic::VariableSizeStructWrapperBase::~VariableSizeStructWrapperBase(
      (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v30,
      v26);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40D,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v9);
LABEL_30:
  Windows::Internal::Holographic::VariableSizeStructWrapperBase::~VariableSizeStructWrapperBase(
    (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v33,
    v11);
  return v10;
}
