/*
 * XREFs of ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800B5DA0
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800BF3C0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_N.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800AF558 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800B2694 (-GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NOD.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodePoses(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper **this,
        const struct SPATIAL_NODE_ID *a2,
        unsigned int a3,
        const struct SPATIAL_NODE_ID *a4,
        struct SPATIAL_GRAPH_STATIC_NODE_POSE *Destination)
{
  unsigned int *v5; // rsi
  __int64 v6; // r15
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int *v11; // r14
  const struct SPATIAL_NODE_ID *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm0
  unsigned int *v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int *bAlertable; // rax
  DWORD v20; // r9d
  Windows::Internal::Holographic::HolographicDriverHandleWrapper **v21; // r13
  int v22; // eax
  __int64 v23; // rdx
  unsigned int *v24; // rbx
  int v25; // r14d
  unsigned int v26; // r12d
  float *v27; // r13
  rsize_t v28; // r9
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v29; // r14
  _DWORD *v30; // rcx
  HolographicDriverClientContinuousTrace *v31; // rcx
  __int64 v33; // [rsp+40h] [rbp-28h] BYREF
  __int64 v34; // [rsp+48h] [rbp-20h]
  BOOL v35[2]; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  unsigned int v39; // [rsp+C0h] [rbp+58h] BYREF
  struct SPATIAL_NODE_ID *v40; // [rsp+C8h] [rbp+60h]

  v40 = a4;
  v33 = 0LL;
  v5 = 0LL;
  v6 = a3;
  v8 = 16 * a3 + 20;
  *(_QWORD *)v35 = 0LL;
  v34 = 20LL;
  if ( v8 < 0x14uLL )
  {
    v9 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x244,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v9);
    goto LABEL_40;
  }
  v10 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
          (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v33,
          16 * a3 + 20);
  v5 = *(unsigned int **)v35;
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_4;
  v11 = *(unsigned int **)v35;
  if ( *(_QWORD *)v35 )
    v11 = (unsigned int *)(*(_QWORD *)v35 + v33);
  memset(v11, 0, v8);
  v11[4] = v6;
  *(_OWORD *)v11 = *(_OWORD *)a2;
  if ( (_DWORD)v6 )
  {
    v12 = a4;
    v13 = v6;
    do
    {
      v14 = *(_OWORD *)v12;
      v12 = (const struct SPATIAL_NODE_ID *)((char *)v12 + 16);
      *(_OWORD *)((char *)v12 + (char *)v11 - (char *)a4 + 4) = v14;
      --v13;
    }
    while ( v13 );
  }
  v33 = 0LL;
  v15 = 0LL;
  *(_QWORD *)v35 = 0LL;
  v34 = 4LL;
  v16 = (unsigned int)(68 * v6 + 4);
  if ( v16 < 4 )
  {
    v9 = -2147024809;
LABEL_14:
    v17 = v9;
    v18 = 594LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v17);
    goto LABEL_38;
  }
  v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
         (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v33,
         v16);
  if ( (v9 & 0x80000000) != 0 )
  {
    v15 = *(unsigned int **)v35;
    goto LABEL_14;
  }
  v39 = 0;
  v15 = *(unsigned int **)v35;
  bAlertable = *(unsigned int **)v35;
  if ( *(_QWORD *)v35 )
    bAlertable = (unsigned int *)(*(_QWORD *)v35 + v33);
  v20 = v8;
  v21 = this;
  v22 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          this[10],
          0x5B8424u,
          v11,
          v20,
          bAlertable,
          68 * (int)v6 + 4,
          &v39);
  v9 = v22;
  if ( v22 < 0 )
  {
    v17 = (unsigned int)v22;
    v18 = 604LL;
    goto LABEL_19;
  }
  if ( v39 == 68 * (_DWORD)v6 + 4 )
  {
    v24 = v15;
    if ( v15 )
      v24 = (unsigned int *)((char *)v15 + v33);
    if ( *v24 == (_DWORD)v6 )
    {
      v25 = 0;
      if ( *v24 )
      {
        while ( 2 )
        {
          v26 = 0;
          v27 = (float *)&v24[17 * v25 + 5];
          do
          {
            if ( (_fpclass(*v27) & 0x207) != 0 )
            {
              v9 = -2147024883;
              v23 = 614LL;
              goto LABEL_44;
            }
            ++v26;
            ++v27;
          }
          while ( v26 < 0xC );
          if ( ++v25 < *v24 )
            continue;
          break;
        }
        v21 = this;
      }
      v28 = 68LL * *v24;
      if ( v28 )
        memcpy_s_0(Destination, 68 * v6, v24 + 1, v28);
      v29 = v21[10];
      v30 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
      if ( v30 && *v30 )
      {
        HolographicDriverClientContinuousTrace::Instance();
        HolographicDriverClientContinuousTrace::GetStaticNodePoses_(
          v31,
          v21 - 1,
          (const struct _GUID *)((char *)v29 + 12),
          a2,
          v6,
          v40);
      }
      v9 = 0;
      goto LABEL_38;
    }
    v9 = -2147418113;
    v23 = 610LL;
  }
  else
  {
    v9 = -2147418113;
    v23 = 606LL;
  }
LABEL_44:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v9);
LABEL_38:
  if ( v15 )
    operator delete(v15);
LABEL_40:
  if ( v5 )
    operator delete(v5);
  return v9;
}
