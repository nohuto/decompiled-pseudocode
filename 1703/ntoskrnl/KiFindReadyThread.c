/*
 * XREFs of KiFindReadyThread @ 0x14001ADF4
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400EBB90 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14001AEE8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiGetHeteroCpuPolicyThread @ 0x14001AF38 (KiGetHeteroCpuPolicyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14010EEB4 (KiCheckForMaxOverQuotaScb.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1401608C0 (KiRemoveThreadFromReadyQueue.c)
 */

_QWORD *__fastcall KiFindReadyThread(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx
  int v8; // r14d
  unsigned int v9; // eax
  _QWORD **v10; // r12
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // r13
  int HeteroCpuPolicyThread; // eax
  __int64 v15; // rcx
  _QWORD *result; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+78h] [rbp+10h]
  unsigned int v22; // [rsp+88h] [rbp+20h]

  v5 = a2 + 22912;
  if ( !a2 )
    v5 = a3 + 16;
  v8 = 64;
  v20 = *(_QWORD *)(a1 + 200);
  v19 = v5;
  while ( 2 )
  {
    _BitScanReverse(&v9, a4);
    a4 ^= 1 << v9;
    v10 = (_QWORD **)(v5 + 16LL * v9);
    v22 = v9;
    v11 = *v10;
    do
    {
      v12 = v11 - 27;
      v13 = v11[45];
      HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(v11 - 27, a1);
      if ( HeteroCpuPolicyThread )
      {
        v17 = *(_QWORD *)(a1 + 192);
        v18 = 3 * (HeteroCpuPolicyThread + 8LL);
        if ( (v13 & *(_QWORD *)(v17 + 8 * v18)) != 0 )
          v13 &= *(_QWORD *)(v17 + 8 * v18);
      }
      if ( (v13 & v20) != 0 )
      {
        v15 = v12[13];
        if ( !v15 || !(*(unsigned int *)(a1 + 216) + v15) || !(unsigned __int8)KiCheckForMaxOverQuotaScb() )
        {
          if ( a2 )
            KiRemoveThreadFromReadyQueue(a2, v11, v22);
          else
            KiRemoveThreadFromSharedReadyQueue(a3, v11 - 27, v22);
          result = v11 - 27;
          *((_DWORD *)v12 + 134) = *(_DWORD *)(a1 + 36);
          return result;
        }
      }
      v11 = (_QWORD *)*v11;
      --v8;
    }
    while ( v11 != v10 && v8 );
    if ( a4 && v8 )
    {
      v5 = v19;
      continue;
    }
    break;
  }
  return 0LL;
}
