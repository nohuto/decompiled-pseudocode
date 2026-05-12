/*
 * XREFs of DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C00474A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     ShimGetMsftId @ 0x1C0047668 (ShimGetMsftId.c)
 */

void __fastcall DeviceIdShimStorageDeviceIdCompletionHook(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  int v4; // esi
  int v5; // edi
  __int64 v7; // r14
  __int64 v8; // r13
  int *PoolWithTag; // rbx
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  unsigned int v12; // eax
  char v13; // r14
  int *v14; // rsi
  _BYTE *v15; // rdx
  unsigned __int16 v16; // cx
  __int16 v17; // ax
  void *v18; // rcx
  _BYTE v19[24]; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+38h] [rbp-40h]
  int MsftId; // [rsp+90h] [rbp+18h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a2 + 48);
  v5 = 0;
  v7 = a2;
  v8 = *(_QWORD *)(v3 + 128);
  memset(v19, 0, sizeof(v19));
  v20 = 0;
  if ( v4 < 0 )
    goto LABEL_20;
  PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x48536152u);
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_20;
  }
  MsftId = ShimGetMsftId(v3, v19);
  v4 = MsftId;
  if ( MsftId < 0 )
    goto LABEL_19;
  memset(PoolWithTag, 0, a3);
  *PoolWithTag = 16;
  v10 = 0;
  PoolWithTag[1] = 12;
  v11 = *(unsigned __int8 *)(v8 + 3) | (*(unsigned __int8 *)(v8 + 2) << 8);
  v12 = 12;
  if ( !v11 )
    goto LABEL_14;
  v13 = 0;
  v14 = PoolWithTag + 3;
  do
  {
    v15 = (_BYTE *)(v10 + v8 + 4);
    v10 += (unsigned __int8)v15[3] + 4;
    if ( (v15[1] & 0x30) == 0 )
    {
      if ( v13 == 1 )
        continue;
      v13 = 1;
      v15 = v19;
    }
    ++v5;
    v16 = ((unsigned __int8)v15[3] + 20) & 0xFFFC;
    PoolWithTag[1] += v16;
    if ( PoolWithTag[1] <= a3 )
    {
      *v14 = *v15 & 0xF;
      v14[1] = v15[1] & 0xF;
      v14[3] = ((unsigned __int8)v15[1] >> 4) & 3;
      v17 = (unsigned __int8)v15[3];
      *((_WORD *)v14 + 5) = v16;
      *((_WORD *)v14 + 4) = v17;
      memmove(v14 + 4, v15 + 4, (unsigned __int8)v15[3]);
      v14 = (int *)((char *)v14 + *((unsigned __int16 *)v14 + 5));
    }
  }
  while ( v10 < v11 );
  v12 = PoolWithTag[1];
  v4 = MsftId;
  v7 = a2;
LABEL_14:
  if ( a3 >= 0xC )
    PoolWithTag[2] = v5;
  v18 = *(void **)(v7 + 24);
  if ( v12 >= a3 )
    v12 = a3;
  *(_QWORD *)(v7 + 56) = v12;
  memmove(v18, PoolWithTag, v12);
LABEL_19:
  ExFreePoolWithTag(PoolWithTag, 0x48536152u);
LABEL_20:
  *(_DWORD *)(v7 + 48) = v4;
}
