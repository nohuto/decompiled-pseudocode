/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1400655BC
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1402253C0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockBreakH @ 0x140579BC0 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x140715180 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140065408 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x140066EE0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpComputeShareableOplockState @ 0x140067F00 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400B7088 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C8AF4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC7A4 (FsRtlpOplockSendModernAppTermination.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpWaitOnIrp @ 0x14015EB9C (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14015F014 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140225B9C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        IRP *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9,
        __int64 a10)
{
  unsigned int v10; // r10d
  __int64 v12; // r9
  __int64 v14; // r8
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  char v26; // r14
  __int64 *v27; // rsi
  char v28; // al
  _QWORD *i; // rdi
  __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // eax
  PIRP v33; // rdi
  struct _IRP *MasterIrp; // rdx
  int v35; // eax
  PIRP v36; // rdi
  struct _IRP *v37; // rcx
  PIRP v38; // rdi
  struct _IRP *v39; // rcx
  PIRP v40; // rdi
  PIRP v41; // rax
  void *v42; // rcx
  struct _IRP *v43; // rcx
  _QWORD *v44; // rsi
  __int64 *v45; // rax
  __int64 *v46; // r14
  __int64 v47; // r13
  int v48; // edx
  int v49; // eax
  __int16 v50; // cx
  __int64 *v51; // rsi
  char v52; // al
  char v53; // al
  __int64 *v54; // r14
  __int64 v55; // r15
  char v56; // al
  __int64 v57; // rcx
  char v58; // al
  _QWORD *v59; // rsi
  int v60; // eax
  _QWORD *v61; // rdi
  int v62; // eax
  int v63; // [rsp+30h] [rbp-98h]
  char v64; // [rsp+40h] [rbp-88h]
  char v65; // [rsp+41h] [rbp-87h]
  bool v66; // [rsp+42h] [rbp-86h]
  char v67; // [rsp+43h] [rbp-85h]
  unsigned int v68; // [rsp+44h] [rbp-84h]
  unsigned int v69; // [rsp+48h] [rbp-80h]
  __int64 *v70; // [rsp+50h] [rbp-78h]
  __int64 *v71; // [rsp+50h] [rbp-78h]
  char v72[88]; // [rsp+70h] [rbp-58h] BYREF

  v10 = a4;
  v12 = a2;
  v68 = 0;
  v64 = 0;
  v67 = 0;
  v66 = 0;
  v65 = 1;
  v14 = v10 & 8;
  v69 = v10 & 8;
  if ( a5 == 28672 || a5 == 20480 || a5 == 0x4000 || a5 == 0x2000 )
  {
    if ( !a1 )
      return v68;
    v16 = *(_DWORD *)(a1 + 144);
    if ( v16 != 1 && (v16 & a5) != 0 )
    {
      if ( (v10 & 8) != 0 )
      {
LABEL_14:
        v17 = *(_DWORD *)(a1 + 144);
        if ( (v17 & 0x40) != 0 && (v10 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        v18 = v17 & 0x1F0FFDF;
        v19 = 1069120LL;
        if ( (v17 & 0x1F0FFDFu) <= 0x105040 )
        {
          if ( v18 != 1069120 )
          {
            v20 = v18 - 4096;
            if ( !v20 )
              goto LABEL_65;
            v21 = v20 - 16;
            if ( !v21 )
              goto LABEL_65;
            v22 = v21 - 8176;
            if ( !v22 )
            {
LABEL_75:
              if ( a5 == 0x2000 )
              {
                v45 = (__int64 *)(a1 + 56);
                v46 = *(__int64 **)(a1 + 56);
                while ( 1 )
                {
                  if ( v46 == v45 )
                    goto LABEL_118;
                  v47 = v46[2];
                  if ( !(_DWORD)v14 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v46[3], v14) )
                      goto LABEL_89;
                    v10 = a4;
                  }
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( v46[7] )
                  {
                    v64 = 1;
                    goto LABEL_90;
                  }
                  v70 = (__int64 *)v46[1];
                  *(_BYTE *)(v47 + 69) = KeAcquireQueuedSpinLock(7uLL);
                  _InterlockedExchange64((volatile __int64 *)(v47 + 104), 0LL);
                  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v47 + 69));
                  if ( *(_BYTE *)(v47 + 68) )
                  {
                    v46 = v70;
                    FsRtlpRemoveAndBreakRHIrp(*v70, a1, 0, -1073741536, 0, 0, 0, 0);
                    v67 = 1;
                  }
                  else
                  {
                    v48 = 1;
                    v49 = 0;
                    v50 = 0;
                    if ( !*(_BYTE *)a2 )
                    {
                      v48 = 3;
                      v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                      v50 = *(_WORD *)(a2 + 26);
                    }
                    v46 = v70;
                    FsRtlpRemoveAndBreakRHIrp(*v70, a1, 0, 0, 0x1000u, v48, v49, v50);
                    v65 = 0;
                    v64 = 1;
                    v66 = v69 != 0;
                  }
LABEL_89:
                  v10 = a4;
LABEL_90:
                  v46 = (__int64 *)*v46;
                  v14 = v69;
                  v45 = (__int64 *)(a1 + 56);
                  v12 = a2;
                }
              }
              if ( (a5 & 0x5000) == 0x5000 )
              {
                v51 = *(__int64 **)(a1 + 72);
                while ( v51 != (__int64 *)(a1 + 72) )
                {
                  if ( (_DWORD)v14 || (v52 = FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v51[3], v10), v10 = a4, !v52) )
                  {
                    if ( (v10 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    *((_DWORD *)v51 + 12) &= 0xFF0FFFFF;
                    *((_DWORD *)v51 + 12) |= 0x800000u;
                    v53 = v64;
                    if ( (a5 & 0x2000) != 0 )
                      v53 = 1;
                    v64 = v53;
                  }
                  v51 = (__int64 *)*v51;
                  v14 = v69;
                  v12 = a2;
                }
                v54 = *(__int64 **)(a1 + 56);
                while ( v54 != (__int64 *)(a1 + 56) )
                {
                  v55 = v54[2];
                  if ( !(_DWORD)v14 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v54[3], v10) )
                      goto LABEL_116;
                    v10 = a4;
                  }
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( !v54[7] )
                  {
                    v71 = (__int64 *)v54[1];
                    *(_BYTE *)(v55 + 69) = KeAcquireQueuedSpinLock(7uLL);
                    _InterlockedExchange64((volatile __int64 *)(v55 + 104), 0LL);
                    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v55 + 69));
                    v54 = v71;
                    v57 = *v71;
                    if ( *(_BYTE *)(v55 + 68) )
                    {
                      FsRtlpRemoveAndBreakRHIrp(v57, a1, 0, -1073741536, 0, 0, 0, 0);
                      v67 = 1;
                    }
                    else
                    {
                      FsRtlpRemoveAndBreakRHIrp(v57, a1, 0, 0, 0, 1, 0, 0);
                      v65 = 0;
                      v58 = v64;
                      if ( (a5 & 0x2000) != 0 )
                        v58 = 1;
                      v64 = v58;
                      v66 = v69 != 0;
                    }
LABEL_116:
                    v10 = a4;
                    goto LABEL_117;
                  }
                  v56 = v64;
                  if ( (a5 & 0x2000) != 0 )
                    v56 = 1;
                  v64 = v56;
LABEL_117:
                  v54 = (__int64 *)*v54;
                  v14 = v69;
                  v12 = a2;
                }
              }
LABEL_118:
              if ( v67 )
                FsRtlpReleaseIrpsWaitingForRH(a1, v19, v14, v12);
              if ( !v64 )
              {
                v59 = *(_QWORD **)(a1 + 72);
                if ( v59 != (_QWORD *)(a1 + 72) && (a5 & 0x2000) != 0 )
                {
                  if ( v69 )
                  {
LABEL_126:
                    v64 = 1;
                  }
                  else
                  {
                    while ( v59 != (_QWORD *)(a1 + 72) )
                    {
                      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(v59[3], *(_QWORD *)(a2 + 48), 0LL) )
                        goto LABEL_126;
                      v59 = (_QWORD *)*v59;
                    }
                  }
                }
              }
LABEL_128:
              FsRtlpComputeShareableOplockState(a1, v19, v14, v12);
              goto LABEL_129;
            }
            v23 = v22 - 8256;
            if ( v23 )
            {
              v24 = v23 - 0x2000;
              if ( v24 )
              {
                v25 = v24 - 16320;
                if ( v25 )
                {
                  if ( v25 == 1015808 )
                  {
                    v26 = 0;
                    if ( (a5 & 0x1000) != 0 )
                    {
                      v27 = *(__int64 **)(a1 + 72);
                      while ( v27 != (__int64 *)(a1 + 72) )
                      {
                        if ( (_DWORD)v14
                          || (v28 = FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v27[3], v10), v10 = a4, !v28) )
                        {
                          v26 = 1;
                          if ( (v10 & 0x10010000) != 0 )
                            return (unsigned int)-1073739511;
                          *((_DWORD *)v27 + 12) &= 0xFF0FFFFF;
                          *((_DWORD *)v27 + 12) |= 0x800000u;
                        }
                        v27 = (__int64 *)*v27;
                        v14 = v69;
                        v12 = a2;
                      }
                      FsRtlpComputeShareableOplockState(a1, v19, v14, v12);
                    }
                    if ( (a5 & 0x2000) == 0 )
                      goto LABEL_129;
                    if ( !v26 )
                    {
                      if ( (a5 & 0x1000) == 0 )
                      {
                        for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
                        {
                          if ( v69 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), i[3], 0LL) )
                            goto LABEL_145;
                        }
                      }
                      goto LABEL_129;
                    }
                    goto LABEL_145;
                  }
LABEL_144:
                  if ( (v17 & 0x1000000) == 0 )
                    goto LABEL_129;
                  goto LABEL_145;
                }
LABEL_65:
                if ( (a5 & 0x1000) != 0 )
                {
                  v44 = *(_QWORD **)(a1 + 40);
                  while ( v44 != (_QWORD *)(a1 + 40) )
                  {
                    v19 = v44[2];
                    if ( *(_DWORD *)(v19 + 24) == 590400
                      && ((_DWORD)v14
                       || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), *(_QWORD *)(v19 + 48), v10)) )
                    {
                      if ( (a4 & 0x10010000) != 0 )
                        return (unsigned int)-1073739511;
                      v44 = (_QWORD *)v44[1];
                      FsRtlpRemoveAndCompleteReadOnlyIrp(*v44, 0LL, 0LL, v12);
                    }
                    v44 = (_QWORD *)*v44;
                    v14 = v69;
                    v12 = a2;
                    v10 = a4;
                  }
                }
                if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
                  goto LABEL_128;
                goto LABEL_75;
              }
              if ( a5 == 0x4000 )
              {
                v30 = *(_QWORD *)a1;
                *(_BYTE *)(v30 + 69) = KeAcquireQueuedSpinLock(7uLL);
                _InterlockedExchange64((volatile __int64 *)(v30 + 104), 0LL);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v30 + 69));
                if ( !*(_BYTE *)(v30 + 68) )
                {
                  v31 = *(_QWORD *)(v30 + 24);
                  *(_QWORD *)v31 = 0LL;
                  *(_QWORD *)(v31 + 8) = 0LL;
                  *(_QWORD *)(v31 + 16) = 0LL;
                  *(_DWORD *)v31 = 1572865;
                  *(_DWORD *)(v31 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                  *(_DWORD *)(v31 + 8) = 3;
                  *(_DWORD *)(v31 + 12) |= 1u;
                  *(_QWORD *)(v30 + 56) = 24LL;
                  *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                  IofCompleteRequest(*(PIRP *)a1, 1);
                  *(_QWORD *)a1 = 0LL;
                  v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
LABEL_64:
                  *(_DWORD *)(a1 + 144) = v32;
                  goto LABEL_145;
                }
              }
              else if ( a5 == 0x2000 )
              {
                v33 = *(PIRP *)a1;
                v33->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
                _InterlockedExchange64((volatile __int64 *)&v33->CancelRoutine, 0LL);
                KeReleaseQueuedSpinLock(7uLL, v33->CancelIrql);
                if ( !v33->Cancel )
                {
                  MasterIrp = v33->AssociatedIrp.MasterIrp;
                  *(_QWORD *)&MasterIrp->Type = 0LL;
                  MasterIrp->MdlAddress = 0LL;
                  *(_QWORD *)&MasterIrp->Flags = 0LL;
                  *(_DWORD *)&MasterIrp->Type = 1572865;
                  *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                  LODWORD(MasterIrp->MdlAddress) = 5;
                  v35 = HIDWORD(MasterIrp->MdlAddress) | 1;
                  HIDWORD(MasterIrp->MdlAddress) = v35;
                  if ( !*(_BYTE *)a2 )
                  {
                    HIDWORD(MasterIrp->MdlAddress) = v35 | 2;
                    MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                    *((_WORD *)&MasterIrp->Flags + 2) = *(_WORD *)(a2 + 26);
                  }
                  v33->IoStatus.Information = 24LL;
                  *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                  IofCompleteRequest(*(PIRP *)a1, 1);
                  *(_QWORD *)a1 = 0LL;
                  v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
                  goto LABEL_64;
                }
              }
              else
              {
                v36 = *(PIRP *)a1;
                v36->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
                _InterlockedExchange64((volatile __int64 *)&v36->CancelRoutine, 0LL);
                KeReleaseQueuedSpinLock(7uLL, v36->CancelIrql);
                if ( !v36->Cancel )
                {
                  v37 = v36->AssociatedIrp.MasterIrp;
                  *(_QWORD *)&v37->Type = 0LL;
                  v37->MdlAddress = 0LL;
                  *(_QWORD *)&v37->Flags = 0LL;
                  *(_DWORD *)&v37->Type = 1572865;
                  *(_DWORD *)(&v37->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                  LODWORD(v37->MdlAddress) = 0;
                  HIDWORD(v37->MdlAddress) |= 1u;
                  v36->IoStatus.Information = 24LL;
                  *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                  IofCompleteRequest(*(PIRP *)a1, 1);
                  *(_QWORD *)a1 = 0LL;
                  v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
                  goto LABEL_64;
                }
              }
            }
            else if ( (a5 & 0x5000) == 0x5000 )
            {
              v38 = *(PIRP *)a1;
              v38->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
              _InterlockedExchange64((volatile __int64 *)&v38->CancelRoutine, 0LL);
              KeReleaseQueuedSpinLock(7uLL, v38->CancelIrql);
              if ( !v38->Cancel )
              {
                v39 = v38->AssociatedIrp.MasterIrp;
                *(_QWORD *)&v39->Type = 0LL;
                v39->MdlAddress = 0LL;
                *(_QWORD *)&v39->Flags = 0LL;
                *(_DWORD *)&v39->Type = 1572865;
                *(_DWORD *)(&v39->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v39->MdlAddress) = 0;
                HIDWORD(v39->MdlAddress) |= 1u;
                v38->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
                goto LABEL_64;
              }
            }
            else
            {
              if ( (a5 & 0x4000) == 0 )
                goto LABEL_129;
              v40 = *(PIRP *)a1;
              v40->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
              _InterlockedExchange64((volatile __int64 *)&v40->CancelRoutine, 0LL);
              KeReleaseQueuedSpinLock(7uLL, v40->CancelIrql);
              if ( !v40->Cancel )
              {
                v43 = v40->AssociatedIrp.MasterIrp;
                *(_QWORD *)&v43->Type = 0LL;
                v43->MdlAddress = 0LL;
                *(_QWORD *)&v43->Flags = 0LL;
                *(_DWORD *)&v43->Type = 1572865;
                *(_DWORD *)(&v43->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v43->MdlAddress) = 1;
                HIDWORD(v43->MdlAddress) |= 1u;
                v40->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
                goto LABEL_64;
              }
            }
            FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
            FsRtlpClearOwner(a1, 0LL);
            *(_BYTE *)(a1 + 32) = 0;
            v41 = *(PIRP *)a1;
            if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
            {
              v41->IoStatus.Information = 0LL;
              v41 = *(PIRP *)a1;
            }
            v41->IoStatus.Status = -1073741536;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
            *(_QWORD *)(a1 + 8) = 0LL;
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
            while ( 1 )
            {
              v42 = *(void **)(a1 + 88);
              v66 = 0;
              v65 = 1;
              if ( v42 == (void *)(a1 + 88) )
                break;
              FsRtlpRemoveAndCompleteWaitingIrp(v42);
            }
            goto LABEL_129;
          }
          if ( (a5 & 0x1000) != 0 )
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_136:
          if ( (a5 & 0x5000) == 0 )
            goto LABEL_129;
          goto LABEL_145;
        }
        switch ( v18 )
        {
          case 1077312:
            goto LABEL_155;
          case 3174464:
            if ( a5 != 0x4000 )
            {
              if ( (a5 & 0x5000) != 0x5000 )
                goto LABEL_145;
LABEL_160:
              v62 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
              goto LABEL_161;
            }
            break;
          case 5271616:
            if ( a5 != 0x2000 )
            {
LABEL_155:
              if ( (a5 & 0x1000) == 0 )
                goto LABEL_145;
              goto LABEL_160;
            }
            break;
          case 8400896:
            if ( (a5 & 0x3000) != 0 )
            {
              if ( (v10 & 0x10010000) != 0 )
                return (unsigned int)-1073739511;
              if ( (a5 & 0x2000) != 0 )
              {
                v61 = *(_QWORD **)(a1 + 72);
                while ( v61 != (_QWORD *)(a1 + 72) )
                {
                  if ( (_DWORD)v14 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v61[3], v14) )
                    goto LABEL_145;
                  v61 = (_QWORD *)*v61;
                  v14 = v69;
                  v12 = a2;
                }
              }
            }
LABEL_129:
            if ( v64 )
            {
              if ( (a4 & 1) != 0 )
              {
                v60 = *(_DWORD *)(a1 + 144);
                if ( (v60 & 0x10000) != 0 )
                  *(_DWORD *)(a1 + 144) = v60 | 0x20000;
                return 264;
              }
              else
              {
                if ( v65 )
                {
                  LOBYTE(v14) = 1;
                  FsRtlpModifyThreadPriorities(a1, 0LL, v14);
                  FsRtlpOplockSendModernAppTermination(a1, 0LL);
                }
                *a9 = 0;
                LOBYTE(v63) = v66;
                return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, v72, v63, a10);
              }
            }
            return v68;
          case 8409152:
            goto LABEL_136;
          case 8417344:
LABEL_145:
            v64 = 1;
            goto LABEL_129;
          default:
            goto LABEL_144;
        }
        v62 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_161:
        *(_DWORD *)(a1 + 144) = v62;
        goto LABEL_145;
      }
      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), v10) )
      {
        v14 = v69;
        v12 = a2;
        v10 = a4;
        goto LABEL_14;
      }
    }
    return 0;
  }
  if ( a3 )
  {
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
  }
  return 3221225699LL;
}
