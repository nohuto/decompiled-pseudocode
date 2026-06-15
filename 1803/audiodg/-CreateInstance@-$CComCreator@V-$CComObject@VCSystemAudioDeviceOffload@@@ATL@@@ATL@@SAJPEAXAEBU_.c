/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003B340
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003B1F0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@A.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001D50C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x14003AC40 (--0-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ @ 0x14003C21C (-InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceOffload>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  CSystemAudioDeviceOffload *v7; // rax
  volatile int *v8; // rdx
  CSystemAudioDeviceOffload *v9; // rdi
  int v10; // eax
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF
  CSystemAudioDeviceOffload *v14; // [rsp+78h] [rbp+20h]

  v11[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CSystemAudioDeviceOffload *)operator new(0x1C0uLL);
    v11[5] = v7;
    if ( v7 )
      v9 = ATL::CComObject<CSystemAudioDeviceOffload>::CComObject<CSystemAudioDeviceOffload>(v7);
    else
      v9 = 0LL;
    v14 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v11;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v14;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CSystemAudioDeviceOffload *)((char *)v9 + 320), v8);
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v9 + 328));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 368) = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    CSystemAudioDeviceOffload::InternalFinalConstructRelease(v9);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(CSystemAudioDeviceOffload *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(CSystemAudioDeviceOffload *, __int64))(*(_QWORD *)v9 + 184LL))(v9, 1LL);
  }
  return v6;
}
