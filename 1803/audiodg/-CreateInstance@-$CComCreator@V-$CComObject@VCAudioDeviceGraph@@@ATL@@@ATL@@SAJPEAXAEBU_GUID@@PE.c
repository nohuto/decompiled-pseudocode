/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140016860
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140016850 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V-$C.c)
 * Callees:
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14000F498 (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140012FF0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001D50C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x140031BB4 (-InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  void **v3; // r14
  const struct _GUID *v4; // r15
  unsigned int v6; // esi
  CAudioDeviceGraph *v7; // rax
  volatile int *v8; // rdx
  __int64 (__fastcall ***v9)(void *, const struct _GUID *, void **); // rbx
  int v10; // eax
  __int64 (__fastcall *v11)(void *, const struct _GUID *, void **); // rax
  unsigned int Interface; // eax
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF
  __int64 (__fastcall ***v16)(void *, const struct _GUID *, void **); // [rsp+78h] [rbp+20h]

  v13[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (CAudioDeviceGraph *)operator new(0x1A8uLL);
    v9 = (__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v7;
    v13[5] = v7;
    if ( v7 )
    {
      CAudioDeviceGraph::CAudioDeviceGraph(v7);
      *v9 = (__int64 (__fastcall **)(void *, const struct _GUID *, void **))&ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
      v9[1] = (__int64 (__fastcall **)(void *, const struct _GUID *, void **))&ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
      v9[2] = (__int64 (__fastcall **)(void *, const struct _GUID *, void **))&ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v9 = 0LL;
    }
    v16 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v13;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v16;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 3), v8);
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 4));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 72) = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    CAudioDeviceGraph::InternalFinalConstructRelease((CAudioDeviceGraph *)v9);
    if ( v6
      || ((v11 = **v9, v11 != ATL::CComObject<CAudioDeviceGraph>::QueryInterface)
        ? (Interface = v11(v9, v4, v3))
        : (Interface = ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(void *, const struct _GUID *, void **), __int64))(*v9)[23])(
        v9,
        1LL);
    }
  }
  return v6;
}
