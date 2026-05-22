/*
 * XREFs of ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@_JAEBUMatrix4x4@Numerics@Foundation@6@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800C4A3C
 * Callers:
 *     ?PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKK_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@@Z @ 0x180091680 (-PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800784C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     ?ButtonsStateChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x1800C3444 (-ButtonsStateChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800C3930 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ?CheckForDeviceInformationUpdate@SpatialInteractionController@SpatialInteractionDevices@@AEAAXPEA_N@Z @ 0x1800C5168 (-CheckForDeviceInformationUpdate@SpatialInteractionController@SpatialInteractionDevices@@AEAAXPE.c)
 *     ?TryUpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@2@Z @ 0x1800C5250 (-TryUpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAA_N_JPEAUISpatialGraph.c)
 *     ?UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData@2@PEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@3@Z @ 0x1800C5454 (-UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_c6949bcfd0c51953b572829791967b15___ @ 0x1800C74F8 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800C74F8.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::Parse(
        SpatialInteractionDevices::SpatialInteractionController *this,
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
  bool *v11; // r14
  bool *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  const struct Windows::Foundation::Numerics::Matrix4x4 *v19; // r12
  const struct Windows::Foundation::Numerics::Matrix4x4 *v20; // r13
  int v21; // edi
  struct SpatialInteractionDevices::InputReport *v22; // r9
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  bool v29; // r8
  int v30; // edx
  unsigned int v31; // edx
  int v32; // eax
  float v33; // xmm0_4
  int v34; // edx
  int v35; // eax
  _DWORD *v36; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v37; // rcx
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  unsigned __int8 v47; // al
  unsigned int v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm1_4
  int v52; // esi
  bool v53; // r10
  bool v54; // r9
  int v55; // edi
  bool v56; // zf
  float v57; // xmm1_4
  float v58; // xmm0_4
  _DWORD *v59; // rcx
  int v60; // r10d
  _DWORD *v61; // rax
  __int64 v62; // r9
  _OWORD v63[7]; // [rsp+38h] [rbp-C9h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+A8h] [rbp-59h] BYREF
  LARGE_INTEGER v65; // [rsp+B0h] [rbp-51h] BYREF
  int v66; // [rsp+B8h] [rbp-49h] BYREF
  char *v67; // [rsp+C0h] [rbp-41h]
  _QWORD v68[8]; // [rsp+C8h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+2Fh]
  LARGE_INTEGER v70; // [rsp+138h] [rbp+37h] BYREF

  v11 = a10;
  v15 = a11;
  *a10 = 0;
  *v15 = 0;
  *a8 = 0;
  *(_DWORD *)a9 = 0;
  if ( !*((_BYTE *)this + 1064) )
  {
    v16 = -2147020579;
    v17 = 445LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)v16);
    return v16;
  }
  LODWORD(a10) = 0;
  v19 = a7;
  v20 = a6;
  if ( a2 )
  {
    v21 = *((unsigned __int16 *)this + 54);
    if ( a3 != v21 )
    {
      v16 = -2147024809;
      v17 = 452LL;
      goto LABEL_3;
    }
    memset(v63, 0, 0x68uLL);
    v66 = v21;
    v67 = a2;
    v23 = SpatialInteractionDevices::ParseInputReport(
            this,
            (struct SpatialInteractionDevices::HID_HANDLE *)&v66,
            (struct SpatialInteractionDevices::HID_REPORT *)v63,
            v22);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1CB,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
        (const char *)(unsigned int)v23);
      return v24;
    }
    v25 = DWORD1(v63[2]);
    if ( !*((_BYTE *)this + 768) )
    {
      if ( (BYTE4(v63[2]) & 8) != 0 )
      {
        v32 = DWORD2(v63[2]) >> 3;
        *((_BYTE *)this + 399) = 1;
        if ( (v32 & 1) != 0 )
          v33 = FLOAT_1_0;
        else
          v33 = 0.0;
        *((float *)this + 97) = v33;
      }
      goto LABEL_30;
    }
    LODWORD(v63[2]) |= 8u;
    if ( !BYTE8(v63[4]) )
    {
      v25 = DWORD1(v63[2]) & 0xFFFFFFF7;
      DWORD1(v63[2]) &= ~8u;
      goto LABEL_30;
    }
    v26 = *((float *)&v63[4] + 1);
    v25 = DWORD1(v63[2]) | 8;
    *((_DWORD *)this + 97) = DWORD1(v63[4]);
    *((_BYTE *)this + 399) = 1;
    DWORD1(v63[2]) = v25;
    v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - 1.0)) & _xmm);
    if ( v27 > 0.001 )
      DWORD2(v63[2]) &= ~8u;
    else
      DWORD2(v63[2]) |= 8u;
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v26) & _xmm);
    v29 = v28 > 0.001 && v27 > 0.001;
    v30 = *((_DWORD *)this + 92);
    if ( (v30 & 8) != 0 )
    {
      if ( !v29 )
      {
        v31 = v30 & 0xFFFFFFF7;
LABEL_23:
        *((_DWORD *)this + 92) = v31;
        *v11 = 1;
      }
    }
    else if ( v29 )
    {
      v31 = v30 | 8;
      goto LABEL_23;
    }
LABEL_30:
    LODWORD(a10) = v25;
    v34 = v25 & DWORD2(v63[2]) | *((_DWORD *)this + 91) & ~v25;
    v35 = *((_DWORD *)this + 90) | LODWORD(v63[2]);
    if ( *((_DWORD *)this + 90) != v35 )
    {
      *((_DWORD *)this + 90) = v35;
      *v11 = 1;
    }
    if ( *((_DWORD *)this + 91) != v34 )
    {
      *((_DWORD *)this + 91) = v34;
      *v11 = 1;
      v36 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v36 )
      {
        if ( *v36 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::ButtonsStateChanged_(
            v37,
            *((_DWORD *)this + 86),
            *((_DWORD *)this + 87),
            *((_DWORD *)this + 91));
        }
      }
    }
    if ( (*((_BYTE *)this + 364) & 0x44) != 0 )
    {
      if ( BYTE4(v63[3]) )
      {
        v38 = *(float *)&v63[3];
        v39 = *((float *)&v63[2] + 3) * 2.0;
        *((_BYTE *)this + 398) = 1;
        *((float *)this + 93) = v39 - 1.0;
        *((float *)this + 94) = (float)(v38 * 2.0) - 1.0;
      }
    }
    else
    {
      *((_BYTE *)this + 398) = 0;
    }
    if ( LOBYTE(v63[4]) )
    {
      v40 = *((float *)&v63[3] + 3);
      v41 = *((float *)&v63[3] + 2) * 2.0;
      *((_BYTE *)this + 400) = 1;
      *((float *)this + 95) = v41 - 1.0;
      *((float *)this + 96) = (float)(v40 * 2.0) - 1.0;
    }
    if ( BYTE12(v63[5]) )
    {
      v42 = *((float *)&v63[4] + 3);
      *((_BYTE *)this + 596) = 1;
      v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 145) - v42)) & _xmm);
      if ( v43 > 0.001 )
      {
        *((float *)this + 145) = v42;
        *v11 = 1;
      }
      v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 146) - *(float *)&v63[5])) & _xmm);
      if ( v44 > 0.001 )
      {
        *((_DWORD *)this + 146) = v63[5];
        *v11 = 1;
      }
      v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 147) - *((float *)&v63[5] + 1))) & _xmm);
      if ( v45 > 0.001 )
      {
        *((_DWORD *)this + 147) = DWORD1(v63[5]);
        *v11 = 1;
      }
      v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 148) - *((float *)&v63[5] + 2))) & _xmm);
      if ( v46 > 0.001 )
      {
        *((_DWORD *)this + 148) = DWORD2(v63[5]);
        *v11 = 1;
      }
    }
    if ( BYTE4(v63[6]) )
    {
      *((_DWORD *)this + 101) = v63[6];
      *((_BYTE *)this + 408) = 1;
    }
    if ( *((_BYTE *)this + 800) )
    {
      v47 = BYTE12(v63[1]);
      v48 = DWORD1(v63[1]);
      *(_OWORD *)((char *)this + 804) = v63[0];
      *((_DWORD *)this + 205) = v63[1];
      *((_QWORD *)this + 103) = __PAIR64__(DWORD2(v63[1]), v48);
      *((_WORD *)this + 416) = __PAIR16__(BYTE13(v63[1]), v47);
      SpatialInteractionDevices::SpatialInteractionController::UpdateSimulatedPose(
        this,
        0LL,
        (const struct SpatialInteractionDevices::PoseData *)v63,
        a4,
        v20,
        v19);
      *v11 = 1;
    }
  }
  v49 = *((float *)this + 194);
  v50 = *((float *)this + 195);
  v51 = *((float *)this + 97);
  v52 = *((_DWORD *)this + 188);
  v53 = v51 >= (float)(v49 + v50) || v49 == 0.0 && v51 > 0.0;
  v54 = (float)(v49 - v50) >= v51 || v49 == 1.0 && v51 < 1.0;
  *((_BYTE *)this + 769) = v51 == 1.0;
  v55 = 2;
  if ( v52 )
  {
    if ( v52 != 1 )
    {
      if ( v52 == 2 )
      {
        v56 = !v54;
LABEL_71:
        if ( v56 )
          goto LABEL_83;
        goto LABEL_72;
      }
      if ( v52 != 3 )
        goto LABEL_83;
      if ( v51 != 1.0 )
      {
        v56 = v51 != 0.0;
        goto LABEL_71;
      }
      goto LABEL_80;
    }
    if ( v54 || v51 == 0.0 )
    {
LABEL_72:
      *((_DWORD *)this + 188) = 0;
      goto LABEL_83;
    }
    if ( v51 != 1.0 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      if ( PerformanceCount.QuadPart - *((_QWORD *)this + 95) > (unsigned int)(int)(*((float *)this + 193)
                                                                                  * (double)(int)qword_18010F278) )
        *((_DWORD *)this + 188) = 3;
      goto LABEL_83;
    }
LABEL_80:
    *((_DWORD *)this + 188) = 2;
    goto LABEL_83;
  }
  if ( v51 == 1.0 )
    goto LABEL_80;
  if ( v53 )
  {
    *((_DWORD *)this + 188) = 1;
    QueryPerformanceCounter(&v65);
    *((LARGE_INTEGER *)this + 95) = v65;
  }
LABEL_83:
  if ( (unsigned int)(v52 - 1) <= 1 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 188) - 1) <= 1 )
    {
      v58 = *((float *)this + 97);
      v55 = 3;
      if ( v58 > *((float *)this + 194) )
        *((float *)this + 194) = v58;
      goto LABEL_92;
    }
    v55 = 4;
  }
  else if ( (unsigned int)(*((_DWORD *)this + 188) - 1) > 1 )
  {
    v57 = *((float *)this + 97);
    v55 = 6;
    if ( *((float *)this + 194) > v57 )
      *((float *)this + 194) = v57;
    goto LABEL_92;
  }
  *((_DWORD *)this + 194) = *((_DWORD *)this + 97);
  *v11 = 1;
LABEL_92:
  if ( *((_BYTE *)this + 800) )
  {
    v70.QuadPart = 0LL;
    QueryPerformanceCounter(&v70);
    SpatialInteractionDevices::SpatialInteractionController::UpdateSimulatedPose(
      this,
      v70.QuadPart,
      (SpatialInteractionDevices::SpatialInteractionController *)((char *)this + 804),
      a4,
      v20,
      v19);
  }
  else if ( a4 )
  {
    *v11 |= SpatialInteractionDevices::SpatialInteractionController::TryUpdatePose(this, a5, a4, v20, v19);
  }
  *a8 = *((_BYTE *)this + 769);
  v59 = (_DWORD *)*((_QWORD *)this + 105);
  *(_DWORD *)a9 = v55;
  if ( v59 )
  {
    v60 = *((_DWORD *)this + 91);
    ++v59[8];
    v61 = v59 + 9;
    v62 = 7LL;
    do
    {
      if ( (v60 & *(_DWORD *)((char *)v61
                            + &SpatialInteractionDevices::SpatialInteractionHeartbeat::ButtonsOfInterest
                            - (_UNKNOWN *)v59
                            - 36)) != 0 )
        ++*v61;
      ++v61;
      --v62;
    }
    while ( v62 );
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      (SpatialInteractionDevices::SpatialInteractionHeartbeat *)v59,
      0);
  }
  v68[0] = this;
  v68[1] = &a10;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_c6949bcfd0c51953b572829791967b15___(
    (char *)this + 344,
    v68);
  SpatialInteractionDevices::SpatialInteractionController::CheckForDeviceInformationUpdate(this, a11);
  return 0LL;
}
