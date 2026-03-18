/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0001210
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C006F03C (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001740 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010B70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z @ 0x1C012E0E0 (-ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z.c)
 */

void __fastcall CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(
        CSpatialProcessor *this,
        const struct tagDITCALLBACKSTRUCT *a2)
{
  char v3; // cl
  PVOID v4; // rdi
  unsigned int v5; // eax
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  if ( (int)CompositionInputObject::ResolveHandle(*((void **)a2 + 4), 1u, 1, (struct CompositionInputObject **)&Object) >= 0 )
  {
    v3 = (char)gInputSinkInfoRetrieval;
    v4 = Object;
    if ( ((unsigned __int8)gInputSinkInfoRetrieval & 1) != 0 )
      qword_1C018ECD4 = *((_QWORD *)Object + 2);
    if ( ((unsigned __int8)gInputSinkInfoRetrieval & 4) != 0 )
    {
      xmmword_1C018ECE8 = *(_OWORD *)((char *)a2 + 56);
      xmmword_1C018ECF8 = *(_OWORD *)((char *)a2 + 72);
      xmmword_1C018ED08 = *(_OWORD *)((char *)a2 + 88);
      xmmword_1C018ED18 = *(_OWORD *)((char *)a2 + 104);
    }
    if ( ((unsigned __int8)gInputSinkInfoRetrieval & 8) != 0 )
    {
      v5 = CSpatialProcessor::ResolveHitTestView(
             (CSpatialProcessor *)(unsigned int)gInputSinkInfoRetrieval,
             *((void ***)a2 + 5),
             *((_DWORD *)a2 + 12));
      v3 = (char)gInputSinkInfoRetrieval;
      dword_1C018ED28 = v5;
    }
    if ( (v3 & 2) != 0 && dword_1C018ECCC == 6 )
    {
      CompositionInputObject::GetWindowForInputType(v4, 5LL, &Object);
      if ( Object )
        qword_1C018ECE0 = *(_QWORD *)Object;
    }
    ObfDereferenceObject(v4);
    dword_1C018ECD0 = 1;
  }
}
