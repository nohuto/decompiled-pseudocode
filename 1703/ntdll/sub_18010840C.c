/*
 * XREFs of sub_18010840C @ 0x18010840C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180106790 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x1800A5A40 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18010840C(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v6; // r12
  signed int VirtualMemory; // ebx
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  _QWORD v27[142]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v27, 0, 0x468uLL);
  v6 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v6 <= 0xFFFFFFFF )
  {
    VirtualMemory = (unsigned int)v6 >= 0xFFFFFB98 ? 0xC0000095 : 0;
    if ( (unsigned int)(v6 + 1128) >= 0x468 )
    {
      v8 = 8LL;
      v9 = v27;
      v10 = (_OWORD *)a1;
      do
      {
        v11 = v10[1];
        *v9 = *v10;
        v12 = v10[2];
        v9[1] = v11;
        v13 = v10[3];
        v9[2] = v12;
        v14 = v10[4];
        v9[3] = v13;
        v15 = v10[5];
        v9[4] = v14;
        v16 = v10[6];
        v9[5] = v15;
        v17 = v10[7];
        v10 += 8;
        v9[6] = v16;
        v9 += 8;
        *(v9 - 1) = v17;
        --v8;
      }
      while ( v8 );
      v18 = *(_QWORD *)(a1 + 872);
      v19 = v10[1];
      *v9 = *v10;
      v20 = v10[2];
      v9[1] = v19;
      v21 = v10[3];
      v9[2] = v20;
      v22 = v10[4];
      v9[3] = v21;
      v23 = v10[5];
      v24 = *((_QWORD *)v10 + 12);
      v9[4] = v22;
      v9[5] = v23;
      *((_QWORD *)v9 + 12) = v24;
      v27[109] = 0LL;
      v27[112] = 0LL;
      v27[115] = 0LL;
      v27[118] = 0LL;
      v27[122] = 0LL;
      v27[126] = 0LL;
      if ( v18 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_29;
      }
      if ( *(_QWORD *)(a1 + 896) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_29;
      }
      if ( *(_QWORD *)(a1 + 920) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_29;
      }
      if ( *(_QWORD *)(a1 + 944) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_29;
      }
      if ( *(_QWORD *)(a1 + 976) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_29;
      }
      if ( *(_QWORD *)(a1 + 1008) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_29;
      }
      VirtualMemory = ZwAllocateVirtualMemory();
      if ( VirtualMemory < 0 )
        goto LABEL_29;
      HIDWORD(v27[0]) = HIDWORD(v27[0]) & 0xFFFFFFF8 | 1;
      if ( *(_QWORD *)(a1 + 904) )
        v27[113] = 1128LL;
      if ( *(_WORD *)(a1 + 280) )
        v27[36] = 296LL;
      VirtualMemory = ZwWriteVirtualMemory();
      if ( VirtualMemory < 0 )
        goto LABEL_29;
      if ( *(_QWORD *)(a1 + 904) )
      {
        VirtualMemory = ZwWriteVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_29;
      }
      VirtualMemory = 0;
      *a3 = 0LL;
    }
    if ( VirtualMemory >= 0 )
      goto LABEL_41;
    goto LABEL_29;
  }
  VirtualMemory = -1073741675;
LABEL_29:
  if ( v27[126] )
    ZwDuplicateObject();
  if ( v27[122] )
    ZwDuplicateObject();
  if ( v27[115] )
    ZwDuplicateObject();
  if ( v27[118] )
    ZwDuplicateObject();
  if ( v27[112] )
    ZwDuplicateObject();
  if ( v27[109] )
    ZwDuplicateObject();
LABEL_41:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)VirtualMemory;
}
