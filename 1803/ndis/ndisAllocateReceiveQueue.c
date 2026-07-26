/*
 * XREFs of ndisAllocateReceiveQueue @ 0x1C003AA8C
 * Callers:
 *     ndisOidPreRcvFilterAllocateQueue @ 0x1C00DC080 (ndisOidPreRcvFilterAllocateQueue.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C001C400 (ndisReferenceOpenByHandle.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisAddReceiveQueueToList @ 0x1C003AA1C (ndisAddReceiveQueueToList.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

char __fastcall ndisAllocateReceiveQueue(__int64 a1)
{
  __int64 v1; // r15
  _BYTE *v2; // r14
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // r13
  char v8; // si
  int v9; // ecx
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int16 v12; // dx
  unsigned __int64 v13; // r8
  char v14; // cl
  char v15; // al
  char v16; // r14
  _BYTE *OidSourceHandle; // rax
  PVOID PoolWithTag; // rax
  char v19; // cl
  KIRQL v20; // cl
  int v21; // edx
  __int64 v22; // rax
  int v23; // r8d
  _BYTE *v24; // r12
  unsigned int v25; // r9d
  unsigned int v26; // edx
  _BYTE *v27; // rax
  int v28; // ecx
  _BYTE *v29; // r14
  __int64 v30; // r10
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  _QWORD *v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rax
  int v38; // eax
  unsigned int Size; // [rsp+30h] [rbp-68h]
  unsigned int Size_4; // [rsp+34h] [rbp-64h]
  __int64 v42; // [rsp+38h] [rbp-60h]
  char v43; // [rsp+A0h] [rbp+8h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+18h]
  int v45; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = 0LL;
  v42 = 0LL;
  v45 = 0;
  v6 = *(_QWORD *)(v1 + 40);
  v8 = 1;
  v43 = 0;
  if ( (unsigned __int8)byte_1C0099620 >= 4u )
    WPP_SF_q(0xEu, &WPP_968189b415313035a5e13c3867538638_Traceguids, v3);
  v9 = 1096;
  v10 = 3221225659LL;
  *(_DWORD *)(a1 + 40) = -1073741637;
  v11 = 1096LL;
  v12 = *(_WORD *)(v6 + 2);
  v13 = *(unsigned int *)(v1 + 48);
  if ( v12 < 0x448u )
    v11 = *(unsigned __int16 *)(v6 + 2);
  if ( v11 >= v13 )
  {
    v9 = *(_DWORD *)(v1 + 48);
  }
  else if ( v12 < 0x448u )
  {
    v9 = *(unsigned __int16 *)(v6 + 2);
  }
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = v9;
  v14 = 2;
  if ( *(_DWORD *)(v6 + 8) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v15 = 0;
    v16 = 0;
    goto LABEL_61;
  }
  if ( ndisReferenceMiniport(v3) )
  {
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
    if ( OidSourceHandle && *OidSourceHandle == 18 )
    {
      v42 = (__int64)OidSourceHandle;
      v2 = OidSourceHandle;
      if ( !ndisReferenceOpenByHandle((__int64)OidSourceHandle, 0xAu) )
      {
        *(_DWORD *)(a1 + 40) = -1073676286;
        v15 = 0;
LABEL_18:
        v16 = 1;
        goto LABEL_60;
      }
      v43 = 1;
    }
    if ( *(_DWORD *)(v6 + 8) == 1 && !v2 )
      goto LABEL_22;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
    v5 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_25:
      *(_DWORD *)(a1 + 40) = -1073741670;
      goto LABEL_23;
    }
    memset(PoolWithTag, 0, 0x4C8uLL);
    *(_DWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 64) = v3;
    *(_QWORD *)(v5 + 72) = v2;
    *(_QWORD *)(v5 + 40) = v5 + 32;
    *(_QWORD *)(v5 + 32) = v5 + 32;
    *(_QWORD *)(v5 + 96) = v5 + 88;
    *(_QWORD *)(v5 + 88) = v5 + 88;
    *(_DWORD *)(v5 + 80) = 1;
    memmove((void *)(v5 + 128), (const void *)v6, *(unsigned int *)(v1 + 64));
    v19 = 2;
    *(_WORD *)(v5 + 130) = *(_WORD *)(v1 + 64);
    if ( *(_BYTE *)(v5 + 129) < 2u )
      v19 = *(_BYTE *)(v5 + 129);
    *(_BYTE *)(v5 + 129) = v19;
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    NewIrql = v20;
    v21 = *(_DWORD *)(v3 + 3508);
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2687452;
    if ( (unsigned int)(v21 + 1) > 0x3BCBAD )
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
LABEL_30:
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v20);
      goto LABEL_25;
    }
    v22 = *(_QWORD *)(v3 + 3560);
    v23 = 0;
    if ( !v22 )
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v20);
LABEL_22:
      *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_23:
      v15 = v43;
      goto LABEL_18;
    }
    if ( v21 == *(_DWORD *)(v22 + 16) )
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      goto LABEL_30;
    }
    v24 = *(_BYTE **)(v3 + 3496);
    v25 = *(_DWORD *)(v3 + 3504);
    Size = v25;
    if ( v24 && (v26 = 0, v25) )
    {
      v27 = *(_BYTE **)(v3 + 3496);
      v28 = 0;
      while ( *v27 == 0xFF )
      {
        v28 += 8;
        ++v26;
        ++v27;
        v45 = v28;
        if ( v26 >= v25 )
          goto LABEL_40;
      }
      v30 = v26;
      v31 = 1;
      v32 = (unsigned __int8)v24[v26];
      while ( (v32 & v31) != 0 )
      {
        v31 *= 2;
        if ( (unsigned int)++v23 >= 8 )
          goto LABEL_40;
      }
      v33 = v23 + v28;
      v24[v30] = v32 | v31;
      v45 = v33;
    }
    else
    {
LABEL_40:
      Size_4 = v25 + 64;
      v29 = ExAllocatePoolWithTag(NonPagedPoolNx, v25 + 64, 0x7571444Eu);
      if ( !v29 )
      {
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
        *(_DWORD *)(a1 + 40) = -1073741670;
        goto LABEL_42;
      }
      memset(&v29[Size], 0, 0x40uLL);
      if ( v24 )
      {
        memmove(v29, v24, Size);
        v29[Size] = 1;
        ExFreePoolWithTag(v24, 0);
        v33 = v45;
      }
      else
      {
        v33 = 1;
        *v29 = 3;
        v45 = 1;
      }
      *(_QWORD *)(v3 + 3496) = v29;
      v2 = (_BYTE *)v42;
      *(_DWORD *)(v3 + 3504) = Size_4;
    }
    *(_DWORD *)(v6 + 12) = v33;
    *(_DWORD *)(v5 + 140) = v33;
    *(_DWORD *)(v5 + 48) = v33;
    v34 = ndisAddReceiveQueueToList(v3, v5);
    *(_DWORD *)(a1 + 40) = v34;
    if ( !v34 )
    {
      if ( v2 )
      {
        v35 = v2 + 832;
        v36 = *((_QWORD *)v2 + 104);
        v37 = (_QWORD *)(v5 + 16);
        if ( *(_BYTE **)(v36 + 8) != v2 + 832 )
          __fastfail(3u);
        *v37 = v36;
        *(_QWORD *)(v5 + 24) = v35;
        *(_QWORD *)(v36 + 8) = v37;
        *v35 = v37;
        ++*((_DWORD *)v2 + 212);
      }
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
      *(_DWORD *)(v5 + 52) = 1;
      v15 = 0;
      v8 = 0;
      v16 = 0;
      goto LABEL_59;
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
LABEL_42:
    v15 = v43;
    v16 = 1;
LABEL_59:
    v4 = v45;
    goto LABEL_60;
  }
  *(_DWORD *)(a1 + 40) = -1073676286;
  v15 = 0;
  v16 = 0;
LABEL_60:
  v14 = 2;
LABEL_61:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v15 )
      ndisMDereferenceOpenUnlocked(v42, 10);
    if ( v16 )
      ndisDereferenceMiniport(v3, 0x45u, v13, v10);
    if ( v5 )
      ExFreePoolWithTag((PVOID)v5, 0);
  }
  else
  {
    v38 = *(_DWORD *)(v1 + 64);
    *(_DWORD *)(v1 + 60) = v38;
    *(_WORD *)(v6 + 2) = v38;
    if ( *(_BYTE *)(v6 + 1) < 2u )
      v14 = *(_BYTE *)(v6 + 1);
    *(_BYTE *)(v6 + 1) = v14;
  }
  if ( (unsigned __int8)byte_1C0099620 >= 4u )
    WPP_SF_qdD(15LL, &WPP_968189b415313035a5e13c3867538638_Traceguids, v3, *(unsigned int *)(a1 + 40), v4);
  return v8;
}
