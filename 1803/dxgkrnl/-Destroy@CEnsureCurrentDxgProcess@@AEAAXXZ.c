/*
 * XREFs of ?Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ @ 0x1C0028CB8
 * Callers:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001D44 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEnsureCurrentDxgProcess::Destroy(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *this = 0LL;
  }
}
