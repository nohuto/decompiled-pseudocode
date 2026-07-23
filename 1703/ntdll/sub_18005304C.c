/*
 * XREFs of sub_18005304C @ 0x18005304C
 * Callers:
 *     sub_180052EDC @ 0x180052EDC (sub_180052EDC.c)
 *     sub_180060180 @ 0x180060180 (sub_180060180.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18005304C(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // r14d
  unsigned __int32 v6; // eax
  _DWORD *v7; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _DWORD *v10; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  RegionSize = *(unsigned int *)(a1 + 208);
  if ( a2 )
  {
    while ( 1 )
    {
      BaseAddress = 0LL;
      v6 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 224));
      if ( v6 > *(_DWORD *)(a1 + 216) )
        break;
      BaseAddress = (PVOID)(*(_QWORD *)(a1 + 424) + RegionSize * (v6 - 1));
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        break;
      v7 = BaseAddress;
      memset(BaseAddress, 0, 0x48uLL);
      v7[2] = 72;
      *v7 = *(_DWORD *)(a1 + 208);
      *((_WORD *)v7 + 21) = *(_WORD *)(a1 + 20) | 0x8000;
      RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
      v8 = *(_QWORD **)(a1 + 240);
      v9 = (char *)BaseAddress + 56;
      if ( *v8 != a1 + 232 )
        __fastfail(3u);
      *v9 = a1 + 232;
      v9[1] = v8;
      *v8 = v9;
      v10 = BaseAddress;
      *(_QWORD *)(a1 + 240) = v9;
      v10[11] = 0;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_QWORD *)v10 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v10 + 8;
      *(_QWORD *)(a1 + 256) = v10 + 8;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
      ++v2;
      if ( ++v3 >= a2 )
        return v2;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 224));
  }
  return v2;
}
