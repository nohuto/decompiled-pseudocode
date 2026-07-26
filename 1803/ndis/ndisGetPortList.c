/*
 * XREFs of ndisGetPortList @ 0x1C001A9A0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisGetPortList(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // r14
  __int64 *v8; // rsi
  char *v9; // rdx
  unsigned int v10; // r8d
  _QWORD *v11; // rcx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_q(36LL, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, a1);
  *a2 = 0LL;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_DWORD *)(a1 + 2760) + 1;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2360576;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 96 * v5, 0x6F70444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *(__int64 **)(a1 + 2728);
    memset(PoolWithTag, 0, 0x60uLL);
    v7[9] = 0;
    v9 = (char *)(v7 + 24);
    v7[10] = 0;
    v10 = 1;
    *(_QWORD *)v7 = v7 + 24;
    v7[8] = 4194688;
    v7[12] = *(_DWORD *)(a1 + 480);
    *((_QWORD *)v7 + 7) = *(_QWORD *)(a1 + 792);
    *((_QWORD *)v7 + 8) = *(_QWORD *)(a1 + 800);
    v7[18] = *(_DWORD *)(*(_QWORD *)(a1 + 4064) + 532LL);
    v11 = v7;
    v7[19] = *(_DWORD *)(a1 + 3336);
    v7[20] = *(_DWORD *)(a1 + 3340);
    v7[21] = *(_DWORD *)(a1 + 3344);
    v7[22] = *(_DWORD *)(a1 + 3348);
    while ( v8 != (__int64 *)(a1 + 2728) && v10 < v5 )
    {
      if ( *((_DWORD *)v8 + 4) == 4 )
      {
        v11 = v9;
        *(_QWORD *)v9 = v9 + 96;
        ++v10;
        *((_OWORD *)v9 + 2) = *(_OWORD *)(v8 + 3);
        *((_OWORD *)v9 + 3) = *(_OWORD *)(v8 + 5);
        *((_OWORD *)v9 + 4) = *(_OWORD *)(v8 + 7);
        *((_OWORD *)v9 + 5) = *(_OWORD *)(v8 + 9);
        v9 += 96;
      }
      v8 = (__int64 *)*v8;
    }
    *v11 = 0LL;
  }
  else
  {
    v4 = -1073741670;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), NewIrql);
  if ( !v4 )
    *a2 = v7;
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_qD(37LL, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, a1, v4);
  return v4;
}
