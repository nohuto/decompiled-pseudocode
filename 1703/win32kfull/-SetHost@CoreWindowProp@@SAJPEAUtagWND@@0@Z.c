/*
 * XREFs of ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C00039C4
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C00038F0 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0003A48 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0004908 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006288C (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C020AB30 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

int __fastcall CoreWindowProp::SetHost(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // rbx
  struct tagWND *v5; // rcx
  int result; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v7) && (v4 = v7, *(_DWORD *)(v7 + 20)) )
  {
    v5 = *(struct tagWND **)(v7 + 24);
    if ( !v5 || (result = CoreWindowProp::RemoveComponent(v5, a1), result >= 0) )
    {
      result = CoreWindowProp::ChangeRole(a2, 2LL);
      if ( result >= 0 )
      {
        result = CoreWindowProp::AddComponent(a2, a1);
        if ( result >= 0 )
        {
          *(_QWORD *)(v4 + 24) = a2;
          return 0;
        }
      }
    }
  }
  else
  {
    UserSetLastError(5LL);
    return -1073741790;
  }
  return result;
}
