/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x1C000A900
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C000A2D0 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C002F8D0 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     RaidSrbExGetBidirectionalData @ 0x1C001DA2C (RaidSrbExGetBidirectionalData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 */

__int64 __fastcall RaidXrbSetDataBufferAddress(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  char v5; // si
  char v6; // r12
  __int64 v9; // rbx
  __int64 v10; // rdx
  struct _MDL *v11; // r13
  unsigned __int8 v12; // al
  unsigned int v13; // ebp
  bool v14; // cc
  int v15; // eax
  char v16; // al
  __int64 result; // rax
  int v18; // ecx
  PMDL v19; // rcx
  PVOID v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // r11d
  __int64 v23; // r10
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  __int64 BidirectionalData; // rax
  unsigned int v31; // ecx
  __int64 v32; // [rsp+30h] [rbp-58h]
  PMDL MemoryDescriptorList[9]; // [rsp+40h] [rbp-48h] BYREF
  int v34; // [rsp+90h] [rbp+8h]
  unsigned int Size; // [rsp+A0h] [rbp+18h]
  unsigned int *Src; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v32 = 0LL;
  v9 = a1[21];
  if ( a3 )
  {
    BidirectionalData = RaidSrbExGetBidirectionalData(a1[21]);
    v10 = a1[19];
    v4 = BidirectionalData;
    v11 = (struct _MDL *)a1[17];
    v32 = BidirectionalData;
  }
  else
  {
    v10 = a1[14];
    v11 = (struct _MDL *)a1[13];
  }
  v12 = *(_BYTE *)(v9 + 2);
  if ( v12 != 40 )
  {
    v5 = *(_BYTE *)(v9 + 72);
    v6 = *(_BYTE *)(v9 + 4);
    v13 = v12;
    Src = *(unsigned int **)(v9 + 24);
    Size = *(_DWORD *)(v9 + 16);
    v34 = *(_DWORD *)(v9 + 12);
    goto LABEL_5;
  }
  v13 = *(_DWORD *)(v9 + 20);
  v34 = *(_DWORD *)(v9 + 24);
  if ( v4 && a3 )
  {
    v21 = *(_DWORD *)(v4 + 8);
    Src = *(unsigned int **)(v4 + 16);
  }
  else
  {
    Src = *(unsigned int **)(v9 + 64);
    v21 = *(_DWORD *)(v9 + 60);
  }
  Size = v21;
  if ( v13 )
  {
    v14 = v13 <= 0x17;
    if ( v13 != 23 )
    {
LABEL_6:
      if ( !v14 )
        goto LABEL_8;
      v15 = 8389124;
      if ( !_bittest(&v15, v13) )
        goto LABEL_8;
      goto LABEL_9;
    }
  }
  v22 = *(_DWORD *)(v9 + 56);
  v23 = 0LL;
  if ( !v22 )
  {
LABEL_5:
    v14 = v13 <= 0x17;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v24 = *(unsigned int *)(v9 + 4 * v23 + 120);
    if ( (unsigned int)v24 < 0x80 )
      goto LABEL_40;
    v25 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v24 > (unsigned int)v25 )
      goto LABEL_40;
    v26 = (unsigned int)v24;
    v27 = *(_DWORD *)(v24 + v9);
    if ( v27 == 64 )
    {
      if ( !v13 && v26 + 40 <= v25 )
        goto LABEL_30;
      goto LABEL_40;
    }
    v28 = v27 - 65;
    if ( v28 )
      break;
    if ( !v13 && v26 + 56 <= v25 )
    {
LABEL_30:
      if ( *(_BYTE *)(v26 + v9 + 10) )
        v5 = *(_BYTE *)(v26 + v9 + 24);
      goto LABEL_8;
    }
LABEL_40:
    v23 = (unsigned int)(v23 + 1);
    if ( (unsigned int)v23 >= v22 )
      goto LABEL_5;
  }
  v29 = v28 - 1;
  if ( v29 )
  {
    if ( v29 == 30 && v13 == 23 && v26 + 24 <= v25 )
    {
      v6 = *(_BYTE *)(v26 + v9 + 8);
      goto LABEL_9;
    }
    goto LABEL_40;
  }
  if ( v13 || v26 + 40 > v25 )
    goto LABEL_40;
  if ( *(_DWORD *)(v26 + v9 + 12) )
    v5 = *(_BYTE *)(v26 + v9 + 32);
LABEL_8:
  v16 = *(_BYTE *)(a2 + 393);
  if ( v16 != 3 && ((unsigned __int8)(v16 - 1) > 1u || !v13 && ((v5 - 8) & 0x5D) == 0) )
    return 0LL;
LABEL_9:
  if ( !v10 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(*(_QWORD *)(a2 + 696) + 8LL)
                                                                             + 120LL))(
             *(_QWORD *)(a2 + 696),
             v10,
             v11,
             MemoryDescriptorList);
  v18 = result;
  if ( (int)result < 0 )
  {
    v20 = 0LL;
  }
  else
  {
    v19 = MemoryDescriptorList[0];
    a1[18] = MemoryDescriptorList[0];
    if ( v11 == v19 )
    {
      v20 = 0LL;
      v18 = -2147483622;
    }
    else
    {
      v20 = (v19->MdlFlags & 5) != 0
          ? v19->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v19, 0, MmCached, 0LL, 0, 0x40000020u);
      v18 = 0;
    }
    result = (unsigned int)v18;
  }
  if ( v18 == -2147483622 )
    return 0LL;
  if ( v18 >= 0 )
  {
    if ( !v20 )
      return 3221225626LL;
    if ( (v34 & 0x80u) == 0 || a3 )
    {
      v31 = Size;
      if ( v13 == 23 && v6 == 9 && *Src )
        v31 = *Src;
      memmove(v20, Src, v31);
    }
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      if ( a3 )
        *(_QWORD *)(v32 + 16) = v20;
      else
        *(_QWORD *)(v9 + 64) = v20;
    }
    else
    {
      *(_QWORD *)(v9 + 24) = v20;
    }
    return 0LL;
  }
  return result;
}
