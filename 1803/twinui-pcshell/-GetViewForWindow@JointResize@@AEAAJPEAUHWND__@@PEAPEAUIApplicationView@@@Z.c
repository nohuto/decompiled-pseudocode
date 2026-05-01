/*
 * XREFs of ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1802E909C
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x1802E9800 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::GetViewForWindow(JointResize *this, HWND a2, struct IApplicationView **a3)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = 0;
  *a3 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17)) >= 0 )
    return 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IApplicationView **))(**((_QWORD **)this + 18) + 40LL))(
         *((_QWORD *)this + 18),
         a2,
         a3);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v4;
}
