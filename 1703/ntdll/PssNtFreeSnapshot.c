/*
 * XREFs of PssNtFreeSnapshot @ 0x180001CE0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800019F0 (PssNtCaptureSnapshot.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 *     sub_18010840C @ 0x18010840C (sub_18010840C.c)
 * Callees:
 *     PssNtValidateDescriptor @ 0x180001DE0 (PssNtValidateDescriptor.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PssNtFreeSnapshot(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v10 = *(void **)(a1 + 904);
      if ( v10 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      v3 = *(void **)(a1 + 904);
      if ( v3 )
      {
        RegionSize = 0LL;
        BaseAddress = v3;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        *(_QWORD *)(a1 + 904) = 0LL;
        *(_DWORD *)(a1 + 4) &= ~4u;
      }
    }
    v4 = *(void **)(a1 + 1008);
    if ( v4 )
    {
      ZwClose(v4);
      *(_QWORD *)(a1 + 1008) = 0LL;
    }
    v5 = *(void **)(a1 + 976);
    if ( v5 )
    {
      ZwClose(v5);
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    v6 = *(void **)(a1 + 920);
    if ( v6 )
    {
      ZwClose(v6);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v7 = *(void **)(a1 + 944);
    if ( v7 )
    {
      ZwClose(v7);
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    v8 = *(void **)(a1 + 896);
    if ( v8 )
    {
      ZwClose(v8);
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    v9 = *(void **)(a1 + 872);
    if ( v9 )
    {
      ZwClose(v9);
      *(_QWORD *)(a1 + 872) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      RegionSize = 0LL;
      BaseAddress = (PVOID)a1;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    return 0LL;
  }
  return result;
}
