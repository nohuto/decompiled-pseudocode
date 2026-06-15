/*
 * XREFs of ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x140016CE8
 * Callers:
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x1400031A8 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 * Callees:
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140003930 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140008C20 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::AtlComModuleRegisterClassObjects(IUnknown *a1)
{
  __int64 *v1; // rdi
  HRESULT v2; // ebx
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD *); // r9
  __int64 v6; // rcx
  int v7; // eax
  void (*Release)(void); // rax
  LPUNKNOWN pUnk; // [rsp+40h] [rbp+8h] BYREF

  pUnk = a1;
  v1 = (__int64 *)qword_140086020;
  v2 = 1;
  v3 = qword_140086028;
  while ( (unsigned __int64)v1 < v3 && v2 >= 0 )
  {
    v4 = *v1;
    if ( *v1 )
    {
      pUnk = 0LL;
      v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(v4 + 16);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v4 + 24);
        if ( v5 == ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance )
          v7 = ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
                 v6,
                 (__int64)&GUID_00000000_0000_0000_c000_000000000046,
                 &pUnk);
        else
          v7 = (*(__int64 (__fastcall **)(__int64, GUID *, LPUNKNOWN *))(v4 + 16))(
                 v6,
                 &GUID_00000000_0000_0000_c000_000000000046,
                 &pUnk);
        v2 = v7;
        if ( v7 >= 0 )
          v2 = CoRegisterClassObject(*(const IID *const *)v4, pUnk, 4u, 5u, (LPDWORD)(v4 + 40));
        if ( pUnk )
        {
          Release = (void (*)(void))pUnk->lpVtbl->Release;
          if ( (char *)Release == (char *)ATL::CComObjectCached<ATL::CComClassFactory>::Release )
            ATL::CComObjectCached<ATL::CComClassFactory>::Release((volatile signed __int32 *)pUnk);
          else
            Release();
        }
        v3 = qword_140086028;
      }
      else
      {
        v2 = 0;
      }
    }
    ++v1;
  }
  return (unsigned int)v2;
}
