/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001B240
 * Callers:
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x14001B194 (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015500 (-QueryInterface@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140031AE4 (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  _DWORD *v4; // r13
  __int64 v5; // r12
  unsigned int v6; // r14d
  char *v7; // rax
  char *v8; // rdi
  int v9; // eax
  __int64 (__fastcall *v10)(volatile signed __int32 *, _DWORD *, _QWORD *); // rax
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
      memset(v7 + 16, 0, 0x28uLL);
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
      || ((v10 = **(__int64 (__fastcall ***)(volatile signed __int32 *, _DWORD *, _QWORD *))v8,
           v10 != ATL::CComObjectCached<ATL::CComClassFactory>::QueryInterface)
        ? (Interface = v10((volatile signed __int32 *)v8, v4, v3))
        : (Interface = ATL::CComObjectCached<ATL::CComClassFactory>::QueryInterface(
                         (volatile signed __int32 *)v8,
                         v4,
                         v3)),
          (v6 = Interface) != 0) )
    {
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v8);
    }
  }
  return v6;
}
