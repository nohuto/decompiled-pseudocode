/*
 * XREFs of MiInitializeDriverPtes @ 0x1408AE288
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlSetAllBits @ 0x14007D2B0 (RtlSetAllBits.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiInitializeDriverPtes(__int64 a1)
{
  __int64 *v1; // rdx
  unsigned __int64 v2; // rsi
  __int64 *v3; // r8
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rbx

  v1 = (__int64 *)(a1 + 16);
  v2 = -1LL;
  v3 = *(__int64 **)(a1 + 16);
  v4 = 0LL;
  if ( v3 != (__int64 *)(a1 + 16) )
  {
    do
    {
      v5 = v3[6];
      v6 = v5 & 0xFFFFFFFFFFE00000uLL;
      if ( v2 <= (v5 & 0xFFFFFFFFFFE00000uLL) )
        v6 = v2;
      v2 = v6;
      v7 = *((unsigned int *)v3 + 16);
      v3 = (__int64 *)*v3;
      v8 = (v7 + v5 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      if ( v4 >= v8 )
        v8 = v4;
      v4 = v8;
    }
    while ( v3 != v1 );
  }
  v9 = (v4 - v2) >> 16;
  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, ((unsigned __int64)(unsigned int)v9 >> 3) + 40, 0x70446D4Du);
  v11 = result;
  if ( result )
  {
    v12 = result + 40;
    memset((void *)(result + 40), 0, (unsigned __int64)(unsigned int)v9 >> 3);
    *(_DWORD *)(v11 + 16) = v9;
    *(_QWORD *)(v11 + 24) = v12;
    RtlSetAllBits((PRTL_BITMAP)(v11 + 16));
    *(_DWORD *)(v11 + 32) = 0;
    *(_QWORD *)v11 = 0LL;
    result = 1LL;
    *(_DWORD *)(v11 + 36) = 1;
    *(_QWORD *)(v11 + 8) = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    qword_1403CB588[0] = v11;
  }
  return result;
}
