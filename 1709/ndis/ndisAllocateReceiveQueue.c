/*
 * XREFs of ndisAllocateReceiveQueue @ 0x1C00396F4
 * Callers:
 *     ndisOidPreRcvFilterAllocateQueue @ 0x1C00DA4C0 (ndisOidPreRcvFilterAllocateQueue.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisReferenceOpenByHandle @ 0x1C000510C (ndisReferenceOpenByHandle.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     ndisAddReceiveQueueToList @ 0x1C0039684 (ndisAddReceiveQueueToList.c)
 */

char __fastcall ndisAllocateReceiveQueue(__int64 a1)
{
  __int64 v1; // r14
  _BYTE *v2; // r15
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // r13
  char v8; // si
  int v9; // eax
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // rdx
  char v12; // cl
  char v13; // al
  char v14; // r15
  _BYTE *OidSourceHandle; // rax
  PVOID PoolWithTag; // rax
  char v17; // cl
  KIRQL v18; // cl
  int v19; // edx
  KIRQL v20; // dl
  KSPIN_LOCK *v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // r12
  unsigned int v24; // r9d
  unsigned int v25; // eax
  _BYTE *v26; // rcx
  int v27; // r8d
  _BYTE *v28; // r15
  int v29; // edx
  int v30; // ecx
  __int64 v31; // r10
  int v32; // eax
  int v33; // r8d
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
  if ( (unsigned __int8)byte_1C0098760 >= 4u )
    WPP_SF_q(0xEu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3);
  v9 = 1096;
  *(_DWORD *)(a1 + 40) = -1073741637;
  v10 = *(_WORD *)(v6 + 2);
  v11 = v10;
  if ( v10 >= 0x448u )
    v11 = 1096LL;
  if ( v11 >= *(unsigned int *)(v1 + 48) )
  {
    v9 = *(_DWORD *)(v1 + 48);
  }
  else if ( v10 < 0x448u )
  {
    v9 = v10;
  }
  *(_DWORD *)(v1 + 60) = 0;
  v12 = 2;
  *(_DWORD *)(v1 + 64) = v9;
  if ( *(_DWORD *)(v6 + 8) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v13 = 0;
    v14 = 0;
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
        v13 = 0;
LABEL_17:
        v14 = 1;
        goto LABEL_60;
      }
      v43 = 1;
    }
    if ( *(_DWORD *)(v6 + 8) == 1 && !v2 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_22:
      v13 = v43;
      goto LABEL_17;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
    v5 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_DWORD *)(a1 + 40) = -1073741670;
      goto LABEL_22;
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
    *(_WORD *)(v5 + 130) = *(_WORD *)(v1 + 64);
    v17 = 2;
    if ( *(_BYTE *)(v5 + 129) < 2u )
      v17 = *(_BYTE *)(v5 + 129);
    *(_BYTE *)(v5 + 129) = v17;
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    NewIrql = v18;
    v19 = *(_DWORD *)(v3 + 3508);
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2687452;
    if ( (unsigned int)(v19 + 1) <= 0x3BCBAD )
    {
      v22 = *(_QWORD *)(v3 + 3560);
      if ( !v22 )
      {
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v18);
        *(_DWORD *)(a1 + 40) = -1073741637;
        goto LABEL_31;
      }
      if ( v19 != *(_DWORD *)(v22 + 16) )
      {
        v23 = *(_BYTE **)(v3 + 3496);
        v24 = *(_DWORD *)(v3 + 3504);
        Size = v24;
        if ( v23 && (v25 = 0, v24) )
        {
          v26 = *(_BYTE **)(v3 + 3496);
          v27 = 0;
          while ( *v26 == 0xFF )
          {
            v27 += 8;
            ++v25;
            ++v26;
            v45 = v27;
            if ( v25 >= v24 )
              goto LABEL_41;
          }
          v29 = 0;
          v30 = 1;
          v31 = v25;
          v32 = (unsigned __int8)v23[v25];
          while ( (v30 & v32) != 0 )
          {
            v30 *= 2;
            if ( (unsigned int)++v29 >= 8 )
              goto LABEL_41;
          }
          v33 = v29 + v27;
          v23[v31] = v30 | v32;
          v45 = v33;
        }
        else
        {
LABEL_41:
          Size_4 = v24 + 64;
          v28 = ExAllocatePoolWithTag(NonPagedPoolNx, v24 + 64, 0x7571444Eu);
          if ( !v28 )
          {
            *(_QWORD *)(v3 + 520) = 0LL;
            v21 = (KSPIN_LOCK *)(v3 + 96);
            *(_DWORD *)(v3 + 1856) = 0;
            v20 = NewIrql;
            goto LABEL_30;
          }
          memset(&v28[Size], 0, 0x40uLL);
          if ( v23 )
          {
            memmove(v28, v23, Size);
            v28[Size] = 1;
            ExFreePoolWithTag(v23, 0);
            v33 = v45;
          }
          else
          {
            *v28 = 3;
            v33 = 1;
            v45 = 1;
          }
          *(_QWORD *)(v3 + 3496) = v28;
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
          v13 = 0;
          v8 = 0;
          v14 = 0;
          goto LABEL_59;
        }
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
LABEL_31:
        v13 = v43;
        v14 = 1;
LABEL_59:
        v4 = v45;
        goto LABEL_60;
      }
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
    }
    else
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
    }
    v20 = v18;
    v21 = (KSPIN_LOCK *)(v3 + 96);
LABEL_30:
    KeReleaseSpinLock(v21, v20);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 40) = -1073676286;
  v13 = 0;
  v14 = 0;
LABEL_60:
  v12 = 2;
LABEL_61:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v13 )
      ndisMDereferenceOpenUnlocked(v42);
    if ( v14 )
      ndisDereferenceMiniport(v3, 0x45u);
    if ( v5 )
      ExFreePoolWithTag((PVOID)v5, 0);
  }
  else
  {
    v38 = *(_DWORD *)(v1 + 64);
    *(_DWORD *)(v1 + 60) = v38;
    *(_WORD *)(v6 + 2) = v38;
    if ( *(_BYTE *)(v6 + 1) < 2u )
      v12 = *(_BYTE *)(v6 + 1);
    *(_BYTE *)(v6 + 1) = v12;
  }
  if ( (unsigned __int8)byte_1C0098760 >= 4u )
    WPP_SF_qdD(0xFu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3, *(_DWORD *)(a1 + 40), v4);
  return v8;
}
