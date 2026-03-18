/*
 * XREFs of ?SetHandleProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0026920
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetHandleProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  int v4; // edi
  struct CompositionSurfaceObject *v7; // rbx
  struct CompositionSurfaceObject *v8; // rcx
  struct CompositionSurfaceObject *v10; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( a2 )
    return (unsigned int)-1073741811;
  v7 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    v4 = CompositionSurfaceObject::ResolveHandle(a3, 1LL, (__int64)a3, &v10);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v7 = v10;
  }
  v8 = (struct CompositionSurfaceObject *)*((_QWORD *)this + 5);
  if ( v7 == v8 )
  {
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  else
  {
    if ( v8 )
      ObfDereferenceObject(v8);
    *((_QWORD *)this + 5) = v7;
    *a4 = 1;
  }
  return (unsigned int)v4;
}
