/*
 * XREFs of ndisIfGetRcvAddressFromMiniport @ 0x1C0003A80
 * Callers:
 *     ndisOidPostEthMulticastList @ 0x1C00038E0 (ndisOidPostEthMulticastList.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisOidPostEthMulticastOid @ 0x1C001EFD0 (ndisOidPostEthMulticastOid.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisIfGetRcvAddressFromMiniport(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v15; // rcx
  unsigned int v16; // ebp
  PVOID PoolWithTag; // rax
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax

  v1 = *(_QWORD *)(a1 + 4064);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 400);
  if ( v1 )
  {
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 344);
      if ( v4 + 1 >= v4 )
      {
        if ( *(_DWORD *)(v1 + 1292) < v4 + 1 )
        {
          v15 = *(void **)(v1 + 1280);
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
          *(_QWORD *)(v1 + 1280) = 0LL;
          *(_QWORD *)(v1 + 1288) = 0LL;
        }
        if ( *(_QWORD *)(v1 + 1280) )
          goto LABEL_6;
        v16 = 48 * (*(_DWORD *)(v3 + 344) + 1);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6669444Eu);
        *(_QWORD *)(v1 + 1280) = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v16);
          *(_DWORD *)(v1 + 1292) = *(_DWORD *)(v3 + 344) + 1;
        }
        if ( *(_QWORD *)(v1 + 1280) )
        {
LABEL_6:
          v5 = *(_DWORD *)(v3 + 384);
          v6 = 0;
          *(_DWORD *)(v1 + 1288) = v5 + 1;
          if ( v5 )
          {
            do
            {
              v7 = v6++;
              v8 = 5 * v7;
              *(_DWORD *)(*(_QWORD *)(v1 + 1280) + 8 * v8) = 2;
              v9 = 3 * v7;
              *(_WORD *)(*(_QWORD *)(v1 + 1280) + 8 * v8 + 4) = 6;
              v10 = *(_QWORD *)(v3 + 376);
              v11 = *(_QWORD *)(v1 + 1280);
              *(_DWORD *)(v11 + 8 * v8 + 8) = *(_DWORD *)(v10 + 2 * v9);
              *(_WORD *)(v11 + 8 * v8 + 12) = *(_WORD *)(v10 + 2 * v9 + 4);
            }
            while ( v6 < *(_DWORD *)(v1 + 1288) - 1 );
          }
          v12 = 5LL * v6;
          *(_DWORD *)(*(_QWORD *)(v1 + 1280) + 8 * v12) = 2;
          *(_WORD *)(*(_QWORD *)(v1 + 1280) + 8 * v12 + 4) = 6;
          v13 = *(_QWORD *)(v1 + 1280);
          *(_DWORD *)(v13 + 8 * v12 + 8) = *(_DWORD *)(v3 + 336);
          *(_WORD *)(v13 + 8 * v12 + 12) = *(_WORD *)(v3 + 340);
          if ( v6 < *(_DWORD *)(v1 + 1288) - 1 )
          {
            do
            {
              v18 = v6 + 1;
              v19 = 5 * v18;
              *(_DWORD *)(*(_QWORD *)(v1 + 1280) + 8 * v19) = 2;
              *(_WORD *)(*(_QWORD *)(v1 + 1280) + 8 * v19 + 4) = 6;
              v20 = *(_QWORD *)(v3 + 376);
              v21 = *(_QWORD *)(v1 + 1280);
              v22 = v6++;
              *(_DWORD *)(v21 + 8 * v19 + 8) = *(_DWORD *)(v20 + 6 * v22);
              *(_WORD *)(v21 + 8 * v19 + 12) = *(_WORD *)(v20 + 6 * v22 + 4);
            }
            while ( (unsigned int)v18 < *(_DWORD *)(v1 + 1288) - 1 );
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
