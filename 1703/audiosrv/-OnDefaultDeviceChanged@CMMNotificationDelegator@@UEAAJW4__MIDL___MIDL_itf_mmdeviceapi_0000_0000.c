/*
 * XREFs of ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800A6730
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180045030 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 *     ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180045090 (--0ARM_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007B1A4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

__int64 __fastcall CMMNotificationDelegator::OnDefaultDeviceChanged(
        CMMNotificationDelegator *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  char v4; // si
  __int64 *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  ARM_EVENT *v9; // rdi
  __int64 v11[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v12[8]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v11[0] = 0LL;
  if ( a2 == *((_DWORD *)this + 11) && *((_DWORD *)this + 10) == a3 )
  {
    v5 = (__int64 *)((char *)this + 32);
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)this + 4, v11) >= 0 )
    {
      if ( v11[0] )
      {
        v6 = *v5;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v8 = operator new(0x48uLL);
        if ( v8 )
        {
          if ( v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          v12[1] = v6;
          v12[0] = off_1800DE2C0;
          v12[7] = v12;
          v9 = (ARM_EVENT *)ARM_EVENT::ARM_EVENT(v8);
          v4 = 1;
        }
        else
        {
          v9 = 0LL;
        }
        if ( (v4 & 1) != 0 )
          std::_Func_class<void,>::_Tidy((__int64)v12, v7);
        if ( v9 )
        {
          if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v9, 0LL) )
            v9 = 0LL;
          if ( v9 )
            ARM_EVENT::`scalar deleting destructor'(v9, 1);
        }
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v11);
  return 0LL;
}
