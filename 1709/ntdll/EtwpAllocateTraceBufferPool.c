/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x18006474C
 * Callers:
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x18006486C (EtwpAllocateFreeBuffers.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 204);
  v10 = 0LL;
  v3 = 2 * v1;
  if ( *(_DWORD *)(a1 + 216) < (unsigned int)(2 * v1) )
    *(_DWORD *)(a1 + 216) = v3 + 22;
  v4 = *(_DWORD *)(a1 + 220);
  if ( v4 < v3 || v4 > *(_DWORD *)(a1 + 216) )
    *(_DWORD *)(a1 + 220) = v3;
  if ( *(_DWORD *)(a1 + 216) > 0x400u )
    *(_DWORD *)(a1 + 216) = 1024;
  if ( *(_DWORD *)(a1 + 220) > 0x400u )
    *(_DWORD *)(a1 + 220) = 1024;
  v5 = *(_DWORD *)(a1 + 368);
  if ( v5 )
  {
    v8 = *(_DWORD *)(a1 + 216) - v1 - 1;
    if ( v5 > v8 )
      *(_DWORD *)(a1 + 368) = v8;
  }
  if ( (*(_DWORD *)(a1 + 324) & 0x400) != 0 )
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 220);
  v9 = (unsigned int)(*(_DWORD *)(a1 + 216) * *(_DWORD *)(a1 + 208));
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v10, 0LL, &v9, 0x2000, 4) >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 220);
    *(_QWORD *)(a1 + 424) = v10;
    if ( (unsigned int)EtwpAllocateFreeBuffers(a1, v6) == v6 )
      return 0LL;
    v9 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 424, &v9, 0x8000LL);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  return 8LL;
}
