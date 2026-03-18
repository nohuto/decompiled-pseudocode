/*
 * XREFs of ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C020BFF8
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0009A30 (NtUserSetCoreWindowPartner.c)
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0009B04 (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C00099B0 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponent(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v3 = CoreWindowProp::RemoveComponentInternal(a1, a2);
  if ( v3 )
    UserSetLastError(1168LL, v2);
  return v3;
}
