/*
 * XREFs of ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800C4934
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800BFD4C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??4?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamInfo@@@Z @ 0x180007950 (--4-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamI.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18002EFF0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C4500 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
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
  int v13; // r11d
  int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r10
  const WCHAR *v17; // rax
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  int v25; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v30; // [rsp+98h] [rbp-70h]
  int v31; // [rsp+A0h] [rbp-68h]
  int v32; // [rsp+A4h] [rbp-64h]
  char *v33; // [rsp+A8h] [rbp-60h]
  int v34; // [rsp+B0h] [rbp-58h]
  int v35; // [rsp+B4h] [rbp-54h]
  char *v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C4h] [rbp-44h]
  int *v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+D0h] [rbp-38h]
  int v41; // [rsp+D4h] [rbp-34h]
  int *v42; // [rsp+D8h] [rbp-30h]
  int v43; // [rsp+E0h] [rbp-28h]
  int v44; // [rsp+E4h] [rbp-24h]
  __int64 v45; // [rsp+E8h] [rbp-20h]
  int v46; // [rsp+F0h] [rbp-18h]
  int v47; // [rsp+F4h] [rbp-14h]
  __int64 v48; // [rsp+F8h] [rbp-10h]
  int v49; // [rsp+100h] [rbp-8h]
  int v50; // [rsp+104h] [rbp-4h]
  __int64 *v51; // [rsp+108h] [rbp+0h]
  int v52; // [rsp+110h] [rbp+8h]
  int v53; // [rsp+114h] [rbp+Ch]
  int *v54; // [rsp+118h] [rbp+10h]
  int v55; // [rsp+120h] [rbp+18h]
  int v56; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+128h] [rbp+20h] BYREF
  _QWORD *v58; // [rsp+138h] [rbp+30h]
  int v59; // [rsp+140h] [rbp+38h]
  int v60; // [rsp+144h] [rbp+3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v27[1] = -2LL;
  SarmTraceLoggingTracer("Sarm::CStreamResource::Initialize", 32);
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL);
    __debugbreak();
  }
  if ( !a7 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0108LL);
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v22);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *((_QWORD *)this + 4) = a5;
    *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 360LL))(v22);
    *((_QWORD *)this + 5) = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
    *((_DWORD *)this + 12) = a3;
    *((struct _GUID *)this + 1) = *a4;
    *((_BYTE *)this + 88) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 120LL))(v22) == 1;
    *((_DWORD *)this + 14) = *((_DWORD *)a6 + 1);
    *((_DWORD *)this + 15) = *(_DWORD *)a6;
    *((_DWORD *)this + 17) = *((_DWORD *)a6 + 3);
    *((_QWORD *)this + 1) = a7;
    ++*((_DWORD *)a7 + 3);
    if ( (unsigned int)dword_18014A370 > 4 )
    {
      TlgCreateSz(&pDesc, "Sarm::CStreamResource::Initialize");
      v23 = 68;
      v30 = &v23;
      v31 = v13;
      v32 = 0;
      v33 = (char *)this + 40;
      v14 = v13 + 4;
      v34 = v13 + 4;
      v35 = 0;
      v36 = (char *)this + 16;
      v37 = 16;
      v38 = 0;
      v24 = *((_DWORD *)this + 12);
      v39 = &v24;
      v40 = v13;
      v41 = 0;
      v25 = *((_DWORD *)this + 14);
      v42 = &v25;
      v43 = v13;
      v44 = 0;
      v45 = v15;
      v46 = v13;
      v47 = 0;
      v48 = v16;
      v49 = v13;
      v50 = 0;
      LOBYTE(v21) = *((_BYTE *)this + 88);
      v51 = &v21;
      v52 = 1;
      v53 = 0;
      v26 = *((_DWORD *)this + 13);
      v54 = &v26;
      v55 = v13;
      v56 = 0;
      v17 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
      TlgCreateWsz(&v57, v17);
      v27[0] = *((_QWORD *)this + 1);
      v58 = v27;
      v59 = v14;
      v60 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_1801113A0, v18, v19, 0xEu, &pData);
    }
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v11);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
  return v12;
}
