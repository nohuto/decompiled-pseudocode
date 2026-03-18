/*
 * XREFs of PspChargeQuota @ 0x1400D0F50
 * Callers:
 *     PsChargeProcessPoolQuota @ 0x140018870 (PsChargeProcessPoolQuota.c)
 *     PsChargeProcessQuota @ 0x140063F28 (PsChargeProcessQuota.c)
 *     PsChargeProcessPagedPoolQuota @ 0x14042C1C0 (PsChargeProcessPagedPoolQuota.c)
 *     PsChargeSharedPoolQuota @ 0x1404F4F98 (PsChargeSharedPoolQuota.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspExpandQuota @ 0x14002C68C (PspExpandQuota.c)
 */

__int64 __fastcall PspChargeQuota(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 *v7; // rbx
  char v8; // r12
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 i; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  v7 = (unsigned __int64 *)(a1 + ((__int64)a3 << 7));
  v8 = PspResourceFlags[8 * a3];
  _m_prefetchw(v7);
  v9 = *v7;
  _InterlockedOr(v22, 0);
  while ( 2 )
  {
    v10 = v7[8];
LABEL_3:
    for ( i = v10; ; v10 = i )
    {
      v11 = v9 + a4;
      if ( v9 + a4 < v9 )
        return *(unsigned int *)&PspResourceFlags[8 * v4 + 4];
      if ( v11 <= v10 )
        break;
      if ( (v8 & 1) == 0 || !v7[10] )
        return *(unsigned int *)&PspResourceFlags[8 * v4 + 4];
      v21 = _InterlockedExchange64((volatile __int64 *)v7 + 9, 0LL);
      if ( v21 )
      {
        v10 = v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 8, v21);
        goto LABEL_3;
      }
      if ( !PspExpandQuota(v4, (__int64)v7, v9, a4, &i) )
        return *(unsigned int *)&PspResourceFlags[8 * v4 + 4];
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v11, v9);
    v12 = v9 == v13;
    v9 = v13;
    if ( !v12 )
      continue;
    break;
  }
  _m_prefetchw(v7 + 1);
  v14 = v7[1];
  if ( v11 > v14 )
  {
    do
    {
      v20 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 1, v11, v14);
    }
    while ( v14 != v20 && v11 > v14 );
  }
  if ( a2 )
  {
    if ( (v8 & 4) != 0 )
    {
      v16 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8 * v4 + 784), a4);
      v17 = a2 + 8 * v4;
      _m_prefetchw((const void *)(v17 + 800));
      v18 = *(_QWORD *)(v17 + 800);
      if ( v16 > v18 )
      {
        do
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 800), v16, v18);
        }
        while ( v18 != v19 && v16 > v18 );
      }
    }
  }
  return 0LL;
}
