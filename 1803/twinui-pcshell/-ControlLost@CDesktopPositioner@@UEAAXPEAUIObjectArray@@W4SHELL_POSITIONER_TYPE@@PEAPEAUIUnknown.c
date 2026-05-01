/*
 * XREFs of ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1802BF1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802C18E0 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int i; // esi
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF
  struct IApplicationView *v9; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v8);
  for ( i = 0; i < v8; ++i )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
    (*(void (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)a2 + 32LL))(
      a2,
      i,
      &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
      &v9);
    CDesktopPositioner::_PersistPosition((CDesktopPositioner *)(a1 - 128), v9);
    result = Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
  }
  return result;
}
