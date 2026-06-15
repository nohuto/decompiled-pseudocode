/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180024820
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x18002A2E0 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180030B4C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180063980 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009726C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___ @ 0x180099E18 (wil--details--lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___--_lambda_call__lambda_9872.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1800A4FEC (WPP_SF_dd.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800C181C (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800C18E4 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     WPP_SF_DDd @ 0x1800C661C (WPP_SF_DDd.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z @ 0x1800DB674 (-AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        enum _AUDCLNT_SHAREMODE a4,
        unsigned int a5,
        const struct tWAVEFORMATEX *Src,
        const struct _GUID *a7,
        unsigned int a8,
        struct VadServerSettings *a9,
        __int64 a10,
        struct IProcessSubmixProxy *a11)
{
  struct IMMDevice *v14; // rbx
  int v15; // edi
  CAudioSessionManager *v16; // rcx
  signed int v17; // esi
  __int64 (__fastcall *v18)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  char *v20; // rdx
  const void *v21; // rsi
  char **v22; // r9
  __int64 v23; // rdi
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r14
  char *v26; // rcx
  size_t v27; // r8
  char **v28; // r9
  __int64 v29; // rdi
  char *v30; // rax
  unsigned __int64 v31; // r14
  char *v32; // rcx
  size_t v33; // r8
  struct VadServerSettings *v34; // r14
  unsigned int v35; // eax
  void *v36; // rax
  void *v37; // rcx
  const struct tWAVEFORMATEX *v38; // r14
  __int64 nChannels; // r8
  DWORD nSamplesPerSec; // r9d
  DWORD nAvgBytesPerSec; // r11d
  WORD nBlockAlign; // di
  WORD cbSize; // cx
  WORD wFormatTag; // r10
  __int64 v45; // rcx
  bool v46; // al
  WORD wBitsPerSample; // cx
  WORD v48; // ax
  int v49; // edx
  unsigned int v50; // edi
  void (__fastcall ***v51)(_QWORD, GUID *, struct _GUID *); // r9
  __int64 v52; // rcx
  int v53; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v54; // edx
  char v55; // cl
  struct IProcessSubmixProxy *v56; // r12
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v57; // ecx
  unsigned int v58; // eax
  void *v59; // rcx
  __int64 v60; // rdi
  BYTE *v61; // rax
  __int64 v62; // r14
  __int64 v63; // r14
  __int64 i; // rcx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 *v67; // rax
  int v68; // r8d
  unsigned __int16 *v69; // rax
  struct CEndpointCharacteristics *v70; // r14
  AudioJournal *v71; // rcx
  __int64 v72; // r9
  __int64 v73; // rdx
  int StreamInfo; // eax
  BYTE *v75; // r14
  const WCHAR *v76; // r12
  DWORD v77; // r13d
  LSTATUS Key; // eax
  __int64 v79; // rdx
  LSTATUS v80; // eax
  __int64 v81; // rdx
  int dwOptions; // [rsp+20h] [rbp-108h]
  int dwOptionsa; // [rsp+20h] [rbp-108h]
  LPVOID pv; // [rsp+70h] [rbp-B8h] BYREF
  unsigned int v86; // [rsp+78h] [rbp-B0h]
  struct CEndpointCharacteristics *v87; // [rsp+80h] [rbp-A8h] BYREF
  struct _GUID lpCriticalSection; // [rsp+88h] [rbp-A0h] BYREF
  LPVOID *p_lpVtbl; // [rsp+98h] [rbp-90h] BYREF
  char v90; // [rsp+A0h] [rbp-88h]
  struct _GUID v91; // [rsp+A8h] [rbp-80h] BYREF
  LPCRITICAL_SECTION v92; // [rsp+B8h] [rbp-70h] BYREF
  char v93; // [rsp+C0h] [rbp-68h]
  PROPVARIANT pvar[11]; // [rsp+D0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]
  BYTE *lpData; // [rsp+130h] [rbp+8h] BYREF
  struct IAudioProcess *v97; // [rsp+138h] [rbp+10h]
  enum _AUDCLNT_SHAREMODE v98; // [rsp+148h] [rbp+20h]

  v98 = a4;
  v97 = a2;
  lpData = (BYTE *)this;
  pvar[3] = (PROPVARIANT)-2LL;
  v87 = 0LL;
  v14 = 0LL;
  p_lpVtbl = 0LL;
  *(_QWORD *)a10 = 0LL;
  v92 = (LPCRITICAL_SECTION)((char *)this + 224);
  v93 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v92);
  if ( *((_DWORD *)this + 46) )
  {
    v15 = -2004287486;
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_179;
    }
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, 2290679810LL);
LABEL_178:
    v16 = WPP_GLOBAL_Control;
LABEL_179:
    v17 = -2147024809;
    goto LABEL_180;
  }
  if ( (unsigned int)a4 > AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v17 = -2147024809;
    v15 = -2147024809;
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      dwOptions = -2147024809;
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
      v16 = WPP_GLOBAL_Control;
    }
    goto LABEL_180;
  }
  v18 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  if ( v18 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       g_pEndpointCharacteristicsCache,
                                       a3,
                                       0,
                                       &v87);
  else
    AliasedEndpointCharacteristics = v18(g_pEndpointCharacteristicsCache, a3, 0, &v87);
  v15 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_178;
  pv = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v87 + 2) + 40LL))(*((_QWORD *)v87 + 2), &pv);
  if ( v15 < 0 )
  {
    CoTaskMemFree(pv);
    v17 = -2147024809;
    v16 = WPP_GLOBAL_Control;
LABEL_180:
    if ( *(_QWORD *)a10 )
    {
      operator delete(*(void **)a10);
      *(_QWORD *)a10 = 0LL;
      v16 = WPP_GLOBAL_Control;
    }
    if ( v16 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v16 + 7) & 0x100) != 0
      && *((_BYTE *)v16 + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)v16 + 2),
        32,
        (unsigned int)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
        *((_QWORD *)this + 27),
        v15);
    }
    goto LABEL_186;
  }
  v21 = pv;
  v22 = (char **)((char *)this + 216);
  if ( !pv )
    goto LABEL_37;
  v23 = -1LL;
  do
    ++v23;
  while ( *((_WORD *)pv + v23) );
  if ( !(_DWORD)v23 )
  {
LABEL_37:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 216);
    goto LABEL_38;
  }
  v24 = *((unsigned int *)*v22 - 4);
  v25 = ((_BYTE *)pv - *v22) >> 1;
  if ( ((1 - *((_DWORD *)*v22 - 2)) | (*((_DWORD *)*v22 - 3) - (int)v23)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 216, (unsigned int)v23);
    v22 = (char **)((char *)this + 216);
  }
  v26 = *v22;
  v27 = 2LL * (int)v23;
  if ( v25 > v24 )
  {
    if ( !v27 )
      goto LABEL_34;
    if ( !v26 )
    {
LABEL_26:
      *(_DWORD *)_o__errno(0LL, v20, v27, v22) = 22;
      invalid_parameter_noinfo();
      v22 = (char **)((char *)this + 216);
      goto LABEL_34;
    }
    memcpy_0(v26, v21, v27);
  }
  else
  {
    v20 = &v26[2 * v25];
    if ( !v27 )
      goto LABEL_34;
    if ( !v26 )
      goto LABEL_26;
    if ( !v20 )
    {
      *(_DWORD *)_o__errno(v26, 0LL, v27, v22) = 22;
      invalid_parameter_noinfo();
      v22 = (char **)((char *)this + 216);
      goto LABEL_34;
    }
    memmove(v26, v20, v27);
  }
  v22 = (char **)((char *)this + 216);
LABEL_34:
  if ( (int)v23 < 0 || (int)v23 > *((_DWORD *)*v22 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*v22 - 4) = v23;
  *(_WORD *)&(*v22)[2 * (int)v23] = 0;
LABEL_38:
  v17 = -2147024809;
  v28 = (char **)((char *)this + 208);
  if ( a3 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a3[v29] );
    if ( (_DWORD)v29 )
    {
      v30 = *v28;
      v86 = *((_DWORD *)*v28 - 4);
      v31 = ((char *)a3 - v30) >> 1;
      if ( ((1 - *((_DWORD *)v30 - 2)) | (*((_DWORD *)v30 - 3) - (int)v29)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 208, (unsigned int)v29);
        v28 = (char **)((char *)this + 208);
      }
      v32 = *v28;
      v33 = 2LL * (int)v29;
      if ( v31 > v86 )
      {
        if ( !v33 )
          goto LABEL_55;
        if ( v32 )
        {
          memcpy_0(v32, a3, v33);
          goto LABEL_54;
        }
      }
      else
      {
        v20 = &v32[2 * v31];
        if ( !v33 )
          goto LABEL_55;
        if ( v32 )
        {
          if ( v20 )
          {
            memmove(v32, v20, v33);
          }
          else
          {
            *(_DWORD *)_o__errno(v32, 0LL, v33, v28) = 22;
            invalid_parameter_noinfo();
          }
          goto LABEL_54;
        }
      }
      *(_DWORD *)_o__errno(0LL, v20, v33, v28) = 22;
      invalid_parameter_noinfo();
LABEL_54:
      v28 = (char **)((char *)this + 208);
LABEL_55:
      if ( (int)v29 < 0 || (int)v29 > *((_DWORD *)*v28 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)*v28 - 4) = v29;
      *(_WORD *)&(*v28)[2 * (int)v29] = 0;
      goto LABEL_59;
    }
  }
  ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 208);
LABEL_59:
  CoTaskMemFree(pv);
  *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v97 + 40LL))(v97);
  v15 = 0;
  v34 = a9;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 72LL))(
          g_PolicyManager,
          *((unsigned int *)a9 + 4))
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v34 + 5)) )
  {
    v15 = -2147024809;
    AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x53Bu, -2147024809);
  }
  if ( v15 < 0 )
    goto LABEL_68;
  *(_OWORD *)((char *)this + 280) = *(_OWORD *)v34;
  *(_OWORD *)((char *)this + 296) = *((_OWORD *)v34 + 1);
  *(_OWORD *)((char *)this + 312) = *((_OWORD *)v34 + 2);
  *(_OWORD *)((char *)this + 328) = *((_OWORD *)v34 + 3);
  *(_OWORD *)((char *)this + 344) = *((_OWORD *)v34 + 4);
  *(_OWORD *)((char *)this + 360) = *((_OWORD *)v34 + 5);
  *(_OWORD *)((char *)this + 376) = *((_OWORD *)v34 + 6);
  *((_QWORD *)this + 49) = *((_QWORD *)v34 + 14);
  v35 = *((_DWORD *)this + 92);
  if ( v35 )
  {
    v36 = operator new[](v35, (const struct std::nothrow_t *)&std::nothrow);
    v37 = (void *)*((_QWORD *)this + 56);
    *((_QWORD *)this + 56) = v36;
    if ( v37 )
    {
      operator delete(v37, (const struct std::nothrow_t *)1);
      v36 = (void *)*((_QWORD *)this + 56);
    }
    if ( !v36 )
    {
      v15 = -2147024882;
LABEL_68:
      v16 = WPP_GLOBAL_Control;
      goto LABEL_180;
    }
    memcpy_0(v36, *((const void **)this + 47), *((unsigned int *)this + 92));
    *((_QWORD *)this + 47) = *((_QWORD *)this + 56);
  }
  v15 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioProcess *, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                                + 128LL))(
          g_PolicyManager,
          v97,
          *((_QWORD *)this + 27));
  if ( v15 < 0 )
    goto LABEL_68;
  v38 = Src;
  if ( !Src )
  {
    v15 = -2147467261;
LABEL_90:
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        28LL,
        &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
        (unsigned int)v15);
      v16 = WPP_GLOBAL_Control;
    }
    goto LABEL_180;
  }
  nChannels = Src->nChannels;
  if ( !(_WORD)nChannels )
    goto LABEL_89;
  nSamplesPerSec = Src->nSamplesPerSec;
  if ( !nSamplesPerSec )
    goto LABEL_89;
  nAvgBytesPerSec = Src->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    goto LABEL_89;
  nBlockAlign = Src->nBlockAlign;
  if ( !nBlockAlign )
    goto LABEL_89;
  cbSize = Src->cbSize;
  if ( cbSize > 0x400u )
    goto LABEL_89;
  wFormatTag = Src->wFormatTag;
  if ( ((Src->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( cbSize
      || (Src->wBitsPerSample & 7) != 0
      || (unsigned __int16)nChannels > 2u
      || nAvgBytesPerSec != (Src->wBitsPerSample * nSamplesPerSec * (unsigned __int16)nChannels) >> 3 )
    {
      v15 = -2147024809;
      goto LABEL_90;
    }
    goto LABEL_104;
  }
  if ( wFormatTag != 0xFFFE )
    goto LABEL_104;
  if ( cbSize < 0x16u )
  {
LABEL_89:
    v15 = -2147024809;
    goto LABEL_90;
  }
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&Src[1].nSamplesPerSec + 2)
    && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&Src[1].wBitsPerSample
    || *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&Src[1].nSamplesPerSec + 2)
    && *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&Src[1].wBitsPerSample )
  {
    v45 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&Src[1].nSamplesPerSec + 2);
    if ( !v45 )
      v45 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&Src[1].wBitsPerSample;
    v46 = v45 == 0;
    wBitsPerSample = Src->wBitsPerSample;
    if ( v46 )
    {
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        goto LABEL_89;
    }
    else if ( ((wBitsPerSample - 32) & 0xFFDF) != 0 )
    {
      goto LABEL_89;
    }
    v48 = Src[1].wFormatTag;
    if ( !v48 )
      goto LABEL_89;
    if ( wBitsPerSample < v48 )
      goto LABEL_89;
    v49 = (unsigned __int16)nChannels * wBitsPerSample;
    if ( nAvgBytesPerSec != (v49 * nSamplesPerSec) >> 3 || nBlockAlign != v49 / 8 )
      goto LABEL_89;
  }
LABEL_104:
  if ( (unsigned __int16)nChannels > 2u && ((wFormatTag - 1) & 0xFFFD) == 0 )
  {
    v15 = -2147024809;
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      dwOptions = (unsigned __int16)nChannels;
      WPP_SF_DDd(*((_QWORD *)WPP_GLOBAL_Control + 2), 65533LL, nChannels, wFormatTag);
      v16 = WPP_GLOBAL_Control;
    }
    goto LABEL_180;
  }
  v15 = CVADServer::InitializePolicy(this, v97, a7, a5, a8, (unsigned __int16 **)a10);
  if ( v15 < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    goto LABEL_180;
  }
  if ( *((_DWORD *)v87 + 37) )
  {
    v86 = 1;
  }
  else
  {
    v50 = 2;
    if ( (a5 & 0x20000) == 0 )
      v50 = 0;
    v86 = v50;
  }
  v14 = (struct IMMDevice *)*((_QWORD *)v87 + 2);
  p_lpVtbl = (LPVOID *)&v14->lpVtbl;
  ((void (__fastcall *)(struct IMMDevice *))v14->lpVtbl->AddRef)(v14);
  LODWORD(lpData) = 0;
  v51 = (void (__fastcall ***)(_QWORD, GUID *, struct _GUID *))*((_QWORD *)v87 + 2);
  v52 = 0LL;
  *(_QWORD *)&v91.Data1 = 0LL;
  if ( v51 )
  {
    (**v51)(v51, &GUID_419e19f7_d318_4c05_b705_2f17133c55da, &v91);
    v52 = *(_QWORD *)&v91.Data1;
  }
  if ( v52 )
  {
    (*(void (__fastcall **)(__int64, BYTE **))(*(_QWORD *)v52 + 88LL))(v52, &lpData);
    v52 = *(_QWORD *)&v91.Data1;
  }
  LODWORD(pv) = (_DWORD)lpData;
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  v53 = 1;
  memset(pvar, 0, 24);
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v87 + 4) + 40LL))(
         *((_QWORD *)v87 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v53 = 0;
  }
  PropVariantClear(pvar);
  v55 = a5;
  v56 = a11;
  if ( (a5 & 0x400000) != 0 )
  {
    v57 = eKeywordDetectorConnector;
    goto LABEL_140;
  }
  v58 = a5 & 0x20000;
  if ( a11 && v58 )
  {
    v57 = eHostProcessConnector;
    goto LABEL_140;
  }
  if ( v53 && v58 )
  {
    v57 = eLoopbackConnector;
    goto LABEL_140;
  }
  if ( v98 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v59 = 0LL;
    *(_QWORD *)&lpCriticalSection.Data1 = 0LL;
    if ( (_DWORD)pv )
    {
      if ( !IsFormatSupportedByHwAudioEngine(v14, v54, v38, (struct tWAVEFORMATEX **)&lpCriticalSection) )
      {
        CoTaskMemFree(*(LPVOID *)&lpCriticalSection.Data1);
        v57 = eOffloadConnector;
        goto LABEL_140;
      }
      v59 = *(void **)&lpCriticalSection.Data1;
    }
    CoTaskMemFree(v59);
    v55 = a5;
  }
  v57 = ((unsigned __int8)~v55 >> 1) & 1;
LABEL_140:
  v15 = DeriveAudioProcessingModeConfiguration(
          *((_DWORD *)this + 74),
          *((_DWORD *)this + 76),
          *((_DWORD *)this + 96),
          v87,
          v86,
          v98,
          v57,
          0,
          *((_DWORD *)this + 80),
          1,
          &v91,
          &lpCriticalSection,
          (struct _GUID *)this + 25,
          0LL);
  if ( v15 < 0 )
  {
LABEL_145:
    v16 = WPP_GLOBAL_Control;
    goto LABEL_180;
  }
  if ( v98 == AUDCLNT_SHAREMODE_EXCLUSIVE
    && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)this + 27))
     || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)v97 + 144LL))(
           v97,
           *((unsigned int *)a9 + 4),
           1LL)) )
  {
    v15 = -2004287474;
    goto LABEL_145;
  }
  v60 = v38->cbSize;
  v61 = (BYTE *)CoTaskMemAlloc(v60 + 18);
  lpData = v61;
  if ( v61 )
  {
    memcpy_0(v61, v38, v60 + 18);
    v15 = 0;
    v61 = lpData;
  }
  else
  {
    v15 = -2147024882;
  }
  *((_QWORD *)this + 22) = v61;
  if ( v15 < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        30LL,
        &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
        (unsigned int)v15);
      v16 = WPP_GLOBAL_Control;
    }
    goto LABEL_180;
  }
  *((_DWORD *)this + 66) = v98;
  v62 = *((_QWORD *)this + 55);
  *((_QWORD *)this + 55) = v56;
  if ( v56 )
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v56 + 8LL))(v56);
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  *((_DWORD *)this + 46) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
  }
  *(_QWORD *)&lpCriticalSection.Data1 = &g_csVadList;
  lpCriticalSection.Data4[0] = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v63 = g_VADServerList;
  i = qword_180189030;
  if ( !qword_180189030 )
  {
    v65 = (unsigned int)dword_180189038;
    if ( dword_180189038 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_180189038 < 0x18 )
        goto LABEL_224;
      v65 = 24LL * (unsigned int)dword_180189038;
    }
    if ( (unsigned __int64)~v65 >= 8 )
    {
      v66 = malloc(v65 + 8);
      if ( v66 )
      {
        *v66 = qword_180189028;
        qword_180189028 = (__int64)v66;
        v67 = &v66[3 * (unsigned int)(dword_180189038 - 1) + 1];
        v68 = dword_180189038 - 1;
        for ( i = qword_180189030; v68 >= 0; --v68 )
        {
          *v67 = i;
          i = (__int64)v67;
          qword_180189030 = (__int64)v67;
          v67 -= 3;
        }
        goto LABEL_171;
      }
    }
LABEL_224:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_171:
  a10 = i;
  v69 = *(unsigned __int16 **)i;
  *(_QWORD *)(i + 16) = this;
  qword_180189030 = (__int64)v69;
  *(_QWORD *)(i + 8) = 0LL;
  *(_QWORD *)i = v63;
  ++qword_180189020;
  if ( g_VADServerList )
    *(_QWORD *)(g_VADServerList + 8) = i;
  else
    qword_180189018 = i;
  g_VADServerList = i;
  if ( lpCriticalSection.Data4[0] )
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection.Data1);
LABEL_186:
  v70 = v87;
  EnterCriticalSection(&stru_18018A398);
  *(_QWORD *)&lpCriticalSection.Data1 = &stru_18018A398;
  if ( !g_AudioJournal )
  {
    v72 = 2147549183LL;
    v73 = 240LL;
LABEL_212:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v73,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)v72,
      dwOptions);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&lpCriticalSection);
    goto LABEL_213;
  }
  StreamInfo = AudioJournal::FindStreamInfo(v71, v70, (struct AudioJournal::StreamInfo **)&lpData, (int *)&a10);
  if ( StreamInfo < 0 )
  {
    v72 = (unsigned int)StreamInfo;
    v73 = 242LL;
    goto LABEL_212;
  }
  ++*(_DWORD *)&lpData[200 * (int)a10 + 148];
  if ( v15 < 0 )
  {
    ++*(_DWORD *)&lpData[200 * (int)a10 + 152];
    AudioJournal::AddError(
      (AudioJournal *)(200LL * (int)a10),
      v15,
      (struct AudioJournal::ErrorInfo *)&lpData[200 * (int)a10 + 176]);
  }
  v75 = lpData;
  if ( lpData == (BYTE *)&unk_18018A478 )
  {
    v76 = L"Render";
    v77 = 600;
  }
  else if ( lpData == (BYTE *)&unk_18018A6D0 )
  {
    v76 = L"Capture";
    v77 = 400;
  }
  else
  {
    if ( lpData != (BYTE *)&unk_18018A860 )
    {
      v81 = 495LL;
      goto LABEL_211;
    }
    v76 = L"UnknownStream";
    v77 = 200;
  }
  pv = 0LL;
  p_lpVtbl = &pv;
  v90 = 1;
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Audio\\Journal",
          0,
          0LL,
          0,
          2u,
          0LL,
          (PHKEY)&pv,
          0LL);
  v17 = Key;
  if ( Key > 0 )
    v17 = (unsigned __int16)Key | 0x80070000;
  if ( v17 < 0 )
  {
    v79 = 454LL;
LABEL_206:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v79,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v17,
      dwOptionsa);
    wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___(&p_lpVtbl);
    v81 = 498LL;
LABEL_211:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v81,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v17,
      dwOptions);
    v72 = (unsigned int)v17;
    v73 = 251LL;
    goto LABEL_212;
  }
  v80 = RegSetValueExW((HKEY)pv, v76, 0, 3u, v75, v77);
  v17 = v80;
  if ( v80 > 0 )
    v17 = (unsigned __int16)v80 | 0x80070000;
  if ( v17 < 0 )
  {
    v79 = 457LL;
    goto LABEL_206;
  }
  if ( pv )
    RegCloseKey((HKEY)pv);
  LeaveCriticalSection(&stru_18018A398);
LABEL_213:
  if ( v15 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::Initialize", 0x63Du, v15);
  if ( v93 )
    LeaveCriticalSection(v92);
  if ( v14 )
    ((void (__fastcall *)(struct IMMDevice *))v14->lpVtbl->Release)(v14);
  if ( v87 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v87 + 16LL))(v87);
  return (unsigned int)v15;
}
