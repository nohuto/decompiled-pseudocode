/*
 * XREFs of ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00BB838
 * Callers:
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUtagWF_Point@@PEAU1@@Z @ 0x1C00BB990 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUtagWF_Point@@PEAU1@@Z.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0002E40 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000FC20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall GetTransformFromInputSink(void *a1, struct tagINPUT_TRANSFORM *a2, __int64 a3)
{
  int Transform; // ebx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  LOBYTE(a3) = 1;
  Transform = CompositionInputObject::ResolveHandle(a1, 1LL, a3, (struct CompositionInputObject **)&Object);
  if ( Transform >= 0 )
  {
    Transform = CompositionInputObject::QueryTransform((CompositionInputObject *)Object, a2);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)Transform;
}
