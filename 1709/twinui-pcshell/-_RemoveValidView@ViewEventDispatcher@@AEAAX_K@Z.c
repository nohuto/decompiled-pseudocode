/*
 * XREFs of ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180125288
 * Callers:
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18011E3B8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18011FD10 (-v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180125388 (-_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCounte.c)
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180125670 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x180125E6C (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::_RemoveValidView(ViewEventDispatcher *this, unsigned __int64 a2)
{
  int PerApplicationData; // eax
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  PerApplicationData = ViewEventDispatcher::_FindPerApplicationData(
                         this,
                         *(_QWORD *)(*((_QWORD *)this + 46) + 8 * a2),
                         &v11);
  v5 = v11;
  if ( PerApplicationData >= 0 )
  {
    if ( (*(_QWORD *)(v11 + 16))-- == 1LL )
    {
      ViewEventDispatcher::_RemovePendingActivationsForAppId(this, (const struct Windows::Internal::String *)(v5 + 8));
      ViewEventDispatcher::_RemovePerApplicationData(this, v5);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD9B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)PerApplicationData);
  }
  if ( a2 < *((_QWORD *)this + 47) )
  {
    v7 = *((_QWORD *)this + 46);
    v8 = *(_QWORD *)(v7 + 8 * a2);
    if ( v8 )
    {
      *(_QWORD *)(v7 + 8 * a2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *((_QWORD *)this + 47);
    if ( a2 != v9 - 1 )
      memmove(
        (void *)(*((_QWORD *)this + 46) + 8 * a2),
        (const void *)(*((_QWORD *)this + 46) + 8 * a2 + 8),
        8 * (v9 - a2) - 8);
    --*((_QWORD *)this + 47);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
