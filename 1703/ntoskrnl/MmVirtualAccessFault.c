/*
 * XREFs of MmVirtualAccessFault @ 0x1406B83CC
 * Callers:
 *     VmAccessFault @ 0x1402519D0 (VmAccessFault.c)
 *     PspIumGetPhysicalPage @ 0x1406E4414 (PspIumGetPhysicalPage.c)
 * Callees:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiInitializeFaultVaListCore @ 0x140213B60 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MmVirtualAccessFault(__int64 a1, unsigned int a2, __int64 *a3)
{
  ULONG_PTR v3; // rdi
  unsigned __int64 v5; // r15
  int v6; // ebx
  unsigned __int8 v7; // r8
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-88h] BYREF
  char v10; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[7]; // [rsp+31h] [rbp-77h] BYREF
  __int64 v12; // [rsp+58h] [rbp-50h]
  int v13; // [rsp+60h] [rbp-48h]

  v3 = a2 & 2 | 0x10LL;
  if ( (a2 & 4) == 0 )
    v3 = a2 & 2;
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9[1] = 4096LL;
  v6 = (a2 >> 1) & 4;
  while ( 1 )
  {
    MiInitializeFaultVaListCore((__int64)&v10, (__int64)v9, 1LL, 5);
    v12 = -1LL;
    v13 = v6 | (v3 >> 3) & 2 | (v3 >> 1) & 1 | v13 & 0xFFFFFFF8;
    result = MmAccessFault(v3, v5, v7, (ULONG_PTR)v11);
    if ( (int)result < 0 )
      break;
    if ( v12 != -1 )
    {
      *a3 = v12;
      return 0LL;
    }
  }
  return result;
}
