/*
 * XREFs of ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C00099B0
 * Callers:
 *     ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C0009900 (-Delete@CoreWindowProp@@UEAAXXZ.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C020BFF8 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0009730 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C000994C (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0009C20 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponentInternal(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // edi
  struct CoreWindowProp::Component *Component; // rax
  CoreWindowProp *v6; // rbx
  struct CoreWindowProp::Component *v8; // [rsp+40h] [rbp+18h] BYREF
  CoreWindowProp *v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = -1073741275;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v9) )
  {
    Component = CoreWindowProp::FindComponent(a1, a2, &v8);
    if ( Component )
    {
      v6 = v9;
      CoreWindowProp::UnlinkAndDestroyComponent(v9, Component, v8);
      v4 = 0;
      if ( !*((_DWORD *)v6 + 10) )
        CoreWindowProp::ChangeRole(a1, 2, 0);
    }
  }
  return v4;
}
