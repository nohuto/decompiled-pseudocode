/*
 * XREFs of NtFlipObjectRemovePoolBuffer @ 0x1C004F730
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C004E1F8 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 */

__int64 __fastcall NtFlipObjectRemovePoolBuffer(FlipManagerObject *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r14
  FlipManagerObject *v4; // rdi
  int v5; // ebx
  FlipManagerObject *v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h]

  v7 = a1;
  if ( a1 && a2 )
  {
    v8 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v3 = *a2;
    KeEnterCriticalRegion();
    v7 = 0LL;
    v4 = 0LL;
    v5 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v7);
    if ( v5 >= 0 )
    {
      v4 = v7;
      v5 = FlipManagerObject::RemovePoolBuffer((struct _LIST_ENTRY *)v7, v3);
    }
    if ( v4 )
      ObfDereferenceObject(v4);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
