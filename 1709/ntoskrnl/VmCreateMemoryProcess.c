/*
 * XREFs of VmCreateMemoryProcess @ 0x14073D6C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwAllocateVirtualMemory @ 0x14017DBC0 (ZwAllocateVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 */

__int64 __fastcall VmCreateMemoryProcess(__int64 a1, __int64 a2, void *a3, int a4, ULONG_PTR a5, HANDLE *a6)
{
  char v9; // r8
  HANDLE *v11; // rdi
  int v12; // edx
  int v13; // ecx
  __int64 result; // rax
  HANDLE v15; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-10h] BYREF
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v9 = *(_BYTE *)(a1 + 1738);
  if ( (a4 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  v11 = a6;
  v12 = ((a4 & 1) << 13) | 0x4000;
  if ( (a4 & 2) == 0 )
    v12 = (a4 & 1) << 13;
  v13 = v12 | 0x20000;
  if ( (a4 & 4) == 0 )
    v13 = v12;
  result = PsCreateMinimalProcess((struct _KPROCESS *)a1, a2, v9, a3, v13, 0, 0LL, a5, a6);
  if ( (int)result >= 0 )
  {
    v15 = *v11;
    RegionSize = 4294901760LL;
    BaseAddress = (PVOID)0x10000;
    ZwAllocateVirtualMemory(v15, &BaseAddress, 0LL, &RegionSize, 0x2000u, 1u);
    if ( (a4 & 8) == 0 )
    {
      ObReferenceObjectByHandle(*v11, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
      _InterlockedOr((volatile signed __int32 *)Object + 435, 0x2000u);
      ObfDereferenceObject(Object);
    }
    return 0LL;
  }
  return result;
}
