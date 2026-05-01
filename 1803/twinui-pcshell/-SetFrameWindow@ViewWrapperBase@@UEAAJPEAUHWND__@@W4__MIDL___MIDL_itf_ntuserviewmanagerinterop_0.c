/*
 * XREFs of ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180053930
 * Callers:
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800476B0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180090D0C (--$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAU.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetFrameWindow(__int64 a1, HWND a2, char a3)
{
  RTL_SRWLOCK *v3; // rax
  RTL_SRWLOCK *v7; // r14
  __int16 v8; // ax
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v11; // esi
  _BYTE *v12; // r9
  void (__fastcall *v13)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int); // rax
  void (__fastcall **v14)(_QWORD, GUID *, __int64 *); // rax
  const wchar_t *v15; // rax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // r10
  unsigned __int16 v21; // cx
  REGHANDLE v22; // rcx
  ViewWrapperBase *v23; // rbx
  RTL_SRWLOCK *v24; // rdi
  HWND (__fastcall *v25)(ViewWrapperBase *); // rax
  __int64 v26; // rax
  PVOID Ptr; // rsi
  PVOID v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  char *v33; // r14
  HWND (__fastcall *v34)(ViewWrapperBase *); // rax
  PVOID v35; // rax
  __int64 v36; // rcx
  HWND (__fastcall *v37)(ViewWrapperBase *); // rax
  PVOID v38; // rax
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // rcx
  int v40; // eax
  PVOID v41; // rcx
  _DWORD *v43; // rcx
  DWORD WindowThreadProcessId; // eax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v47; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v48; // [rsp+3Ah] [rbp-C6h] BYREF
  __int16 v49; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v50; // [rsp+3Eh] [rbp-C2h] BYREF
  __int16 v51; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v52; // [rsp+42h] [rbp-BEh] BYREF
  DWORD dwProcessId; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v55; // [rsp+50h] [rbp-B0h] BYREF
  DWORD v56; // [rsp+54h] [rbp-ACh] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-A8h] BYREF
  WINBOOL v58; // [rsp+5Ch] [rbp-A4h] BYREF
  WINBOOL v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v61; // [rsp+70h] [rbp-90h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-88h] BYREF
  LPVOID v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v65; // [rsp+90h] [rbp-70h] BYREF
  HWND v66; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v68; // [rsp+B0h] [rbp-50h] BYREF
  const wchar_t *v69; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v71; // [rsp+D0h] [rbp-30h]
  int v72; // [rsp+D8h] [rbp-28h]
  int v73; // [rsp+DCh] [rbp-24h]
  int *v74; // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  __int64 v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  __int16 *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  __int16 *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  __int16 *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  __int16 *v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  __int16 *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  __int16 *v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  __int64 v92; // [rsp+170h] [rbp+70h]
  __int64 v93; // [rsp+178h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v3 = *(RTL_SRWLOCK **)(a1 + 120);
  v66 = a2;
  v7 = v3 + 37;
  AcquireSRWLockExclusive(v3 + 37);
  if ( *(HWND *)(a1 + 224) != a2 )
  {
    v61 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &v55, &v61) && v55 )
    {
      v61 = &qword_180438968;
      qword_180438968 = &IamTraceLogging::`vftable';
      atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
      InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
    }
    v43 = (_DWORD *)*((_QWORD *)v61 + 1);
    if ( v43 && *v43 )
    {
      dwProcessId = 0;
      if ( a2 )
        WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
      else
        WindowThreadProcessId = 0;
      v56 = WindowThreadProcessId;
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
        a1 + 100,
        &v66,
        &v56,
        &dwProcessId);
    }
  }
  *(_QWORD *)(a1 + 224) = a2;
  if ( (a3 & 1) != 0 || !a2 )
    v8 = 0;
  else
    v8 = 128;
  v9 = a1 - 48;
  *(_WORD *)(a1 + 300) &= ~0x80u;
  *(_WORD *)(a1 + 300) |= v8;
  v10 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 - 48 + 192);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v9 + 348);
    v12 = *(_BYTE **)(*(_QWORD *)(v9 + 168) + 520LL);
    v13 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int))(*(_QWORD *)v12 + 72LL);
    if ( v13 == ViewManagerBridge::SetImportanceVectorForView )
    {
      if ( !v12[145] )
      {
        v14 = *v10;
        v54 = 0LL;
        (*v14)(v10, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v54);
        v15 = L"ResourceImportanceVector";
        v16 = 0;
        v69 = L"ResourceImportanceVector";
        do
        {
          ++v15;
          ++v16;
        }
        while ( *v15 );
        v68 = v16 | 0x80000000;
        v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v54 + 688LL))(v54, &v68, v11);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFF,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v17,
            UserDataCount);
        v18 = v54;
        if ( v54 )
        {
          v54 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    else
    {
      v13(*(ViewManagerBridge **)(*(_QWORD *)(v9 + 168) + 520LL), *(struct IUnknown **)(a1 - 48 + 192), v11);
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_180438968;
      qword_180438968 = &IamTraceLogging::`vftable';
      atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
      InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
    }
    v19 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v19 && *v19 )
    {
      v65 = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &v58, &v65) && v58 )
      {
        v65 = &qword_180438968;
        qword_180438968 = &IamTraceLogging::`vftable';
        atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
      }
      v60 = *(_DWORD *)(v9 + 148);
      v63 = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v59, &v63) && v59 )
      {
        v63 = qword_180438940;
        qword_180438940[0] = &LockScreenServiceLogging::`vftable';
        qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
        InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
      }
      v20 = *((_QWORD *)v63 + 1);
      if ( *(_DWORD *)v20 > 5u )
      {
        v21 = *(_WORD *)(v9 + 348);
        v74 = &v60;
        v78 = v9 + 351;
        v75 = 4LL;
        v47 = (v21 >> 1) & 7;
        v80 = &v47;
        v76 = v9 + 348;
        v48 = (v21 >> 4) & 3;
        v82 = &v48;
        v77 = 4LL;
        v49 = (v21 >> 6) & 1;
        v84 = &v49;
        v79 = 1LL;
        v50 = (v21 >> 7) & 1;
        v86 = &v50;
        v51 = v21 & 1;
        v81 = 2LL;
        v88 = &v51;
        v90 = &v52;
        v92 = v9 + 350;
        v83 = 2LL;
        v85 = 2LL;
        v87 = 2LL;
        v89 = 2LL;
        v52 = HIBYTE(v21) & 1;
        v91 = 2LL;
        v93 = 1LL;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = *(_QWORD *)(v20 + 8);
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039747E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v22 = *(_QWORD *)(v20 + 32);
        EventDescriptor.Keyword = 0LL;
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        v71 = &unk_180397489;
        UserData.Reserved = 2;
        v72 = 175;
        v73 = 1;
        EventWriteTransfer(v22, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
      }
    }
  }
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  if ( a1 == 48 )
    v23 = 0LL;
  else
    v23 = (ViewWrapperBase *)(a1 - 40);
  v24 = *(RTL_SRWLOCK **)(a1 + 120);
  AcquireSRWLockExclusive(v24 + 37);
  v25 = *(HWND (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v23 + 656LL);
  if ( v25 == ViewWrapperBase::GetFrameWindow )
    v26 = *((_QWORD *)v23 + 33);
  else
    v26 = (__int64)v25(v23);
  Ptr = v24[39].Ptr;
  if ( Ptr == (PVOID)v26 )
  {
    v28 = v24[39].Ptr;
    v46 = 0LL;
    if ( (unsigned int)IsShellManagedWindow(v28) )
    {
      v29 = v46;
      v30 = 0LL;
      if ( !v24[47].Ptr )
      {
LABEL_47:
        v41 = v24[40].Ptr;
        if ( v41 != (PVOID)v29 )
        {
          if ( v41 )
          {
            (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)v41 + 752LL))(v41, 0LL);
            v29 = v46;
          }
          if ( v29 )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 752LL))(v29, 1LL);
            v29 = v46;
          }
        }
        if ( v24[40].Ptr != (PVOID)v29 )
        {
          v64 = v29;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v64);
          v64 = (__int64)v24[40].Ptr;
          v24[40].Ptr = (PVOID)v29;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v64);
          v29 = v46;
        }
        v24[39].Ptr = Ptr;
        if ( v29 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        goto LABEL_52;
      }
      while ( 1 )
      {
        v31 = v24[46].Ptr;
        v32 = (_QWORD *)v31[v30];
        v33 = (char *)&v31[v30];
        v34 = *(HWND (__fastcall **)(ViewWrapperBase *))(*v32 + 648LL);
        v35 = (PVOID)(v34 == ViewWrapperBase::GetWindow
                    ? v32[32]
                    : ((__int64 (__fastcall *)(_QWORD *, HWND (__fastcall *)(ViewWrapperBase *)))v34)(
                        v32,
                        ViewWrapperBase::GetWindow));
        if ( v35 == Ptr )
          break;
        v36 = *(_QWORD *)v33;
        v37 = *(HWND (__fastcall **)(ViewWrapperBase *))(**(_QWORD **)v33 + 656LL);
        v38 = v37 == ViewWrapperBase::GetFrameWindow
            ? *(PVOID *)(v36 + 264)
            : (PVOID)((__int64 (__fastcall *)(__int64, HWND (__fastcall *)(ViewWrapperBase *)))v37)(
                       v36,
                       ViewWrapperBase::GetWindow);
        if ( v38 == Ptr )
          break;
        if ( (PVOID)++v30 >= v24[47].Ptr )
          goto LABEL_46;
      }
      v39 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v24[46].Ptr + v30);
      v40 = (**v39)(v39, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v46);
      if ( v40 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9C1,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v40,
          UserDataCount);
    }
LABEL_46:
    v29 = v46;
    goto LABEL_47;
  }
LABEL_52:
  if ( v24 != (RTL_SRWLOCK *)-296LL )
    ReleaseSRWLockExclusive(v24 + 37);
  return 0LL;
}
