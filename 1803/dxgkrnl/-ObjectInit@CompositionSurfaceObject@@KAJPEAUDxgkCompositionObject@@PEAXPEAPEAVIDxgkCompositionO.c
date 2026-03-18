/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C000D720
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall CompositionSurfaceObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  char *v3; // rbx
  __int64 result; // rax

  v3 = (char *)a1 + 24;
  if ( a1 != (struct DxgkCompositionObject *)-24LL )
  {
    memset((char *)a1 + 24, 0, 0x70uLL);
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 13) = 0LL;
    *(_QWORD *)v3 = &CCompositionSurface::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)v3 + 1) = &CCompositionSurface::`vftable'{for `IPairedCompositionSurface'};
    *((_QWORD *)v3 + 2) = &CCompositionSurface::`vftable'{for `CPushLock'};
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  *((_DWORD *)v3 + 11) = 0;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 8) = 0LL;
  *((_QWORD *)v3 + 10) = v3 + 72;
  *((_QWORD *)v3 + 9) = v3 + 72;
  *((_DWORD *)v3 + 22) = 0;
  *((_DWORD *)v3 + 23) = 0;
  v3[96] = 0;
  result = 0LL;
  v3[40] = 1;
  return result;
}
