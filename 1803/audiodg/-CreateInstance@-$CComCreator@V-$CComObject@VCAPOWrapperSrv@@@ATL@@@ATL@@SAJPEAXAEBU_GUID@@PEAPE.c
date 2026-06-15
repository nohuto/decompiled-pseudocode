/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400159D0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400159C0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015360 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001D50C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x1400460F0 (-InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  char **v3; // r14
  const struct _GUID *v4; // r15
  unsigned int v6; // edi
  __int64 (__fastcall ***v7)(char *, const struct _GUID *, char **); // rax
  volatile int *v8; // rdx
  __int64 (__fastcall ***v9)(char *, const struct _GUID *, char **); // rbx
  int v10; // eax
  __int64 (__fastcall *v11)(char *, const struct _GUID *, char **); // rax
  unsigned int Interface; // eax
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF
  __int64 (__fastcall ***v16)(char *, const struct _GUID *, char **); // [rsp+78h] [rbp+20h]

  v13[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (__int64 (__fastcall ***)(char *, const struct _GUID *, char **))operator new(0x70uLL);
    v9 = v7;
    v13[5] = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 8) = 0;
      v7[5] = 0LL;
      v7[6] = 0LL;
      v7[7] = 0LL;
      v7[8] = 0LL;
      v7[9] = 0LL;
      *((_BYTE *)v7 + 80) = 0;
      v7[11] = 0LL;
      v7[12] = 0LL;
      v7[13] = 0LL;
      *v7 = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
      v7[1] = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
      v7[2] = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
      v7[3] = (__int64 (__fastcall **)(char *, const struct _GUID *, char **))&ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 4), v8);
    v10 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v9 + 5));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 80) = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    CAPOWrapperSrv::InternalFinalConstructRelease((CAPOWrapperSrv *)v9);
    if ( v6
      || ((v11 = **v9, v11 != ATL::CComObject<CAPOWrapperSrv>::QueryInterface)
        ? (Interface = v11((char *)v9, v4, v3))
        : (Interface = ATL::CComObject<CAPOWrapperSrv>::QueryInterface((char *)v9, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(char *, const struct _GUID *, char **), __int64))(*v9)[7])(v9, 1LL);
    }
  }
  return v6;
}
