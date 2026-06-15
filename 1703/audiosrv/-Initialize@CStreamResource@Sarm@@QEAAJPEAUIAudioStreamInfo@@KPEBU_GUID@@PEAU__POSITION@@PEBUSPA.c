/*
 * XREFs of ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800C5C5C
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800C248C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamInfo@@@Z @ 0x18007C92C (--4-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamI.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5730 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800C71DC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Sarm::CStreamResource::Initialize(
        Sarm::CStreamResource *this,
        struct IAudioStreamInfo *a2,
        int a3,
        const struct _GUID *a4,
        struct __POSITION *a5,
        const struct SPATIAL_STREAM_PROPERTIES *a6,
        struct Sarm::CEndpointResourcePool *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r11
  __int64 v15; // r9
  __int64 v16; // r10
  const WCHAR *v17; // rax
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  char *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  __int64 v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  char *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v28[1] = -2LL;
  SarmTraceLoggingTracer("Sarm::CStreamResource::Initialize", 0x21u);
  v23 = 0LL;
  v22 = 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL);
    __debugbreak();
  }
  if ( !a7 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0108LL);
    __debugbreak();
  }
  v23 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 41LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_13;
  }
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v22);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 42LL;
    goto LABEL_9;
  }
  *((_QWORD *)this + 4) = a5;
  *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 352LL))(v22);
  *((_QWORD *)this + 5) = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
  *((_DWORD *)this + 12) = a3;
  *((struct _GUID *)this + 1) = *a4;
  *((_BYTE *)this + 88) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 120LL))(v22) == 1;
  *((_DWORD *)this + 14) = *((_DWORD *)a6 + 1);
  *((_DWORD *)this + 15) = *(_DWORD *)a6;
  *((_DWORD *)this + 17) = *((_DWORD *)a6 + 3);
  *((_QWORD *)this + 1) = a7;
  ++*((_DWORD *)a7 + 3);
  if ( (unsigned int)dword_18012A220 > 4 )
  {
    TlgCreateSz(&pDesc, "Sarm::CStreamResource::Initialize");
    v24 = 72;
    v31 = &v24;
    v32 = v14;
    v33 = (char *)this + 40;
    v34 = 8LL;
    v35 = (char *)this + 16;
    v36 = 16LL;
    v25 = *((_DWORD *)this + 12);
    v37 = &v25;
    v38 = v14;
    v26 = *((_DWORD *)this + 14);
    v39 = &v26;
    v40 = v14;
    v41 = v15;
    v42 = v14;
    v43 = v16;
    v44 = v14;
    v21 = *((_BYTE *)this + 88);
    v45 = &v21;
    v46 = 1LL;
    v27 = *((_DWORD *)this + 13);
    v47 = &v27;
    v48 = v14;
    v17 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
    TlgCreateWsz(&v49, v17);
    v28[0] = *((_QWORD *)this + 1);
    v50 = v28;
    v51 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FACD0, v18, v19, 0xEu, &pData);
  }
  v12 = 0;
LABEL_13:
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v23);
  return v12;
}
