/*
 * XREFs of ndisDereferenceReceiveFilter @ 0x1C003B1A0
 * Callers:
 *     ndisClearReceiveFilter @ 0x1C003AF64 (ndisClearReceiveFilter.c)
 *     ndisClearReceiveFiltersForProtocol @ 0x1C00B3468 (ndisClearReceiveFiltersForProtocol.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B378 (ndisDereferenceReceiveQueue.c)
 */

__int64 __fastcall ndisDereferenceReceiveFilter(_QWORD *P)
{
  __int64 v1; // rdi
  unsigned int v3; // esi
  _DWORD *v4; // rbp
  __int64 v5; // r14
  char v6; // r15
  char v7; // r13
  bool v8; // r12
  KIRQL v9; // al
  _QWORD **v10; // rcx
  PVOID *v11; // rdx
  __int64 v12; // rax
  _QWORD **v13; // rcx
  PVOID *v14; // rax
  _QWORD **v15; // rdx
  PVOID *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]
  unsigned int v23; // [rsp+68h] [rbp+10h]

  v1 = P[7];
  v3 = *((_DWORD *)P + 12);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1856) = 2689222;
  --*((_DWORD *)P + 20);
  NewIrql = v9;
  v23 = *((_DWORD *)P + 20);
  if ( !v23 )
  {
    v6 = 1;
    *(_BYTE *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)(v1 + 3528)) &= ~(1 << (v3 & 7));
    v4 = (_DWORD *)P[9];
    if ( v4 )
    {
      v10 = (_QWORD **)P[2];
      if ( v10[1] != P + 2 || (v11 = (PVOID *)P[3], *v11 != P + 2) )
        __fastfail(3u);
      *v11 = v10;
      v7 = 1;
      v10[1] = v11;
      --v4[21];
    }
    v12 = P[8];
    v13 = (_QWORD **)*P;
    if ( v12 )
      v5 = P[8];
    v8 = v12 != 0;
    if ( v13[1] != P || (v14 = (PVOID *)P[1], *v14 != P) )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = v14;
    --*(_DWORD *)(v1 + 3540);
    if ( P[22] )
    {
      v15 = (_QWORD **)P[4];
      if ( v15[1] != P + 4 || (v16 = (PVOID *)P[5], *v16 != P + 4) )
        __fastfail(3u);
      *v16 = v15;
      v15[1] = v16;
      --*(_DWORD *)(P[22] + 864LL);
      v17 = P[22];
      v18 = *(_QWORD *)(v17 + 88);
      if ( *(_DWORD *)(v17 + 124) )
        --*(_DWORD *)(v18 + 656);
      else
        --*(_DWORD *)(v18 + 652);
    }
    ExFreePoolWithTag(P, 0);
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
  if ( v7 )
    ndisDereferenceReceiveQueue(v4);
  if ( v8 )
    ndisMDereferenceOpenUnlocked(v5, 11);
  if ( v6 )
    ndisDereferenceMiniport(v1, 0x46u, v19, v20);
  return v23;
}
