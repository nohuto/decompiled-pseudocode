/*
 * XREFs of ?ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z @ 0x1C0013100
 * Callers:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0012F50 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBUtagDITCALLBACKSTRUCT@@_KW4HitTestToInputDestOptional@@@Z @ 0x1C0012F80 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBUtagDITCALLBACKST.c)
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0151770 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall CSpatialProcessor::ResolveHitTestView(CSpatialProcessor *this, void **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int i; // edi
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  v3 = 0;
  for ( i = 0; i < a3; ++a2 )
  {
    if ( (int)CompositionInputObject::ResolveHandle(*a2, 1u, 1, (struct CompositionInputObject **)&Object) >= 0 )
    {
      v3 = *((_DWORD *)Object + 46);
      ObfDereferenceObject(Object);
      if ( v3 )
        break;
    }
    ++i;
  }
  return v3;
}
