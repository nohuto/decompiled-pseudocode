/*
 * XREFs of ?ObjectInit@CompositionTokenObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0010A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionTokenObject::ObjectInit(
        struct CompositionObject *a1,
        const struct CompositionTokenInitInfo *a2,
        struct ICompositionObject **a3)
{
  char *v3; // rcx

  v3 = (char *)a1 + 24;
  if ( v3 )
  {
    *((_QWORD *)v3 + 4) = 6LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *(_QWORD *)v3 = &CCompositionToken::`vftable'{for `ICompositionObject'};
    *((_QWORD *)v3 + 1) = &CCompositionToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)v3 + 5) = &CCompositionToken::`vftable'{for `CPushLock'};
    v3[64] = 0;
    *((_QWORD *)v3 + 9) = 0LL;
    *((_DWORD *)v3 + 20) = 0;
    *((_QWORD *)v3 + 11) = 0LL;
    *((_DWORD *)v3 + 24) = 0;
  }
  *a3 = (struct ICompositionObject *)v3;
  return CCompositionToken::Initialize((CCompositionToken *)v3, a2);
}
