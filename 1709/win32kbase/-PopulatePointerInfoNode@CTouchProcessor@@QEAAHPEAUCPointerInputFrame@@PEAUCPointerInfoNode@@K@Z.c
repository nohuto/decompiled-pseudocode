/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0122D6C
 * Callers:
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C00172B8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C011F240 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C0127FAC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0128F34 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C0129004 (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0139EE0 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C013C134 (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C013C494 (ApiSetInputTransformOnInput.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v6; // edi
  __int64 *v7; // rax
  __int64 v8; // rax
  CInputDest *v9; // rax
  unsigned __int16 updated; // ax
  int v11; // edx
  int v12; // r8d
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  unsigned int v15; // ecx
  CInputDest *v16; // rax
  char v17; // r14
  int v18; // eax
  __int128 *PTPShellTarget; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // r11d
  int v35; // ecx
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rdx
  unsigned __int16 v40; // [rsp+40h] [rbp-C0h]
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h]
  _OWORD v43[12]; // [rsp+50h] [rbp-B0h] BYREF
  char v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h] BYREF
  __int128 v46; // [rsp+130h] [rbp+30h]
  __int128 v47; // [rsp+140h] [rbp+40h]
  __int128 v48; // [rsp+150h] [rbp+50h]
  __int128 v49; // [rsp+160h] [rbp+60h]
  __int128 v50; // [rsp+170h] [rbp+70h]
  __int128 v51; // [rsp+180h] [rbp+80h]
  __int128 v52; // [rsp+190h] [rbp+90h]
  __int128 v53; // [rsp+1A0h] [rbp+A0h]
  __int128 v54; // [rsp+1B0h] [rbp+B0h]
  __int128 v55; // [rsp+1C0h] [rbp+C0h]
  __int128 v56; // [rsp+1D0h] [rbp+D0h]
  _BYTE v57[208]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v58[208]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v6 = 0;
  v42 = 0;
  memset(v43, 0, sizeof(v43));
  v44 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x24u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 65) )
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)this + 1),
      3u,
      0xBu,
      0x25u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids,
      *((_DWORD *)a3 + 63));
    *((_DWORD *)a3 + 63) = 0;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x26u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    goto LABEL_62;
  }
  v7 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)a2 + 14) + 16LL) + 784LL);
  if ( v7 )
    v8 = *v7;
  else
    v8 = 0LL;
  *((_QWORD *)this + 5) = v8;
  *((_QWORD *)this + 6) = *(_QWORD *)(*((_QWORD *)a2 + 14) + 228LL);
  v9 = CInputDest::CInputDest((CInputDest *)v57, (struct CPointerInfoNode *)((char *)a3 + 24));
  updated = CTouchProcessor::UpdateActivePointer(this, (char *)a3 + 240, v9, v43);
  *((_DWORD *)a3 + 63) = updated;
  if ( updated )
  {
    if ( !LODWORD(v43[0]) )
    {
      WPP_RECORDER_SF_HL(*((_QWORD *)this + 1), v11, v12, 41, (unsigned int)&v41, updated, *((_WORD *)a3 + 120));
      v13 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_62;
      v14 = 42;
LABEL_19:
      WPP_RECORDER_SF_(
        (__int64)v13->DeviceExtension,
        5u,
        0xBu,
        v14,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_62;
    }
    v15 = *(_DWORD *)a3 & 0xFFFFFFFB | (v40 >> 2) & 4;
    *(_DWORD *)a3 = v15;
    if ( (v15 & 4) != 0 )
    {
      memset(v58, 0, 0xC8uLL);
      v16 = (CInputDest *)v58;
      v58[192] = 0;
      v17 = 1;
    }
    else
    {
      v16 = CInputDest::CInputDest((CInputDest *)v57, (const struct CInputDest *)v43);
      v17 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v16);
    if ( (v17 & 2) != 0 )
      CInputDest::SetEmpty((CInputDest *)v57);
    if ( (v17 & 1) != 0 )
      CInputDest::SetEmpty((CInputDest *)v58);
    *((_DWORD *)a3 + 56) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v43) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    if ( (v40 & 0x80) != 0 && gptiManipulationThread )
    {
      v18 = v42;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 101) = v18;
    }
    if ( *((_DWORD *)a3 + 62) == 5 )
    {
      PTPShellTarget = (__int128 *)ApiSetGetPTPShellTarget(v58);
      v20 = PTPShellTarget[1];
      v45 = *PTPShellTarget;
      v21 = PTPShellTarget[2];
      v46 = v20;
      v22 = PTPShellTarget[3];
      v47 = v21;
      v23 = PTPShellTarget[4];
      v48 = v22;
      v24 = PTPShellTarget[5];
      v49 = v23;
      v25 = PTPShellTarget[6];
      v50 = v24;
      v26 = PTPShellTarget[7];
      v51 = v25;
      v27 = PTPShellTarget[8];
      v52 = v26;
      v28 = PTPShellTarget[9];
      v53 = v27;
      v29 = PTPShellTarget[10];
      v54 = v28;
      v30 = PTPShellTarget[11];
      v55 = v29;
      v56 = v30;
      CInputDest::CInputDest((CInputDest *)v57, (const struct CInputDest *)&v45);
      if ( CInputDest::operator==((int *)v43, (__int64)v57) )
      {
        *(_DWORD *)a3 |= 0x500u;
        *((_DWORD *)a3 + 56) = 1;
      }
      CInputDest::SetEmpty((CInputDest *)v57);
    }
    if ( (v40 & 0x20) != 0 )
    {
      v31 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 56) = 1;
      *(_DWORD *)a3 = v31;
      if ( (v40 & 0x40) != 0 )
        *(_DWORD *)a3 = v31 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 408, (__int64)v43);
    *((_QWORD *)a3 + 34) = CInputDest::GetWindowHandle((CInputDest *)v43);
    *((_DWORD *)a3 + 64) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 79) = 1;
    if ( (v40 & 1) != 0 )
      *((_DWORD *)a3 + 65) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | (((2 * ((v40 >> 2) & 1)) | (v40 >> 1) & 1) << 15);
    *((_DWORD *)a3 + 65) &= 0x7FE1F7u;
    v32 = (unsigned int)(*((_DWORD *)a3 + 62) - 2);
    if ( *((_DWORD *)a3 + 62) != 2 )
    {
      v32 = (unsigned int)(*((_DWORD *)a3 + 62) - 3);
      if ( *((_DWORD *)a3 + 62) == 3 )
      {
        *((_DWORD *)a3 + 86) &= 7u;
        *((_DWORD *)a3 + 87) &= 0xFu;
LABEL_46:
        *((_DWORD *)a3 + 84) = CTouchProcessor::GetButtonChange(v32, v41, *((_DWORD *)a3 + 65) & 0x1F0);
        if ( (v34 & 1) != 0 || (v34 & 0x20000) == 0 || (v35 = 1, (v34 & 2) == 0) )
          v35 = 0;
        v36 = v35 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v36;
        if ( v41 != v33 )
          *(_DWORD *)a3 = v36 & 0xFFFFFFFE;
        if ( HIDWORD(v43[5]) )
        {
          v45 = v43[0];
          v46 = v43[1];
          v47 = v43[2];
          v48 = v43[3];
          v49 = v43[4];
          v50 = v43[5];
          v51 = v43[6];
          v52 = v43[7];
          v53 = v43[8];
          v54 = v43[9];
          v55 = v43[10];
          v56 = v43[11];
          if ( ApiSetEditionGetInputDelegate(&v45) )
          {
            if ( (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
          }
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v40 & 8) << 11);
        if ( !CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v38 = *((_QWORD *)a3 + 41);
          v45 = v43[0];
          v46 = v43[1];
          v47 = v43[2];
          v48 = v43[3];
          v49 = v43[4];
          v50 = v43[5];
          v51 = v43[6];
          v52 = v43[7];
          v53 = v43[8];
          v54 = v43[9];
          v55 = v43[10];
          v56 = v43[11];
          if ( (unsigned int)ApiSetInputTransformOnInput(&v45, v38, v37, (char *)a3 + 240) )
            *((_DWORD *)a3 + 65) |= 0x400000u;
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            0xBu,
            0x2Bu,
            (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
        v6 = 1;
        goto LABEL_62;
      }
      if ( *((_DWORD *)a3 + 62) != 5 )
        goto LABEL_46;
    }
    *((_DWORD *)a3 + 86) = 0;
    *((_DWORD *)a3 + 87) &= 7u;
    goto LABEL_46;
  }
  if ( (*((_DWORD *)a3 + 65) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 34) )
    WPP_RECORDER_SF_L(*((_QWORD *)this + 1), v11, v12, 39);
  v13 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = 40;
    goto LABEL_19;
  }
LABEL_62:
  CInputDest::SetEmpty((CInputDest *)v43);
  return v6;
}
