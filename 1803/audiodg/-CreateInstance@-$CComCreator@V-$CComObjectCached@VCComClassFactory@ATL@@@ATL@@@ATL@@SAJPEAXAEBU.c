/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001A8C0
 * Callers:
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x14001A814 (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400147E0 (-QueryInterface@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140030B84 (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  char **v3; // r15
  const struct _GUID *v4; // r13
  __int64 v5; // r12
  unsigned int v6; // r14d
  char *v7; // rax
  char *v8; // rdi
  int v9; // eax
  __int64 (__fastcall *v10)(char *, const struct _GUID *, char **); // rax
  unsigned int Interface; // eax
  char *v13; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (char *)operator new(0x48uLL);
    v8 = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 2) = 0;
      memset_0(v7 + 16, 0, 0x28uLL);
      v8[56] = 0;
      *(_QWORD *)v8 = &ATL::CComObjectCached<ATL::CComClassFactory>::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    v13 = v8;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = a1;
    v6 = -2147024882;
    v8 = v13;
  }
  if ( v8 )
  {
    *((_QWORD *)v8 + 8) = v5;
    v9 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v8 + 16));
    if ( v9 >= 0 )
    {
      v8[56] = 1;
      v9 = 0;
    }
    v6 = 0;
    if ( v9 < 0 )
      v6 = v9;
    if ( v6
      || ((v10 = **(__int64 (__fastcall ***)(char *, const struct _GUID *, char **))v8,
           v10 != ATL::CComObjectCached<ATL::CComClassFactory>::QueryInterface)
        ? (Interface = v10(v8, v4, v3))
        : (Interface = ATL::CComObjectCached<ATL::CComClassFactory>::QueryInterface(v8, v4, v3)),
          (v6 = Interface) != 0) )
    {
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v8);
    }
  }
  return v6;
}
