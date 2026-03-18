/*
 * XREFs of ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006288C
 * Callers:
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C000380C (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C0003870 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C00039C4 (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0003A48 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0003AD0 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0004908 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C0004F34 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     ?IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C001FD84 (-IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062750 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 *     NtUserGetForegroundWindow @ 0x1C00DA7B0 (NtUserGetForegroundWindow.c)
 *     ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEAUtagWND@@@Z @ 0x1C010B614 (-GetFocusDirection@CoreWindowProp@@SA-AW4FOCUSDIRECTION@@PEAUtagWND@@@Z.c)
 *     ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C020AB5C (-SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z.c)
 * Callees:
 *     _FindProp @ 0x1C0062530 (_FindProp.c)
 */

__int64 __fastcall CWindowProp::GetProp<CoreWindowProp>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 *Prop; // rax
  __int64 v5; // rax

  v2 = 0LL;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 184) && (Prop = (__int64 *)FindProp(a1, CoreWindowProp::s_atom, 1)) != 0LL )
    v5 = *Prop;
  else
    v5 = v2;
  *v3 = v5;
  LOBYTE(v2) = v5 != 0;
  return (unsigned int)v2;
}
