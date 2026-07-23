/*
 * XREFs of RtlTraceDatabaseCreate @ 0x1800FAE40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpTraceDatabaseAllocate @ 0x1800FB1F0 (RtlpTraceDatabaseAllocate.c)
 */

__int64 __fastcall RtlTraceDatabaseCreate(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 (__fastcall *a5)(unsigned int a1, __int64 a2))
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(unsigned int, __int64); // rax
  size_t v14; // r8

  if ( a1 > 0x100000 )
    return 0LL;
  v10 = RtlpTraceDatabaseAllocate((8LL * a1 + 65784) & 0xFFFFFFFFFFFF0000uLL);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 40) = 0LL;
  v12 = v10 + 192;
  *(_QWORD *)(v10 + 120) = 0LL;
  *(_QWORD *)(v10 + 112) = 0LL;
  *(_DWORD *)(v10 + 4) = a3 | 1;
  *(_DWORD *)v10 = -1412576052;
  *(_DWORD *)(v10 + 8) = a4;
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 32) = 0x10000LL;
  memset((void *)(v10 + 128), 0, 0x40uLL);
  RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(v11 + 48), 0, 0);
  v13 = a5;
  *(_DWORD *)(v11 + 88) = a1;
  if ( !a5 )
    v13 = RtlStackTraceHashFunction;
  *(_QWORD *)(v11 + 104) = v13;
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_DWORD *)v12 = -1412580421;
  *(_QWORD *)(v12 + 8) = v11;
  *(_QWORD *)(v12 + 24) = 0x10000LL;
  v14 = 8LL * *(unsigned int *)(v11 + 88);
  *(_QWORD *)(v11 + 16) = v12;
  *(_QWORD *)(v11 + 96) = v12 + 56;
  memset((void *)(v12 + 56), 0, v14);
  *(_QWORD *)(v12 + 32) = v11;
  *(_QWORD *)(v12 + 40) = v11 + 0x10000;
  result = v11;
  *(_QWORD *)(v12 + 48) = v12 + 8 * (*(unsigned int *)(v11 + 88) + 7LL);
  return result;
}
