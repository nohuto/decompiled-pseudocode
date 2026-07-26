/*
 * XREFs of NdisMAllocatePort @ 0x1C003D230
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

NDIS_STATUS __stdcall NdisMAllocatePort(NDIS_HANDLE NdisMiniportHandle, PNDIS_PORT_CHARACTERISTICS PortCharacteristics)
{
  unsigned int v3; // r12d
  unsigned int v5; // edi
  _QWORD *PoolWithTag; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rsi
  KIRQL v10; // r9
  unsigned int v11; // edx
  KIRQL v12; // dl
  _BYTE *v13; // rbp
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  _BYTE *v17; // rax
  unsigned int v18; // edi
  int v19; // edx
  int v20; // r8d
  int v21; // eax
  _BYTE *v22; // rax
  _BYTE *v23; // r14
  char v24; // bp
  _QWORD *v25; // rax
  unsigned int v26; // r8d
  unsigned int v27; // edx
  __int64 *v28; // rdx
  __int64 v29; // rax
  KIRQL v31; // [rsp+70h] [rbp+8h]
  unsigned int Size; // [rsp+80h] [rbp+18h]

  v3 = 0;
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_q(0xAu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)NdisMiniportHandle);
  if ( !ndisReferenceMiniport((__int64)NdisMiniportHandle) )
  {
    v5 = -1073676286;
    goto LABEL_46;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6F70444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v9 + 4) = 1;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisMiniportHandle + 12);
  *((_QWORD *)NdisMiniportHandle + 65) = KeGetCurrentThread();
  v11 = *((_DWORD *)NdisMiniportHandle + 689) + 1;
  v31 = v10;
  *((_DWORD *)NdisMiniportHandle + 464) = 2359399;
  if ( v11 > 0x2AAAAAA )
    goto LABEL_8;
  v13 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 343);
  v14 = *((_DWORD *)NdisMiniportHandle + 688);
  v15 = v14;
  Size = v14;
  if ( v13 )
  {
    v16 = 0;
    if ( v14 )
    {
      v17 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 343);
      while ( *v17 == 0xFF )
      {
        v3 += 8;
        ++v16;
        ++v17;
        if ( v16 >= v14 )
          goto LABEL_15;
      }
      v19 = 1;
      v20 = 0;
      v21 = (unsigned __int8)v13[v16];
      while ( (v21 & v19) != 0 )
      {
        v19 *= 2;
        if ( (unsigned int)++v20 >= 8 )
          goto LABEL_15;
      }
      v13[v16] = v19 | v21;
      v3 += v20;
      goto LABEL_30;
    }
LABEL_15:
    v15 = *((_DWORD *)NdisMiniportHandle + 688);
  }
  if ( 8 * v14 + 1 >= 0x1000000 )
  {
LABEL_8:
    v12 = v10;
LABEL_9:
    *((_DWORD *)NdisMiniportHandle + 464) = 0;
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v12);
LABEL_6:
    v5 = -1073741670;
LABEL_43:
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x63u, v7, v8);
LABEL_44:
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    goto LABEL_46;
  }
  v18 = v14 + 1;
  if ( 8 * v18 + 1 < v15 )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    *((_DWORD *)NdisMiniportHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v10);
    v5 = -1073676267;
    goto LABEL_43;
  }
  v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6F70444Eu);
  v23 = v22;
  if ( !v22 )
  {
    v12 = v31;
    goto LABEL_9;
  }
  if ( v13 )
  {
    memmove(v22, v13, Size);
    v23[v18 - 1] = 1;
    ExFreePoolWithTag(v13, 0);
  }
  else
  {
    *v22 = 3;
    v3 = 1;
  }
  v10 = v31;
  *((_QWORD *)NdisMiniportHandle + 343) = v23;
  *((_DWORD *)NdisMiniportHandle + 688) = v18;
LABEL_30:
  PortCharacteristics->PortNumber = v3;
  v24 = 0;
  *(_OWORD *)(v9 + 3) = *(_OWORD *)&PortCharacteristics->Header.Type;
  *(_OWORD *)(v9 + 5) = *(_OWORD *)&PortCharacteristics->MediaConnectState;
  *(_OWORD *)(v9 + 7) = *(_OWORD *)&PortCharacteristics->RcvLinkSpeed;
  *(_OWORD *)(v9 + 9) = *(_OWORD *)&PortCharacteristics->RcvControlState;
  if ( (PortCharacteristics->Flags & 1) != 0 )
  {
    *((_DWORD *)v9 + 17) = *((_DWORD *)NdisMiniportHandle + 830);
    *((_DWORD *)v9 + 18) = *((_DWORD *)NdisMiniportHandle + 831);
    *((_DWORD *)v9 + 19) = *((_DWORD *)NdisMiniportHandle + 832);
    *((_DWORD *)v9 + 20) = *((_DWORD *)NdisMiniportHandle + 833);
  }
  v25 = (_QWORD *)*((_QWORD *)NdisMiniportHandle + 341);
  if ( v25 == (_QWORD *)((char *)NdisMiniportHandle + 2728) )
  {
LABEL_37:
    v28 = (__int64 *)v25[1];
    v29 = *v28;
    if ( *(__int64 **)(*v28 + 8) != v28 )
      __fastfail(3u);
    *v9 = v29;
    v5 = 0;
    v9[1] = v28;
    *(_QWORD *)(v29 + 8) = v9;
    *v28 = (__int64)v9;
    ++*((_DWORD *)NdisMiniportHandle + 689);
    *((_DWORD *)v9 + 4) = 2;
  }
  else
  {
    v26 = *((_DWORD *)v9 + 7);
    while ( 1 )
    {
      v27 = *((_DWORD *)v25 + 7);
      if ( v27 == v26 )
        break;
      if ( v27 <= v26 )
      {
        v25 = (_QWORD *)*v25;
        if ( v25 != (_QWORD *)((char *)NdisMiniportHandle + 2728) )
          continue;
      }
      goto LABEL_37;
    }
    v5 = -1073741270;
    v24 = 1;
  }
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  *((_DWORD *)NdisMiniportHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v10);
  if ( v5 )
  {
    if ( !v24 )
      goto LABEL_44;
    goto LABEL_43;
  }
LABEL_46:
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_qdD(11LL, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, NdisMiniportHandle, v5, v3);
  return v5;
}
