/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C0017200
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1C006A280 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001737C (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0037B48 (RaidSrbExGetBidirectionalData.c)
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned __int64 v6; // rdx
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned int v9; // r15d
  __int64 *v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int8 v13; // r11
  unsigned int v14; // r8d
  __int64 v15; // rbp
  int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r8d
  unsigned int v21; // r10d
  int v22; // edx
  unsigned int v23; // r14d
  PHYSICAL_ADDRESS v24; // rax
  unsigned int v25; // eax
  __int64 BidirectionalData; // rax
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 v30; // rdx
  unsigned int *v31; // rdx
  unsigned int v32; // r14d
  unsigned int v33; // eax
  unsigned int *v34; // rcx
  PHYSICAL_ADDRESS v35; // rax
  int v36; // [rsp+30h] [rbp-68h]
  unsigned __int64 v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  unsigned __int64 v39[10]; // [rsp+48h] [rbp-50h] BYREF
  char v40; // [rsp+A0h] [rbp+8h]
  char v41; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+18h]
  unsigned int *v43; // [rsp+B8h] [rbp+20h]

  v43 = a4;
  v4 = 0;
  v40 = 0;
  v6 = 0LL;
  v41 = 0;
  PhysicalAddress.QuadPart = 0LL;
  v37 = 0LL;
  v39[0] = 0LL;
  v9 = 0;
  v10 = *(__int64 **)(a1 - 16);
  v11 = 0LL;
  v42 = 0;
  v12 = 0LL;
  v38 = 0LL;
  v13 = 0;
  v14 = 0;
  v15 = *v10;
  *a4 = 0;
  if ( a2 )
  {
    LOBYTE(v16) = *(_BYTE *)(a2 + 2);
    if ( (_BYTE)v16 == 40 )
    {
      v9 = *(_DWORD *)(a2 + 60);
      v11 = *(_QWORD *)(a2 + 64);
      v12 = *(_QWORD *)(a2 + 104);
      v36 = *(_DWORD *)(a2 + 20);
      if ( !v36 )
      {
        GetSrbScsiData(a2, 0, 0, 0, (__int64)v39, (__int64)&v41);
        v37 = v39[0];
        v40 = v41;
      }
      BidirectionalData = RaidSrbExGetBidirectionalData(a2);
      a4 = v43;
      v13 = v40;
      if ( BidirectionalData )
      {
        v38 = *(_QWORD *)(BidirectionalData + 16);
        v42 = *(_DWORD *)(BidirectionalData + 8);
      }
      v6 = v37;
      v16 = v36;
    }
    else
    {
      v9 = *(_DWORD *)(a2 + 16);
      v11 = *(_QWORD *)(a2 + 24);
      v12 = *(_QWORD *)(a2 + 56);
      v16 = (unsigned __int8)v16;
      if ( !(_BYTE)v16 )
      {
        v13 = *(_BYTE *)(a2 + 11);
        v6 = *(_QWORD *)(a2 + 32);
        v40 = v13;
      }
    }
    v14 = v9;
    if ( v16 == 23 )
    {
      v28 = *(_BYTE *)(a2 + 2) == 40 ? *(_QWORD *)(a2 + 96) : *(_QWORD *)(a2 + 48);
      if ( *(_DWORD *)(*(_QWORD *)(v28 + 104) + 40LL) > v9 )
        v14 = *(_DWORD *)(*(_QWORD *)(v28 + 104) + 40LL);
    }
  }
  v17 = *(_QWORD *)(v15 + 728);
  if ( v17 <= (unsigned __int64)a3 )
  {
    v18 = *(unsigned int *)(v15 + 744);
    if ( (unsigned __int64)a3 < v18 + v17 )
    {
      v29 = (_DWORD)a3 - v17;
      PhysicalAddress.QuadPart = *(_QWORD *)(v15 + 736) + v29;
      *a4 = v18 - v29;
      return PhysicalAddress;
    }
  }
  if ( !a2 )
  {
    if ( !*(_BYTE *)(v15 + 704) || *(_DWORD *)(v15 + 724) != 3 )
    {
      PhysicalAddress = MmGetPhysicalAddress(a3);
      *v43 = (*(_DWORD *)(v15 + 444) + 7) & 0xFFFFFFF8;
    }
    return PhysicalAddress;
  }
  v19 = v14;
  if ( v11 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v14 + v11 )
  {
    v20 = v38;
    v21 = v42;
LABEL_38:
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v30 = *(_QWORD *)(a2 + 96);
    else
      v30 = *(_QWORD *)(a2 + 48);
    if ( v11 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v19 + v11 )
    {
      v31 = *(unsigned int **)(v30 + 152);
      v32 = (_DWORD)a3 - v20;
      v9 = v21;
    }
    else
    {
      v31 = *(unsigned int **)(v30 + 112);
      v32 = (_DWORD)a3 - v11;
    }
    if ( v31 )
    {
      v33 = *v31;
      if ( *v31 )
      {
        v34 = v31 + 6;
        do
        {
          if ( v32 < *v34 )
            break;
          v32 -= *v34;
          ++v4;
          v34 += 6;
        }
        while ( v4 < v33 );
      }
      if ( v4 < v33 )
      {
        *a4 = v31[6 * v4 + 6] - v32;
        return (PHYSICAL_ADDRESS)(*(_QWORD *)&v31[6 * v4 + 4] + v32);
      }
    }
    else if ( (*(_BYTE *)(v15 + 4451) & 4) != 0 && (!*(_BYTE *)(v15 + 704) || *(_DWORD *)(v15 + 724) != 3) )
    {
      PhysicalAddress = MmGetPhysicalAddress(a3);
      *v43 = v9 - v32;
    }
    return PhysicalAddress;
  }
  v20 = v38;
  if ( v38 <= (unsigned __int64)a3 )
  {
    v21 = v42;
    if ( (unsigned __int64)a3 < v38 + v42 )
      goto LABEL_38;
  }
  if ( v6 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v6 + v13 )
  {
    v23 = (_DWORD)a3 - v6;
    if ( *(_BYTE *)(v15 + 704) && *(_DWORD *)(v15 + 724) == 3 )
    {
      PhysicalAddress.QuadPart = *(_QWORD *)(v12 - 1064) + v23 + 832LL;
    }
    else
    {
      v35 = MmGetPhysicalAddress(a3);
      v13 = v40;
      PhysicalAddress = v35;
    }
    v25 = v13;
    goto LABEL_20;
  }
  if ( v12 <= (unsigned __int64)a3 )
  {
    v22 = *(_DWORD *)(v15 + 444);
    if ( (unsigned __int64)a3 < v12 + ((v22 + 7) & 0xFFFFFFF8) )
    {
      v23 = (_DWORD)a3 - v12;
      if ( *(_BYTE *)(v15 + 704) && *(_DWORD *)(v15 + 724) == 3 )
      {
        PhysicalAddress.QuadPart = *(_QWORD *)(v12 - 1064) + v23 + 1088LL;
      }
      else
      {
        v24 = MmGetPhysicalAddress(a3);
        v22 = *(_DWORD *)(v15 + 444);
        PhysicalAddress = v24;
      }
      v25 = (v22 + 7) & 0xFFFFFFF8;
LABEL_20:
      *v43 = v25 - v23;
    }
  }
  return PhysicalAddress;
}
