/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C008B7D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CompositionSurfaceObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  char *v3; // rbx
  __int64 result; // rax

  v3 = (char *)a1 + 24;
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    memset((char *)a1 + 24, 0, 0x60uLL);
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *(_QWORD *)v3 = &CCompositionSurface::`vftable'{for `ICompositionObject'};
    *((_QWORD *)v3 + 1) = &CCompositionSurface::`vftable'{for `CPushLock'};
  }
  *a3 = (struct ICompositionObject *)v3;
  *((_DWORD *)v3 + 9) = 0;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = v3 + 64;
  *((_QWORD *)v3 + 8) = v3 + 64;
  *((_DWORD *)v3 + 20) = 0;
  *((_DWORD *)v3 + 21) = 0;
  v3[88] = 0;
  result = 0LL;
  v3[32] = 1;
  return result;
}
