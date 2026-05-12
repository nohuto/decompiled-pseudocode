/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C001AD20
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1C0067220 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C001DA2C (RaidSrbExGetBidirectionalData.c)
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  __int64 *v4; // rax
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned int v14; // r13d
  unsigned __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned __int64 v17; // rcx
  PHYSICAL_ADDRESS result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned __int8 v22; // al
  int v23; // r12d
  unsigned __int64 v24; // rdx
  __int64 BidirectionalData; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int *v29; // rdx
  unsigned int v30; // esi
  unsigned int v31; // ecx
  __int64 v32; // rax
  unsigned int *v33; // r8
  unsigned __int64 v34; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+98h] [rbp+10h]
  unsigned __int64 v39; // [rsp+A0h] [rbp+18h]

  v4 = *(__int64 **)(a1 - 16);
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v38 = 0;
  v9 = 0;
  v36 = 0LL;
  v10 = *v4;
  v11 = 0LL;
  v39 = 0LL;
  LOBYTE(v37) = 0;
  v14 = 0;
  v34 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( a2 )
  {
    v22 = *(_BYTE *)(a2 + 2);
    if ( v22 == 40 )
    {
      v23 = *(_DWORD *)(a2 + 20);
      v24 = *(_QWORD *)(a2 + 104);
      v14 = *(_DWORD *)(a2 + 60);
      v35 = *(_QWORD *)(a2 + 64);
      v39 = v24;
      if ( !v23 )
      {
        GetSrbScsiData(a2, 0, 0, 0, (__int64)&v34, (__int64)&v37);
        v9 = v37;
        v11 = v34;
      }
      BidirectionalData = RaidSrbExGetBidirectionalData(a2);
      v15 = v35;
      v8 = v39;
      if ( BidirectionalData )
      {
        v7 = *(_QWORD *)(BidirectionalData + 16);
        v6 = *(_DWORD *)(BidirectionalData + 8);
      }
      else
      {
        v7 = v36;
        v6 = v38;
      }
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 56);
      v14 = *(_DWORD *)(a2 + 16);
      v15 = *(_QWORD *)(a2 + 24);
      v39 = v8;
      v23 = v22;
      if ( !v22 )
      {
        v11 = *(_QWORD *)(a2 + 32);
        v9 = *(_BYTE *)(a2 + 11);
      }
    }
    v16 = v14;
    if ( v23 == 23 )
    {
      v26 = *(_BYTE *)(a2 + 2) == 40 ? *(_QWORD *)(a2 + 96) : *(_QWORD *)(a2 + 48);
      v27 = *(_QWORD *)(v26 + 104);
      if ( *(_DWORD *)(v27 + 40) > v14 )
        v16 = *(_DWORD *)(v27 + 40);
    }
  }
  v17 = *(_QWORD *)(v10 + 728);
  if ( v17 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v17 + *(unsigned int *)(v10 + 744) )
  {
    v19 = *(_QWORD *)(v10 + 728);
    if ( v17 > (unsigned __int64)a3 )
      return (PHYSICAL_ADDRESS)v37;
    v20 = *(unsigned int *)(v10 + 744);
    if ( (unsigned __int64)a3 >= v19 + v20 )
    {
      return (PHYSICAL_ADDRESS)v37;
    }
    else
    {
      v21 = (_DWORD)a3 - v19;
      result.QuadPart = *(_QWORD *)(v10 + 736) + v21;
      if ( a4 )
        *a4 = v20 - v21;
    }
  }
  else if ( a2 )
  {
    if ( (v15 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v15 + v16)
      && (v7 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v7 + v6) )
    {
      if ( v11 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v11 + v9 )
      {
        result = MmGetPhysicalAddress(a3);
        *a4 = v11 + v9 - (_DWORD)a3;
        return result;
      }
      if ( v8 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v8 + ((*(_DWORD *)(v10 + 444) + 7) & 0xFFFFFFF8) )
      {
        result = MmGetPhysicalAddress(a3);
        *a4 = v39 + ((*(_DWORD *)(v10 + 444) + 7) & 0xFFFFFFF8) - (_DWORD)a3;
        return result;
      }
    }
    else
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v28 = *(_QWORD *)(a2 + 96);
      else
        v28 = *(_QWORD *)(a2 + 48);
      if ( v15 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v15 + v16 )
      {
        v29 = *(unsigned int **)(v28 + 152);
        v30 = (_DWORD)a3 - v7;
        v14 = v6;
      }
      else
      {
        v29 = *(unsigned int **)(v28 + 112);
        v30 = (_DWORD)a3 - v15;
      }
      if ( v29 )
      {
        v31 = *v29;
        v32 = 0LL;
        if ( *v29 )
        {
          v33 = v29 + 6;
          do
          {
            if ( v30 < *v33 )
              break;
            v30 -= *v33;
            v32 = (unsigned int)(v32 + 1);
            v33 += 6;
          }
          while ( (unsigned int)v32 < v31 );
        }
        if ( (unsigned int)v32 < v31 )
        {
          *a4 = v29[6 * v32 + 6] - v30;
          return (PHYSICAL_ADDRESS)(*(_QWORD *)&v29[6 * v32 + 4] + v30);
        }
      }
      else if ( (*(_BYTE *)(v10 + 4451) & 4) != 0 )
      {
        result = MmGetPhysicalAddress(a3);
        *a4 = v14 - v30;
        return result;
      }
    }
    result.QuadPart = 0LL;
    *a4 = 0;
  }
  else
  {
    result = MmGetPhysicalAddress(a3);
    *a4 = (*(_DWORD *)(v10 + 444) + 7) & 0xFFFFFFF8;
  }
  return result;
}
