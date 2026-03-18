/*
 * XREFs of ACPIEcConnectHandler @ 0x1C00A1360
 * Callers:
 *     ACPIEcInternalControl @ 0x1C00A0D58 (ACPIEcInternalControl.c)
 * Callees:
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall ACPIEcConnectHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // rsi
  unsigned __int64 v6; // r14
  int v7; // ebp
  unsigned __int64 v8; // r14
  unsigned int v9; // edi
  int v10; // ecx
  int v11; // r12d
  PVOID PoolWithTag; // r15
  const void *v13; // rdx
  unsigned __int8 v14; // r8
  char v15; // al
  __int64 v16; // r11
  __int64 v17; // r9
  unsigned __int8 v18; // al
  unsigned __int8 v19; // cl
  __int64 v20; // rdx
  KIRQL NewIrql; // [rsp+68h] [rbp+10h]
  PVOID ImageSectionHandle; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(unsigned __int8 **)(v2 + 32);
  if ( *(_DWORD *)(v2 + 16) < 0x20u )
    return 3221225507LL;
  v6 = *v4;
  v7 = 1 << (*v4 & 0x1F);
  ImageSectionHandle = MmLockPagableDataSection(ACPIEcConnectHandler);
  v8 = v6 >> 5;
  v9 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v10 = *(_DWORD *)(a1 + 4 * v8 + 156);
  if ( (v10 & v7) == 0 )
  {
    v9 = 0;
    *(_DWORD *)(a1 + 4 * v8 + 156) = v7 | v10;
    if ( !*(_BYTE *)(a1 + 446) )
    {
      v11 = *(unsigned __int8 *)(a1 + 447);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)(v11 + 4), 0x45706341u);
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_19;
      }
      v13 = *(const void **)(a1 + 448);
      if ( v13 )
      {
        memmove(PoolWithTag, v13, 24LL * (unsigned __int8)v11);
        ExFreePoolWithTag(*(PVOID *)(a1 + 448), 0);
      }
      *(_BYTE *)(a1 + 447) += 4;
      v14 = 0;
      *(_QWORD *)(a1 + 448) = PoolWithTag;
      do
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24LL * (v11 + (unsigned int)v14)) = *(_BYTE *)(a1 + 446);
        v15 = v11 + v14++;
        *(_BYTE *)(a1 + 446) = v15;
      }
      while ( v14 < 4u );
    }
    v16 = *(unsigned __int8 *)(a1 + 446);
    v17 = *(_QWORD *)(a1 + 448);
    *(_BYTE *)(a1 + 446) = *(_BYTE *)(v17 + 24 * v16);
    if ( *(_BYTE *)(*v4 + a1 + 188) )
    {
      *(_DWORD *)(a1 + 4 * v8 + 124) &= ~v7;
      v18 = *(_BYTE *)(a1 + 444);
      if ( v18 )
      {
        v19 = *v4;
        while ( 1 )
        {
          v20 = v18;
          v18 = *(_BYTE *)(v18 + a1 + 188);
          if ( v18 == v19 )
            break;
          if ( !v18 )
            goto LABEL_18;
        }
        *(_BYTE *)(v20 + a1 + 188) = *(_BYTE *)(v19 + a1 + 188);
      }
    }
LABEL_18:
    *(_BYTE *)(*v4 + a1 + 188) = v16;
    *(_BYTE *)(v17 + 24 * v16) = 0;
    *(_BYTE *)(v17 + 24 * v16 + 1) = *v4;
    *(_QWORD *)(v17 + 24 * v16 + 8) = *((_QWORD *)v4 + 1);
    *(_QWORD *)(v17 + 24 * v16 + 16) = *((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 3) = v16;
  }
LABEL_19:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), NewIrql);
  MmUnlockPagableImageSection(ImageSectionHandle);
  return v9;
}
