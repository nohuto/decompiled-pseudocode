/*
 * XREFs of ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x18021D9CC
 * Callers:
 *     ?Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@@Z @ 0x18021D52C (-Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800BC600 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180156CCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180158FE8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801B3050 (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     ?EnsureDDisplayResources@CDisplay@@QEBAJXZ @ 0x1801C7F50 (-EnsureDDisplayResources@CDisplay@@QEBAJXZ.c)
 *     CalculateDisplayBlankTime @ 0x18021D30C (CalculateDisplayBlankTime.c)
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x18021E9E4 (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::Initialize(
        CComputeScribbleRenderer::CScheduler *this,
        const struct CDisplay *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned int v6; // edi
  int LastError; // ebx
  __int64 v8; // rdx
  wil::details *Event; // rbx
  const char *v11; // r9
  wil::details *v12; // rbx
  const char *v13; // r9
  __int64 v14; // r14
  struct ID3D12CommandQueue *v15; // rcx
  int v16; // r14d
  __int64 *v17; // rbx
  __int64 v18; // rcx
  HANDLE Thread; // rax
  const char *v20; // r9
  char *v21; // rbx
  __int64 v22; // rdx
  HRESULT v23; // eax
  int v24; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hThread; // [rsp+38h] [rbp-28h] BYREF
  __int64 **v26; // [rsp+40h] [rbp-20h]
  struct CComputeScribbleStopwatch *v27; // [rsp+48h] [rbp-18h] BYREF
  char v28; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v4 = *((_QWORD *)a2 + 11);
  v5 = _mm_srli_si128(*(__m128i *)((char *)a2 + 88), 8).m128i_u64[0];
  *((_DWORD *)this + 8) = v5 - v4;
  *((_DWORD *)this + 9) = HIDWORD(v5) - HIDWORD(v4);
  *((float *)this + 10) = (float)*((int *)a2 + 73) / (float)*((int *)a2 + 72);
  v6 = 0;
  LastError = CDisplay::EnsureDDisplayResources(a2);
  if ( LastError < 0 )
  {
    v8 = 92LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 2, *((_QWORD *)a2 + 7));
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 3, *((_QWORD *)a2 + 6));
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 7,
      Event);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1621,
                  (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v11);
  }
  if ( LastError < 0 )
  {
    v8 = 97LL;
    goto LABEL_3;
  }
  v12 = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( v12 )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 8,
      v12);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1621,
                  (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v13);
  }
  if ( LastError < 0 )
  {
    v8 = 98LL;
    goto LABEL_3;
  }
  v14 = *((_QWORD *)a2 + 31);
  LastError = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3), &v24);
  if ( LastError < 0 )
  {
    v8 = 102LL;
    goto LABEL_3;
  }
  LastError = CalculateDisplayBlankTime(
                (unsigned int)v14 | (unsigned __int64)((__int64)SHIDWORD(v14) << 32),
                v24,
                (float *)this + 11);
  if ( LastError < 0 )
  {
    v8 = 103LL;
    goto LABEL_3;
  }
  v15 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 1);
  v26 = (__int64 **)((char *)this + 72);
  v27 = 0LL;
  v28 = 1;
  v16 = CComputeScribbleStopwatch::Create(v15, &v27);
  if ( v28 )
  {
    v17 = *v26;
    *v26 = (__int64 *)v27;
    if ( v17 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v17 + 5);
      v18 = v17[4];
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v17);
      operator delete(v17);
    }
  }
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)v16);
    return (unsigned int)v16;
  }
  hThread = 0LL;
  *(float *)this = (float)(int)CCommonRegistryData::m_dwSuperWetExtensionTimeMicroseconds / 1000000.0;
  Thread = CreateThread(
             0LL,
             0LL,
             (LPTHREAD_START_ROUTINE)lambda_ad5752422a00f3d87d96ef70e6320478_::_lambda_invoker_cdecl_,
             this,
             4u,
             0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hThread,
    Thread);
  v21 = (char *)hThread;
  if ( hThread )
  {
    v23 = SetThreadDescription(hThread, L"D3D12 Compute Scribble");
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7C,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v23);
    if ( SetThreadPriority(v21, 2) && ResumeThread(v21) != -1 )
    {
      if ( (HANDLE *)((char *)this + 48) != &hThread )
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)this + 6,
          v21);
        v21 = 0LL;
      }
      goto LABEL_35;
    }
    v22 = 133LL;
  }
  else
  {
    v22 = 120LL;
  }
  v6 = wil::details::in1diag3::Return_GetLastError(
         retaddr,
         (void *)v22,
         (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
         v20);
LABEL_35:
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v21);
  return v6;
}
