/*
 * XREFs of MmFlushVirtualMemory @ 0x140568184
 * Callers:
 *     NtFlushVirtualMemory @ 0x140568028 (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x1407C8998 (CMFFlushHitsFile.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiFindLastSubsection @ 0x14004CFC0 (MiFindLastSubsection.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiFlushAcquire @ 0x1400BD9BC (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400BDA54 (MiFlushDirtyBitsToPfn.c)
 *     MiFlushRelease @ 0x1400E4B40 (MiFlushRelease.c)
 *     KeAreAllApcsDisabled @ 0x1400F0AD0 (KeAreAllApcsDisabled.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E0808 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MmFlushVirtualMemory(_KPROCESS *a1, unsigned __int64 *a2, _QWORD *a3, int *a4)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // edi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  int v12; // r13d
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // r14
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 LastSubsection; // rsi
  __int64 *v24; // r15
  ULONG_PTR v25; // rax
  int *v26; // r12
  struct _FILE_OBJECT *v27; // rbp
  __int64 v28; // r14
  int v29; // ebx
  int *v31; // rax
  BOOLEAN v32; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-B8h]
  int *v35; // [rsp+58h] [rbp-B0h]
  _QWORD *v36; // [rsp+60h] [rbp-A8h]
  __int64 *v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v41[48]; // [rsp+88h] [rbp-80h] BYREF

  v4 = *a2;
  v5 = 0;
  v35 = a4;
  v36 = a3;
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
    KiStackAttachProcess(a1, 0, (__int64)v41);
  }
  v12 = 0;
  v32 = KeAreAllApcsDisabled();
  v13 = MiObtainReferencedVadEx(v9, 0, (int *)&v33);
  v16 = v13;
  if ( !v13 )
  {
    v5 = v33;
    if ( (_DWORD)v33 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_26;
  }
  v17 = *(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32);
  if ( !*a3 )
    v11 = (v17 << 12) | 0xFFF;
  v18 = v7 | 1;
  v19 = *(unsigned int *)(v16 + 48);
  if ( *a3 )
    v18 = v7;
  v7 = v18;
  if ( (v19 & 0x4000) != 0 || (v20 = v11 >> 12, v11 >> 12 > v17) )
  {
LABEL_32:
    v5 = -1073741799;
    goto LABEL_25;
  }
  v21 = **(_QWORD **)(v16 + 72);
  v39 = v21;
  if ( *(_QWORD *)(v21 + 64) )
  {
    LOBYTE(v19) = v19 & 7;
    if ( (_BYTE)v19 != 2 )
    {
      *v36 = v11 - v9 + 1;
      if ( !v32 && (*(_DWORD *)(v21 + 56) & 0x20000) != 0 )
        v12 = 4;
      MiFlushDirtyBitsToPfn(v9, v11, (__int64)CurrentThread);
      MiGetProtoPteAddress(v16, v11 >> 12, 0, &v38);
      ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress(v16, v9 >> 12, 0, &v37);
      LastSubsection = v38;
      v24 = v37;
      CurrentThread = ProtoPteAddress;
      if ( v38 )
      {
        v33 = MiGetProtoPteAddress(v16, v20, 0, &v40);
LABEL_17:
        if ( (unsigned int)MiFlushAcquire(v21, (__int64)v24, LastSubsection) )
        {
          MiUnlockAndDereferenceVad((PVOID)v16, v19, v14, v15);
          if ( v7 >= 2 )
            KiUnstackDetachProcess((__int64)v41, 0LL);
          v25 = MiReferenceControlAreaFile(v21);
          v26 = v35;
          v27 = (struct _FILE_OBJECT *)v25;
          v28 = v33;
          while ( 1 )
          {
            v29 = FsRtlAcquireFileForCcFlushEx(v27);
            if ( v29 < 0 )
              break;
            v29 = MiFlushSectionInternal((ULONG_PTR)CurrentThread, v28, v24, LastSubsection, 0LL, v12, v26);
            FsRtlReleaseFileForCcFlush(v27);
            if ( v29 != -1073741740 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          }
          MiDereferenceControlAreaFile(v39, (unsigned __int64)v27);
          MiFlushRelease(v39, (ULONG_PTR)v24, LastSubsection);
          return (unsigned int)v29;
        }
        v5 = -1073741670;
        goto LABEL_25;
      }
      if ( v37 )
      {
        if ( (v7 & 1) != 0 )
        {
          LastSubsection = MiFindLastSubsection(v21, 0);
          v33 = *(_QWORD *)(LastSubsection + 8)
              + 8
              * (*(unsigned int *)(LastSubsection + 44)
               - (unsigned __int64)(*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF)
               - 1);
          goto LABEL_17;
        }
      }
      else if ( (v7 & 1) != 0 )
      {
        v31 = v35;
        *v35 = 0;
        *((_QWORD *)v31 + 1) = 0LL;
        goto LABEL_25;
      }
      goto LABEL_32;
    }
  }
  v5 = -1073741688;
LABEL_25:
  MiUnlockAndDereferenceVad((PVOID)v16, v19, v14, v15);
LABEL_26:
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v41, 0LL);
  return v5;
}
