/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x1C00097A0
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0009200 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0030760 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     RaidSrbExGetBidirectionalData @ 0x1C001EA34 (RaidSrbExGetBidirectionalData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001F340 (memmove.c)
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
  int v19; // ecx
  int v20; // ecx
  PMDL v21; // rcx
  PVOID v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  __int64 v28; // r9
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
    v23 = *(_DWORD *)(v4 + 8);
    Src = *(unsigned int **)(v4 + 16);
  }
  else
  {
    Src = *(unsigned int **)(v9 + 64);
    v23 = *(_DWORD *)(v9 + 60);
  }
  Size = v23;
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
      goto LABEL_20;
    }
  }
  v24 = *(_DWORD *)(v9 + 56);
  v25 = 0LL;
  if ( !v24 )
  {
LABEL_5:
    v14 = v13 <= 0x17;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v26 = *(unsigned int *)(v9 + 4 * v25 + 120);
    if ( (unsigned int)v26 < 0x80 )
      goto LABEL_40;
    v27 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v26 > (unsigned int)v27 )
      goto LABEL_40;
    v28 = (unsigned int)v26;
    v29 = *(_DWORD *)(v26 + v9);
    if ( v29 == 64 )
    {
      if ( !v13 && v28 + 40 <= v27 )
        goto LABEL_36;
      goto LABEL_40;
    }
    v18 = v29 - 65;
    if ( v18 )
      break;
    if ( !v13 && v28 + 56 <= v27 )
    {
LABEL_36:
      if ( *(_BYTE *)(v28 + v9 + 10) )
        v5 = *(_BYTE *)(v28 + v9 + 24);
      goto LABEL_8;
    }
LABEL_40:
    v25 = (unsigned int)(v25 + 1);
    if ( (unsigned int)v25 >= v24 )
      goto LABEL_5;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    if ( v19 == 30 && v13 == 23 && v28 + 24 <= v27 )
    {
      v6 = *(_BYTE *)(v28 + v9 + 8);
      goto LABEL_20;
    }
    goto LABEL_40;
  }
  if ( v13 || v28 + 40 > v27 )
    goto LABEL_40;
  if ( *(_DWORD *)(v28 + v9 + 12) )
    v5 = *(_BYTE *)(v28 + v9 + 32);
LABEL_8:
  v16 = *(_BYTE *)(a2 + 393);
  if ( v16 != 3 && ((unsigned __int8)(v16 - 1) > 1u || !v13 && ((v5 - 8) & 0x5D) == 0) )
    return 0LL;
LABEL_20:
  if ( !v10 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(*(_QWORD *)(a2 + 696) + 8LL)
                                                                             + 120LL))(
             *(_QWORD *)(a2 + 696),
             v10,
             v11,
             MemoryDescriptorList);
  v20 = result;
  if ( (int)result < 0 )
  {
    v22 = 0LL;
  }
  else
  {
    v21 = MemoryDescriptorList[0];
    a1[18] = MemoryDescriptorList[0];
    if ( v11 == v21 )
    {
      v22 = 0LL;
      v20 = -2147483622;
    }
    else
    {
      v22 = (v21->MdlFlags & 5) != 0
          ? v21->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v21, 0, MmCached, 0LL, 0, 0x40000020u);
      v20 = 0;
    }
    result = (unsigned int)v20;
  }
  if ( v20 == -2147483622 )
    return 0LL;
  if ( v20 >= 0 )
  {
    if ( v22 )
    {
      if ( (v34 & 0x80u) == 0 || a3 )
      {
        v31 = Size;
        if ( v13 == 23 && v6 == 9 && *Src )
          v31 = *Src;
        memmove(v22, Src, v31);
      }
      if ( *(_BYTE *)(v9 + 2) == 40 )
      {
        if ( a3 )
          *(_QWORD *)(v32 + 16) = v22;
        else
          *(_QWORD *)(v9 + 64) = v22;
      }
      else
      {
        *(_QWORD *)(v9 + 24) = v22;
      }
      return 0LL;
    }
    return 3221225626LL;
  }
  return result;
}
