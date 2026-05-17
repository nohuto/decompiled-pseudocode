/*
 * XREFs of sub_18010C2E8 @ 0x18010C2E8
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180109C80 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x18009B200 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009B2A0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x180109D00 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall sub_18010C2E8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v5; // r15
  signed int VirtualMemory; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  int *v11; // rax
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
  unsigned __int64 v27; // rsi
  __int64 v28; // r15
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  _QWORD v33[144]; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+500h] [rbp+400h] BYREF
  __int64 v35; // [rsp+868h] [rbp+768h]
  unsigned int v36; // [rsp+878h] [rbp+778h]
  __int64 v37; // [rsp+880h] [rbp+780h]
  __int64 v38; // [rsp+888h] [rbp+788h]
  __int64 v39; // [rsp+898h] [rbp+798h]
  __int64 v40; // [rsp+8B0h] [rbp+7B0h]
  __int64 v41; // [rsp+8D0h] [rbp+7D0h]
  __int64 v42; // [rsp+8F0h] [rbp+7F0h]
  __int64 v43; // [rsp+968h] [rbp+868h]

  *a4 = 0LL;
  v5 = a4;
  memset(v33, 0, 0x478uLL);
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_48;
  if ( v30 == 1144 )
  {
    if ( v34 == 1146311504 )
    {
      v7 = (unsigned __int64)v36 << 6;
      v8 = 0xFFFFFFFFLL;
      if ( v7 <= 0xFFFFFFFF )
        v8 = (unsigned int)v7;
      VirtualMemory = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v7 <= 0xFFFFFFFF )
      {
        VirtualMemory = (unsigned int)v8 >= 0xFFFFFB88 ? 0xC0000095 : 0;
        if ( (unsigned int)(v8 + 1144) >= 0x478 )
        {
          v9 = 8LL;
          v10 = v33;
          v11 = &v34;
          do
          {
            v12 = *((_OWORD *)v11 + 1);
            *(_OWORD *)v10 = *(_OWORD *)v11;
            v13 = *((_OWORD *)v11 + 2);
            *((_OWORD *)v10 + 1) = v12;
            v14 = *((_OWORD *)v11 + 3);
            *((_OWORD *)v10 + 2) = v13;
            v15 = *((_OWORD *)v11 + 4);
            *((_OWORD *)v10 + 3) = v14;
            v16 = *((_OWORD *)v11 + 5);
            *((_OWORD *)v10 + 4) = v15;
            v17 = *((_OWORD *)v11 + 6);
            *((_OWORD *)v10 + 5) = v16;
            v18 = *((_OWORD *)v11 + 7);
            v11 += 32;
            *((_OWORD *)v10 + 6) = v17;
            v10 += 16;
            *((_OWORD *)v10 - 1) = v18;
            --v9;
          }
          while ( v9 );
          v19 = v35;
          v20 = *((_OWORD *)v11 + 1);
          *(_OWORD *)v10 = *(_OWORD *)v11;
          v21 = *((_OWORD *)v11 + 2);
          *((_OWORD *)v10 + 1) = v20;
          v22 = *((_OWORD *)v11 + 3);
          *((_OWORD *)v10 + 2) = v21;
          v23 = *((_OWORD *)v11 + 4);
          *((_OWORD *)v10 + 3) = v22;
          v24 = *((_OWORD *)v11 + 5);
          *((_OWORD *)v10 + 4) = v23;
          v25 = *((_OWORD *)v11 + 6);
          v26 = *((_QWORD *)v11 + 14);
          *((_OWORD *)v10 + 5) = v24;
          *((_OWORD *)v10 + 6) = v25;
          v10[14] = v26;
          v33[109] = 0LL;
          v33[112] = 0LL;
          v33[115] = 0LL;
          v33[118] = 0LL;
          v33[122] = 0LL;
          v33[126] = 0LL;
          v33[141] = 0LL;
          if ( v19 )
          {
            VirtualMemory = ZwDuplicateObject();
            if ( VirtualMemory < 0 )
              goto LABEL_48;
          }
          if ( v37 )
          {
            VirtualMemory = ZwDuplicateObject();
            if ( VirtualMemory < 0 )
              goto LABEL_48;
          }
          if ( v39 )
          {
            VirtualMemory = ZwDuplicateObject();
            if ( VirtualMemory < 0 )
              goto LABEL_48;
          }
          if ( v40 )
          {
            VirtualMemory = ZwDuplicateObject();
            if ( VirtualMemory < 0 )
              goto LABEL_48;
          }
          if ( v41 )
          {
            VirtualMemory = ZwDuplicateObject();
            if ( VirtualMemory < 0 )
              goto LABEL_48;
          }
          if ( v42 )
          {
            VirtualMemory = ZwDuplicateObject();
            if ( VirtualMemory < 0 )
              goto LABEL_48;
          }
          if ( v43 )
          {
            VirtualMemory = ZwDuplicateObject();
            if ( VirtualMemory < 0 )
              goto LABEL_48;
          }
          VirtualMemory = ZwAllocateVirtualMemory();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
          HIDWORD(v33[0]) = HIDWORD(v33[0]) & 0xFFFFFFF8 | 1;
          if ( v33[113] )
            v33[113] = 1144LL;
          if ( LOWORD(v33[35]) )
            v33[36] = 296LL;
          v27 = 0LL;
          VirtualMemory = ZwWriteVirtualMemory();
          if ( VirtualMemory < 0 )
            goto LABEL_48;
          if ( v38 )
          {
            VirtualMemory = ZwAllocateVirtualMemory();
            if ( VirtualMemory < 0 )
              goto LABEL_48;
            if ( v8 )
            {
              while ( 1 )
              {
                v28 = v8 - v27;
                if ( v8 != v27 )
                  v28 = 1LL;
                VirtualMemory = ZwReadVirtualMemory();
                if ( VirtualMemory < 0 )
                  goto LABEL_48;
                if ( v30 != v28 )
                  goto LABEL_47;
                VirtualMemory = ZwWriteVirtualMemory();
                if ( VirtualMemory < 0 )
                  goto LABEL_48;
                if ( v31 != v30 )
                {
LABEL_47:
                  VirtualMemory = -2147483635;
                  goto LABEL_48;
                }
                v27 += v31;
                if ( v27 >= v8 )
                {
                  v5 = a4;
                  break;
                }
              }
            }
            ZwFreeVirtualMemory();
          }
          VirtualMemory = 0;
          *v5 = 0LL;
        }
      }
      if ( VirtualMemory >= 0 )
        goto LABEL_62;
      goto LABEL_48;
    }
    VirtualMemory = -1073741816;
  }
  else
  {
    VirtualMemory = -2147483635;
  }
LABEL_48:
  if ( v33[126] )
    ZwDuplicateObject();
  if ( v33[122] )
    ZwDuplicateObject();
  if ( v33[115] )
    ZwDuplicateObject();
  if ( v33[118] )
    ZwDuplicateObject();
  if ( v33[112] )
    ZwDuplicateObject();
  if ( v33[109] )
    ZwDuplicateObject();
  if ( v33[141] )
    ZwDuplicateObject();
LABEL_62:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot();
  return (unsigned int)VirtualMemory;
}
