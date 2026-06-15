/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180097844
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180045E20 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x180046410 (-PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800C68EC (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800CA0C0 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800CA240 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800CA450 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x18002A7C4 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18002A9C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180097980 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800979F4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x180097A24 (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v6; // ebx
  _QWORD *v7; // rax
  void *v8; // rdi
  __int64 v9; // rax
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int LastError; // eax
  _BYTE v13[96]; // [rsp+28h] [rbp-60h] BYREF

  v6 = 0;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v6 = CSerialWorkQueue::Initialize((PTP_POOL *)a1);
    if ( v6 >= 0 )
    {
      v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v7;
      if ( v7 )
      {
        *v7 = 0LL;
        v7[1] = 0LL;
        v7[2] = 0LL;
      }
      else
      {
        v8 = 0LL;
      }
      v6 = v8 == 0LL ? 0x8007000E : 0;
      if ( v8 )
      {
        v9 = std::function<void (void)>::function<void (void)>(v13, a2);
        v6 = _WorkTask::Initialize(v8, v9, a1);
      }
      if ( v6 >= 0 )
      {
        ThreadpoolWork = CreateThreadpoolWork(
                           (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                           v8,
                           (PTP_CALLBACK_ENVIRON)(a1 + 8));
        if ( ThreadpoolWork )
        {
          v6 = 0;
        }
        else
        {
          LastError = GetLastError();
          v6 = LastError;
          if ( LastError > 0 )
            v6 = (unsigned __int16)LastError | 0x80070000;
        }
        if ( v6 >= 0 )
        {
          SubmitThreadpoolWork(ThreadpoolWork);
          v8 = 0LL;
        }
      }
      if ( v8 )
        _WorkTask::`scalar deleting destructor'((_WorkTask *)v8, a2);
    }
  }
  std::_Func_class<void,>::_Tidy(a2, a2, a3, a4);
  return (unsigned int)v6;
}
