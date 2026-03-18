/*
 * XREFs of ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C001E810
 * Callers:
 *     HmgAllocateDcAttr @ 0x1C001DBCC (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C001E6B8 (HmgAllocateObjectAttr.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

PVOID __fastcall HmgAllocateSecureUserMemory(void **a1)
{
  HANDLE v2; // rax
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF
  SIZE_T Size; // [rsp+50h] [rbp+18h] BYREF
  HANDLE SecureHandle; // [rsp+58h] [rbp+20h]

  Address = 0LL;
  Size = 4096LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u) >= 0 )
  {
    v2 = MmSecureVirtualMemory(Address, Size, 4u);
    *a1 = v2;
    SecureHandle = v2;
    if ( v2 )
    {
      memset(Address, 0, Size);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, &Size, 0x8000u);
      return 0LL;
    }
  }
  return Address;
}
