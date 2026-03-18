/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x1404821C0
 * Callers:
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 * Callees:
 *     ExFastReplenishHandleTableEntry @ 0x140036060 (ExFastReplenishHandleTableEntry.c)
 *     PsDereferenceSiloContext @ 0x14003ABD0 (PsDereferenceSiloContext.c)
 *     ObpIncrPointerCountEx @ 0x140044638 (ObpIncrPointerCountEx.c)
 *     ExLockHandleTableEntry @ 0x1400B0390 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400EE890 (ExSlowReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x14025A50C (ExHandleLogBadReference.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 *     ObpAuditObjectAccess @ 0x1406C0E1C (ObpAuditObjectAccess.c)
 */

__int64 __fastcall ObReferenceFileObjectForWrite(ULONG_PTR BugCheckParameter1, char a2, _QWORD *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v7; // r15
  _KPROCESS *Process; // rax
  ULONG_PTR v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax
  signed __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rax
  __int128 v16; // rt0
  unsigned __int8 v17; // tt
  unsigned __int64 v18; // rbx
  __int16 v19; // ax
  void *v20; // rdi
  int v21; // edx
  int v22; // edx
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  int v26; // eax
  unsigned int v27; // ebx
  volatile signed __int64 *v28; // rsi
  int v29; // eax
  signed __int32 v30[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]
  ULONG_PTR v33; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v7 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0x80000000) == 0LL )
  {
    Process = CurrentThread->ApcState.Process;
    v9 = Process[1].ActiveProcessors.Bitmap[5];
    v33 = v9;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
      goto LABEL_3;
    return 3221225480LL;
  }
  if ( a2 || BugCheckParameter1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v9 = ObpKernelHandleTable;
  v7 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
  v33 = ObpKernelHandleTable;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  if ( (v7 & 0x3FC) != 0 && (v10 = (__int64 *)ExpLookupHandleTableEntry(v9, v7), (v11 = v10) != 0LL) )
  {
    _m_prefetchw(v10);
    v12 = *v10;
    v13 = v11[1];
    *((_QWORD *)&v31 + 1) = v13;
    *(_QWORD *)&v31 = v12;
    v14 = v12;
    while ( (v14 & 0x1FFFE) != 0 )
    {
      if ( (v14 & 1) != 0 )
      {
        v32 = v14 - 2;
        *(_QWORD *)&v16 = v14;
        *((_QWORD *)&v16 + 1) = v13;
        v17 = _InterlockedCompareExchange128(v11, v13, v14 - 2, (signed __int64 *)&v16);
        v15 = v16;
        v14 = v16;
        v31 = v16;
        v13 = *((_QWORD *)&v16 + 1);
        if ( v17 )
        {
          BugCheckParameter1 = (unsigned __int64)v15 >> 1;
          if ( (unsigned __int16)((unsigned __int64)v15 >> 1) != 16 )
          {
            v18 = (v15 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
            goto LABEL_10;
          }
          *(_QWORD *)&v31 = ((unsigned int)v14 ^ (2 * (_DWORD)BugCheckParameter1 - 2)) & 0x1FFFE ^ (unsigned __int64)v14;
          v28 = (volatile signed __int64 *)(((__int64)v31 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
          v18 = (unsigned __int64)v28;
          ObpIncrPointerCountEx(v28, 32752);
          v29 = ExFastReplenishHandleTableEntry(v11, (unsigned __int64 *)&v31, 32752);
          BugCheckParameter1 = v29;
          if ( v29 )
          {
            BugCheckParameter1 = (unsigned int)-v29;
            _InterlockedExchangeAdd64(v28, (int)BugCheckParameter1);
          }
LABEL_30:
          LODWORD(v13) = DWORD2(v31);
          v14 = v31;
          goto LABEL_10;
        }
        v9 = v33;
      }
      else
      {
        ExpBlockOnLockedHandleEntry(v9, v11, v14);
        _m_prefetchw(v11);
        v13 = v11[1];
        *(_QWORD *)&v31 = *v11;
        v14 = v31;
        *((_QWORD *)&v31 + 1) = v13;
      }
    }
    if ( ExLockHandleTableEntry(v9, v11) )
    {
      v18 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v31 = *(_OWORD *)v11;
      v26 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v11);
      ObpIncrPointerCountEx((volatile signed __int64 *)v18, v26 + 1);
      _InterlockedExchangeAdd64(v11, 1uLL);
      BugCheckParameter1 = v33 + 48;
      _InterlockedOr(v30, 0);
      if ( *(_QWORD *)(v33 + 48) )
      {
        ExfUnblockPushLock((volatile __int64 *)BugCheckParameter1, 0LL);
        LODWORD(v13) = DWORD2(v31);
        v14 = v31;
        goto LABEL_10;
      }
      goto LABEL_30;
    }
  }
  else
  {
    LODWORD(v13) = DWORD2(v31);
    v14 = v31;
  }
  if ( v7 )
  {
    ExHandleLogBadReference(v9, v7, KeGetCurrentThread()->PreviousMode);
    LODWORD(v13) = DWORD2(v31);
    v14 = v31;
  }
  v18 = v33;
  v11 = 0LL;
LABEL_10:
  v19 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v19;
  if ( !v19
    && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(BugCheckParameter1);
  }
  if ( v11 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v18, 1, 1u, 1953261124);
    v20 = (void *)(v18 + 48);
    if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v18 + 24) ^ (unsigned __int64)BYTE1(v18)] == IoFileObjectType )
    {
      v21 = ~(unsigned __int8)(*(_DWORD *)(v18 + 128) >> 5) & 4;
      a4[1] = v13 & 0x1FFFFFF;
      v22 = v21 | 2;
      v23 = (v14 >> 17) & 7;
      if ( (v13 & 0x2000000) != 0 )
        LOBYTE(v23) = v23 | 8;
      *a4 = v23 & 7;
      if ( (v13 & 0x1FFFFFF & (unsigned int)v22) != 0 )
      {
        if ( a2
          && (*(_BYTE *)(v18 + 26) & 0x40) != 0
          && (v24 = v18 - ObpInfoMaskToOffset[*(_BYTE *)(v18 + 26) & 0x7F], *(_BYTE *)(*(_QWORD *)v24 + 24LL))
          && *(_QWORD *)(*(_QWORD *)v24 + 16LL) == 1LL )
        {
          v27 = -1073700858;
        }
        else
        {
          if ( (*a4 & 4) == 0 || !a2 || (unsigned __int8)ObpAuditObjectAccess(v33, v7, (_DWORD)v11, v18, v22) )
          {
            *a3 = v20;
            return 0LL;
          }
          v27 = -1073741816;
        }
      }
      else
      {
        v27 = -1073741790;
      }
    }
    else
    {
      v27 = -1073741788;
    }
    PsDereferenceSiloContext(v20);
  }
  else
  {
    v27 = -1073741816;
  }
  *a3 = 0LL;
  return v27;
}
