/*
 * XREFs of ?AddElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C0247C80
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C0247D84 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAVCPhysicalMonitor.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall CList<CPhysicalMonitorHandle>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rsi
  __int64 i; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  char v13; // cl

  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == v3 )
  {
    if ( v3 )
    {
      v7 = 2LL * *(unsigned int *)(a1 + 12);
      if ( v7 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v7) = 16;
    }
    v8 = OPMAllocateMemory(8LL * (unsigned int)v7, PagedPool);
    if ( !v8 )
      return 3221225495LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
      v8[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    v11 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)v11 < (unsigned int)v7 )
      memset(&v8[v11], 0, 8LL * (unsigned int)(v7 - v11));
    OPMFreeMemory(*(void **)a1);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 12) = v7;
  }
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v12) )
    {
      v13 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v12) = a2;
      *a3 = v12;
    }
    v12 = (unsigned int)(v12 + 1);
  }
  while ( !v13 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
