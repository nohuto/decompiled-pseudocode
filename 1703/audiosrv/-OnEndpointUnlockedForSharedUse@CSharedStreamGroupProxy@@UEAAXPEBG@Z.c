/*
 * XREFs of ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800A69F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002B320 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180045030 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 *     ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180045090 (--0ARM_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18007B26C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800A47C0 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 */

void __fastcall CSharedStreamGroupProxy::OnEndpointUnlockedForSharedUse(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *a2)
{
  char v2; // di
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  ARM_EVENT *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-29h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-21h] BYREF
  __int64 *v12; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v13[8]; // [rsp+40h] [rbp-9h] BYREF

  LODWORD(v10) = 0;
  v2 = 0;
  v3 = *((_QWORD *)this + 7);
  if ( v3 && !*(_DWORD *)(v3 + 8) && !*((_QWORD *)this + 49) )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v11, (__int64)this - 8);
    v10 = 0LL;
    v12 = &v10;
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v12);
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v11, v4) >= 0 )
    {
      v6 = operator new(0x48uLL);
      if ( v6 )
      {
        v7 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v13[1] = v7;
        v13[0] = off_1800DE290;
        v13[7] = v13;
        v8 = (ARM_EVENT *)ARM_EVENT::ARM_EVENT(v6);
        v2 = 1;
      }
      else
      {
        v8 = 0LL;
      }
      if ( (v2 & 1) != 0 )
        std::_Func_class<void,>::_Tidy((__int64)v13, v5);
      if ( v8 )
      {
        if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v8, 0LL) )
          v8 = 0LL;
        if ( v8 )
          ARM_EVENT::`scalar deleting destructor'(v8, 1);
      }
    }
    v9 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
  }
}
