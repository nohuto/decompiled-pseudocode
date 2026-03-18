/*
 * XREFs of ?ObjectInit@SynchronizationObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0140440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::SynchronizationObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  char *v3; // rcx
  __int64 result; // rax

  v3 = (char *)a1 + 24;
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = 0LL;
    *(_QWORD *)v3 = &DirectComposition::CSynchronizationInfo::`vftable';
  }
  *a3 = (struct ICompositionObject *)v3;
  result = 0LL;
  *((_DWORD *)v3 + 3) = 0;
  *((_WORD *)v3 + 4) = 1;
  return result;
}
