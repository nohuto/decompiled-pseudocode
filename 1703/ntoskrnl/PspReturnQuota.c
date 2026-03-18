/*
 * XREFs of PspReturnQuota @ 0x1400DC8F0
 * Callers:
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnPoolQuota @ 0x140025000 (PsReturnPoolQuota.c)
 *     PsReturnProcessQuota @ 0x140062C84 (PsReturnProcessQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPageFileQuota @ 0x140499FE4 (PsReturnProcessPageFileQuota.c)
 *     PsChargeSharedPoolQuota @ 0x1404F4F98 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1404F5AC0 (PsReturnSharedPoolQuota.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     ObpFreeObject @ 0x140520A70 (ObpFreeObject.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14002C5F0 (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

signed __int64 __fastcall PspReturnQuota(char *a1, ULONG_PTR a2, signed int a3, ULONG_PTR a4)
{
  __int64 v6; // rsi
  void *v8; // r12
  ULONG_PTR v9; // r15
  char v10; // r13
  volatile signed __int64 *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  char *v14; // r8
  unsigned __int64 v15; // r9
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v17; // r8
  signed __int64 v18; // rdx
  bool v19; // zf
  signed __int64 result; // rax
  __int64 v21; // r8

  v6 = (__int64)a3 << 7;
  v8 = a1;
  v9 = a3;
  v10 = PspResourceFlags[8 * a3];
  v11 = (volatile signed __int64 *)&a1[v6];
  _m_prefetchw(&a1[v6]);
  v12 = *(_QWORD *)&a1[v6];
  v13 = *(_QWORD *)&a1[v6 + 64];
  if ( *(_QWORD *)&a1[v6 + 80] )
  {
    v14 = (char *)&PspQuotaExpansionDescriptors + 56 * a3;
    if ( v13 > v12 )
    {
      v15 = *((_QWORD *)v14 + 1);
      if ( v13 - v12 > v15 )
      {
        if ( v15 > a4 )
          v15 = a4;
        if ( v13 == _InterlockedCompareExchange64(v11 + 8, v13 - v15, v13)
          && _InterlockedExchangeAdd64(v11 + 9, v15) + v15 > *((_QWORD *)v14 + 1) )
        {
          v21 = _InterlockedExchange64(v11 + 9, 0LL);
          if ( v21 )
            PspReturnResourceQuota(a3, (__int64)v11, v21, 0);
        }
      }
    }
  }
  BugCheckParameter4 = a4;
  while ( 1 )
  {
    do
    {
      if ( BugCheckParameter4 >= v12 )
      {
        v17 = v12;
        v18 = 0LL;
      }
      else
      {
        v17 = BugCheckParameter4;
        v18 = v12 - BugCheckParameter4;
      }
      result = _InterlockedCompareExchange64(v11, v18, v12);
      v19 = v12 == result;
      v12 = result;
    }
    while ( !v19 );
    BugCheckParameter4 -= v17;
    if ( !BugCheckParameter4 )
      break;
    if ( v8 == &PspSystemQuotaBlock )
      KeBugCheckEx(0x21u, a2, v9, a4, BugCheckParameter4);
    v8 = &PspSystemQuotaBlock;
    v11 = (volatile signed __int64 *)((char *)&PspSystemQuotaBlock + v6);
    _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
    v12 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v6);
  }
  if ( a2 )
  {
    if ( (v10 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8 * v9 + 784), -(__int64)a4);
  }
  return result;
}
