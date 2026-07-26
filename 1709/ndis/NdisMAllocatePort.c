/*
 * XREFs of NdisMAllocatePort @ 0x1C003BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 */

NDIS_STATUS __stdcall NdisMAllocatePort(NDIS_HANDLE NdisMiniportHandle, PNDIS_PORT_CHARACTERISTICS PortCharacteristics)
{
  unsigned int v3; // r12d
  int v5; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rsi
  KIRQL v8; // r9
  unsigned int v9; // edx
  KIRQL v10; // dl
  unsigned int v11; // edi
  _BYTE *v12; // rbp
  unsigned int v13; // edx
  _BYTE *v14; // rax
  unsigned int v15; // edi
  int v16; // ecx
  int v17; // r8d
  int v18; // eax
  _BYTE *v19; // rax
  _BYTE *v20; // r14
  _QWORD *v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // edx
  __int64 *v24; // rdx
  __int64 v25; // rax
  KIRQL v27; // [rsp+70h] [rbp+8h]
  unsigned int Size; // [rsp+80h] [rbp+18h]

  v3 = 0;
  if ( (unsigned __int8)byte_1C009875E >= 4u )
    WPP_SF_q(0xAu, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)NdisMiniportHandle);
  if ( !ndisReferenceMiniport((__int64)NdisMiniportHandle) )
  {
    v5 = -1073676286;
    goto LABEL_43;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6F70444Eu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v7 + 4) = 1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisMiniportHandle + 12);
  *((_QWORD *)NdisMiniportHandle + 65) = KeGetCurrentThread();
  v9 = *((_DWORD *)NdisMiniportHandle + 689) + 1;
  v27 = v8;
  *((_DWORD *)NdisMiniportHandle + 464) = 2359399;
  if ( v9 > 0x2AAAAAA )
    goto LABEL_8;
  v11 = *((_DWORD *)NdisMiniportHandle + 688);
  v12 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 343);
  Size = v11;
  if ( v12 && (v13 = 0, v11) )
  {
    v14 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 343);
    while ( *v14 == 0xFF )
    {
      v3 += 8;
      ++v13;
      ++v14;
      if ( v13 >= v11 )
        goto LABEL_15;
    }
    v16 = 1;
    v17 = 0;
    v18 = (unsigned __int8)v12[v13];
    while ( (v18 & v16) != 0 )
    {
      v16 *= 2;
      if ( (unsigned int)++v17 >= 8 )
        goto LABEL_15;
    }
    v12[v13] = v16 | v18;
    v3 += v17;
  }
  else
  {
LABEL_15:
    if ( 8 * v11 + 1 >= 0x1000000 )
    {
LABEL_8:
      v10 = v8;
LABEL_9:
      *((_DWORD *)NdisMiniportHandle + 464) = 0;
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v10);
LABEL_6:
      v5 = -1073741670;
      goto LABEL_41;
    }
    v15 = v11 + 1;
    if ( 8 * v15 + 1 < *((_DWORD *)NdisMiniportHandle + 688) )
    {
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      *((_DWORD *)NdisMiniportHandle + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v8);
      v5 = -1073676267;
LABEL_41:
      ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x63u);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      goto LABEL_43;
    }
    v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x6F70444Eu);
    v20 = v19;
    if ( !v19 )
    {
      v10 = v27;
      goto LABEL_9;
    }
    if ( v12 )
    {
      memmove(v19, v12, Size);
      v20[v15 - 1] = 1;
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      *v19 = 3;
      v3 = 1;
    }
    v8 = v27;
    *((_QWORD *)NdisMiniportHandle + 343) = v20;
    *((_DWORD *)NdisMiniportHandle + 688) = v15;
  }
  PortCharacteristics->PortNumber = v3;
  *(_OWORD *)(v7 + 3) = *(_OWORD *)&PortCharacteristics->Header.Type;
  *(_OWORD *)(v7 + 5) = *(_OWORD *)&PortCharacteristics->MediaConnectState;
  *(_OWORD *)(v7 + 7) = *(_OWORD *)&PortCharacteristics->RcvLinkSpeed;
  *(_OWORD *)(v7 + 9) = *(_OWORD *)&PortCharacteristics->RcvControlState;
  if ( (PortCharacteristics->Flags & 1) != 0 )
  {
    *((_DWORD *)v7 + 17) = *((_DWORD *)NdisMiniportHandle + 830);
    *((_DWORD *)v7 + 18) = *((_DWORD *)NdisMiniportHandle + 831);
    *((_DWORD *)v7 + 19) = *((_DWORD *)NdisMiniportHandle + 832);
    *((_DWORD *)v7 + 20) = *((_DWORD *)NdisMiniportHandle + 833);
  }
  v21 = (_QWORD *)*((_QWORD *)NdisMiniportHandle + 341);
  if ( v21 == (_QWORD *)((char *)NdisMiniportHandle + 2728) )
  {
LABEL_36:
    v24 = (__int64 *)v21[1];
    v25 = *v24;
    if ( *(__int64 **)(*v24 + 8) != v24 )
      __fastfail(3u);
    *v7 = v25;
    v5 = 0;
    v7[1] = v24;
    *(_QWORD *)(v25 + 8) = v7;
    *v24 = (__int64)v7;
    ++*((_DWORD *)NdisMiniportHandle + 689);
    *((_DWORD *)v7 + 4) = 2;
  }
  else
  {
    v22 = *((_DWORD *)v7 + 7);
    while ( 1 )
    {
      v23 = *((_DWORD *)v21 + 7);
      if ( v23 == v22 )
        break;
      if ( v23 <= v22 )
      {
        v21 = (_QWORD *)*v21;
        if ( v21 != (_QWORD *)((char *)NdisMiniportHandle + 2728) )
          continue;
      }
      goto LABEL_36;
    }
    v5 = -1073741270;
  }
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  *((_DWORD *)NdisMiniportHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v8);
  if ( v5 )
    goto LABEL_41;
LABEL_43:
  if ( (unsigned __int8)byte_1C009875E >= 4u )
    WPP_SF_qdD(0xBu, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, (__int64)NdisMiniportHandle, v5, v3);
  return v5;
}
