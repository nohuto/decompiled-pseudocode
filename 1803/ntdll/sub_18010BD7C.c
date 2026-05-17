/*
 * XREFs of sub_18010BD7C @ 0x18010BD7C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180109C80 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800848E0 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x18009B200 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18010BD7C(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // r13d
  signed int VirtualMemory; // ebx
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _QWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  _QWORD v29[144]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v29, 0, 0x478uLL);
  v6 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = *(_DWORD *)(a1 + 888) << 6;
  VirtualMemory = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 > 0xFFFFFFFF || (VirtualMemory = v7 >= 0xFFFFFB88 ? 0xC0000095 : 0, v7 + 1144 < 0x478) )
  {
LABEL_31:
    if ( VirtualMemory >= 0 )
      goto LABEL_46;
    goto LABEL_32;
  }
  v9 = 8LL;
  v10 = (_OWORD *)a1;
  v11 = v29;
  do
  {
    v12 = v10[1];
    *(_OWORD *)v11 = *v10;
    v13 = v10[2];
    *((_OWORD *)v11 + 1) = v12;
    v14 = v10[3];
    *((_OWORD *)v11 + 2) = v13;
    v15 = v10[4];
    *((_OWORD *)v11 + 3) = v14;
    v16 = v10[5];
    *((_OWORD *)v11 + 4) = v15;
    v17 = v10[6];
    *((_OWORD *)v11 + 5) = v16;
    v18 = v10[7];
    v10 += 8;
    *((_OWORD *)v11 + 6) = v17;
    v11 += 16;
    *((_OWORD *)v11 - 1) = v18;
    --v9;
  }
  while ( v9 );
  v19 = *(_QWORD *)(a1 + 872);
  v20 = v10[1];
  *(_OWORD *)v11 = *v10;
  v21 = v10[2];
  *((_OWORD *)v11 + 1) = v20;
  v22 = v10[3];
  *((_OWORD *)v11 + 2) = v21;
  v23 = v10[4];
  *((_OWORD *)v11 + 3) = v22;
  v24 = v10[5];
  *((_OWORD *)v11 + 4) = v23;
  v25 = v10[6];
  v26 = *((_QWORD *)v10 + 14);
  *((_OWORD *)v11 + 5) = v24;
  *((_OWORD *)v11 + 6) = v25;
  v11[14] = v26;
  v29[109] = 0LL;
  v29[112] = 0LL;
  v29[115] = 0LL;
  v29[118] = 0LL;
  v29[122] = 0LL;
  v29[126] = 0LL;
  v29[141] = 0LL;
  if ( !v19 || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
  {
    if ( !*(_QWORD *)(a1 + 896) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
    {
      if ( !*(_QWORD *)(a1 + 920) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
      {
        if ( !*(_QWORD *)(a1 + 944) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
        {
          if ( !*(_QWORD *)(a1 + 976) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
          {
            if ( !*(_QWORD *)(a1 + 1008) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
            {
              if ( !*(_QWORD *)(a1 + 1128) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
              {
                VirtualMemory = ZwAllocateVirtualMemory();
                if ( VirtualMemory >= 0 )
                {
                  HIDWORD(v29[0]) = HIDWORD(v29[0]) & 0xFFFFFFF8 | 1;
                  if ( *(_QWORD *)(a1 + 904) )
                    v29[113] = 1144LL;
                  if ( *(_WORD *)(a1 + 280) )
                    v29[36] = 296LL;
                  VirtualMemory = ZwWriteVirtualMemory();
                  if ( VirtualMemory >= 0 )
                  {
                    if ( !*(_QWORD *)(a1 + 904) || (VirtualMemory = ZwWriteVirtualMemory(), VirtualMemory >= 0) )
                    {
                      VirtualMemory = 0;
                      *a3 = 0LL;
                      goto LABEL_31;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_32:
  if ( v29[126] )
    ZwDuplicateObject();
  if ( v29[122] )
    ZwDuplicateObject();
  if ( v29[115] )
    ZwDuplicateObject();
  if ( v29[118] )
    ZwDuplicateObject();
  if ( v29[112] )
    ZwDuplicateObject();
  if ( v29[109] )
    ZwDuplicateObject();
  if ( v29[141] )
    ZwDuplicateObject();
LABEL_46:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)VirtualMemory;
}
