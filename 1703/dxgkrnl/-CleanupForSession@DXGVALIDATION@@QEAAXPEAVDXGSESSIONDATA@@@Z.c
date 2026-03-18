/*
 * XREFs of ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C000D98C
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C00FAD14 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVALIDATION::CleanupForSession(DXGVALIDATION *this, struct DXGSESSIONDATA *a2)
{
  void *v3; // rcx

  if ( *(_DWORD *)this )
  {
    v3 = (void *)*((_QWORD *)a2 + 2325);
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      *((_QWORD *)a2 + 2325) = 0LL;
    }
  }
}
