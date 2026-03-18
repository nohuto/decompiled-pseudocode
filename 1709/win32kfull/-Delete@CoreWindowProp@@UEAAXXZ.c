/*
 * XREFs of ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C0009900
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C000994C (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C00099B0 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 */

void __fastcall CoreWindowProp::Delete(CoreWindowProp *this, __int64 a2, __int64 a3)
{
  struct tagWND *v4; // rcx

  v4 = (struct tagWND *)*((_QWORD *)this + 3);
  if ( v4 )
    CoreWindowProp::RemoveComponentInternal(v4, *((struct tagWND **)this + 1));
  *((_QWORD *)this + 3) = 0LL;
  while ( *((_QWORD *)this + 4) )
    CoreWindowProp::UnlinkAndDestroyComponent(this, *((struct CoreWindowProp::Component **)this + 4), 0LL);
  Win32FreePool(this, a2, a3);
}
