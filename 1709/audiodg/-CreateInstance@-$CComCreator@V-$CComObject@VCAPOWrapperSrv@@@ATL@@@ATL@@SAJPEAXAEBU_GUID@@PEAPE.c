/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012420
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012410 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140012760 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  int v5; // esi
  char *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64, _QWORD *); // rbx
  __int64 (__fastcall *v8)(_QWORD, __int64, _QWORD *); // rax
  int Interface; // eax
  __int64 (__fastcall ***v13)(_QWORD, __int64, _QWORD *); // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  try
  {
    v6 = (char *)operator new(0x70uLL);
    v7 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 8) = 0;
      memset(v6 + 40, 0, 0x28uLL);
      *((_BYTE *)v7 + 80) = 0;
      v7[11] = 0LL;
      v7[12] = 0LL;
      v7[13] = 0LL;
      *v7 = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
      v7[1] = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
      v7[2] = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
      v7[3] = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v13 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v13;
  }
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v7 + 8);
    v5 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 5));
    if ( v5 >= 0 )
    {
      *((_BYTE *)v7 + 80) = 1;
      v5 = 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)v7 + 8);
    if ( v5
      || ((v8 = **v7, (char *)v8 != (char *)ATL::CComObject<CAPOWrapperSrv>::QueryInterface)
        ? (Interface = v8(v7, v4, v3))
        : (Interface = ATL::CComObject<CAPOWrapperSrv>::QueryInterface(v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *), __int64))(*v7)[7])(v7, 1LL);
    }
  }
  return (unsigned int)v5;
}
