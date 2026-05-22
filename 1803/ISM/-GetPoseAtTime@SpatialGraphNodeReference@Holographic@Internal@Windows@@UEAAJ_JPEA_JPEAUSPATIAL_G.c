/*
 * XREFs of ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800C78E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B9954 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x1800B9F8C (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x1800BFC3C (-NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     _lambda_2e90b6ae67ad76cbf474a8c31d64668a_::operator() @ 0x1800C7D00 (_lambda_2e90b6ae67ad76cbf474a8c31d64668a_--operator().c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::GetPoseAtTime(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this,
        __int64 a2,
        __int64 *a3,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a4)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *); // rax
  DWORD v8; // eax
  DWORD v9; // esi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  DWORD v13; // edi
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  HolographicDriverClientContinuousTrace *v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int128 v21; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v22; // rcx
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  HolographicDriverClientContinuousTrace *v27; // rcx
  const char *v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  void *v31; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v34; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v36; // [rsp+78h] [rbp-88h]
  __int128 v37; // [rsp+88h] [rbp-78h]
  __int128 v38; // [rsp+98h] [rbp-68h]
  _QWORD *v39; // [rsp+A8h] [rbp-58h]
  _OWORD v40[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v41; // [rsp+E0h] [rbp-20h]
  char v42; // [rsp+E8h] [rbp-18h]
  __int128 InBuffer; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v44; // [rsp+100h] [rbp+0h]
  BOOL bAlertable[2]; // [rsp+110h] [rbp+10h] BYREF
  char v46[160]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v33 = a2;
  v34 = a3;
  v31 = a4;
  QueryPerformanceCounter(&PerformanceCount);
  v35[0] = PerformanceCount.QuadPart;
  v30 = 2;
  memset_0(v31, 0, 0xA0uLL);
  *((_DWORD *)v31 + 4) = 0;
  *(_QWORD *)v31 = v33;
  if ( v34 )
    *v34 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 13);
  *(_QWORD *)&v36 = &v31;
  *((_QWORD *)&v36 + 1) = &v30;
  *(_QWORD *)&v37 = bAlertable;
  *((_QWORD *)&v37 + 1) = &v33;
  *(_QWORD *)&v38 = &v34;
  *((_QWORD *)&v38 + 1) = (char *)this - 8;
  v39 = v35;
  v6 = *v5;
  v40[0] = v36;
  v7 = *(__int64 (__fastcall **)(__int64 *))(v6 + 8);
  v40[1] = v37;
  v40[2] = v38;
  v41 = v35;
  v8 = v7(v5);
  v9 = v8;
  if ( v8 - 1 <= 1 )
  {
    v13 = 0;
    PerformanceCount.LowPart = 0;
    v14 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 8),
            0x5B4408u,
            (char *)this + 80,
            0x10u,
            bAlertable,
            160 * v8,
            (LPDWORD)&PerformanceCount);
    v15 = v14;
    if ( v14 == -2147024637 || v14 == -2147024891 )
    {
      v17 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
      if ( v17 && *v17 )
      {
        HolographicDriverClientContinuousTrace::Instance();
        HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
          v18,
          (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 80),
          v15);
      }
    }
    else
    {
      if ( v14 >= 0 )
      {
        if ( !PerformanceCount.LowPart )
        {
          v16 = 104LL;
          goto LABEL_12;
        }
        v13 = PerformanceCount.LowPart / 0xA0;
        if ( PerformanceCount.LowPart % 0xA0uLL )
        {
          v16 = 105LL;
          goto LABEL_12;
        }
LABEL_19:
        if ( v13 >= v9 && v33 >= *(_QWORD *)&bAlertable[40 * v9 - 40] )
        {
          if ( v33 - *(_QWORD *)bAlertable < qword_1801366F0 )
          {
            v19 = *((_QWORD *)this + 13);
            v30 = 0;
            v20 = (*(__int64 (__fastcall **)(__int64, BOOL *, _QWORD, __int64, void *))(*(_QWORD *)v19 + 16LL))(
                    v19,
                    bAlertable,
                    v9,
                    v33,
                    v31);
            v10 = v20;
            if ( v20 < 0 )
            {
              v12 = (unsigned int)v20;
              v11 = 2059LL;
              goto LABEL_5;
            }
LABEL_40:
            v10 = 0;
            goto LABEL_41;
          }
          goto LABEL_39;
        }
        v21 = *((_OWORD *)this + 5);
        v22 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 8);
        v44 = v33;
        PerformanceCount.LowPart = 0;
        InBuffer = v21;
        v23 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
                v22,
                0x5B4410u,
                &InBuffer,
                0x18u,
                bAlertable,
                0x140u,
                (LPDWORD)&PerformanceCount);
        v24 = v23;
        if ( v23 == -2147024637 || v23 == -2147024891 )
        {
          v26 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
          if ( v26 && *v26 )
          {
            HolographicDriverClientContinuousTrace::Instance();
            HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
              v27,
              (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 80),
              v24);
          }
LABEL_38:
          if ( v24 < 0 )
            goto LABEL_40;
          goto LABEL_39;
        }
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x94,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)(unsigned int)v23);
          goto LABEL_38;
        }
        if ( PerformanceCount.LowPart )
        {
          if ( !(PerformanceCount.LowPart % 0xA0uLL) )
          {
            if ( PerformanceCount.LowPart / 0xA0 >= 2 )
            {
              v25 = *((_QWORD *)this + 13);
              v30 = 1;
              v10 = (*(__int64 (__fastcall **)(__int64, BOOL *, char *, __int64, void *))(*(_QWORD *)v25 + 24LL))(
                      v25,
                      bAlertable,
                      v46,
                      v33,
                      v31);
              if ( v10 < 0 )
              {
                wil::details::in1diag3::Return_HrMsg(
                  retaddr,
                  (void *)0x820,
                  (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                  (const char *)(unsigned int)v10,
                  (unsigned __int16 *)"Failed to interpolate historical poses",
                  v29);
                goto LABEL_41;
              }
              goto LABEL_40;
            }
LABEL_39:
            v30 = 2;
            SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)v31, (__int64)bAlertable);
            goto LABEL_40;
          }
          v16 = 152LL;
        }
        else
        {
          v16 = 151LL;
        }
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)0x8000FFFFLL);
        goto LABEL_40;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v14);
    }
    if ( v15 < 0 )
      goto LABEL_40;
    goto LABEL_19;
  }
  v10 = -2147418113;
  v11 = 2043LL;
  v12 = 2147549183LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v12);
LABEL_41:
  v42 = 0;
  lambda_2e90b6ae67ad76cbf474a8c31d64668a_::operator()(v40);
  return (unsigned int)v10;
}
