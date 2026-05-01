/*
 * XREFs of ?RmpActivityHostGetPsmProcessList@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEA_KPEAK@Z @ 0x180008C64
 * Callers:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostGetPsmProcessList(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 **a2,
        unsigned int *a3)
{
  unsigned __int64 *Heap; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = 1;
  Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) + 152LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 3),
             Heap,
             &v10);
      v8 = v7;
      if ( v7 >= 0 )
      {
        *a3 = v10;
        *a2 = Heap;
        return v8;
      }
      if ( v7 != -2147483643 )
        break;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v10);
      if ( !Heap )
      {
        v8 = -1073741801;
        break;
      }
    }
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
