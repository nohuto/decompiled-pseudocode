/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140016B44
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140016830 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400065C8 (--0CSubmixImpl@@QEAA@XZ.c)
 *     ?QueryInterface@?$CComObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015710 (-QueryInterface@-$CComObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001D50C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x1400389C0 (-InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CProcessSubmix>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  char **v3; // r15
  const struct _GUID *v4; // r12
  unsigned int v6; // r14d
  __int64 (__fastcall ***v7)(char *, const struct _GUID *, char **); // rax
  volatile int *v8; // rdx
  __int64 (__fastcall ***v9)(char *, const struct _GUID *, char **); // rdi
  char *v10; // rbx
  int v11; // eax
  __int64 (__fastcall *v12)(char *, const struct _GUID *, char **); // rax
  unsigned int Interface; // eax
  _QWORD v14[13]; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall ***v17)(char *, const struct _GUID *, char **); // [rsp+88h] [rbp+20h]

  v14[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (__int64 (__fastcall ***)(char *, const struct _GUID *, char **))operator new(0x160uLL);
    v9 = v7;
    v14[5] = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 74) = 0;
      v10 = (char *)(v7 + 38);
      memset_0(v7 + 38, 0, 0x28uLL);
      v10[40] = 0;
      CSubmixImpl::CSubmixImpl((CSubmixImpl *)(v9 + 2));
      *v9 = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
      v9[1] = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
      v9[2] = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v9 = 0LL;
    }
    v17 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v14;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v17;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 37), v8);
    v11 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 38));
    if ( v11 >= 0 )
    {
      *((_BYTE *)v9 + 344) = 1;
      v11 = 0;
    }
    v6 = 0;
    if ( v11 < 0 )
      v6 = v11;
    CProcessSubmix::InternalFinalConstructRelease((CProcessSubmix *)v9);
    if ( v6
      || ((v12 = **v9, v12 != ATL::CComObject<CProcessSubmix>::QueryInterface)
        ? (Interface = v12((char *)v9, v4, v3))
        : (Interface = ATL::CComObject<CProcessSubmix>::QueryInterface((char *)v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(char *, const struct _GUID *, char **), __int64))(*v9)[11])(
        v9,
        1LL);
    }
  }
  return v6;
}
