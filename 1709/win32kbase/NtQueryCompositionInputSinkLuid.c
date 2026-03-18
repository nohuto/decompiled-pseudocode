/*
 * XREFs of NtQueryCompositionInputSinkLuid @ 0x1C008BB50
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0151770 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSinkLuid(void *a1, _QWORD *a2)
{
  int v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h]

  v3 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v3 >= 0 )
  {
    v6 = *((_QWORD *)Object + 2);
    ObfDereferenceObject(Object);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v6;
  }
  return (unsigned int)v3;
}
