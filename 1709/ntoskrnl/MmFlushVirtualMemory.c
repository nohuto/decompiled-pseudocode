/*
 * XREFs of MmFlushVirtualMemory @ 0x1404E70DC
 * Callers:
 *     NtFlushVirtualMemory @ 0x1404E6F84 (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x1405EE9D0 (CMFFlushHitsFile.c)
 * Callees:
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiFlushRelease @ 0x1400A2708 (MiFlushRelease.c)
 *     MiFlushAcquire @ 0x1400B030C (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400B0398 (MiFlushDirtyBitsToPfn.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiFindLastSubsection @ 0x140110710 (MiFindLastSubsection.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MmFlushVirtualMemory(_KPROCESS *a1, unsigned __int64 *a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // edi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  int v12; // r13d
  unsigned __int64 v13; // rax
  char *v14; // rsi
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // r12
  __int64 v18; // r14
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 LastSubsection; // rbp
  _QWORD *v21; // r15
  ULONG_PTR v22; // rax
  _DWORD *v23; // r12
  struct _FILE_OBJECT *v24; // rsi
  __int64 v25; // r14
  int v26; // ebx
  _DWORD *v28; // rax
  BOOLEAN v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-B8h]
  _DWORD *v32; // [rsp+58h] [rbp-B0h]
  _QWORD *v33; // [rsp+60h] [rbp-A8h]
  _QWORD *v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h]
  __int64 v37; // [rsp+80h] [rbp-88h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v38; // [rsp+88h] [rbp-80h] BYREF

  v4 = *a2;
  v5 = 0;
  v32 = a4;
  v33 = a3;
  v7 = 0;
  v8 = v4 - 1;
  v9 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v10 = *a3 + v8;
  *a2 = v9;
  v11 = v10 | 0xFFF;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v7 = 2;
    KiStackAttachProcess(a1, 0, (__int64)&v38);
  }
  v12 = 0;
  v29 = KeAreAllApcsDisabled();
  v13 = MiObtainReferencedVad(v9, &v30);
  v14 = (char *)v13;
  if ( !v13 )
  {
    v5 = v30;
    if ( (_DWORD)v30 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_24;
  }
  v15 = *(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32);
  if ( !*a3 )
  {
    v11 = (v15 << 12) | 0xFFF;
    v7 |= 1u;
  }
  v16 = *(_DWORD *)(v13 + 48);
  if ( (v16 & 0x8000) != 0 )
    goto LABEL_36;
  v17 = v11 >> 12;
  if ( v11 >> 12 > v15 )
    goto LABEL_36;
  v18 = **(_QWORD **)(v13 + 72);
  v36 = v18;
  if ( *(_QWORD *)(v18 + 64) && (v16 & 7) != 2 )
  {
    *v33 = v11 - v9 + 1;
    if ( !v29 && (*(_DWORD *)(v18 + 56) & 0x20000) != 0 )
      v12 = 4;
    MiFlushDirtyBitsToPfn(v9, v11, (__int64)CurrentThread);
    MiGetProtoPteAddress((__int64)v14, v11 >> 12, 1u, &v35);
    ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress((__int64)v14, v9 >> 12, 1u, &v34);
    LastSubsection = v35;
    v21 = v34;
    CurrentThread = ProtoPteAddress;
    if ( v35 )
    {
      v30 = MiGetProtoPteAddress((__int64)v14, v17, 1u, &v37);
LABEL_15:
      if ( (unsigned int)MiFlushAcquire(v18, (__int64)v21, LastSubsection) )
      {
        MiUnlockAndDereferenceVad(v14);
        if ( v7 >= 2 )
          KiUnstackDetachProcess(&v38, 0LL);
        v22 = MiReferenceControlAreaFile(v18);
        v23 = v32;
        v24 = (struct _FILE_OBJECT *)v22;
        v25 = v30;
        while ( 1 )
        {
          v26 = FsRtlAcquireFileForCcFlushEx(v24);
          if ( v26 < 0 )
            break;
          v26 = MiFlushSectionInternal((unsigned __int64)CurrentThread, v25, v21, LastSubsection, 0LL, v12, v23);
          FsRtlReleaseFileForCcFlush(v24);
          if ( v26 != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        }
        MiDereferenceControlAreaFile(v36, (unsigned __int64)v24);
        MiFlushRelease(v36, (ULONG_PTR)v21, LastSubsection);
        return (unsigned int)v26;
      }
      v5 = -1073741670;
      goto LABEL_23;
    }
    if ( v34 )
    {
      if ( (v7 & 1) != 0 )
      {
        LastSubsection = MiFindLastSubsection(v18, 0);
        v30 = *(_QWORD *)(LastSubsection + 8) + 8 * (*(unsigned int *)(LastSubsection + 44) - 1LL);
        goto LABEL_15;
      }
      goto LABEL_36;
    }
    if ( (v7 & 1) != 0 )
    {
      v28 = v32;
      *v32 = 0;
      *((_QWORD *)v28 + 1) = 0LL;
      goto LABEL_23;
    }
LABEL_36:
    v5 = -1073741799;
    goto LABEL_23;
  }
  v5 = -1073741688;
LABEL_23:
  MiUnlockAndDereferenceVad(v14);
LABEL_24:
  if ( v7 >= 2 )
    KiUnstackDetachProcess(&v38, 0LL);
  return v5;
}
