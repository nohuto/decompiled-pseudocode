/*
 * XREFs of RtlValidateProcessHeaps @ 0x1800EFD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     RtlGetProcessHeaps @ 0x180090580 (RtlGetProcessHeaps.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
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
      v7 = RtlValidateHeap(*(_QWORD *)&v8[v4], 0, 0LL, v3);
      v4 += 8LL;
      LOBYTE(v2) = -v7;
      v0 &= v2;
      --v5;
    }
    while ( v5 );
  }
  if ( v8 != v10 )
    sub_18001E5E0(v2, &v8, &v9, 0x8000LL);
  return v0;
}
