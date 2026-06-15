/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140019130
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140019120 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x140012180 (--0CSubmixImpl@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015FB0 (-QueryInterface@-$CComObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CProcessSubmix>>::CreateInstance(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rdi
  char *v8; // rbx
  int v9; // eax
  __int64 (__fastcall *v10)(volatile signed __int32 *, _DWORD *, _QWORD *); // rax
  unsigned int Interface; // eax
  volatile signed __int32 *v15; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  try
  {
    v6 = (volatile signed __int32 *)operator new(0x160uLL);
    v7 = v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 74) = 0;
      v8 = (char *)(v6 + 76);
      memset((void *)(v6 + 76), 0, 0x28uLL);
      v8[40] = 0;
      CSubmixImpl::CSubmixImpl((CSubmixImpl *)(v7 + 4));
      *(_QWORD *)v7 = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
      *((_QWORD *)v7 + 1) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
      *((_QWORD *)v7 + 2) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v15 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v15;
  }
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 74);
    v9 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v7 + 76));
    if ( v9 >= 0 )
    {
      *((_BYTE *)v7 + 344) = 1;
      v9 = 0;
    }
    v5 = 0;
    if ( v9 < 0 )
      v5 = v9;
    _InterlockedDecrement(v7 + 74);
    if ( v5
      || ((v10 = **(__int64 (__fastcall ***)(volatile signed __int32 *, _DWORD *, _QWORD *))v7,
           v10 != ATL::CComObject<CProcessSubmix>::QueryInterface)
        ? (Interface = v10(v7, v4, v3))
        : (Interface = ATL::CComObject<CProcessSubmix>::QueryInterface(v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 88LL))(v7, 1LL);
    }
  }
  return v5;
}
