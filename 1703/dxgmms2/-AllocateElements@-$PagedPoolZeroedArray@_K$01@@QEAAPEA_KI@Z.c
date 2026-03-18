/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@_K$01@@QEAAPEA_KI@Z @ 0x1C00AA560
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned __int64,2>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  void *v5; // rcx

  v2 = a2;
  if ( a2 <= 2 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 8LL * a2, 0x4B677844u);
  }
  v5 = *(void **)a1;
  a1[6] = v2;
  if ( v5 )
    memset(v5, 0, 8 * v2);
  return *(_QWORD *)a1;
}
