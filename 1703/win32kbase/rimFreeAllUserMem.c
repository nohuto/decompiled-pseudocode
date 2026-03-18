/*
 * XREFs of rimFreeAllUserMem @ 0x1C0095354
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00885AC (RawInputManagerObjectDelete.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimFreeAllUserMem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _RTL_AVL_TABLE *i; // rdi
  void *v7; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  result = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 32) == result )
  {
    for ( i = (struct _RTL_AVL_TABLE *)(a1 + 856); ; RtlDeleteElementGenericTableAvl(i, v7) )
    {
      result = (__int64)RtlEnumerateGenericTableAvl(i, 1u);
      v7 = (void *)result;
      if ( !result )
        break;
      RegionSize = *(_QWORD *)(result + 8);
      BaseAddress = *(PVOID *)result;
      MmUnsecureVirtualMemory(*(HANDLE *)(result + 16));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
  }
  return result;
}
