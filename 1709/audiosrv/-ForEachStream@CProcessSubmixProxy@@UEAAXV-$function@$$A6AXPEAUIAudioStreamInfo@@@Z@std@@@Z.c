/*
 * XREFs of ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800935C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18005C74C (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x180092188 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800921FC (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180092680 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _BYTE v13[64]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v14[64]; // [rsp+60h] [rbp-78h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v13, a2);
  v5 = *(_QWORD *)(a1 + 176);
  v6 = *(__int64 **)(a1 + 168);
  v7 = 0LL;
  v8 = (v5 - (unsigned __int64)v6 + 7) >> 3;
  if ( (unsigned __int64)v6 > v5 )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      std::_Func_class<void,IAudioStreamInfo *>::operator()((__int64)v13, *v6);
      ++v7;
      ++v6;
    }
    while ( v7 != v8 );
  }
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v14, (__int64)v13);
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>((__int64)v13, v9);
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>((__int64)v14, v10);
  if ( v2 )
    LeaveCriticalSection(v2);
  return std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a2, v11);
}
