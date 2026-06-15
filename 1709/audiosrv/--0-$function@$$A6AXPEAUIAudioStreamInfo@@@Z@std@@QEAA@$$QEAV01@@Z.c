/*
 * XREFs of ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x180092188
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180093460 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800935C0 (-ForEachStream@CProcessSubmixProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18005C74C (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
  return a1;
}
