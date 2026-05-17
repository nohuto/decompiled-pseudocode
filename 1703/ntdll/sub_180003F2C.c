/*
 * XREFs of sub_180003F2C @ 0x180003F2C
 * Callers:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 * Callees:
 *     sub_180003EF0 @ 0x180003EF0 (sub_180003EF0.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180003F2C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        void **a11)
{
  int v12; // ebx
  __int64 v13; // r8
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  size_t Size[3]; // [rsp+40h] [rbp-18h] BYREF

  Size[0] = 12LL;
  v15 = 0LL;
  if ( !a11 )
    return 3221225485LL;
  v12 = ZwAllocateVirtualMemory(-1LL, &v15, 0LL, Size, 4096, 4);
  if ( v12 < 0 )
    goto LABEL_9;
  if ( v15 )
  {
    memset(v15, 0, Size[0]);
    LOBYTE(v13) = 1;
    v12 = RtlInitializeSid(v15, a1, v13);
    if ( v12 >= 0 )
    {
      *((_DWORD *)v15 + 2) = 18;
      *a11 = v15;
      v12 = 0;
    }
  }
  if ( v12 < 0 )
  {
LABEL_9:
    if ( v15 )
      sub_180003EF0((__int64)v15);
  }
  return (unsigned int)v12;
}
