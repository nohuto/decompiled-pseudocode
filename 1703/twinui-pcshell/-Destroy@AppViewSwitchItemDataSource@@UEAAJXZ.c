/*
 * XREFs of ?Destroy@AppViewSwitchItemDataSource@@UEAAJXZ @ 0x18015CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007866C (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall AppViewSwitchItemDataSource::Destroy(AppViewSwitchItemDataSource *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SmartCookie::Unregister((AppViewSwitchItemDataSource *)((char *)this + 72));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
