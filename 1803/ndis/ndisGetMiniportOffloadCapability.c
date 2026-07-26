/*
 * XREFs of ndisGetMiniportOffloadCapability @ 0x1C00F01E4
 * Callers:
 *     ndisGetMiniportInfo @ 0x1C00E970C (ndisGetMiniportInfo.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     ndisMAllocateMiniportOffload @ 0x1C001EFA0 (ndisMAllocateMiniportOffload.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisGetMiniportOffloadCapability(PVOID *a1)
{
  char v2; // r14
  char v3; // r15
  char v4; // r12
  char v5; // r13
  char v6; // si
  char v7; // bl
  __int64 v8; // rcx
  unsigned int v9; // r10d
  char *i; // rdx
  int v11; // r9d
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  _BYTE v21[248]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v22[36]; // [rsp+138h] [rbp+30h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  if ( !(unsigned int)ndisMAllocateMiniportOffload((__int64)a1) )
  {
    v22[3] = 0;
    v22[5] |= 1u;
    v22[0] = 1;
    v22[1] = 28;
    v22[4] = 2;
    v22[6] = 14;
    memset(v21, 0, sizeof(v21));
    *(_DWORD *)&v21[4] = 0;
    *(_DWORD *)&v21[88] |= 0x80u;
    *(_QWORD *)&v21[40] = v22;
    *(_DWORD *)v21 = 15466902;
    *(_QWORD *)&v21[104] = &ndisIntReqGeneric;
    *(_DWORD *)&v21[32] = -67042815;
    *(_DWORD *)&v21[48] = 144;
    if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v21, 0LL, 0LL) && v22[3] )
    {
      v8 = (__int64)a1[515] + 384;
      *(_QWORD *)v8 = 7340455LL;
      *(_DWORD *)(v8 + 8) &= 0xFFFFFC00;
      *(_DWORD *)(v8 + 16) &= 0xFFFFFC00;
      *(_DWORD *)(v8 + 32) &= 0xFFFFFF00;
      *(_DWORD *)(v8 + 24) &= 0xFFFFFF00;
      *(_DWORD *)(v8 + 12) = 0;
      *(_DWORD *)(v8 + 28) = 0;
      *(_DWORD *)(v8 + 20) = 0;
      *(_DWORD *)(v8 + 48) &= 0xFFFFFFF0;
      *(_QWORD *)(v8 + 36) = 0LL;
      *(_DWORD *)(v8 + 44) = 0;
      *(_DWORD *)(v8 + 104) &= 0xFFFFFFF0;
      *(_DWORD *)(v8 + 80) = 0;
      *(_QWORD *)(v8 + 88) = 0LL;
      *(_QWORD *)(v8 + 96) = 0LL;
      v9 = v22[1];
      for ( i = (char *)v22 + v22[1]; *(_DWORD *)i == 1; i += v20 )
      {
        if ( *((_DWORD *)i + 1) != 24 )
          break;
        v11 = *((_DWORD *)i + 4);
        if ( v11 + v9 + 20 > 0x90 )
          break;
        v12 = *((_DWORD *)i + 2);
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              *((_BYTE *)a1[515] + 1201) = 1;
              if ( *((_DWORD *)i + 5) > 1u )
                break;
              if ( i[33] == 1 )
              {
                v6 = 1;
                *(_DWORD *)(v8 + 48) = *(_DWORD *)(v8 + 48) & 0xFFFFFFF3 | 4;
              }
              if ( i[32] == 1 )
              {
                v6 = 1;
                *(_DWORD *)(v8 + 48) = *(_DWORD *)(v8 + 48) & 0xFFFFFFFC | 1;
              }
              *(_DWORD *)(v8 + 44) = *((_DWORD *)i + 7);
              *(_DWORD *)(v8 + 40) = *((_DWORD *)i + 6);
              if ( *((_DWORD *)i + 7) && *((_DWORD *)i + 6) )
                v6 = 1;
              if ( v6 == 1 )
                *(_DWORD *)(v8 + 36) = 2;
            }
          }
          else
          {
            if ( v11 != 24 )
              break;
            *((_BYTE *)a1[515] + 1202) = 1;
            *(_DWORD *)(v8 + 60) = 0;
            *(_DWORD *)(v8 + 68) = *((_DWORD *)i + 8);
            if ( *((_DWORD *)i + 5) )
            {
              *(_DWORD *)(v8 + 56) = 1;
              v7 = 1;
            }
            if ( *((_DWORD *)i + 7) )
            {
              *(_DWORD *)(v8 + 64) = 1;
              v7 = 1;
            }
            v14 = *((_DWORD *)i + 9);
            if ( (v14 & 1) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFFFFC | 1;
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 2) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFFFF3 | 4;
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 4) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFFFCF | 0x10;
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 0x10) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFFCFF | 0x100;
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 0x20) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFF3FF | 0x400;
            }
            v15 = *((_DWORD *)i + 10);
            if ( (v15 & 0x40) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFCFFF | 0x1000;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 0x80u) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFF3FFF | 0x4000;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 1) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFFFC | 1;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 4) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFFCF | 0x10;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 8) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFF3F | 0x40;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 0x10) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFCFF | 0x100;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 2) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFFF3 | 4;
            }
            if ( v7 == 1 )
              *(_DWORD *)(v8 + 52) = 2;
            *((_DWORD *)i + 10) &= ~0x20u;
          }
        }
        else
        {
          if ( v11 != 16 )
            break;
          *((_BYTE *)a1[515] + 1200) = 1;
          v16 = *((_DWORD *)i + 5);
          if ( (v16 & 1) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFFFC | 1;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 2) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFFF3 | 4;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 4) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFFCF | 0x10;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 8) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFF3F | 0x40;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 0x10) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFCFF | 0x100;
          }
          if ( v3 == 1 )
            *(_DWORD *)(v8 + 4) = 2;
          v17 = *((_DWORD *)i + 6);
          if ( (v17 & 1) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFFFC | 1;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 2) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFFF3 | 4;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 4) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFFCF | 0x10;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 8) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFF3F | 0x40;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 0x10) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFCFF | 0x100;
          }
          if ( v2 == 1 )
            *(_DWORD *)(v8 + 12) = 2;
          v18 = *((_DWORD *)i + 8);
          if ( (v18 & 1) != 0 )
          {
            *(_DWORD *)(v8 + 28) = 0;
            *(_DWORD *)(v8 + 32) &= 0xFFFFFF00;
          }
          else
          {
            if ( (v18 & 2) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFFFFF3 | 4;
              v18 = *((_DWORD *)i + 8);
            }
            if ( (v18 & 4) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFFFFCF | 0x10;
              v18 = *((_DWORD *)i + 8);
            }
            if ( (v18 & 8) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFFFF3F | 0x40;
            }
            if ( v5 == 1 )
              *(_DWORD *)(v8 + 28) = 2;
          }
          v19 = *((_DWORD *)i + 7);
          if ( (v19 & 1) != 0 )
          {
            *(_DWORD *)(v8 + 20) = 0;
            *(_DWORD *)(v8 + 24) &= 0xFFFFFF00;
          }
          else
          {
            if ( (v19 & 2) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v8 + 24) & 0xFFFFFFF3 | 4;
              v19 = *((_DWORD *)i + 7);
            }
            if ( (v19 & 4) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v8 + 24) & 0xFFFFFFCF | 0x10;
              v19 = *((_DWORD *)i + 7);
            }
            if ( (v19 & 8) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v8 + 24) & 0xFFFFFF3F | 0x40;
            }
            if ( v4 == 1 )
              *(_DWORD *)(v8 + 20) = 2;
          }
        }
        v20 = *((unsigned int *)i + 3);
        if ( !(_DWORD)v20 )
          return;
        v9 += v20;
        if ( v9 > 0x90 )
          return;
      }
    }
    ExFreePoolWithTag(a1[515], 0);
    a1[515] = 0LL;
  }
}
