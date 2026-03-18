/*
 * XREFs of ?AddElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C0249670
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C0249774 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitor.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall CList<CPhysicalMonitorHandle>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rsi
  unsigned __int64 v10; // rax
  __int64 i; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  char v14; // cl

  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 )
    {
      v10 = 2 * v3;
      if ( v10 > 0xFFFFFFFF )
        return 3221225621LL;
      v7 = v10;
    }
    else
    {
      v7 = 16;
    }
    v8 = OPMAllocateMemory(8LL * v7, PagedPool);
    if ( !v8 )
      return 3221225495LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
      v8[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    v12 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)v12 < v7 )
      memset(&v8[v12], 0, 8LL * (v7 - (unsigned int)v12));
    OPMFreeMemory(*(void **)a1);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 12) = v7;
  }
  v13 = 0LL;
  v14 = 0;
  do
  {
    if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v13) )
    {
      v14 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v13) = a2;
      *a3 = v13;
    }
    v13 = (unsigned int)(v13 + 1);
  }
  while ( !v14 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
