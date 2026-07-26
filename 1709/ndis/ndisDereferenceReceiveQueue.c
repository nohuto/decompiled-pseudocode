/*
 * XREFs of ndisDereferenceReceiveQueue @ 0x1C0039FEC
 * Callers:
 *     ndisDereferenceReceiveFilter @ 0x1C0039E14 (ndisDereferenceReceiveFilter.c)
 *     ndisFreeReceiveQueue @ 0x1C003A1AC (ndisFreeReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003B5FC (ndisSetReceiveFilter.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 */

__int64 __fastcall ndisDereferenceReceiveQueue(_QWORD *P)
{
  __int64 v1; // rdi
  unsigned int v3; // ebp
  __int64 v4; // rsi
  char v5; // r14
  char v6; // r15
  KIRQL v7; // al
  bool v8; // zf
  unsigned int v9; // r12d
  _QWORD **v10; // rcx
  PVOID *v11; // rdx
  _QWORD *v12; // rax
  PVOID *v13; // rcx
  KIRQL v15; // [rsp+50h] [rbp+8h]

  v1 = P[8];
  v3 = *((_DWORD *)P + 12);
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1856) = 2687740;
  v8 = (*((_DWORD *)P + 20))-- == 1;
  v9 = *((_DWORD *)P + 20);
  v15 = v7;
  if ( v8 )
  {
    v5 = 1;
    *(_BYTE *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)(v1 + 3496)) &= ~(1 << (v3 & 7));
    v4 = P[9];
    if ( v4 )
    {
      v10 = (_QWORD **)P[2];
      if ( v10[1] != P + 2 || (v11 = (PVOID *)P[3], *v11 != P + 2) )
        __fastfail(3u);
      *v11 = v10;
      v6 = 1;
      v10[1] = v11;
      --*(_DWORD *)(v4 + 848);
    }
    v12 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P || (v13 = (PVOID *)P[1], *v13 != P) )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    --*(_DWORD *)(v1 + 3508);
    ExFreePoolWithTag(P, 0);
    v7 = v15;
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
  if ( v6 )
    ndisMDereferenceOpenUnlocked(v4);
  if ( v5 )
    ndisDereferenceMiniport(v1, 0x45u);
  return v9;
}
