/*
 * XREFs of NtFlipObjectDisconnectEndpoint @ 0x1C004EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C004DF08 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 */

__int64 __fastcall NtFlipObjectDisconnectEndpoint(void *a1, int a2)
{
  int v4; // ebx
  PVOID v5; // rdi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    KeEnterCriticalRegion();
    Object = 0LL;
    v5 = 0LL;
    v4 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &Object);
    if ( v4 >= 0 )
    {
      v5 = Object;
      v4 = FlipManagerObject::DisconnectEndpoint((FlipManagerObject *)Object, a2 != 0);
    }
    if ( v5 )
      ObfDereferenceObject(v5);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
