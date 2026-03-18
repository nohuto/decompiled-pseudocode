/*
 * XREFs of EtwpEnumerateWorkingSet @ 0x14074CE48
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14074DE90 (EtwpProcessEnumCallback.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x14000CD84 (MiGetWorkingSetInfoEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwLogPfnInfoRundown @ 0x14074CA6C (EtwLogPfnInfoRundown.c)
 */

__int64 __fastcall EtwpEnumerateWorkingSet(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T v5; // rdx
  __int64 result; // rax
  __int64 *v7; // r9

  v4 = 4096LL;
  while ( 1 )
  {
    if ( !*(_QWORD *)(a2 + 48) )
    {
      v5 = 32 * v4 + 16;
      *(_QWORD *)(a2 + 56) = v5;
      result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x74777445u);
      *(_QWORD *)(a2 + 48) = result;
      if ( !result )
        break;
    }
    memset(*(void **)(a2 + 48), 0, *(_QWORD *)(a2 + 56));
    result = MiGetWorkingSetInfoEx(a1 + 1280, *(_QWORD **)(a2 + 48), *(_QWORD *)(a2 + 56), 0);
    v7 = *(__int64 **)(a2 + 48);
    if ( (_DWORD)result != -1073741820 )
    {
      if ( (int)result >= 0 )
      {
        if ( v7[1] )
          return EtwLogPfnInfoRundown(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 2256LL), **(_DWORD **)(a2 + 32), v7);
      }
      return result;
    }
    v4 = v7[1] + 64;
    ExFreePoolWithTag(*(PVOID *)(a2 + 48), 0);
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  return result;
}
