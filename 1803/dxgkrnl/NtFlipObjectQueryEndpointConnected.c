/*
 * XREFs of NtFlipObjectQueryEndpointConnected @ 0x1C004F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C004DF6C (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 */

__int64 __fastcall NtFlipObjectQueryEndpointConnected(void *a1, int a2, _DWORD *a3)
{
  bool v6; // r14
  int IsEndpointConnected; // ebx
  PVOID v8; // rdi
  bool v10; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( a1 && a3 )
  {
    v6 = 0;
    v10 = 0;
    KeEnterCriticalRegion();
    Object = 0LL;
    IsEndpointConnected = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &Object);
    v8 = 0LL;
    if ( IsEndpointConnected >= 0 )
    {
      v8 = Object;
      IsEndpointConnected = FlipManagerObject::IsEndpointConnected((FlipManagerObject *)Object, a2 != 0, &v10);
      v6 = v10;
    }
    if ( IsEndpointConnected >= 0 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = v6;
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)IsEndpointConnected;
}
