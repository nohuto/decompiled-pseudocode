/*
 * XREFs of ?ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z @ 0x1C012E0E0
 * Callers:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0001210 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBUtagDITCALLBACKSTRUCT@@_KW4HitTestToInputDestOptional@@@Z @ 0x1C006EECC (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBUtagDITCALLBACKST.c)
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010B70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall CSpatialProcessor::ResolveHitTestView(CSpatialProcessor *this, void **a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int i; // ebp
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  v3 = 0;
  v4 = 0;
  for ( i = a3; v4 < i; ++a2 )
  {
    LOBYTE(a3) = 1;
    if ( (int)CompositionInputObject::ResolveHandle(*a2, 1LL, a3, (struct CompositionInputObject **)&Object) >= 0 )
    {
      v3 = *((_DWORD *)Object + 46);
      ObfDereferenceObject(Object);
      if ( v3 )
        break;
    }
    ++v4;
  }
  return v3;
}
