/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x180161930
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Cleanup@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x180162730 (--$_Cleanup@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Deta.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v11 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 8 * v8);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,unsigned int>(
      a3,
      (unsigned int)*a4);
  else
    *a4 = v8;
  return (unsigned int)v9;
}
