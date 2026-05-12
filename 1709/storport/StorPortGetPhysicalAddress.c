/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C001ADD0
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1C006B280 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C001EA34 (RaidSrbExGetBidirectionalData.c)
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  PHYSICAL_ADDRESS result; // rax
  unsigned __int8 v18; // al
  unsigned int v19; // r9d
  unsigned int v20; // edi
  int v21; // eax
  __int64 BidirectionalData; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int *v25; // r8
  unsigned int v26; // r12d
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned int *v30; // rdx
  unsigned __int64 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v33; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+98h] [rbp+10h]
  int v35; // [rsp+A0h] [rbp+18h]

  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v31 = 0LL;
  v9 = **(_QWORD **)(a1 - 16);
  v33 = 0;
  v34 = 0;
  v12 = 0LL;
  v32[0] = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( a2 )
  {
    v18 = *(_BYTE *)(a2 + 2);
    if ( v18 == 40 )
    {
      v21 = *(_DWORD *)(a2 + 20);
      v12 = *(_QWORD *)(a2 + 64);
      v34 = *(_DWORD *)(a2 + 60);
      v13 = *(_QWORD *)(a2 + 104);
      v35 = v21;
      if ( !v21 )
      {
        GetSrbScsiData(a2, 0, 0, 0, (__int64)v32, (__int64)&v33);
        v7 = v33;
        v8 = v32[0];
      }
      BidirectionalData = RaidSrbExGetBidirectionalData(a2);
      v19 = v34;
      if ( BidirectionalData )
      {
        v6 = *(_QWORD *)(BidirectionalData + 16);
        v5 = *(_DWORD *)(BidirectionalData + 8);
        v31 = v6;
      }
      else
      {
        v6 = 0LL;
        v5 = 0;
      }
    }
    else
    {
      v19 = *(_DWORD *)(a2 + 16);
      v12 = *(_QWORD *)(a2 + 24);
      v13 = *(_QWORD *)(a2 + 56);
      v35 = v18;
      v34 = v19;
      if ( !v18 )
      {
        v8 = *(_QWORD *)(a2 + 32);
        v7 = *(_BYTE *)(a2 + 11);
      }
    }
    v14 = v19;
    if ( v35 == 23 )
    {
      v23 = *(_BYTE *)(a2 + 2) == 40 ? *(_QWORD *)(a2 + 96) : *(_QWORD *)(a2 + 48);
      if ( *(_DWORD *)(*(_QWORD *)(v23 + 104) + 40LL) > v19 )
        v14 = *(_DWORD *)(*(_QWORD *)(v23 + 104) + 40LL);
    }
  }
  v15 = *(_QWORD *)(v9 + 728);
  if ( v15 <= (unsigned __int64)a3 )
  {
    v16 = *(unsigned int *)(v9 + 744);
    if ( (unsigned __int64)a3 < v16 + v15 )
    {
      v20 = (_DWORD)a3 - v15;
      result.QuadPart = *(_QWORD *)(v9 + 736) + v20;
      if ( a4 )
        *a4 = v16 - v20;
      return result;
    }
    v6 = v31;
  }
  if ( a2 )
  {
    if ( v12 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v12 + v14
      || v6 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v6 + v5 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v24 = *(_QWORD *)(a2 + 96);
      else
        v24 = *(_QWORD *)(a2 + 48);
      if ( v12 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v12 + v14 )
      {
        v25 = *(unsigned int **)(v24 + 152);
        v27 = (_DWORD)a3 - v6;
        v26 = v5;
      }
      else
      {
        v25 = *(unsigned int **)(v24 + 112);
        v26 = v34;
        v27 = (_DWORD)a3 - v12;
      }
      if ( v25 )
      {
        v28 = *v25;
        v29 = 0LL;
        if ( *v25 )
        {
          v30 = v25 + 6;
          do
          {
            if ( v27 < *v30 )
              break;
            v27 -= *v30;
            v29 = (unsigned int)(v29 + 1);
            v30 += 6;
          }
          while ( (unsigned int)v29 < v28 );
        }
        if ( (unsigned int)v29 < v28 )
        {
          *a4 = v25[6 * v29 + 6] - v27;
          return (PHYSICAL_ADDRESS)(*(_QWORD *)&v25[6 * v29 + 4] + v27);
        }
      }
      else if ( (*(_BYTE *)(v9 + 4451) & 4) != 0 )
      {
        result = MmGetPhysicalAddress(a3);
        *a4 = v26 - v27;
        return result;
      }
    }
    else
    {
      if ( v8 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v8 + v7 )
      {
        result = MmGetPhysicalAddress(a3);
        *a4 = v8 + v7 - (_DWORD)a3;
        return result;
      }
      if ( v13 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v13 + ((*(_DWORD *)(v9 + 444) + 7) & 0xFFFFFFF8) )
      {
        result = MmGetPhysicalAddress(a3);
        *a4 = v13 + ((*(_DWORD *)(v9 + 444) + 7) & 0xFFFFFFF8) - (_DWORD)a3;
        return result;
      }
    }
    result.QuadPart = 0LL;
    *a4 = 0;
    return result;
  }
  result = MmGetPhysicalAddress(a3);
  *a4 = (*(_DWORD *)(v9 + 444) + 7) & 0xFFFFFFF8;
  return result;
}
