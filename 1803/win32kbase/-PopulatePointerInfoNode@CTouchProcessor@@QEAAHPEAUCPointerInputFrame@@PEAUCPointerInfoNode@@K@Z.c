/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01184C4
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C0118B5C (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0036F78 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C0113C64 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C011792C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C011E4F0 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 *     WPP_RECORDER_SF_HL @ 0x1C011F69C (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C011F76C (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C013E518 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01408AC (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C0140CB0 (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rax
  CInputDest *v11; // rax
  unsigned __int16 updated; // ax
  int v13; // edx
  int v14; // r8d
  PDEVICE_OBJECT v15; // rcx
  unsigned __int16 v16; // r9
  unsigned int v17; // ecx
  CInputDest *v18; // rax
  char v19; // r15
  int v20; // eax
  _OWORD *PTPShellTarget; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // r11d
  int v38; // ecx
  unsigned int v39; // eax
  __int64 v40; // r8
  __int64 v41; // rdx
  unsigned __int16 v43; // [rsp+40h] [rbp-C0h]
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h]
  _OWORD v46[11]; // [rsp+50h] [rbp-B0h] BYREF
  char v47; // [rsp+100h] [rbp+0h]
  _OWORD v48[11]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v49[11]; // [rsp+1C0h] [rbp+C0h] BYREF
  _OWORD v50[11]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v51[176]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v52[192]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE v53[192]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v54[192]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v55[192]; // [rsp+610h] [rbp+510h] BYREF

  v6 = 0;
  v45 = 0;
  memset(v46, 0, sizeof(v46));
  v47 = 0;
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( (*((_DWORD *)a2 + 20) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x30u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 61) )
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)this + 1),
      3u,
      0xBu,
      0x31u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids,
      *((_DWORD *)a3 + 59));
    *((_DWORD *)a3 + 59) = 0;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x32u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_70;
  }
  v9 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)a2 + 14) + 16LL) + 856LL);
  if ( v9 )
    v10 = *v9;
  else
    v10 = 0LL;
  *((_QWORD *)this + 5) = v10;
  *((_QWORD *)this + 6) = *(_QWORD *)(*((_QWORD *)a2 + 14) + 228LL);
  v11 = CInputDest::CInputDest((CInputDest *)v52, (struct CPointerInfoNode *)((char *)a3 + 24));
  updated = CTouchProcessor::UpdateActivePointer(this, (char *)a3 + 224, v11, v46);
  *((_DWORD *)a3 + 59) = updated;
  if ( updated )
  {
    if ( !LODWORD(v46[0]) )
    {
      WPP_RECORDER_SF_HL(*((_QWORD *)this + 1), v13, v14, 53, (unsigned int)&v44, updated, *((_WORD *)a3 + 112));
      v15 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_70;
      v16 = 54;
LABEL_25:
      WPP_RECORDER_SF_(
        (__int64)v15->DeviceExtension,
        5u,
        0xBu,
        v16,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_70;
    }
    v17 = *(_DWORD *)a3 & 0xFFFFFFFB | (v43 >> 2) & 4;
    *(_DWORD *)a3 = v17;
    if ( (v17 & 4) != 0 )
    {
      memset(v53, 0, 0xB8uLL);
      v18 = (CInputDest *)v53;
      v53[176] = 0;
      v19 = 1;
    }
    else
    {
      v18 = CInputDest::CInputDest((CInputDest *)v55, (const struct CInputDest *)v46);
      v19 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v18);
    if ( (v19 & 2) != 0 )
      CInputDest::SetEmpty((CInputDest *)v55);
    if ( (v19 & 1) != 0 )
      CInputDest::SetEmpty((CInputDest *)v53);
    *((_DWORD *)a3 + 52) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v46) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    if ( (v43 & 0x80) != 0 && gptiManipulationThread )
    {
      v20 = v45;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 97) = v20;
    }
    if ( (unsigned int)CPointerInfoNode::IsTouchpad(a3) )
    {
      PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v51);
      v22 = PTPShellTarget[1];
      v48[0] = *PTPShellTarget;
      v23 = PTPShellTarget[2];
      v48[1] = v22;
      v24 = PTPShellTarget[3];
      v48[2] = v23;
      v25 = PTPShellTarget[4];
      v48[3] = v24;
      v26 = PTPShellTarget[5];
      v48[4] = v25;
      v27 = PTPShellTarget[6];
      v48[5] = v26;
      v28 = PTPShellTarget[7];
      v48[6] = v27;
      v29 = PTPShellTarget[8];
      v48[7] = v28;
      v30 = PTPShellTarget[9];
      v48[8] = v29;
      v31 = PTPShellTarget[10];
      v48[9] = v30;
      v48[10] = v31;
      CInputDest::CInputDest((CInputDest *)v54, (const struct tagINPUTDEST *)v48);
      if ( CInputDest::operator==((unsigned int *)v46, (__int64)v54) )
      {
        if ( *((_DWORD *)a3 + 58) != 5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32);
        *(_DWORD *)a3 |= 0x500u;
        *((_DWORD *)a3 + 52) = 1;
      }
      CInputDest::SetEmpty((CInputDest *)v54);
    }
    if ( (v43 & 0x20) != 0 )
    {
      v34 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 52) = 1;
      *(_DWORD *)a3 = v34;
      if ( (v43 & 0x40) != 0 )
        *(_DWORD *)a3 = v34 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 392, (__int64)v46);
    *((_QWORD *)a3 + 32) = CInputDest::GetWindowHandle((CInputDest *)v46);
    *((_DWORD *)a3 + 60) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 75) = 1;
    if ( (v43 & 1) != 0 )
      *((_DWORD *)a3 + 61) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v43 & 4) << 14) | ((v43 & 2) << 14);
    *((_DWORD *)a3 + 61) &= 0x7FE1F7u;
    v35 = (unsigned int)(*((_DWORD *)a3 + 58) - 2);
    if ( *((_DWORD *)a3 + 58) != 2 )
    {
      v35 = (unsigned int)(*((_DWORD *)a3 + 58) - 3);
      if ( *((_DWORD *)a3 + 58) == 3 )
      {
        *((_DWORD *)a3 + 82) &= 7u;
        *((_DWORD *)a3 + 83) &= 0xFu;
LABEL_54:
        *((_DWORD *)a3 + 80) = CTouchProcessor::GetButtonChange(v35, v44, *((_DWORD *)a3 + 61) & 0x1F0);
        if ( (v37 & 1) != 0 || (v37 & 0x20000) == 0 || (v38 = 1, (v37 & 2) == 0) )
          v38 = 0;
        v39 = v38 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v39;
        if ( v44 != v36 )
          *(_DWORD *)a3 = v39 & 0xFFFFFFFE;
        if ( DWORD1(v46[5]) )
        {
          v49[0] = v46[0];
          v49[1] = v46[1];
          v49[2] = v46[2];
          v49[3] = v46[3];
          v49[4] = v46[4];
          v49[5] = v46[5];
          v49[6] = v46[6];
          v49[7] = v46[7];
          v49[8] = v46[8];
          v49[9] = v46[9];
          v49[10] = v46[10];
          if ( ApiSetEditionGetInputDelegate(v49) )
          {
            if ( (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
          }
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v43 & 8) << 11);
        if ( !CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v41 = *((_QWORD *)a3 + 39);
          v50[0] = v46[0];
          v50[1] = v46[1];
          v50[2] = v46[2];
          v50[3] = v46[3];
          v50[4] = v46[4];
          v50[5] = v46[5];
          v50[6] = v46[6];
          v50[7] = v46[7];
          v50[8] = v46[8];
          v50[9] = v46[9];
          v50[10] = v46[10];
          if ( (unsigned int)ApiSetInputTransformOnInput(v50, v41, v40, (char *)a3 + 224) )
            *((_DWORD *)a3 + 61) |= 0x400000u;
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            0xBu,
            0x37u,
            (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        v6 = 1;
        goto LABEL_70;
      }
      if ( *((_DWORD *)a3 + 58) != 5 )
        goto LABEL_54;
    }
    *((_DWORD *)a3 + 82) = 0;
    *((_DWORD *)a3 + 83) &= 7u;
    goto LABEL_54;
  }
  if ( (*((_DWORD *)a3 + 61) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 32) )
    WPP_RECORDER_SF_L(*((_QWORD *)this + 1), v13, v14, 51);
  v15 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v16 = 52;
    goto LABEL_25;
  }
LABEL_70:
  CInputDest::SetEmpty((CInputDest *)v46);
  return v6;
}
