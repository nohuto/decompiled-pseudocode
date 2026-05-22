/*
 * XREFs of ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800B7EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800AE3A4 (-Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x1800AE99C (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x1800B3588 (-NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     _lambda_d3375ebeae4829c9f30dd12a415fc5f7_::operator() @ 0x1800B82F4 (_lambda_d3375ebeae4829c9f30dd12a415fc5f7_--operator().c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
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
  DWORD v11; // edi
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  HolographicDriverClientContinuousTrace *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int128 v19; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v20; // rcx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  HolographicDriverClientContinuousTrace *v25; // rcx
  const char *v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  void *v29; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v32; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+78h] [rbp-88h]
  __int128 v35; // [rsp+88h] [rbp-78h]
  __int128 v36; // [rsp+98h] [rbp-68h]
  _QWORD *v37; // [rsp+A8h] [rbp-58h]
  _OWORD v38[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v39; // [rsp+E0h] [rbp-20h]
  char v40; // [rsp+E8h] [rbp-18h]
  __int128 InBuffer; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v42; // [rsp+100h] [rbp+0h]
  BOOL bAlertable[2]; // [rsp+110h] [rbp+10h] BYREF
  char v44[160]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v31 = a2;
  v32 = a3;
  v29 = a4;
  QueryPerformanceCounter(&PerformanceCount);
  v33[0] = PerformanceCount.QuadPart;
  v28 = 2;
  memset(v29, 0, 0xA0uLL);
  *((_DWORD *)v29 + 4) = 0;
  *(_QWORD *)v29 = v31;
  if ( v32 )
    *v32 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 14);
  *(_QWORD *)&v34 = &v29;
  *((_QWORD *)&v34 + 1) = &v28;
  *(_QWORD *)&v35 = bAlertable;
  *((_QWORD *)&v35 + 1) = &v31;
  *(_QWORD *)&v36 = &v32;
  *((_QWORD *)&v36 + 1) = (char *)this - 8;
  v37 = v33;
  v6 = *v5;
  v38[0] = v34;
  v7 = *(__int64 (__fastcall **)(__int64 *))(v6 + 8);
  v38[1] = v35;
  v38[2] = v36;
  v39 = v33;
  v8 = v7(v5);
  v9 = v8;
  if ( v8 - 1 <= 1 )
  {
    v11 = 0;
    PerformanceCount.LowPart = 0;
    v12 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 9),
            0x5B4408u,
            (char *)this + 88,
            0x10u,
            bAlertable,
            160 * v8,
            (LPDWORD)&PerformanceCount);
    v13 = v12;
    if ( v12 == -2147024637 || v12 == -2147024891 )
    {
      v15 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
      if ( v15 && *v15 )
      {
        HolographicDriverClientContinuousTrace::Instance();
        HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
          v16,
          (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 88),
          v13);
      }
    }
    else
    {
      if ( v12 >= 0 )
      {
        if ( !PerformanceCount.LowPart )
        {
          v14 = 52LL;
          goto LABEL_11;
        }
        v11 = PerformanceCount.LowPart / 0xA0;
        if ( PerformanceCount.LowPart % 0xA0uLL )
        {
          v14 = 53LL;
          goto LABEL_11;
        }
LABEL_18:
        if ( v11 >= v9 && v31 >= *(_QWORD *)&bAlertable[40 * v9 - 40] )
        {
          if ( v31 - *(_QWORD *)bAlertable < qword_18010F270 )
          {
            v17 = *((_QWORD *)this + 14);
            v28 = 0;
            v18 = (*(__int64 (__fastcall **)(__int64, BOOL *, _QWORD, __int64, void *))(*(_QWORD *)v17 + 16LL))(
                    v17,
                    bAlertable,
                    v9,
                    v31,
                    v29);
            v10 = v18;
            if ( v18 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x539,
                (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                (const char *)(unsigned int)v18);
              goto LABEL_40;
            }
LABEL_39:
            v10 = 0;
            goto LABEL_40;
          }
          goto LABEL_38;
        }
        v19 = *(_OWORD *)((char *)this + 88);
        v20 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 9);
        v42 = v31;
        PerformanceCount.LowPart = 0;
        InBuffer = v19;
        v21 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
                v20,
                0x5B4410u,
                &InBuffer,
                0x18u,
                bAlertable,
                0x140u,
                (LPDWORD)&PerformanceCount);
        v22 = v21;
        if ( v21 == -2147024637 || v21 == -2147024891 )
        {
          v24 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
          if ( v24 && *v24 )
          {
            HolographicDriverClientContinuousTrace::Instance();
            HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
              v25,
              (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 88),
              v22);
          }
LABEL_37:
          if ( v22 < 0 )
            goto LABEL_39;
          goto LABEL_38;
        }
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x60,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)(unsigned int)v21);
          goto LABEL_37;
        }
        if ( PerformanceCount.LowPart )
        {
          if ( !(PerformanceCount.LowPart % 0xA0uLL) )
          {
            if ( PerformanceCount.LowPart / 0xA0 >= 2 )
            {
              v23 = *((_QWORD *)this + 14);
              v28 = 1;
              v10 = (*(__int64 (__fastcall **)(__int64, BOOL *, char *, __int64, void *))(*(_QWORD *)v23 + 24LL))(
                      v23,
                      bAlertable,
                      v44,
                      v31,
                      v29);
              if ( v10 < 0 )
              {
                wil::details::in1diag3::Return_HrMsg_NoOriginate(
                  retaddr,
                  (void *)0x54E,
                  (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                  (const char *)(unsigned int)v10,
                  (unsigned __int16 *)"Failed to interpolate historical poses",
                  v27);
                goto LABEL_40;
              }
              goto LABEL_39;
            }
LABEL_38:
            v28 = 2;
            SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)v29, (__int64)bAlertable);
            goto LABEL_39;
          }
          v14 = 100LL;
        }
        else
        {
          v14 = 99LL;
        }
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)0x8000FFFFLL);
        goto LABEL_39;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x31,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v12);
    }
    if ( v13 < 0 )
      goto LABEL_39;
    goto LABEL_18;
  }
  v10 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x529,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)0x8000FFFFLL);
LABEL_40:
  v40 = 0;
  lambda_d3375ebeae4829c9f30dd12a415fc5f7_::operator()(v38);
  return (unsigned int)v10;
}
