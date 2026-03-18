/*
 * XREFs of ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0009B88
 * Callers:
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0009B04 (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0009C20 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v8) && (v5 = v8, *(_DWORD *)(v8 + 16)) )
  {
    if ( !CoreWindowProp::FindComponent(a1, a2, 0LL) )
    {
      v6 = (_QWORD *)Win32AllocPool(16LL, 1920430933LL);
      if ( v6 )
      {
        *v6 = *(_QWORD *)(v5 + 32);
        v6[1] = a2;
        *(_QWORD *)(v5 + 32) = v6;
        ++*(_DWORD *)(v5 + 40);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return v4;
  }
  else
  {
    UserSetLastError(5LL);
    return 3221225506LL;
  }
}
