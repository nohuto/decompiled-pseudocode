/*
 * XREFs of ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800D69A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18009DC54 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     ?TimestampClampedDueToLatency_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_J0@Z @ 0x1800D3A00 (-TimestampClampedDueToLatency_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_J0@Z.c)
 *     ?ButtonsStateChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x1800D3C80 (-ButtonsStateChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800D40AC (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ?CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N@Z @ 0x1800D7150 (-CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal.c)
 *     ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x1800D7234 (-TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_J.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x1800D7430 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x1800DA214 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800DA214.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::Parse(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        char *a2,
        int a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        __int64 a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a7,
        bool *a8,
        enum MPCAugmentedInputGestureType *a9,
        bool *a10,
        bool *a11)
{
  bool *v11; // r15
  bool *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  const struct Windows::Foundation::Numerics::Matrix4x4 *v19; // r13
  __int64 v20; // rsi
  LONGLONG v21; // rdi
  _DWORD *v22; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v23; // rcx
  struct SpatialInteractionDevices::InputReport *v24; // r9
  int v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // ecx
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  bool v31; // r8
  int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // eax
  float v35; // xmm0_4
  int v36; // edx
  int v37; // ecx
  _DWORD *v38; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v39; // rcx
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  const struct Windows::Foundation::Numerics::Matrix4x4 *v49; // r14
  unsigned __int8 v50; // al
  int v51; // xmm1_4
  float v52; // xmm2_4
  float v53; // xmm3_4
  float v54; // xmm1_4
  int v55; // esi
  bool v56; // r10
  bool v57; // r9
  int v58; // edi
  bool v59; // zf
  float v60; // xmm1_4
  float v61; // xmm0_4
  _DWORD *v62; // rcx
  int v63; // r10d
  _DWORD *v64; // rax
  __int64 v65; // r9
  _QWORD v66[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v67; // [rsp+48h] [rbp-C0h]
  int v68; // [rsp+4Ch] [rbp-BCh]
  int v69; // [rsp+50h] [rbp-B8h]
  unsigned __int8 v70; // [rsp+54h] [rbp-B4h]
  unsigned __int8 v71; // [rsp+55h] [rbp-B3h]
  int v72; // [rsp+58h] [rbp-B0h]
  unsigned int v73; // [rsp+5Ch] [rbp-ACh]
  unsigned int v74; // [rsp+60h] [rbp-A8h]
  float v75; // [rsp+64h] [rbp-A4h]
  float v76; // [rsp+68h] [rbp-A0h]
  int v77; // [rsp+6Ch] [rbp-9Ch]
  float v78; // [rsp+70h] [rbp-98h]
  float v79; // [rsp+74h] [rbp-94h]
  char v80; // [rsp+78h] [rbp-90h]
  float v81; // [rsp+7Ch] [rbp-8Ch]
  char v82; // [rsp+80h] [rbp-88h]
  float v83; // [rsp+84h] [rbp-84h]
  float v84; // [rsp+88h] [rbp-80h]
  float v85; // [rsp+8Ch] [rbp-7Ch]
  float v86; // [rsp+90h] [rbp-78h]
  char v87; // [rsp+94h] [rbp-74h]
  int v88; // [rsp+98h] [rbp-70h]
  char v89; // [rsp+9Ch] [rbp-6Ch]
  LARGE_INTEGER PerformanceCount; // [rsp+A8h] [rbp-60h] BYREF
  LARGE_INTEGER v91; // [rsp+B0h] [rbp-58h] BYREF
  LARGE_INTEGER v92; // [rsp+B8h] [rbp-50h] BYREF
  int v93; // [rsp+C0h] [rbp-48h] BYREF
  char *v94; // [rsp+C8h] [rbp-40h]
  _QWORD v95[9]; // [rsp+D0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]
  LARGE_INTEGER v97; // [rsp+148h] [rbp+40h] BYREF

  v11 = a10;
  v15 = a11;
  *a10 = 0;
  *v15 = 0;
  *a8 = 0;
  *(_DWORD *)a9 = 0;
  if ( !*((_BYTE *)this + 102) )
  {
    v16 = -2147020579;
    v17 = 519LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)v16);
    return v16;
  }
  LODWORD(a10) = 0;
  v19 = a7;
  if ( !a2 )
  {
    v49 = a6;
    goto LABEL_61;
  }
  if ( a3 != *((unsigned __int16 *)this + 258) )
  {
    v16 = -2147024809;
    v17 = 526LL;
    goto LABEL_3;
  }
  QueryPerformanceCounter(&PerformanceCount);
  v20 = *((_QWORD *)this + 30);
  v21 = PerformanceCount.QuadPart - *((_QWORD *)this + 110);
  if ( v20 >= v21 )
  {
    *((_QWORD *)this + 30) = v20 + 1;
    v22 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v22 && *v22 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::TimestampClampedDueToLatency_(
        v23,
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        v20,
        v21);
    }
  }
  else
  {
    *((_QWORD *)this + 30) = v21;
  }
  *v11 = v20 == 0;
  memset_0(&v66[1], 0, 0x68uLL);
  v93 = *((unsigned __int16 *)this + 258);
  v94 = a2;
  v25 = SpatialInteractionDevices::ParseInputReport(
          (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 448),
          (struct SpatialInteractionDevices::HID_HANDLE *)&v93,
          (struct SpatialInteractionDevices::HID_REPORT *)&v66[1],
          v24);
  v26 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v25);
    return v26;
  }
  v27 = v73;
  if ( !*((_BYTE *)this + 768) )
  {
    if ( (v73 & 8) != 0 )
    {
      v34 = v74 >> 3;
      *((_BYTE *)this + 275) = 1;
      if ( (v34 & 1) != 0 )
        v35 = FLOAT_1_0;
      else
        v35 = 0.0;
      *((float *)this + 66) = v35;
    }
    goto LABEL_35;
  }
  v72 |= 8u;
  if ( !v82 )
  {
    v27 = v73 & 0xFFFFFFF7;
    v73 &= ~8u;
    goto LABEL_35;
  }
  v28 = v81;
  v27 = v73 | 8;
  *((float *)this + 66) = v81;
  *((_BYTE *)this + 275) = 1;
  v73 = v27;
  v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v28 - 1.0)) & _xmm);
  if ( v29 > 0.001 )
    v74 &= ~8u;
  else
    v74 |= 8u;
  v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v28) & _xmm);
  v31 = v30 > 0.001 && v29 > 0.001;
  v32 = *((_DWORD *)this + 59);
  if ( (v32 & 8) == 0 )
  {
    if ( !v31 )
      goto LABEL_35;
    v33 = v32 | 8;
    goto LABEL_26;
  }
  if ( !v31 )
  {
    v33 = v32 & 0xFFFFFFF7;
LABEL_26:
    *((_DWORD *)this + 59) = v33;
    *v11 = 1;
  }
LABEL_35:
  LODWORD(a10) = v27;
  v36 = v27 & v74 | *((_DWORD *)this + 58) & ~v27;
  v37 = v72 | *((_DWORD *)this + 57);
  if ( *((_DWORD *)this + 57) != v37 )
  {
    *((_DWORD *)this + 57) = v37;
    *v11 = 1;
  }
  if ( *((_DWORD *)this + 58) != v36 )
  {
    *((_DWORD *)this + 58) = v36;
    *v11 = 1;
    v38 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v38 )
    {
      if ( *v38 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::ButtonsStateChanged_(
          v39,
          *((_DWORD *)this + 2),
          *((_DWORD *)this + 3),
          *((_DWORD *)this + 58));
      }
    }
  }
  if ( (*((_BYTE *)this + 232) & 0x44) != 0 )
  {
    if ( (_BYTE)v77 )
    {
      v40 = v76;
      v41 = v75 * 2.0;
      *((_BYTE *)this + 274) = 1;
      *((float *)this + 62) = v41 - 1.0;
      *((float *)this + 63) = (float)(v40 * 2.0) - 1.0;
    }
  }
  else
  {
    *((_BYTE *)this + 274) = 0;
  }
  if ( v80 )
  {
    v42 = v79;
    v43 = v78 * 2.0;
    *((_BYTE *)this + 276) = 1;
    *((float *)this + 64) = v43 - 1.0;
    *((float *)this + 65) = (float)(v42 * 2.0) - 1.0;
  }
  if ( v87 )
  {
    v44 = v83;
    *((_BYTE *)this + 408) = 1;
    v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 98) - v44)) & _xmm);
    if ( v45 > 0.001 )
    {
      *((float *)this + 98) = v44;
      *v11 = 1;
    }
    v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 99) - v84)) & _xmm);
    if ( v46 > 0.001 )
    {
      *((float *)this + 99) = v84;
      *v11 = 1;
    }
    v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 100) - v85)) & _xmm);
    if ( v47 > 0.001 )
    {
      *((float *)this + 100) = v85;
      *v11 = 1;
    }
    v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 101) - v86)) & _xmm);
    if ( v48 > 0.001 )
    {
      *((float *)this + 101) = v86;
      *v11 = 1;
    }
  }
  if ( v89 )
  {
    *((_DWORD *)this + 70) = v88;
    *((_BYTE *)this + 284) = 1;
  }
  v49 = a6;
  if ( *((_BYTE *)this + 784) )
  {
    v50 = v70;
    v51 = v68;
    *(_OWORD *)((char *)this + 788) = *(_OWORD *)&v66[1];
    *((_DWORD *)this + 201) = v67;
    *((_DWORD *)this + 203) = v69;
    *((_DWORD *)this + 202) = v51;
    *((_WORD *)this + 408) = __PAIR16__(v71, v50);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
      this,
      0LL,
      (const struct SpatialInteractionDevices::PoseData *)&v66[1],
      a4,
      v49,
      v19);
    *v11 = 1;
  }
LABEL_61:
  v52 = *((float *)this + 194);
  v53 = *((float *)this + 195);
  v54 = *((float *)this + 66);
  v55 = *((_DWORD *)this + 188);
  v56 = v54 >= (float)(v52 + v53) || v52 == 0.0 && v54 > 0.0;
  v57 = (float)(v52 - v53) >= v54 || v52 == 1.0 && v54 < 1.0;
  *((_BYTE *)this + 769) = v54 == 1.0;
  v58 = 2;
  if ( v55 )
  {
    if ( v55 != 1 )
    {
      if ( v55 == 2 )
      {
        v59 = !v57;
LABEL_77:
        if ( v59 )
          goto LABEL_89;
        goto LABEL_78;
      }
      if ( v55 != 3 )
        goto LABEL_89;
      if ( v54 != 1.0 )
      {
        v59 = v54 != 0.0;
        goto LABEL_77;
      }
      goto LABEL_86;
    }
    if ( v57 || v54 == 0.0 )
    {
LABEL_78:
      *((_DWORD *)this + 188) = 0;
      goto LABEL_89;
    }
    if ( v54 != 1.0 )
    {
      QueryPerformanceCounter(&v91);
      if ( v91.QuadPart - *((_QWORD *)this + 95) > (unsigned int)(int)(*((float *)this + 193)
                                                                     * (double)(int)qword_1801366F8) )
        *((_DWORD *)this + 188) = 3;
      goto LABEL_89;
    }
LABEL_86:
    *((_DWORD *)this + 188) = 2;
    goto LABEL_89;
  }
  if ( v54 == 1.0 )
    goto LABEL_86;
  if ( v56 )
  {
    *((_DWORD *)this + 188) = 1;
    QueryPerformanceCounter(&v92);
    *((LARGE_INTEGER *)this + 95) = v92;
  }
LABEL_89:
  if ( (unsigned int)(v55 - 1) <= 1 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 188) - 1) <= 1 )
    {
      v61 = *((float *)this + 66);
      v58 = 3;
      if ( v61 > *((float *)this + 194) )
        *((float *)this + 194) = v61;
      goto LABEL_98;
    }
    v58 = 4;
  }
  else if ( (unsigned int)(*((_DWORD *)this + 188) - 1) > 1 )
  {
    v60 = *((float *)this + 66);
    v58 = 6;
    if ( *((float *)this + 194) > v60 )
      *((float *)this + 194) = v60;
    goto LABEL_98;
  }
  *v11 = 1;
  *((_DWORD *)this + 194) = *((_DWORD *)this + 66);
LABEL_98:
  if ( *((_BYTE *)this + 784) )
  {
    v97.QuadPart = 0LL;
    QueryPerformanceCounter(&v97);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
      this,
      v97.QuadPart,
      (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 788),
      a4,
      v49,
      v19);
  }
  else if ( a4 )
  {
    *v11 |= Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose(
              this,
              a5,
              a4,
              v49,
              v19);
  }
  *a8 = *((_BYTE *)this + 769);
  *(_DWORD *)a9 = v58;
  v62 = (_DWORD *)*((_QWORD *)this + 103);
  if ( v62 )
  {
    v63 = *((_DWORD *)this + 58);
    ++v62[8];
    v64 = v62 + 9;
    v65 = 7LL;
    do
    {
      if ( (v63 & *(_DWORD *)((char *)v64
                            + &SpatialInteractionDevices::SpatialInteractionHeartbeat::ButtonsOfInterest
                            - (_UNKNOWN *)v62
                            - 36)) != 0 )
        ++*v64;
      ++v64;
      --v65;
    }
    while ( v65 );
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      (SpatialInteractionDevices::SpatialInteractionHeartbeat *)v62,
      0);
  }
  v95[0] = this;
  v95[1] = &a10;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___(
    (char *)this + 8,
    v95);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CheckForDeviceInformationUpdate(this, a11);
  return 0LL;
}
