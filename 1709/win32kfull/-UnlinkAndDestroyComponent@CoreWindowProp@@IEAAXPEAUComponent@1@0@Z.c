/*
 * XREFs of ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C000994C
 * Callers:
 *     ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C0009900 (-Delete@CoreWindowProp@@UEAAXXZ.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C00099B0 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

void __fastcall CoreWindowProp::UnlinkAndDestroyComponent(
        CoreWindowProp *this,
        struct CoreWindowProp::Component *a2,
        struct CoreWindowProp::Component *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *(_QWORD *)a2;
    if ( a3 )
      *(_QWORD *)a3 = v3;
    else
      *((_QWORD *)this + 4) = v3;
    if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(*((_QWORD *)a2 + 1), &v8) )
      *(_QWORD *)(v8 + 24) = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    --*((_DWORD *)this + 10);
    Win32FreePool(a2, v6, v7);
  }
}
