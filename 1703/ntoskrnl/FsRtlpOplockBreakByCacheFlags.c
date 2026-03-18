/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401E37C0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockBreakH @ 0x14044A520 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x140585C60 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140019240 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140019C10 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140031310 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x140050C14 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpComputeShareableOplockState @ 0x140052820 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpWaitOnIrp @ 0x140136678 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
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
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  char v25; // r14
  __int64 *v26; // rsi
  char v27; // al
  _QWORD *j; // rdi
  __int64 v29; // rdi
  __int64 v30; // rcx
  int v31; // eax
  PIRP v32; // rdi
  struct _IRP *v33; // rdx
  int v34; // eax
  PIRP v35; // rdi
  struct _IRP *MasterIrp; // rcx
  PIRP v37; // rdi
  struct _IRP *v38; // rcx
  PIRP v39; // rdi
  struct _IRP *v40; // rcx
  __int64 *v41; // r14
  __int64 v42; // rdx
  PVOID *v43; // r14
  PVOID v44; // r13
  int v45; // edx
  int v46; // eax
  __int16 v47; // cx
  __int64 *v48; // rsi
  char v49; // al
  char v50; // al
  void **v51; // r14
  void *v52; // r15
  void *v53; // rcx
  char v54; // al
  _QWORD *v55; // rsi
  _QWORD *i; // rdi
  bool v57; // zf
  _QWORD *v58; // rdi
  int v59; // eax
  _QWORD *v60; // rcx
  int v61; // eax
  int v62; // [rsp+30h] [rbp-98h]
  char v63; // [rsp+40h] [rbp-88h]
  char v64; // [rsp+41h] [rbp-87h]
  char v65; // [rsp+42h] [rbp-86h]
  bool v66; // [rsp+43h] [rbp-85h]
  unsigned int v67; // [rsp+44h] [rbp-84h]
  unsigned int v68; // [rsp+48h] [rbp-80h]
  PVOID *v69; // [rsp+50h] [rbp-78h]
  void **v70; // [rsp+50h] [rbp-78h]
  char v71[88]; // [rsp+70h] [rbp-58h] BYREF

  v10 = a4;
  v12 = a2;
  v67 = 0;
  v63 = 0;
  v64 = 0;
  v66 = 0;
  v65 = 1;
  v14 = v10 & 8;
  v68 = v10 & 8;
  if ( a5 == 28672 || a5 == 20480 || a5 == 0x4000 || a5 == 0x2000 )
  {
    if ( !a1 )
      return v67;
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
        if ( (v17 & 0x1F0FFDFu) <= 0x105040 )
        {
          if ( v18 != 1069120 )
          {
            v19 = v18 - 4096;
            if ( !v19 )
              goto LABEL_65;
            v20 = v19 - 16;
            if ( !v20 )
              goto LABEL_65;
            v21 = v20 - 8176;
            if ( !v21 )
            {
LABEL_75:
              if ( a5 == 0x2000 )
              {
                v43 = *(PVOID **)(a1 + 56);
                while ( 1 )
                {
                  if ( v43 == (PVOID *)(a1 + 56) )
                    goto LABEL_115;
                  v44 = v43[2];
                  if ( !(_DWORD)v14 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v43[3], v14) )
                      goto LABEL_89;
                    v10 = a4;
                  }
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( v43[7] )
                  {
                    v63 = 1;
                    goto LABEL_90;
                  }
                  v69 = (PVOID *)v43[1];
                  *((_BYTE *)v44 + 69) = KeAcquireQueuedSpinLock(7uLL);
                  _InterlockedExchange64((volatile __int64 *)v44 + 13, 0LL);
                  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v44 + 69));
                  if ( *((_BYTE *)v44 + 68) )
                  {
                    v43 = v69;
                    FsRtlpRemoveAndBreakRHIrp(*v69, a1, 0, -1073741536, 0, 0, 0, 0);
                    v64 = 1;
                  }
                  else
                  {
                    v45 = 1;
                    v46 = 0;
                    v47 = 0;
                    if ( !*(_BYTE *)a2 )
                    {
                      v45 = 3;
                      v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                      v47 = *(_WORD *)(a2 + 26);
                    }
                    v43 = v69;
                    FsRtlpRemoveAndBreakRHIrp(*v69, a1, 0, 0, 0x1000u, v45, v46, v47);
                    v65 = 0;
                    v63 = 1;
                    v66 = v68 != 0;
                  }
LABEL_89:
                  v10 = a4;
LABEL_90:
                  v43 = (PVOID *)*v43;
                  v14 = v68;
                  v12 = a2;
                }
              }
              if ( (a5 & 0x5000) == 0x5000 )
              {
                v48 = *(__int64 **)(a1 + 72);
                while ( v48 != (__int64 *)(a1 + 72) )
                {
                  if ( (_DWORD)v14 || (v49 = FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v48[3], v10), v10 = a4, !v49) )
                  {
                    if ( (v10 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    *((_DWORD *)v48 + 12) &= 0xFF0FFFFF;
                    *((_DWORD *)v48 + 12) |= 0x800000u;
                    v50 = v63;
                    if ( (a5 & 0x2000) != 0 )
                      v50 = 1;
                    v63 = v50;
                  }
                  v48 = (__int64 *)*v48;
                  LODWORD(v14) = v68;
                  v12 = a2;
                }
                v51 = *(void ***)(a1 + 56);
                while ( v51 != (void **)(a1 + 56) )
                {
                  v52 = v51[2];
                  if ( !(_DWORD)v14 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v51[3], v10) )
                      goto LABEL_113;
                    v10 = a4;
                  }
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( !v51[7] )
                  {
                    v70 = (void **)v51[1];
                    *((_BYTE *)v52 + 69) = KeAcquireQueuedSpinLock(7uLL);
                    _InterlockedExchange64((volatile __int64 *)v52 + 13, 0LL);
                    KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v52 + 69));
                    v51 = v70;
                    v53 = *v70;
                    if ( *((_BYTE *)v52 + 68) )
                    {
                      FsRtlpRemoveAndBreakRHIrp(v53, a1, 0, -1073741536, 0, 0, 0, 0);
                      v64 = 1;
                    }
                    else
                    {
                      FsRtlpRemoveAndBreakRHIrp(v53, a1, 0, 0, 0, 1, 0, 0);
                      v65 = 0;
                      v54 = v63;
                      if ( (a5 & 0x2000) != 0 )
                        v54 = 1;
                      v63 = v54;
                      v66 = v68 != 0;
                    }
LABEL_113:
                    v10 = a4;
                  }
                  v51 = (void **)*v51;
                  LODWORD(v14) = v68;
                  v12 = a2;
                }
              }
LABEL_115:
              if ( v64 )
                FsRtlpReleaseIrpsWaitingForRH(a1);
              if ( !v63 )
              {
                v55 = (_QWORD *)(a1 + 72);
                if ( (_QWORD *)*v55 != v55 && (a5 & 0x2000) != 0 )
                {
                  if ( v68 )
                  {
LABEL_124:
                    v63 = 1;
                  }
                  else
                  {
                    for ( i = (_QWORD *)*v55; i != v55; i = (_QWORD *)*i )
                    {
                      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(i[3], *(_QWORD *)(a2 + 48), 0LL) )
                        goto LABEL_124;
                    }
                  }
                }
              }
LABEL_126:
              FsRtlpComputeShareableOplockState(a1);
              goto LABEL_159;
            }
            v22 = v21 - 8256;
            if ( v22 )
            {
              v23 = v22 - 0x2000;
              if ( v23 )
              {
                v24 = v23 - 16320;
                if ( v24 )
                {
                  if ( v24 == 1015808 )
                  {
                    v25 = 0;
                    if ( (a5 & 0x1000) != 0 )
                    {
                      v26 = *(__int64 **)(a1 + 72);
                      while ( v26 != (__int64 *)(a1 + 72) )
                      {
                        if ( (_DWORD)v14
                          || (v27 = FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v26[3], v10), v10 = a4, !v27) )
                        {
                          v25 = 1;
                          if ( (v10 & 0x10010000) != 0 )
                            return (unsigned int)-1073739511;
                          *((_DWORD *)v26 + 12) &= 0xFF0FFFFF;
                          *((_DWORD *)v26 + 12) |= 0x800000u;
                        }
                        v26 = (__int64 *)*v26;
                        LODWORD(v14) = v68;
                        v12 = a2;
                      }
                      FsRtlpComputeShareableOplockState(a1);
                    }
                    if ( (a5 & 0x2000) != 0 )
                    {
                      if ( v25 )
                      {
LABEL_43:
                        v63 = 1;
                      }
                      else if ( (a5 & 0x1000) == 0 )
                      {
                        for ( j = *(_QWORD **)(a1 + 72); j != (_QWORD *)(a1 + 72); j = (_QWORD *)*j )
                        {
                          if ( v68 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0LL) )
                            goto LABEL_43;
                        }
                      }
                    }
                    goto LABEL_159;
                  }
                  goto LABEL_138;
                }
LABEL_65:
                if ( (a5 & 0x1000) != 0 )
                {
                  v41 = *(__int64 **)(a1 + 40);
                  while ( v41 != (__int64 *)(a1 + 40) )
                  {
                    v42 = v41[2];
                    if ( *(_DWORD *)(v42 + 24) == 590400
                      && ((_DWORD)v14
                       || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), *(_QWORD *)(v42 + 48), v10)) )
                    {
                      if ( (a4 & 0x10010000) != 0 )
                        return (unsigned int)-1073739511;
                      v41 = (__int64 *)v41[1];
                      FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*v41, 0, 0);
                    }
                    v41 = (__int64 *)*v41;
                    v14 = v68;
                    v12 = a2;
                    v10 = a4;
                  }
                }
                if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
                  goto LABEL_126;
                goto LABEL_75;
              }
              if ( a5 == 0x4000 )
              {
                v29 = *(_QWORD *)a1;
                *(_BYTE *)(v29 + 69) = KeAcquireQueuedSpinLock(7uLL);
                _InterlockedExchange64((volatile __int64 *)(v29 + 104), 0LL);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v29 + 69));
                if ( *(_BYTE *)(v29 + 68) )
                  goto LABEL_46;
                v30 = *(_QWORD *)(v29 + 24);
                *(_QWORD *)v30 = 0LL;
                *(_QWORD *)(v30 + 8) = 0LL;
                *(_QWORD *)(v30 + 16) = 0LL;
                *(_DWORD *)v30 = 1572865;
                *(_DWORD *)(v30 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                *(_DWORD *)(v30 + 8) = 3;
                *(_DWORD *)(v30 + 12) |= 1u;
                *(_QWORD *)(v29 + 56) = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v31 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
LABEL_57:
                *(_DWORD *)(a1 + 144) = v31;
                v63 = 1;
                goto LABEL_159;
              }
              if ( a5 != 0x2000 )
              {
                v35 = *(PIRP *)a1;
                v35->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
                _InterlockedExchange64((volatile __int64 *)&v35->CancelRoutine, 0LL);
                KeReleaseQueuedSpinLock(7uLL, v35->CancelIrql);
                if ( v35->Cancel )
                  goto LABEL_46;
                MasterIrp = v35->AssociatedIrp.MasterIrp;
                *(_QWORD *)&MasterIrp->Type = 0LL;
                MasterIrp->MdlAddress = 0LL;
                *(_QWORD *)&MasterIrp->Flags = 0LL;
                *(_DWORD *)&MasterIrp->Type = 1572865;
                *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(MasterIrp->MdlAddress) = 0;
                HIDWORD(MasterIrp->MdlAddress) |= 1u;
                v35->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v31 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
                goto LABEL_57;
              }
              v32 = *(PIRP *)a1;
              v32->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
              _InterlockedExchange64((volatile __int64 *)&v32->CancelRoutine, 0LL);
              KeReleaseQueuedSpinLock(7uLL, v32->CancelIrql);
              if ( v32->Cancel )
                goto LABEL_46;
              v33 = v32->AssociatedIrp.MasterIrp;
              *(_QWORD *)&v33->Type = 0LL;
              v33->MdlAddress = 0LL;
              *(_QWORD *)&v33->Flags = 0LL;
              *(_DWORD *)&v33->Type = 1572865;
              *(_DWORD *)(&v33->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(v33->MdlAddress) = 5;
              HIDWORD(v33->MdlAddress) |= 1u;
              if ( !*(_BYTE *)a2 )
              {
                HIDWORD(v33->MdlAddress) |= 2u;
                v33->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                *((_WORD *)&v33->Flags + 2) = *(_WORD *)(a2 + 26);
              }
              v32->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v34 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
            }
            else
            {
              if ( (a5 & 0x5000) == 0x5000 )
              {
                v37 = *(PIRP *)a1;
                v37->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
                _InterlockedExchange64((volatile __int64 *)&v37->CancelRoutine, 0LL);
                KeReleaseQueuedSpinLock(7uLL, v37->CancelIrql);
                if ( v37->Cancel )
                  goto LABEL_46;
                v38 = v37->AssociatedIrp.MasterIrp;
                *(_QWORD *)&v38->Type = 0LL;
                v38->MdlAddress = 0LL;
                *(_QWORD *)&v38->Flags = 0LL;
                *(_DWORD *)&v38->Type = 1572865;
                *(_DWORD *)(&v38->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v38->MdlAddress) = 0;
                HIDWORD(v38->MdlAddress) |= 1u;
                v37->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v31 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
                goto LABEL_57;
              }
              if ( (a5 & 0x4000) == 0 )
                goto LABEL_159;
              v39 = *(PIRP *)a1;
              v39->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
              _InterlockedExchange64((volatile __int64 *)&v39->CancelRoutine, 0LL);
              KeReleaseQueuedSpinLock(7uLL, v39->CancelIrql);
              if ( v39->Cancel )
              {
LABEL_46:
                FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
                FsRtlpClearOwner(a1, 0LL);
                *(_BYTE *)(a1 + 32) = 0;
                if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
                  *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
                while ( 1 )
                {
                  v60 = (_QWORD *)(a1 + 88);
                  if ( (_QWORD *)*v60 == v60 )
                    break;
                  FsRtlpRemoveAndCompleteWaitingIrp(*v60);
                }
                goto LABEL_159;
              }
              v40 = v39->AssociatedIrp.MasterIrp;
              *(_QWORD *)&v40->Type = 0LL;
              v40->MdlAddress = 0LL;
              *(_QWORD *)&v40->Flags = 0LL;
              *(_DWORD *)&v40->Type = 1572865;
              *(_DWORD *)(&v40->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(v40->MdlAddress) = 1;
              HIDWORD(v40->MdlAddress) |= 1u;
              v39->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v34 = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
            }
            *(_DWORD *)(a1 + 144) = v34;
            v63 = 1;
            goto LABEL_159;
          }
          if ( (a5 & 0x1000) != 0 )
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_129:
          v57 = (a5 & 0x5000) == 0;
          goto LABEL_130;
        }
        if ( v18 != 1077312 )
        {
          if ( v18 == 3174464 )
          {
            if ( a5 == 0x4000 )
            {
LABEL_148:
              v59 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_154:
              *(_DWORD *)(a1 + 144) = v59;
              goto LABEL_155;
            }
            if ( (a5 & 0x5000) != 0x5000 )
              goto LABEL_155;
LABEL_153:
            v59 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
            goto LABEL_154;
          }
          if ( v18 != 5271616 )
          {
            if ( v18 == 8400896 )
            {
              if ( (a5 & 0x3000) != 0 )
              {
                if ( (v10 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                if ( (a5 & 0x2000) != 0 )
                {
                  v58 = *(_QWORD **)(a1 + 72);
                  while ( v58 != (_QWORD *)(a1 + 72) )
                  {
                    if ( (_DWORD)v14 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v58[3], v14) )
                      goto LABEL_43;
                    v58 = (_QWORD *)*v58;
                    v14 = v68;
                    v12 = a2;
                  }
                }
              }
LABEL_159:
              if ( v63 )
              {
                if ( (a4 & 1) != 0 )
                {
                  v61 = *(_DWORD *)(a1 + 144);
                  if ( (v61 & 0x10000) != 0 )
                    *(_DWORD *)(a1 + 144) = v61 | 0x20000;
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
                  LOBYTE(v62) = v66;
                  return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, v71, v62, a10);
                }
              }
              return v67;
            }
            if ( v18 == 8409152 )
              goto LABEL_129;
            if ( v18 != 8417344 )
            {
LABEL_138:
              v57 = (v17 & 0x1000000) == 0;
LABEL_130:
              if ( v57 )
                goto LABEL_159;
            }
LABEL_155:
            v63 = 1;
            goto LABEL_159;
          }
          if ( a5 == 0x2000 )
            goto LABEL_148;
        }
        if ( (a5 & 0x1000) == 0 )
          goto LABEL_155;
        goto LABEL_153;
      }
      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), v10) )
      {
        v14 = v68;
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
