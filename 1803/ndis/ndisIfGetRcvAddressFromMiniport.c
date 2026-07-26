/*
 * XREFs of ndisIfGetRcvAddressFromMiniport @ 0x1C001DC38
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisOidPostEthMulticastList @ 0x1C001DAA0 (ndisOidPostEthMulticastList.c)
 *     ndisOidPostEthMulticastOid @ 0x1C0025480 (ndisOidPostEthMulticastOid.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 */

__int64 __fastcall ndisIfGetRcvAddressFromMiniport(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v18; // ebp
  PVOID PoolWithTag; // rax
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax

  v1 = *(_QWORD *)(a1 + 4064);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 400);
  if ( v1 )
  {
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 344);
      v5 = v4 + 1;
      if ( v4 + 1 >= v4 )
      {
        v6 = *(_QWORD *)(v1 + 1280);
        if ( *(_DWORD *)(v1 + 1292) < v5 )
        {
          if ( v6 )
            ExFreePoolWithTag(*(PVOID *)(v1 + 1280), 0);
          *(_QWORD *)(v1 + 1280) = 0LL;
          v6 = 0LL;
          *(_QWORD *)(v1 + 1288) = 0LL;
          v7 = 0LL;
        }
        else
        {
          v7 = *(_QWORD *)(v1 + 1280);
        }
        if ( v6
          || (v18 = 48 * (*(_DWORD *)(v3 + 344) + 1),
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6669444Eu),
              (*(_QWORD *)(v1 + 1280) = PoolWithTag) != 0LL)
          && (memset(PoolWithTag, 0, v18),
              *(_DWORD *)(v1 + 1292) = *(_DWORD *)(v3 + 344) + 1,
              (v7 = *(_QWORD *)(v1 + 1280)) != 0) )
        {
          v8 = *(_DWORD *)(v3 + 384);
          v9 = 0;
          *(_DWORD *)(v1 + 1288) = v8 + 1;
          if ( v8 )
          {
            do
            {
              v10 = v9++;
              v11 = 5 * v10;
              *(_DWORD *)(*(_QWORD *)(v1 + 1280) + 8 * v11) = 2;
              v12 = 3 * v10;
              *(_WORD *)(*(_QWORD *)(v1 + 1280) + 8 * v11 + 4) = 6;
              v13 = *(_QWORD *)(v3 + 376);
              v14 = *(_QWORD *)(v1 + 1280);
              *(_DWORD *)(v14 + 8 * v11 + 8) = *(_DWORD *)(v13 + 2 * v12);
              *(_WORD *)(v14 + 8 * v11 + 12) = *(_WORD *)(v13 + 2 * v12 + 4);
            }
            while ( v9 < *(_DWORD *)(v1 + 1288) - 1 );
            v7 = *(_QWORD *)(v1 + 1280);
          }
          v15 = 5LL * v9;
          *(_DWORD *)(v7 + 8 * v15) = 2;
          *(_WORD *)(*(_QWORD *)(v1 + 1280) + 8 * v15 + 4) = 6;
          v16 = *(_QWORD *)(v1 + 1280);
          *(_DWORD *)(v16 + 8 * v15 + 8) = *(_DWORD *)(v3 + 336);
          *(_WORD *)(v16 + 8 * v15 + 12) = *(_WORD *)(v3 + 340);
          if ( v9 < *(_DWORD *)(v1 + 1288) - 1 )
          {
            do
            {
              v20 = v9 + 1;
              v21 = 5 * v20;
              *(_DWORD *)(*(_QWORD *)(v1 + 1280) + 8 * v21) = 2;
              *(_WORD *)(*(_QWORD *)(v1 + 1280) + 8 * v21 + 4) = 6;
              v22 = *(_QWORD *)(v3 + 376);
              v23 = *(_QWORD *)(v1 + 1280);
              v24 = v9++;
              *(_DWORD *)(v23 + 8 * v21 + 8) = *(_DWORD *)(v22 + 6 * v24);
              *(_WORD *)(v23 + 8 * v21 + 12) = *(_WORD *)(v22 + 6 * v24 + 4);
            }
            while ( (unsigned int)v20 < *(_DWORD *)(v1 + 1288) - 1 );
          }
        }
        else
        {
          *(_QWORD *)(v1 + 1288) = 0LL;
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return v2;
}
