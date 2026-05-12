/*
 * XREFs of DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0046760
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     ShimGetMsftId @ 0x1C0046920 (ShimGetMsftId.c)
 */

void __fastcall DeviceIdShimStorageDeviceIdCompletionHook(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // r13
  int *PoolWithTag; // rbx
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  char v12; // r14
  int *v13; // rbp
  _BYTE *v14; // rdx
  unsigned __int16 v15; // cx
  __int16 v16; // ax
  void *v17; // rcx
  _BYTE v18[24]; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+38h] [rbp-40h]
  int MsftId; // [rsp+90h] [rbp+18h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a2 + 48);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  v8 = *(_QWORD *)(v3 + 128);
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  if ( v4 < 0 )
    goto LABEL_20;
  PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x48536152u);
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_20;
  }
  MsftId = ShimGetMsftId(v3, v18);
  v4 = MsftId;
  if ( MsftId < 0 )
    goto LABEL_19;
  memset(PoolWithTag, 0, v6);
  *PoolWithTag = 16;
  v10 = 0;
  PoolWithTag[1] = 12;
  v11 = *(unsigned __int8 *)(v8 + 3) | (*(unsigned __int8 *)(v8 + 2) << 8);
  if ( !v11 )
    goto LABEL_14;
  v12 = 0;
  v13 = PoolWithTag + 3;
  do
  {
    v14 = (_BYTE *)(v10 + v8 + 4);
    v10 += (unsigned __int8)v14[3] + 4;
    if ( (v14[1] & 0x30) == 0 )
    {
      if ( v12 == 1 )
        continue;
      v12 = 1;
      v14 = v18;
    }
    ++v5;
    v15 = ((unsigned __int8)v14[3] + 20) & 0xFFFC;
    PoolWithTag[1] += v15;
    if ( PoolWithTag[1] <= v6 )
    {
      *v13 = *v14 & 0xF;
      v13[1] = v14[1] & 0xF;
      v13[3] = ((unsigned __int8)v14[1] >> 4) & 3;
      v16 = (unsigned __int8)v14[3];
      *((_WORD *)v13 + 5) = v15;
      *((_WORD *)v13 + 4) = v16;
      memmove(v13 + 4, v14 + 4, (unsigned __int8)v14[3]);
      v13 = (int *)((char *)v13 + *((unsigned __int16 *)v13 + 5));
    }
  }
  while ( v10 < v11 );
  v4 = MsftId;
  v7 = a2;
LABEL_14:
  if ( v6 >= 0xC )
    PoolWithTag[2] = v5;
  v17 = *(void **)(v7 + 24);
  if ( PoolWithTag[1] < v6 )
    v6 = PoolWithTag[1];
  *(_QWORD *)(v7 + 56) = v6;
  memmove(v17, PoolWithTag, v6);
LABEL_19:
  ExFreePoolWithTag(PoolWithTag, 0x48536152u);
LABEL_20:
  *(_DWORD *)(v7 + 48) = v4;
}
