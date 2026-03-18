/*
 * XREFs of ?ObjectInit@CompositionTokenObject@@KAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C000DED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000E578 (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 */

__int64 __fastcall CompositionTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        const struct CompositionTokenInitInfo *a2,
        struct IDxgkCompositionObject **a3)
{
  char *v3; // rcx

  v3 = (char *)a1 + 24;
  if ( v3 )
  {
    *((_QWORD *)v3 + 4) = 6LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *(_QWORD *)v3 = &CCompositionToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)v3 + 1) = &CCompositionToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)v3 + 5) = &CCompositionToken::`vftable'{for `CPushLock'};
    v3[64] = 0;
    *((_QWORD *)v3 + 9) = 0LL;
    *((_DWORD *)v3 + 20) = 0;
    *((_QWORD *)v3 + 11) = 0LL;
    *((_DWORD *)v3 + 24) = 0;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  return CCompositionToken::Initialize((CCompositionToken *)v3, a2);
}
