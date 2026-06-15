/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180038580
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800360A0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800497AC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E8984 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800ECB20 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800ED620 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
        CEndpointCharacteristics *this,
        char a2,
        bool a3,
        int a4,
        __int64 *a5,
        struct tWAVEFORMATEX **a6)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r15d
  bool v7; // r13
  CEndpointCharacteristics *v8; // r12
  struct tWAVEFORMATEX **v9; // rdi
  const PROPERTYKEY *v10; // rax
  unsigned __int16 *v11; // rsi
  unsigned __int16 *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rbx
  struct _GUID v17; // xmm0
  CAudioSignalProcessingModeMap *v18; // rcx
  int v19; // r10d
  int v20; // edx
  int v21; // eax
  struct _GUID *v22; // rax
  struct _GUID v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  __int64 i; // r8
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r12
  unsigned __int16 *v34; // rdx
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // ax
  int v37; // r10d
  __int16 Ptr; // r11
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // ax
  int v41; // r9d
  __int16 v42; // di
  __int16 v43; // ax
  __int16 v44; // dx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rbx
  struct tWAVEFORMATEX *v48; // rax
  struct tWAVEFORMATEX *v49; // rdi
  struct tWAVEFORMATEX *v50; // r9
  WORD nChannels; // r11
  DWORD nSamplesPerSec; // r8d
  DWORD nAvgBytesPerSec; // r10d
  WORD nBlockAlign; // bx
  WORD cbSize; // cx
  __int64 v56; // rcx
  __int64 v57; // rax
  WORD wBitsPerSample; // cx
  WORD wFormatTag; // ax
  int v60; // ecx
  int DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee; // ebx
  struct tWAVEFORMATEX *v62; // rax
  _QWORD *v64; // r9
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int16 v68; // r8
  unsigned __int16 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int16 v72; // r8
  unsigned __int16 v73; // r9
  __int64 v74; // rdx
  const GUID *v75; // r8
  __int64 v76; // rcx
  int cData; // [rsp+20h] [rbp-E0h]
  int v79; // [rsp+38h] [rbp-C8h] BYREF
  int v80; // [rsp+40h] [rbp-C0h] BYREF
  struct tWAVEFORMATEX *v81; // [rsp+48h] [rbp-B8h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v82; // [rsp+50h] [rbp-B0h]
  __int64 v83; // [rsp+58h] [rbp-A8h]
  __int64 v84; // [rsp+60h] [rbp-A0h]
  struct tWAVEFORMATEX **v85; // [rsp+68h] [rbp-98h]
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h]
  CEndpointCharacteristics *v88; // [rsp+90h] [rbp-70h]
  __int64 v89; // [rsp+98h] [rbp-68h]
  struct _GUID v90; // [rsp+A0h] [rbp-60h] BYREF
  __int128 Buf2; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v92[24]; // [rsp+C0h] [rbp-40h]
  GUID fmtid; // [rsp+D8h] [rbp-28h] BYREF
  DWORD pid; // [rsp+E8h] [rbp-18h]
  struct _GUID v95; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v96; // [rsp+100h] [rbp+0h]
  EVENT_DATA_DESCRIPTOR Buf1; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v98[24]; // [rsp+120h] [rbp+20h]
  __int64 v99; // [rsp+138h] [rbp+38h]
  int *v100; // [rsp+140h] [rbp+40h]
  __int64 v101; // [rsp+148h] [rbp+48h]
  int *v102; // [rsp+150h] [rbp+50h]
  __int64 v103; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v89 = -2LL;
  v6 = a4;
  v82 = a4;
  v7 = a3;
  v8 = this;
  v88 = this;
  v9 = a6;
  v85 = a6;
  v81 = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)pvar = *(_OWORD *)a5;
    *(_OWORD *)Src = *((_OWORD *)a5 + 1);
    DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                               (int)this,
                                                               a3,
                                                               a4,
                                                               (int)pvar,
                                                               &v81);
    if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
    {
LABEL_61:
      v50 = v81;
      if ( !v81 )
      {
        DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147467261;
        goto LABEL_82;
      }
      nChannels = v81->nChannels;
      if ( !nChannels
        || (nSamplesPerSec = v81->nSamplesPerSec) == 0
        || (nAvgBytesPerSec = v81->nAvgBytesPerSec) == 0
        || (nBlockAlign = v81->nBlockAlign) == 0
        || (cbSize = v81->cbSize, cbSize > 0x400u) )
      {
        DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024809;
        v80 = -2147024809;
        v79 = 6147;
        goto LABEL_129;
      }
      if ( ((v81->wFormatTag - 1) & 0xFFFD) != 0 )
      {
        if ( v81->wFormatTag != 0xFFFE )
        {
LABEL_81:
          DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = 0;
          v62 = v81;
          v50 = 0LL;
          v81 = 0LL;
          *v9 = v62;
          goto LABEL_82;
        }
        if ( cbSize >= 0x16u )
        {
          v56 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
              - *(_QWORD *)((char *)&v81[1].nSamplesPerSec + 2);
          if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v81[1].nSamplesPerSec
                                                                                        + 2) )
            v56 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v81[1].wBitsPerSample;
          if ( v56 )
          {
            v76 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
                - *(_QWORD *)((char *)&v81[1].nSamplesPerSec + 2);
            if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v81[1].nSamplesPerSec
                                                                                          + 2) )
              v76 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v81[1].wBitsPerSample;
            if ( v76 )
              goto LABEL_81;
          }
          v57 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
              - *(_QWORD *)((char *)&v81[1].nSamplesPerSec + 2);
          if ( !v57 )
            v57 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v81[1].wBitsPerSample;
          wBitsPerSample = v81->wBitsPerSample;
          if ( v57 )
          {
            if ( ((wBitsPerSample - 32) & 0xFFDF) != 0 )
            {
              DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024809;
              goto LABEL_82;
            }
          }
          else if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
          {
            DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024809;
            goto LABEL_82;
          }
          wFormatTag = v81[1].wFormatTag;
          if ( wFormatTag && wBitsPerSample >= wFormatTag )
          {
            v60 = nChannels * wBitsPerSample;
            if ( nAvgBytesPerSec == (nSamplesPerSec * v60) >> 3 )
            {
              if ( nBlockAlign == v60 / 8 )
                goto LABEL_81;
              DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024809;
            }
            else
            {
              DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024809;
            }
LABEL_82:
            v80 = DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
            v79 = 6147;
            if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0 )
              goto LABEL_129;
            goto LABEL_83;
          }
        }
      }
      else if ( !cbSize
             && (v81->wBitsPerSample & 7) == 0
             && nChannels <= 2u
             && nAvgBytesPerSec == (nSamplesPerSec * v81->wBitsPerSample * nChannels) >> 3 )
      {
        goto LABEL_81;
      }
      DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024809;
      goto LABEL_82;
    }
LABEL_87:
    v50 = v81;
    goto LABEL_82;
  }
  pvar[0] = 0LL;
  pvar[1] = 0LL;
  Src[0] = 0LL;
  v10 = &PKEY_AudioEngine_DeviceFormat;
  if ( a4 == 3 )
    v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  fmtid = v10->fmtid;
  pid = v10->pid;
  if ( (*(int (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &fmtid,
         pvar) < 0
    || LOWORD(pvar[0]) != 65
    || LODWORD(pvar[1]) < 0x12
    || (v11 = (unsigned __int16 *)Src[0], LODWORD(pvar[1]) != *((unsigned __int16 *)Src[0] + 8) + 18LL) )
  {
LABEL_135:
    v95 = *(struct _GUID *)a5;
    v96 = *((_OWORD *)a5 + 1);
    DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                               (int)v8,
                                                               v7,
                                                               v6,
                                                               (int)&v95,
                                                               &v81);
    if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
    {
      DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                                                                 v8,
                                                                 v7,
                                                                 v6,
                                                                 v81);
      if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
      {
LABEL_60:
        PropVariantClear(pvar);
        goto LABEL_61;
      }
    }
    goto LABEL_87;
  }
  v12 = (unsigned __int16 *)Src[0];
  v13 = *((int *)a5 + 2);
  v14 = *a5;
  v15 = 184LL;
  if ( (_DWORD)v13 == 3 )
    v15 = 192LL;
  v16 = (__int64 *)(v14 + v15);
  v17 = *(struct _GUID *)((char *)a5 + 12);
  v90 = v17;
  v18 = (CAudioSignalProcessingModeMap *)(v14 + 8 * (v13 + 2 * v13 + 175));
  v19 = 0;
  v20 = 0;
  v21 = *((_DWORD *)v18 + 4);
  if ( v21 <= 0 )
    goto LABEL_11;
  while ( 1 )
  {
    v64 = (_QWORD *)(*(_QWORD *)v18 + 16LL * v20);
    v65 = *v64 - *(_QWORD *)&v90.Data1;
    if ( *v64 == *(_QWORD *)&v90.Data1 )
      v65 = v64[1] - *(_QWORD *)v90.Data4;
    if ( !v65 )
      break;
    if ( ++v20 >= v21 )
      goto LABEL_11;
  }
  if ( v20 == -1 )
  {
LABEL_11:
    v90 = v17;
    v22 = &v90;
  }
  else
  {
    v90 = v17;
    v22 = CAudioSignalProcessingModeMap::Lookup(v18, &v95, &v90);
    v11 = (unsigned __int16 *)Src[0];
    v19 = 0;
  }
  v23 = *v22;
  v90 = v23;
  v25 = *(_QWORD *)v23.Data4;
  v24 = *(_OWORD *)&v23;
  v83 = *(_QWORD *)&v23.Data1;
  v26 = *(_QWORD *)&v23.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v23.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v26 = *(_QWORD *)v23.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v26 )
  {
    v90 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v25 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v24 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v83 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v27 = 0;
  v79 = 0;
  v28 = *v16;
  *(_QWORD *)&v90.Data1 = *v16;
  for ( i = 0LL; ; i += 8LL )
  {
    v84 = i;
    if ( v27 >= *(_DWORD *)(v28 + 8) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14BF,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL,
        cData);
      v9 = v85;
      v8 = v88;
      v6 = v82;
      v7 = a3;
      goto LABEL_135;
    }
    if ( i < 0 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18009380ALL);
    }
    v30 = *(_QWORD *)(i + *(_QWORD *)v28);
    v31 = *(_QWORD *)v30 - v24;
    if ( *(_QWORD *)v30 == v24 )
      v31 = *(_QWORD *)(v30 + 8) - v25;
    if ( !v31 )
    {
      v32 = 0;
      v80 = 0;
      if ( *(int *)(v30 + 24) > 0 )
        break;
    }
LABEL_118:
    v79 = ++v27;
    v28 = *(_QWORD *)&v90.Data1;
  }
  v33 = 0LL;
  while ( 1 )
  {
    if ( v33 < 0 || v32 >= *(_DWORD *)(v30 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800937F4LL);
    }
    v34 = **(unsigned __int16 ***)(v33 + *(_QWORD *)(v30 + 16));
    if ( !v12 )
      break;
    if ( v34 )
    {
      v35 = *v12;
      v36 = v12[8];
      if ( *v12 == 0xFFFE )
      {
        if ( v36 != 22 )
        {
          v66 = *((_QWORD *)v12 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v66 )
            v66 = *((_QWORD *)v12 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( v66 )
          {
            v67 = *((_QWORD *)v12 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v67 )
              v67 = *((_QWORD *)v12 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( v67 )
              goto LABEL_116;
          }
        }
        Buf1 = *(EVENT_DATA_DESCRIPTOR *)v12;
        *(_OWORD *)v98 = *((_OWORD *)v12 + 1);
        *(_QWORD *)&v98[16] = *((_QWORD *)v12 + 4);
        *(_WORD *)v98 = 22;
        v37 = *(_DWORD *)&v98[4];
        Ptr = Buf1.Ptr;
      }
      else
      {
        if ( v36 && ((v35 - 1) & 0xFFFD) != 0 )
          goto LABEL_116;
        v68 = v12[1];
        if ( (unsigned __int16)(v68 - 1) > 1u )
          goto LABEL_116;
        v69 = v12[7];
        if ( ((v69 - 8) & 0xFFE7) != 0 )
          goto LABEL_116;
        Buf1 = *(EVENT_DATA_DESCRIPTOR *)v12;
        Ptr = -2;
        LOWORD(Buf1.Ptr) = -2;
        *(_WORD *)v98 = 22;
        *(_WORD *)&v98[2] = v69;
        *(GUID *)&v98[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v98[8] = v35;
        LOBYTE(v19) = v68 == 1;
        v37 = v19 + 3;
        *(_DWORD *)&v98[4] = v37;
      }
      v39 = *v34;
      v40 = v34[8];
      if ( *v34 == 0xFFFE )
      {
        if ( v40 != 22 )
        {
          v70 = *((_QWORD *)v34 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v70 )
            v70 = *((_QWORD *)v34 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( v70 )
          {
            v71 = *((_QWORD *)v34 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v71 )
              v71 = *((_QWORD *)v34 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( v71 )
              goto LABEL_115;
          }
        }
        Buf2 = *(_OWORD *)v34;
        *(_OWORD *)v92 = *((_OWORD *)v34 + 1);
        *(_QWORD *)&v92[16] = *((_QWORD *)v34 + 4);
        *(_WORD *)v92 = 22;
        v41 = *(_DWORD *)&v92[4];
        v42 = Buf2;
        v43 = 0;
      }
      else
      {
        if ( v40 && ((v39 - 1) & 0xFFFD) != 0
          || (v72 = v34[1], (unsigned __int16)(v72 - 1) > 1u)
          || (v73 = v34[7], v42 = -2, ((v73 - 8) & 0xFFE7) != 0) )
        {
LABEL_115:
          v19 = 0;
          goto LABEL_116;
        }
        Buf2 = *(_OWORD *)v34;
        LOWORD(Buf2) = -2;
        *(_WORD *)v92 = 22;
        *(_WORD *)&v92[2] = v73;
        *(GUID *)&v92[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v92[8] = v39;
        v43 = 0;
        v41 = (v72 == 1) + 3;
        *(_DWORD *)&v92[4] = v41;
      }
      if ( WORD1(Buf1.Ptr) )
      {
        v44 = WORD1(Buf2);
      }
      else
      {
        v44 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( HIDWORD(Buf1.Ptr) )
      {
        v45 = DWORD1(Buf2);
      }
      else
      {
        v45 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( Buf1.Reserved2 )
        v43 = HIWORD(Buf2);
      else
        HIDWORD(Buf2) = 0;
      if ( v37 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 0;
        v41 = 0;
        *(_DWORD *)&v92[4] = 0;
      }
      if ( !Ptr )
      {
        v42 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v44 )
      {
        WORD1(Buf1.Ptr) = 0;
        Buf1.Size = 0;
        LOWORD(Buf1.Reserved) = 0;
      }
      if ( !v45 )
        *(ULONGLONG *)((char *)&Buf1.Ptr + 4) = 0LL;
      if ( !v43 )
        Buf1.Reserved = 0;
      if ( !v41 )
        *(_DWORD *)&v98[4] = 0;
      if ( !v42 )
        LOWORD(Buf1.Ptr) = 0;
      v46 = *(_QWORD *)&v98[8] - *(_QWORD *)&v92[8];
      if ( *(_QWORD *)&v98[8] == *(_QWORD *)&v92[8] )
        v46 = *(_QWORD *)&v98[16] - *(_QWORD *)&v92[16];
      if ( v46 )
        goto LABEL_116;
      if ( !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        goto LABEL_58;
      goto LABEL_115;
    }
LABEL_116:
    v32 = v80 + 1;
    v80 = v32;
    v33 += 8LL;
    if ( v32 >= *(_DWORD *)(v30 + 24) )
    {
      v24 = v83;
      i = v84;
      v27 = v79;
      goto LABEL_118;
    }
  }
  if ( v34 )
    goto LABEL_116;
LABEL_58:
  v47 = v11[8];
  v48 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v47 + 18);
  v49 = v48;
  if ( v48 )
  {
    memcpy_0(v48, v11, v47 + 18);
    v81 = v49;
    v9 = v85;
    goto LABEL_60;
  }
  v50 = 0LL;
  v81 = 0LL;
  DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024882;
  v80 = -2147024882;
  v79 = 6147;
LABEL_129:
  if ( (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    *(_QWORD *)&v98[16] = "CEndpointCharacteristics::GetDeviceFormatInternal";
    v99 = 50LL;
    v100 = &v79;
    v101 = v74;
    v102 = &v80;
    v103 = v74;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014791D, v75, (LPCGUID)v50, 5u, &Buf1);
    v50 = v81;
  }
LABEL_83:
  CoTaskMemFree(v50);
  return (unsigned int)DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
}
