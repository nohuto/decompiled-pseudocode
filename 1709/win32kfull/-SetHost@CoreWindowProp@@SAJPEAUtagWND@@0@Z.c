/*
 * XREFs of ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0009B04
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0009A30 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0009730 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0009B88 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C020BFF8 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::SetHost(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // rbx
  struct tagWND *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v7) && (v4 = v7, *(_DWORD *)(v7 + 20)) )
  {
    v5 = *(struct tagWND **)(v7 + 24);
    if ( !v5 || (result = CoreWindowProp::RemoveComponent(v5, a1), (int)result >= 0) )
    {
      result = CoreWindowProp::ChangeRole(a2, 2, 1u);
      if ( (int)result >= 0 )
      {
        result = CoreWindowProp::AddComponent(a2, a1);
        if ( (int)result >= 0 )
        {
          *(_QWORD *)(v4 + 24) = a2;
          return 0LL;
        }
      }
    }
  }
  else
  {
    UserSetLastError(5LL);
    return 3221225506LL;
  }
  return result;
}
