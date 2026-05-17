/*
 * XREFs of RtlValidateProcessHeaps @ 0x1800EFB20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlValidateHeap @ 0x18004BEC0 (RtlValidateHeap.c)
 *     RtlGetProcessHeaps @ 0x1800906F0 (RtlGetProcessHeaps.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     _alloca_probe @ 0x1800A4DD0 (_alloca_probe.c)
 */

char RtlValidateProcessHeaps()
{
  char v0; // si
  unsigned int ProcessHeaps; // eax
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rbx
  bool v7; // al
  _BYTE *v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v10[4096]; // [rsp+40h] [rbp-C0h] BYREF

  v8 = v10;
  v0 = 1;
  ProcessHeaps = RtlGetProcessHeaps(0x200u, (__int64)v10);
  v4 = 0LL;
  v5 = ProcessHeaps;
  if ( ProcessHeaps > 0x200 )
  {
    v9 = 8LL * ProcessHeaps;
    v8 = 0LL;
    if ( (int)ZwAllocateVirtualMemory() < 0 )
      return 0;
    v5 = (unsigned int)RtlGetProcessHeaps(v5, (__int64)v8);
  }
  if ( (_DWORD)v5 )
  {
    do
    {
      v7 = RtlValidateHeap(*(_QWORD *)&v8[v4], 0LL, 0LL, v3);
      v4 += 8LL;
      LOBYTE(v2) = -v7;
      v0 &= v2;
      --v5;
    }
    while ( v5 );
  }
  if ( v8 != v10 )
    RtlpSecMemFreeVirtualMemory(v2, &v8, &v9, 0x8000LL);
  return v0;
}
