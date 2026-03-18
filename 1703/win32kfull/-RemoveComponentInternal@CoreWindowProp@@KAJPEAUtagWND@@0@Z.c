/*
 * XREFs of ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C0003870
 * Callers:
 *     ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C00037C0 (-Delete@CoreWindowProp@@UEAAXXZ.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C020AB30 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C000380C (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0003AD0 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0004908 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006288C (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponentInternal(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // edi
  struct tagWND *v5; // rcx
  struct CoreWindowProp::Component *Component; // rax
  CoreWindowProp *v7; // rbx
  struct CoreWindowProp::Component *v9; // [rsp+40h] [rbp+18h] BYREF
  CoreWindowProp *v10; // [rsp+48h] [rbp+20h] BYREF

  v4 = -1073741275;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v10) )
  {
    Component = CoreWindowProp::FindComponent(v5, a2, &v9);
    if ( Component )
    {
      v7 = v10;
      CoreWindowProp::UnlinkAndDestroyComponent(v10, Component, v9);
      v4 = 0;
      if ( !*((_DWORD *)v7 + 10) )
        CoreWindowProp::ChangeRole(a1, 2LL);
    }
  }
  return v4;
}
