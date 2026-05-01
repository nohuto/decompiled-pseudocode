/*
 * XREFs of wil::ScopeExit__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x180124060
 * Callers:
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180122374 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ScopeExit__lambda_d1cc878f49256a12ed651bb70f914db7___(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rsi
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
  *(_QWORD *)a1 = v2;
  v5 = a2[1];
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(a2[1]);
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = a2[2];
  result = a1;
  a2[2] = 0LL;
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}
