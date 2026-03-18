/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C012371C
 * Callers:
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0047DD0 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0047F3C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C01203E0 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C012876C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01296DC (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C01297AC (WPP_RECORDER_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C013ACD4 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetGetPTPShellTarget @ 0x1C013CD04 (ApiSetGetPTPShellTarget.c)
 *     ApiSetInputTransformOnInput @ 0x1C013CFC0 (ApiSetInputTransformOnInput.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v6; // edi
  int v7; // edx
  int v8; // edx
  PDEVICE_OBJECT v9; // rcx
  int v10; // r9d
  CInputDest *v11; // rax
  unsigned __int16 updated; // ax
  int v13; // r8d
  unsigned int v14; // ecx
  CInputDest *v15; // rax
  char v16; // si
  int v17; // eax
  __int128 *PTPShellTarget; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int v30; // eax
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r11d
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // edx
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
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      11,
      36,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 65) )
  {
    WPP_RECORDER_SF_D(
      *((_QWORD *)this + 1),
      3u,
      0xBu,
      0x25u,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids,
      *((_DWORD *)a3 + 63));
    *((_DWORD *)a3 + 63) = 0;
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 38;
LABEL_16:
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_(v9->DeviceExtension, v8, 11, v10, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_58;
    }
    goto LABEL_58;
  }
  v11 = CInputDest::CInputDest((CInputDest *)v57, (struct CPointerInfoNode *)((char *)a3 + 24));
  updated = CTouchProcessor::UpdateActivePointer(this, (char *)a3 + 240, v11, v43);
  *((_DWORD *)a3 + 63) = updated;
  if ( updated )
  {
    if ( !LODWORD(v43[0]) )
    {
      WPP_RECORDER_SF_HL(*((_QWORD *)this + 1), v8, v13, 41, (unsigned int)&v41, updated, *((_WORD *)a3 + 120));
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 42;
        goto LABEL_16;
      }
      goto LABEL_58;
    }
    v14 = *(_DWORD *)a3 & 0xFFFFFFFB | (4 * ((v40 >> 4) & 1));
    *(_DWORD *)a3 = v14;
    if ( (v14 & 4) != 0 )
    {
      memset(v58, 0, 0xC8uLL);
      v15 = (CInputDest *)v58;
      v58[192] = 0;
      v16 = 1;
    }
    else
    {
      v15 = CInputDest::CInputDest((CInputDest *)v57, (const struct CInputDest *)v43);
      v16 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v15);
    if ( (v16 & 2) != 0 )
    {
      v16 &= ~2u;
      CInputDest::SetEmpty((CInputDest *)v57);
    }
    if ( (v16 & 1) != 0 )
      CInputDest::SetEmpty((CInputDest *)v58);
    *((_DWORD *)a3 + 56) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v43) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    if ( (v40 & 0x80) != 0 && gptiManipulationThread )
    {
      v17 = v42;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 101) = v17;
    }
    if ( *((_DWORD *)a3 + 62) == 5 )
    {
      PTPShellTarget = (__int128 *)ApiSetGetPTPShellTarget(v58);
      v19 = PTPShellTarget[1];
      v45 = *PTPShellTarget;
      v20 = PTPShellTarget[2];
      v46 = v19;
      v21 = PTPShellTarget[3];
      v47 = v20;
      v22 = PTPShellTarget[4];
      v48 = v21;
      v23 = PTPShellTarget[5];
      v49 = v22;
      v24 = PTPShellTarget[6];
      v50 = v23;
      v25 = PTPShellTarget[7];
      v51 = v24;
      v26 = PTPShellTarget[8];
      v52 = v25;
      v27 = PTPShellTarget[9];
      v53 = v26;
      v28 = PTPShellTarget[10];
      v54 = v27;
      v29 = PTPShellTarget[11];
      v55 = v28;
      v56 = v29;
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
      v30 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 56) = 1;
      *(_DWORD *)a3 = v30;
      if ( (v40 & 0x40) != 0 )
        *(_DWORD *)a3 = v30 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 408, (__int64)v43);
    *((_QWORD *)a3 + 34) = CInputDest::GetWindowHandle((CInputDest *)v43);
    *((_DWORD *)a3 + 64) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 79) = 1;
    if ( (v40 & 1) != 0 )
      *((_DWORD *)a3 + 65) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | (((2 * ((v40 >> 2) & 1)) | (v40 >> 1) & 1) << 15);
    *((_DWORD *)a3 + 65) &= 0x7FE1F7u;
    v31 = (unsigned int)(*((_DWORD *)a3 + 62) - 2);
    if ( *((_DWORD *)a3 + 62) != 2 )
    {
      v31 = (unsigned int)(*((_DWORD *)a3 + 62) - 3);
      if ( *((_DWORD *)a3 + 62) == 3 )
      {
        *((_DWORD *)a3 + 86) &= 7u;
        *((_DWORD *)a3 + 87) &= 0xFu;
LABEL_42:
        *((_DWORD *)a3 + 84) = CTouchProcessor::GetButtonChange(v31, v41, *((_DWORD *)a3 + 65) & 0x1F0);
        if ( (v33 & 1) != 0 || (v33 & 0x20000) == 0 || (v34 = 1, (v33 & 2) == 0) )
          v34 = 0;
        v35 = v34 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v35;
        if ( v41 != v32 )
          *(_DWORD *)a3 = v35 & 0xFFFFFFFE;
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
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | (((v40 >> 3) & 1) << 14);
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
        {
          LOBYTE(v36) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v36,
            11,
            43,
            (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
        }
        v6 = 1;
        goto LABEL_58;
      }
      if ( *((_DWORD *)a3 + 62) != 5 )
        goto LABEL_42;
    }
    *((_DWORD *)a3 + 86) = 0;
    *((_DWORD *)a3 + 87) &= 7u;
    goto LABEL_42;
  }
  if ( (*((_DWORD *)a3 + 65) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 34) )
    WPP_RECORDER_SF_L(*((_QWORD *)this + 1), v8, v13, 39);
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = 40;
    goto LABEL_16;
  }
LABEL_58:
  CInputDest::SetEmpty((CInputDest *)v43);
  return v6;
}
