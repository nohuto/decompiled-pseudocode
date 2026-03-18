/*
 * XREFs of ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180136130
 * Callers:
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180090EF8 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 *     ??_GKeyframe@Sequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801360FC (--_GKeyframe@Sequence@Animations@Components@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::RefPtr<Components::Animations::Input>::Release(_DWORD **a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
      return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 48LL))(v1);
  }
  return result;
}
