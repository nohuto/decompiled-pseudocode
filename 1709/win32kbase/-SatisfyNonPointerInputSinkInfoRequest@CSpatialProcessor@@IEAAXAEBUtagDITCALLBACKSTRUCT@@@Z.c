/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0012F50
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C0013170 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 * Callees:
 *     ?ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z @ 0x1C0013100 (-ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C00215F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0151770 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

void __fastcall CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(
        CSpatialProcessor *this,
        const struct tagDITCALLBACKSTRUCT *a2)
{
  void *v2; // rcx
  PVOID v4; // rdi
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  v2 = (void *)*((_QWORD *)a2 + 4);
  if ( v2 && (int)CompositionInputObject::ResolveHandle(v2, 1u, 1, (struct CompositionInputObject **)&Object) >= 0 )
  {
    v4 = Object;
    if ( ((unsigned __int8)gInputSinkInfoRetrieval & 1) != 0 )
      qword_1C0195B54 = *((_QWORD *)Object + 2);
    if ( ((unsigned __int8)gInputSinkInfoRetrieval & 4) != 0 )
    {
      xmmword_1C0195B68 = *(_OWORD *)((char *)a2 + 56);
      xmmword_1C0195B78 = *(_OWORD *)((char *)a2 + 72);
      xmmword_1C0195B88 = *(_OWORD *)((char *)a2 + 88);
      xmmword_1C0195B98 = *(_OWORD *)((char *)a2 + 104);
    }
    if ( ((unsigned __int8)gInputSinkInfoRetrieval & 8) != 0 )
      dword_1C0195BA8 = CSpatialProcessor::ResolveHitTestView(
                          (CSpatialProcessor *)(unsigned int)gInputSinkInfoRetrieval,
                          *((void ***)a2 + 5),
                          *((_DWORD *)a2 + 12));
    if ( ((unsigned __int8)gInputSinkInfoRetrieval & 2) != 0 && dword_1C0195B4C == 6 )
    {
      CompositionInputObject::GetWindowForInputType(v4, 5LL, &Object);
      if ( Object )
        qword_1C0195B60 = *(_QWORD *)Object;
    }
    ObfDereferenceObject(v4);
    dword_1C0195B50 = 1;
  }
}
