/*
 * XREFs of ACPIEcConnectHandler @ 0x1C009E380
 * Callers:
 *     ACPIEcInternalControl @ 0x1C009DD98 (ACPIEcInternalControl.c)
 * Callees:
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall ACPIEcConnectHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // r14
  int v6; // ebp
  unsigned __int8 v7; // bl
  __int64 v8; // r15
  unsigned int v9; // esi
  int v10; // ecx
  __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  PVOID v13; // r12
  const void *v14; // rdx
  __int64 v15; // rdx
  unsigned __int8 v16; // r8
  char v17; // al
  __int64 v18; // rbx
  __int64 v19; // r9
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // r10
  char v22; // dl
  KIRQL NewIrql; // [rsp+68h] [rbp+10h]
  PVOID ImageSectionHandle; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(unsigned __int8 **)(v2 + 32);
  if ( *(_DWORD *)(v2 + 16) < 0x20u )
    return 3221225507LL;
  v6 = 1 << (*v4 & 0x1F);
  v7 = *v4 >> 5;
  ImageSectionHandle = MmLockPagableDataSection(ACPIEcConnectHandler);
  v8 = v7;
  v9 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v10 = *(_DWORD *)(a1 + 4LL * v7 + 156);
  if ( (v10 & v6) == 0 )
  {
    v9 = 0;
    *(_DWORD *)(a1 + 4LL * v7 + 156) = v6 | v10;
    if ( !*(_BYTE *)(a1 + 446) )
    {
      v11 = *(unsigned __int8 *)(a1 + 447);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24 * (v11 + 4), 0x45706341u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_19;
      }
      v14 = *(const void **)(a1 + 448);
      if ( v14 )
      {
        memmove(PoolWithTag, v14, 24 * v11);
        ExFreePoolWithTag(*(PVOID *)(a1 + 448), 0);
      }
      *(_BYTE *)(a1 + 447) += 4;
      v15 = 24 * v11;
      v16 = 0;
      *(_QWORD *)(a1 + 448) = v13;
      do
      {
        *(_BYTE *)(v15 + *(_QWORD *)(a1 + 448)) = *(_BYTE *)(a1 + 446);
        v17 = v11 + v16++;
        *(_BYTE *)(a1 + 446) = v17;
        v15 += 24LL;
      }
      while ( v16 < 4u );
    }
    v18 = *(unsigned __int8 *)(a1 + 446);
    v19 = *(_QWORD *)(a1 + 448);
    *(_BYTE *)(a1 + 446) = *(_BYTE *)(v19 + 24 * v18);
    if ( *(_BYTE *)(*v4 + a1 + 188) )
    {
      *(_DWORD *)(a1 + 4 * v8 + 124) &= ~v6;
      v20 = *(_BYTE *)(a1 + 444);
      if ( v20 )
      {
        v21 = *v4;
        while ( 1 )
        {
          v22 = *(_BYTE *)(v20 + a1 + 188);
          if ( v22 == v21 )
            break;
          v20 = *(_BYTE *)(v20 + a1 + 188);
          if ( !v22 )
            goto LABEL_18;
        }
        *(_BYTE *)(v20 + a1 + 188) = *(_BYTE *)(v21 + a1 + 188);
      }
    }
LABEL_18:
    *(_BYTE *)(*v4 + a1 + 188) = v18;
    *(_BYTE *)(v19 + 24 * v18) = 0;
    *(_BYTE *)(v19 + 24 * v18 + 1) = *v4;
    *(_QWORD *)(v19 + 24 * v18 + 8) = *((_QWORD *)v4 + 1);
    *(_QWORD *)(v19 + 24 * v18 + 16) = *((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 3) = v18;
  }
LABEL_19:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), NewIrql);
  MmUnlockPagableImageSection(ImageSectionHandle);
  return v9;
}
