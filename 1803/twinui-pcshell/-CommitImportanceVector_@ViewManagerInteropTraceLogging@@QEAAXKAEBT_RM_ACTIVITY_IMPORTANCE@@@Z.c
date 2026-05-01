/*
 * XREFs of ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180087F90
 * Callers:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18004F258 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180052F70 (-SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800531D0 (-SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Sh.c)
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1800535E0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector_(
        ViewManagerInteropTraceLogging *this,
        int a2,
        const union _RM_ACTIVITY_IMPORTANCE *a3)
{
  __int64 v4; // rcx
  unsigned __int16 v5; // dx
  unsigned __int16 *v6; // rax
  REGHANDLE v7; // rcx
  __int16 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v9; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v10; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v11; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v13; // [rsp+3Ah] [rbp-C6h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  int v20; // [rsp+7Ch] [rbp-84h]
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  const union _RM_ACTIVITY_IMPORTANCE *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  char *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int16 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int16 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int16 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int16 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int16 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int16 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  char *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+148h] [rbp+48h] BYREF

  v41 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    Context = qword_180438940;
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *(_WORD *)a3;
    v21 = &v41;
    v25 = (char *)a3 + 3;
    v22 = 4LL;
    v8 = (v5 >> 1) & 7;
    v27 = &v8;
    v23 = a3;
    v9 = (v5 >> 4) & 3;
    v29 = &v9;
    v24 = 4LL;
    v10 = (v5 >> 6) & 1;
    v31 = &v10;
    v26 = 1LL;
    v11 = (v5 >> 7) & 1;
    v33 = &v11;
    v12 = v5 & 1;
    v28 = 2LL;
    v35 = &v12;
    v37 = &v13;
    v39 = (char *)a3 + 2;
    v30 = 2LL;
    v32 = 2LL;
    v34 = 2LL;
    v36 = 2LL;
    v13 = HIBYTE(v5) & 1;
    v38 = 2LL;
    v40 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v6 = *(unsigned __int16 **)(v4 + 8);
    v7 = *(_QWORD *)(v4 + 32);
    UserData.Ptr = (ULONGLONG)v6;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039747E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *v6;
    v18 = &unk_180397489;
    UserData.Reserved = 2;
    v19 = 175;
    v20 = 1;
    EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
}
