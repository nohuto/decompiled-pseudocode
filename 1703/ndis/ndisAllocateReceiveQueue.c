/*
 * XREFs of ndisAllocateReceiveQueue @ 0x1C003CC6C
 * Callers:
 *     ndisOidPreRcvFilterAllocateQueue @ 0x1C00CFB30 (ndisOidPreRcvFilterAllocateQueue.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisReferenceOpenByHandle @ 0x1C001ADA0 (ndisReferenceOpenByHandle.c)
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00211E4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisAddReceiveQueueToList @ 0x1C003CBFC (ndisAddReceiveQueueToList.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

char __fastcall ndisAllocateReceiveQueue(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  struct _NDIS_OPEN_BLOCK *v3; // r15
  __int64 v4; // rbx
  __int64 v6; // r13
  char v7; // bp
  int v8; // eax
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rdx
  char v11; // r12
  char v12; // al
  char v13; // r15
  struct _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  PVOID PoolWithTag; // rax
  char v16; // al
  KIRQL v17; // r15
  int v18; // ecx
  KIRQL v19; // dl
  __int64 v20; // rax
  int v21; // r9d
  unsigned __int8 *v22; // r8
  unsigned int v23; // r11d
  unsigned int v24; // edx
  int v25; // ecx
  _BYTE *v26; // rax
  _BYTE *v27; // r15
  __int64 v28; // r10
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // eax
  _QWORD *v33; // rdx
  __int64 v34; // r8
  _QWORD *v35; // rax
  int v36; // eax
  unsigned int Size; // [rsp+30h] [rbp-68h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  void *Src; // [rsp+40h] [rbp-58h]
  char v41; // [rsp+A0h] [rbp+8h]
  KIRQL v42; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v43 = 0;
  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  v41 = 0;
  v6 = *(_QWORD *)(v1 + 40);
  v7 = 1;
  v39 = 0LL;
  if ( (unsigned __int8)byte_1C0092620 >= 4u )
    WPP_SF_q(0xEu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v4);
  v8 = 1096;
  *(_DWORD *)(a1 + 40) = -1073741637;
  v9 = *(_WORD *)(v6 + 2);
  v10 = v9;
  if ( v9 >= 0x448u )
    v10 = 1096LL;
  if ( v10 >= *(unsigned int *)(v1 + 48) )
  {
    v8 = *(_DWORD *)(v1 + 48);
  }
  else if ( v9 < 0x448u )
  {
    v8 = v9;
  }
  *(_DWORD *)(v1 + 60) = 0;
  v11 = 2;
  *(_DWORD *)(v1 + 64) = v8;
  if ( *(_DWORD *)(v6 + 8) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_11:
    v12 = 0;
    v13 = 0;
    goto LABEL_61;
  }
  if ( !ndisReferenceMiniport(v4, 0x45u) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    goto LABEL_11;
  }
  OidSourceHandle = (struct _NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
  {
    v39 = (__int64)OidSourceHandle;
    v3 = OidSourceHandle;
    if ( !ndisReferenceOpenByHandle(OidSourceHandle, 0xAu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v12 = 0;
LABEL_18:
      v13 = 1;
      goto LABEL_61;
    }
    v41 = 1;
  }
  if ( *(_DWORD *)(v6 + 8) == 1 && !v3 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_23:
    v12 = v41;
    goto LABEL_18;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
  v2 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_23;
  }
  memset(PoolWithTag, 0, 0x4C8uLL);
  *(_DWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 64) = v4;
  *(_QWORD *)(v2 + 72) = v3;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *(_QWORD *)(v2 + 32) = v2 + 32;
  *(_QWORD *)(v2 + 96) = v2 + 88;
  *(_QWORD *)(v2 + 88) = v2 + 88;
  *(_DWORD *)(v2 + 80) = 1;
  memmove((void *)(v2 + 128), (const void *)v6, *(unsigned int *)(v1 + 64));
  *(_WORD *)(v2 + 130) = *(_WORD *)(v1 + 64);
  v16 = *(_BYTE *)(v2 + 129);
  if ( (unsigned __int8)v16 >= 2u )
    v16 = 2;
  *(_BYTE *)(v2 + 129) = v16;
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v42 = v17;
  v18 = *(_DWORD *)(v4 + 3508);
  *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 1856) = 2687452;
  if ( (unsigned int)(v18 + 1) > 0x3BCBAD )
  {
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
LABEL_30:
    v19 = v17;
LABEL_31:
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v19);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_32;
  }
  v20 = *(_QWORD *)(v4 + 3560);
  v21 = 0;
  if ( !v20 )
  {
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v17);
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_32;
  }
  if ( v18 == *(_DWORD *)(v20 + 16) )
  {
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    goto LABEL_30;
  }
  v22 = *(unsigned __int8 **)(v4 + 3496);
  v23 = *(_DWORD *)(v4 + 3504);
  Src = v22;
  Size = v23;
  if ( v22 && (v24 = 0, v23) )
  {
    v25 = 0;
    v26 = *(_BYTE **)(v4 + 3496);
    while ( *v26 == 0xFF )
    {
      v25 += 8;
      ++v24;
      ++v26;
      v43 = v25;
      if ( v24 >= v23 )
        goto LABEL_42;
    }
    v28 = v24;
    v29 = 1;
    v30 = v22[v24];
    while ( (v30 & v29) != 0 )
    {
      v29 *= 2;
      if ( (unsigned int)++v21 >= 8 )
        goto LABEL_42;
    }
    v31 = v21 + v43;
    v22[v28] = v29 | v30;
    v43 += v21;
  }
  else
  {
LABEL_42:
    v27 = ExAllocatePoolWithTag(NonPagedPoolNx, v23 + 64, 0x7571444Eu);
    if ( !v27 )
    {
      *(_QWORD *)(v4 + 520) = 0LL;
      *(_DWORD *)(v4 + 1856) = 0;
      v19 = v42;
      goto LABEL_31;
    }
    memset(&v27[Size], 0, 0x40uLL);
    if ( Src )
    {
      memmove(v27, Src, Size);
      v27[Size] = 1;
      ExFreePoolWithTag(Src, 0);
      v31 = v43;
    }
    else
    {
      v31 = 1;
      *v27 = 3;
      v43 = 1;
    }
    *(_QWORD *)(v4 + 3496) = v27;
    v17 = v42;
    *(_DWORD *)(v4 + 3504) = Size + 64;
  }
  *(_DWORD *)(v6 + 12) = v31;
  *(_DWORD *)(v2 + 140) = v31;
  *(_DWORD *)(v2 + 48) = v31;
  v32 = ndisAddReceiveQueueToList(v4, v2);
  *(_DWORD *)(a1 + 40) = v32;
  if ( !v32 )
  {
    if ( v39 )
    {
      v33 = (_QWORD *)(v39 + 832);
      v34 = *(_QWORD *)(v39 + 832);
      v35 = (_QWORD *)(v2 + 16);
      if ( *(_QWORD *)(v34 + 8) != v39 + 832 )
        __fastfail(3u);
      *v35 = v34;
      *(_QWORD *)(v2 + 24) = v33;
      *(_QWORD *)(v34 + 8) = v35;
      *v33 = v35;
      ++*(_DWORD *)(v39 + 848);
    }
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v17);
    v12 = 0;
    *(_DWORD *)(v2 + 52) = 1;
    v13 = 0;
    v7 = 0;
    goto LABEL_60;
  }
  *(_QWORD *)(v4 + 520) = 0LL;
  *(_DWORD *)(v4 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v17);
LABEL_32:
  v12 = v41;
  v13 = 1;
LABEL_60:
  v11 = 2;
LABEL_61:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v12 )
      ndisMDereferenceOpenUnlocked(v39, 10);
    if ( v13 )
      ndisDereferenceMiniport(v4, 0x45u);
    if ( v2 )
      ExFreePoolWithTag((PVOID)v2, 0);
  }
  else
  {
    v36 = *(_DWORD *)(v1 + 64);
    *(_DWORD *)(v1 + 60) = v36;
    *(_WORD *)(v6 + 2) = v36;
    if ( *(_BYTE *)(v6 + 1) < 2u )
      v11 = *(_BYTE *)(v6 + 1);
    *(_BYTE *)(v6 + 1) = v11;
  }
  if ( (unsigned __int8)byte_1C0092620 >= 4u )
    WPP_SF_qdD(15LL, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v4, *(unsigned int *)(a1 + 40), v43);
  return v7;
}
