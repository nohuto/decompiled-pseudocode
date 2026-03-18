/*
 * XREFs of ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C002B000
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00FF678 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(DXGDEVICESYNCOBJECT *this)
{
  void *v1; // rcx
  ULONG_PTR v2; // [rsp+40h] [rbp+8h] BYREF

  v1 = (void *)*((_QWORD *)this + 7);
  v2 = 4096LL;
  MmRotatePhysicalView(v1, &v2, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
}
