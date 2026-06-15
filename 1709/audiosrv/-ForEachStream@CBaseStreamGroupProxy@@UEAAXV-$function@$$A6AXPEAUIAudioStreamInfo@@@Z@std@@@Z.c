/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180093460
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18005C74C (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x180092188 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800921FC (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x1800924B0 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180092680 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  Microsoft::WRL::Details::WeakReferenceImpl **v10; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  Microsoft::WRL::Details::WeakReferenceImpl *v17; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v18[72]; // [rsp+28h] [rbp-71h] BYREF
  _BYTE v19[64]; // [rsp+70h] [rbp-29h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v18, a2);
  v5 = *(__int64 **)(a1 + 192);
  v6 = 0LL;
  v7 = (unsigned __int64)(*(_QWORD *)(a1 + 200) - (_QWORD)v5 + 7LL) >> 3;
  if ( (unsigned __int64)v5 > *(_QWORD *)(a1 + 200) )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      std::_Func_class<void,IAudioStreamInfo *>::operator()((__int64)v18, *v5);
      ++v6;
      ++v5;
    }
    while ( v6 != v7 );
  }
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v19, (__int64)v18);
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>((__int64)v18, v8);
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>((__int64)v19, v9);
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v18, a2);
  v10 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 224);
  for ( i = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 216); i != v10; ++i )
  {
    v12 = *i;
    v17 = v12;
    if ( v12 )
      (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v12 + 8LL))(v12);
    lambda_530575f8b419a08780554bb070101504_::operator()((__int64)v18, &v17);
  }
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v19, (__int64)v18);
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>((__int64)v18, v13);
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>((__int64)v19, v14);
  if ( v2 )
    LeaveCriticalSection(v2);
  return std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a2, v15);
}
