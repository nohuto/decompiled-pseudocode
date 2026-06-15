/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001B080
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001B070 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V-$C.c)
 * Callees:
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14000D660 (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400100D0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>::CreateInstance(
        __int64 a1,
        _DWORD *a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 **v3; // r14
  _DWORD *v4; // r15
  unsigned int v5; // esi
  CAudioDeviceGraph *v6; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // eax
  __int64 (__fastcall *v9)(volatile signed __int32 *, _DWORD *, volatile signed __int32 **); // rax
  unsigned int Interface; // eax
  volatile signed __int32 *v14; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  try
  {
    v6 = (CAudioDeviceGraph *)operator new(0x180uLL);
    v7 = (volatile signed __int32 *)v6;
    if ( v6 )
    {
      CAudioDeviceGraph::CAudioDeviceGraph(v6);
      *(_QWORD *)v7 = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
      *((_QWORD *)v7 + 1) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
      *((_QWORD *)v7 + 2) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v14 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v14;
  }
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 6);
    v8 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v7 + 8));
    if ( v8 >= 0 )
    {
      *((_BYTE *)v7 + 72) = 1;
      v8 = 0;
    }
    v5 = 0;
    if ( v8 < 0 )
      v5 = v8;
    _InterlockedDecrement(v7 + 6);
    if ( v5
      || ((v9 = **(__int64 (__fastcall ***)(volatile signed __int32 *, _DWORD *, volatile signed __int32 **))v7,
           v9 != ATL::CComObject<CAudioDeviceGraph>::QueryInterface)
        ? (Interface = v9(v7, v4, v3))
        : (Interface = ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 184LL))(v7, 1LL);
    }
  }
  return v5;
}
