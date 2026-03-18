/*
 * XREFs of ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0
 * Callers:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0009730 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C000994C (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C00099B0 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0009B04 (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0009B88 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0009C20 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0057C4C (-IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     NtUserGetForegroundWindow @ 0x1C00E1330 (NtUserGetForegroundWindow.c)
 *     ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEAUtagWND@@@Z @ 0x1C0115BE0 (-GetFocusDirection@CoreWindowProp@@SA-AW4FOCUSDIRECTION@@PEAUtagWND@@@Z.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0120AB4 (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEAU2@0@Z @ 0x1C020BF98 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEAU2@0@Z.c)
 *     ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C020C024 (-SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z.c)
 * Callees:
 *     _FindProp @ 0x1C0064018 (_FindProp.c)
 */

__int64 __fastcall CWindowProp::GetProp<CoreWindowProp>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 *Prop; // rax
  __int64 v5; // rax

  v2 = 0LL;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 184) && (Prop = (__int64 *)FindProp(a1, CoreWindowProp::s_atom, 1LL)) != 0LL )
    v5 = *Prop;
  else
    v5 = v2;
  *v3 = v5;
  LOBYTE(v2) = v5 != 0;
  return (unsigned int)v2;
}
