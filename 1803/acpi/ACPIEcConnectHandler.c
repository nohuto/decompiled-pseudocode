/*
 * XREFs of ACPIEcConnectHandler @ 0x1C007A390
 * Callers:
 *     ACPIEcInternalControl @ 0x1C0079D8C (ACPIEcInternalControl.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
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
  unsigned __int8 v11; // al
  int v12; // r12d
  PVOID PoolWithTag; // r15
  const void *v14; // rdx
  unsigned __int8 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // r8
  unsigned __int8 v19; // al
  unsigned __int8 v20; // cl
  __int64 v21; // rdx
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
    v11 = *(_BYTE *)(a1 + 446);
    if ( !v11 )
    {
      v12 = *(unsigned __int8 *)(a1 + 447);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)(v12 + 4), 0x45706341u);
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_19;
      }
      v14 = *(const void **)(a1 + 448);
      if ( v14 )
      {
        memmove(PoolWithTag, v14, 24LL * (unsigned __int8)v12);
        ExFreePoolWithTag(*(PVOID *)(a1 + 448), 0);
      }
      *(_BYTE *)(a1 + 447) += 4;
      v15 = 0;
      *(_QWORD *)(a1 + 448) = PoolWithTag;
      do
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24LL * (v12 + (unsigned int)v15)) = *(_BYTE *)(a1 + 446);
        v11 = v12 + v15++;
        *(_BYTE *)(a1 + 446) = v11;
      }
      while ( v15 < 4u );
    }
    v16 = *(_QWORD *)(a1 + 448);
    v17 = v11;
    v18 = 3LL * v11;
    *(_BYTE *)(a1 + 446) = *(_BYTE *)(v16 + 24LL * v11);
    if ( *(_BYTE *)(*v4 + a1 + 188) )
    {
      *(_DWORD *)(a1 + 4 * v8 + 124) &= ~v7;
      v19 = *(_BYTE *)(a1 + 444);
      if ( v19 )
      {
        v20 = *v4;
        while ( 1 )
        {
          v21 = v19;
          v19 = *(_BYTE *)(v19 + a1 + 188);
          if ( v19 == v20 )
            break;
          if ( !v19 )
            goto LABEL_18;
        }
        *(_BYTE *)(v21 + a1 + 188) = *(_BYTE *)(v20 + a1 + 188);
      }
    }
LABEL_18:
    *(_BYTE *)(*v4 + a1 + 188) = v17;
    *(_BYTE *)(v16 + 8 * v18) = 0;
    *(_BYTE *)(v16 + 8 * v18 + 1) = *v4;
    *(_QWORD *)(v16 + 8 * v18 + 8) = *((_QWORD *)v4 + 1);
    *(_QWORD *)(v16 + 8 * v18 + 16) = *((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 3) = v17;
  }
LABEL_19:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), NewIrql);
  MmUnlockPagableImageSection(ImageSectionHandle);
  return v9;
}
