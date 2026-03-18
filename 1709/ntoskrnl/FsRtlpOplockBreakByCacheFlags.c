/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1400868E0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401E7AE0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockBreakH @ 0x140585890 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x1405EDDB0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpWaitOnIrp @ 0x14000E0E8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140023F70 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400246D8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x1400874F0 (FsRtlpOplockKeysEqual.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140108B78 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x140127258 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1401282DC (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1401E842C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        IRP *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        void (__fastcall *a8)(__int64, __int64),
        _BYTE *a9,
        _BYTE *a10)
{
  int v12; // r12d
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  PIRP v19; // rdi
  struct _IRP *MasterIrp; // rcx
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  char v24; // si
  __int64 *m; // rdi
  char v26; // al
  _QWORD *n; // rdi
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  int v33; // edx
  int v34; // eax
  __int16 v35; // cx
  __int64 *j; // rdi
  char v37; // al
  char v38; // al
  _QWORD *v39; // rax
  _QWORD *v40; // rdi
  __int64 v41; // rsi
  char v42; // al
  char v43; // al
  _QWORD *v44; // rsi
  _QWORD *k; // rdi
  PIRP v46; // rdi
  struct _IRP *v47; // rcx
  PIRP v48; // rdi
  struct _IRP *v49; // rdx
  PIRP v50; // rdi
  struct _IRP *v51; // rcx
  _QWORD *i; // rdi
  _QWORD **v53; // rcx
  int v54; // eax
  bool v55; // [rsp+40h] [rbp-78h]
  char v56; // [rsp+41h] [rbp-77h]
  char v57; // [rsp+42h] [rbp-76h]
  char v58; // [rsp+43h] [rbp-75h]
  unsigned int v59; // [rsp+44h] [rbp-74h]
  _QWORD **v60; // [rsp+48h] [rbp-70h]
  _QWORD **v61; // [rsp+48h] [rbp-70h]
  char v62[80]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v64; // [rsp+D0h] [rbp+18h]
  unsigned int v65; // [rsp+D8h] [rbp+20h]

  v65 = a4;
  v64 = (__int64)a3;
  v59 = 0;
  v55 = 0;
  v56 = 0;
  v58 = 0;
  v57 = 1;
  v12 = a4 & 8;
  if ( a5 == 28672 || a5 == 20480 || a5 == 0x4000 || a5 == 0x2000 )
  {
    if ( !a1 )
      return v59;
    v14 = *(_DWORD *)(a1 + 144);
    if ( v14 != 1 && (v14 & a5) != 0 )
    {
      if ( (a4 & 8) != 0 )
      {
LABEL_14:
        v15 = *(_DWORD *)(a1 + 144);
        if ( (v15 & 0x40) != 0 && (a4 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        v16 = v15 & 0x1F0FFDF;
        if ( (v15 & 0x1F0FFDFu) > 0x105040 )
        {
          if ( v16 > 0x803000 )
          {
            if ( v16 == 8409152 )
            {
              v55 = (a5 & 0x5000) != 0;
              goto LABEL_165;
            }
            if ( v16 == 8417344 )
            {
LABEL_160:
              v55 = 1;
              goto LABEL_165;
            }
            goto LABEL_159;
          }
          if ( v16 == 8400896 )
          {
            if ( (a5 & 0x3000) != 0 )
            {
              if ( (a4 & 0x10010000) != 0 )
                return (unsigned int)-1073739511;
              if ( (a5 & 0x2000) != 0 )
              {
                for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
                {
                  if ( v12 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), i[3], 0LL) )
                    goto LABEL_160;
                }
              }
            }
            goto LABEL_165;
          }
          if ( v16 != 1077312 )
          {
            if ( v16 == 3174464 )
            {
              if ( a5 == 0x4000 )
              {
                v21 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
                goto LABEL_130;
              }
              if ( (a5 & 0x5000) != 0x5000 )
                goto LABEL_131;
              goto LABEL_129;
            }
            if ( v16 != 5271616 )
              goto LABEL_159;
            if ( a5 == 0x2000 )
            {
              v21 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
              goto LABEL_130;
            }
          }
          if ( (a5 & 0x1000) == 0 )
            goto LABEL_131;
        }
        else
        {
          if ( v16 == 1069120 )
          {
            if ( (a5 & 0x1000) != 0 )
              *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
            if ( (a5 & 0x5000) != 0 )
              v55 = 1;
            goto LABEL_165;
          }
          if ( v16 <= 0x5040 )
          {
            if ( v16 != 20544 )
            {
              v17 = v16 - 4096;
              if ( v17 )
              {
                v18 = v17 - 16;
                if ( v18 )
                {
                  if ( v18 != 8176 )
                  {
LABEL_159:
                    if ( (v15 & 0x1000000) != 0 )
                      goto LABEL_160;
LABEL_165:
                    if ( v55 )
                    {
                      if ( (v65 & 1) != 0 )
                      {
                        v54 = *(_DWORD *)(a1 + 144);
                        if ( (v54 & 0x10000) != 0 )
                          *(_DWORD *)(a1 + 144) = v54 | 0x20000;
                        return 264;
                      }
                      else
                      {
                        if ( v57 )
                        {
                          LOBYTE(a3) = 1;
                          FsRtlpModifyThreadPriorities(a1, 0LL, a3);
                          FsRtlpOplockSendModernAppTermination(a1, 0LL);
                        }
                        *a9 = 0;
                        return (unsigned int)FsRtlpWaitOnIrp(a1, v64, a6, a7, a8, v62, v58, a10);
                      }
                    }
                    return v59;
                  }
LABEL_64:
                  if ( a5 == 0x2000 )
                  {
                    v30 = (_QWORD *)(a1 + 56);
                    v31 = *(_QWORD **)(a1 + 56);
                    while ( 1 )
                    {
                      if ( v31 == v30 )
                        goto LABEL_107;
                      v32 = v31[2];
                      if ( !v12 )
                      {
                        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v31[3], 0LL) )
                          goto LABEL_78;
                        a4 = v65;
                      }
                      if ( (a4 & 0x10010000) != 0 )
                        return (unsigned int)-1073739511;
                      if ( v31[7] )
                      {
                        v55 = 1;
                        goto LABEL_79;
                      }
                      v60 = (_QWORD **)v31[1];
                      *(_BYTE *)(v32 + 69) = KeAcquireQueuedSpinLock(7uLL);
                      _InterlockedExchange64((volatile __int64 *)(v32 + 104), 0LL);
                      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v32 + 69));
                      if ( *(_BYTE *)(v32 + 68) )
                      {
                        v31 = v60;
                        FsRtlpRemoveAndBreakRHIrp(*v60, a1, 0, -1073741536, 0, 0, 0, 0);
                        v56 = 1;
                      }
                      else
                      {
                        v33 = 1;
                        v34 = 0;
                        v35 = 0;
                        if ( !*(_BYTE *)a2 )
                        {
                          v33 = 3;
                          v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                          v35 = *(_WORD *)(a2 + 26);
                        }
                        v31 = v60;
                        FsRtlpRemoveAndBreakRHIrp(*v60, a1, 0, 0, 0x1000u, v33, v34, v35);
                        v57 = 0;
                        v55 = 1;
                        v58 = v12 != 0;
                      }
LABEL_78:
                      a4 = v65;
LABEL_79:
                      v31 = (_QWORD *)*v31;
                      v30 = (_QWORD *)(a1 + 56);
                    }
                  }
                  if ( (a5 & 0x5000) == 0x5000 )
                  {
                    for ( j = *(__int64 **)(a1 + 72); j != (__int64 *)(a1 + 72); j = (__int64 *)*j )
                    {
                      if ( !v12 )
                      {
                        v37 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], a4);
                        a4 = v65;
                        if ( v37 )
                          continue;
                      }
                      if ( (a4 & 0x10010000) != 0 )
                        return (unsigned int)-1073739511;
                      *((_DWORD *)j + 12) &= 0xFF0FFFFF;
                      *((_DWORD *)j + 12) |= 0x800000u;
                      v38 = v55;
                      if ( (a5 & 0x2000) != 0 )
                        v38 = 1;
                      v55 = v38;
                    }
                    v39 = (_QWORD *)(a1 + 56);
                    v40 = *(_QWORD **)(a1 + 56);
                    while ( v40 != v39 )
                    {
                      v41 = v40[2];
                      if ( !v12 )
                      {
                        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v40[3], a4) )
                          goto LABEL_105;
                        a4 = v65;
                      }
                      if ( (a4 & 0x10010000) != 0 )
                        return (unsigned int)-1073739511;
                      if ( !v40[7] )
                      {
                        v61 = (_QWORD **)v40[1];
                        *(_BYTE *)(v41 + 69) = KeAcquireQueuedSpinLock(7uLL);
                        _InterlockedExchange64((volatile __int64 *)(v41 + 104), 0LL);
                        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v41 + 69));
                        if ( *(_BYTE *)(v41 + 68) )
                        {
                          v40 = v61;
                          FsRtlpRemoveAndBreakRHIrp(*v61, a1, 0, -1073741536, 0, 0, 0, 0);
                          v56 = 1;
                        }
                        else
                        {
                          v40 = v61;
                          FsRtlpRemoveAndBreakRHIrp(*v61, a1, 0, 0, 0, 1, 0, 0);
                          v57 = 0;
                          v43 = v55;
                          if ( (a5 & 0x2000) != 0 )
                            v43 = 1;
                          v55 = v43;
                          v58 = v12 != 0;
                        }
LABEL_105:
                        a4 = v65;
                        goto LABEL_106;
                      }
                      v42 = v55;
                      if ( (a5 & 0x2000) != 0 )
                        v42 = 1;
                      v55 = v42;
LABEL_106:
                      v40 = (_QWORD *)*v40;
                      v39 = (_QWORD *)(a1 + 56);
                    }
                  }
LABEL_107:
                  if ( v56 )
                    FsRtlpReleaseIrpsWaitingForRH(a1);
                  if ( !v55 )
                  {
                    v44 = (_QWORD *)(a1 + 72);
                    if ( (_QWORD *)*v44 != v44 && (a5 & 0x2000) != 0 )
                    {
                      if ( v12 )
                      {
LABEL_117:
                        v55 = 1;
                      }
                      else
                      {
                        for ( k = (_QWORD *)*v44; k != v44; k = (_QWORD *)*k )
                        {
                          if ( !(unsigned __int8)FsRtlpOplockKeysEqual(k[3], *(_QWORD *)(a2 + 48), 0LL) )
                            goto LABEL_117;
                        }
                      }
                    }
                  }
LABEL_118:
                  FsRtlpComputeShareableOplockState(a1);
                  goto LABEL_165;
                }
              }
LABEL_54:
              if ( (a5 & 0x1000) != 0 )
              {
                v28 = *(_QWORD **)(a1 + 40);
                while ( v28 != (_QWORD *)(a1 + 40) )
                {
                  v29 = v28[2];
                  if ( *(_DWORD *)(v29 + 24) == 590400
                    && (v12 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v29 + 48), a4)) )
                  {
                    if ( (v65 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    v28 = (_QWORD *)v28[1];
                    FsRtlpRemoveAndCompleteReadOnlyIrp(*v28, 0LL, 0LL);
                  }
                  v28 = (_QWORD *)*v28;
                  a4 = v65;
                }
              }
              if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
                goto LABEL_118;
              goto LABEL_64;
            }
            if ( (a5 & 0x5000) != 0x5000 )
            {
              if ( (a5 & 0x4000) == 0 )
                goto LABEL_165;
              v22 = *(_QWORD *)a1;
              *(_BYTE *)(v22 + 69) = KeAcquireQueuedSpinLock(7uLL);
              _InterlockedExchange64((volatile __int64 *)(v22 + 104), 0LL);
              KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v22 + 69));
              if ( !*(_BYTE *)(v22 + 68) )
              {
                v23 = *(_QWORD *)(v22 + 24);
                *(_QWORD *)v23 = 0LL;
                *(_QWORD *)(v23 + 8) = 0LL;
                *(_QWORD *)(v23 + 16) = 0LL;
                *(_DWORD *)v23 = 1572865;
                *(_DWORD *)(v23 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                *(_DWORD *)(v23 + 8) = 1;
                *(_DWORD *)(v23 + 12) |= 1u;
                *(_QWORD *)(v22 + 56) = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
                v55 = 1;
                goto LABEL_165;
              }
LABEL_27:
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
                v53 = (_QWORD **)(a1 + 88);
                if ( *v53 == v53 )
                  break;
                FsRtlpRemoveAndCompleteWaitingIrp(*v53);
              }
              goto LABEL_165;
            }
            v19 = *(PIRP *)a1;
            v19->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v19->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v19->CancelIrql);
            if ( v19->Cancel )
              goto LABEL_27;
            MasterIrp = v19->AssociatedIrp.MasterIrp;
            *(_QWORD *)&MasterIrp->Type = 0LL;
            MasterIrp->MdlAddress = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            LODWORD(MasterIrp->MdlAddress) = 0;
            HIDWORD(MasterIrp->MdlAddress) |= 1u;
            v19->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v21 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
            goto LABEL_130;
          }
          if ( v16 != 28736 )
          {
            if ( v16 == 45056 )
              goto LABEL_54;
            if ( v16 != 1060864 )
              goto LABEL_159;
            v24 = 0;
            if ( (a5 & 0x1000) != 0 )
            {
              for ( m = *(__int64 **)(a1 + 72); m != (__int64 *)(a1 + 72); m = (__int64 *)*m )
              {
                if ( !v12 )
                {
                  v26 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], a4);
                  a4 = v65;
                  if ( v26 )
                    continue;
                }
                v24 = 1;
                if ( (a4 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                *((_DWORD *)m + 12) &= 0xFF0FFFFF;
                *((_DWORD *)m + 12) |= 0x800000u;
              }
              FsRtlpComputeShareableOplockState(a1);
            }
            if ( (a5 & 0x2000) == 0 )
              goto LABEL_165;
            if ( !v24 )
            {
              if ( (a5 & 0x1000) == 0 )
              {
                for ( n = *(_QWORD **)(a1 + 72); n != (_QWORD *)(a1 + 72); n = (_QWORD *)*n )
                {
                  if ( v12 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), n[3], 0LL) )
                    goto LABEL_160;
                }
              }
              goto LABEL_165;
            }
LABEL_131:
            v55 = 1;
            goto LABEL_165;
          }
          if ( a5 == 0x4000 )
          {
            v46 = *(PIRP *)a1;
            v46->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v46->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v46->CancelIrql);
            if ( v46->Cancel )
              goto LABEL_27;
            v47 = v46->AssociatedIrp.MasterIrp;
            *(_QWORD *)&v47->Type = 0LL;
            v47->MdlAddress = 0LL;
            *(_QWORD *)&v47->Flags = 0LL;
            *(_DWORD *)&v47->Type = 1572865;
            *(_DWORD *)(&v47->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            LODWORD(v47->MdlAddress) = 3;
            HIDWORD(v47->MdlAddress) |= 1u;
            v46->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v21 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
            goto LABEL_130;
          }
          if ( a5 == 0x2000 )
          {
            v48 = *(PIRP *)a1;
            v48->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v48->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v48->CancelIrql);
            if ( v48->Cancel )
              goto LABEL_27;
            v49 = v48->AssociatedIrp.MasterIrp;
            *(_QWORD *)&v49->Type = 0LL;
            v49->MdlAddress = 0LL;
            *(_QWORD *)&v49->Flags = 0LL;
            *(_DWORD *)&v49->Type = 1572865;
            *(_DWORD *)(&v49->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            LODWORD(v49->MdlAddress) = 5;
            HIDWORD(v49->MdlAddress) |= 1u;
            if ( !*(_BYTE *)a2 )
            {
              HIDWORD(v49->MdlAddress) |= 2u;
              v49->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
              *((_WORD *)&v49->Flags + 2) = *(_WORD *)(a2 + 26);
            }
            v48->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v21 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
            goto LABEL_130;
          }
          v50 = *(PIRP *)a1;
          v50->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)&v50->CancelRoutine, 0LL);
          KeReleaseQueuedSpinLock(7uLL, v50->CancelIrql);
          if ( v50->Cancel )
            goto LABEL_27;
          v51 = v50->AssociatedIrp.MasterIrp;
          *(_QWORD *)&v51->Type = 0LL;
          v51->MdlAddress = 0LL;
          *(_QWORD *)&v51->Flags = 0LL;
          *(_DWORD *)&v51->Type = 1572865;
          *(_DWORD *)(&v51->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
          LODWORD(v51->MdlAddress) = 0;
          HIDWORD(v51->MdlAddress) |= 1u;
          v50->IoStatus.Information = 24LL;
          *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
          IofCompleteRequest(*(PIRP *)a1, 1);
          *(_QWORD *)a1 = 0LL;
          v15 = *(_DWORD *)(a1 + 144);
        }
LABEL_129:
        v21 = v15 & 0x20 | 0x807040;
LABEL_130:
        *(_DWORD *)(a1 + 144) = v21;
        goto LABEL_131;
      }
      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), a4) )
      {
        a4 = v65;
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
