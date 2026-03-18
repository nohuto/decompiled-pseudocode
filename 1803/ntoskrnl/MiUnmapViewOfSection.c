/*
 * XREFs of MiUnmapViewOfSection @ 0x1404D7010
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x1404D6F40 (NtUnmapViewOfSectionEx.c)
 *     MmUnmapViewOfSection @ 0x1404D92F0 (MmUnmapViewOfSection.c)
 *     MiUnmapImageInSystemSpace @ 0x14053D034 (MiUnmapImageInSystemSpace.c)
 *     EtwpCoverageEnsureUserModeView @ 0x14056F3B0 (EtwpCoverageEnsureUserModeView.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     EtwpTraceImageUnload @ 0x14003E620 (EtwpTraceImageUnload.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 *     MiCheckSecuredVad @ 0x1404D73E0 (MiCheckSecuredVad.c)
 *     DbgkUnMapViewOfSection @ 0x1404D7C28 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(__int64 BugCheckParameter1, unsigned __int64 a2, unsigned int a3, int a4)
{
  void *v4; // rbp
  int v5; // r12d
  _KPROCESS *Process; // rcx
  unsigned __int64 v8; // rsi
  int v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  int v15; // ecx
  unsigned __int64 v16; // rdi
  __int64 v17; // r15
  __int64 *v18; // rdi
  int v19; // esi
  __int64 *v21; // rsi
  ULONG_PTR v22; // r14
  unsigned int v23; // r8d
  char v24; // dl
  unsigned int v25; // r8d
  unsigned int v26; // edx
  __int64 **VadEvent; // rax
  __int64 v29; // [rsp+50h] [rbp-88h]
  int v30; // [rsp+58h] [rbp-80h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-7Ch]
  __int64 *v32; // [rsp+60h] [rbp-78h]
  _BYTE v33[48]; // [rsp+68h] [rbp-70h] BYREF

  v4 = 0LL;
  v31 = a3;
  v5 = 0;
  v32 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = a2;
  v9 = a4 & 0x4000000;
  if ( (a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v33);
    v5 = 1;
  }
  v10 = MiObtainReferencedVadEx(v8, 1, &v30);
  v14 = v10;
  if ( !v10 )
  {
    v19 = v30;
    if ( v30 == -1073741664 )
      v19 = -1073741799;
    goto LABEL_14;
  }
  v15 = *(_DWORD *)(v10 + 48);
  if ( (v15 & 0x4000) != 0 )
  {
    v19 = -1073741799;
    goto LABEL_40;
  }
  v12 = *(unsigned int *)(v10 + 24);
  v16 = (v12 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
  if ( (v15 & 7) == 2 )
    v4 = (void *)((v12 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12);
  v11 = v12 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32);
  v17 = ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) - v11 + 1) << 12;
  if ( (v15 & 0x8000000) != 0 && (*(_DWORD *)(BugCheckParameter1 + 772) & 0x20) == 0 )
  {
    v19 = MiCheckSecuredVad(
            v10,
            (_DWORD)v12 << 12,
            (*(_DWORD *)(v10 + 28) - (int)v12 + 1) << 12,
            85,
            KeGetCurrentThread()->PreviousMode);
    if ( v19 < 0 )
      goto LABEL_40;
    v8 = a2;
  }
  if ( !v9 )
  {
    v18 = v32;
    goto LABEL_11;
  }
  if ( v16 == v8 )
  {
    VadEvent = MiLocateVadEvent(v14, 512);
    if ( VadEvent )
    {
      v18 = VadEvent[1];
      VadEvent[1] = 0LL;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 5), 0LL);
      *((_DWORD *)v18 + 6) = *(_DWORD *)(v14 + 24);
      *((_BYTE *)v18 + 32) = *(_BYTE *)(v14 + 32);
      *((_DWORD *)v18 + 7) = *(_DWORD *)(v14 + 28);
      *((_BYTE *)v18 + 33) = *(_BYTE *)(v14 + 33);
LABEL_11:
      if ( (PerfGlobalGroupMask & 4) != 0 )
      {
        if ( v4 )
        {
          if ( *(_QWORD *)(BugCheckParameter1 + 736) )
          {
            if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x1000) == 0 && (*(_BYTE *)(v14 + 48) & 0xF8) == 0x38 )
            {
              v21 = **(__int64 ***)(v14 + 72);
              if ( v21 )
              {
                if ( v21[8] )
                {
                  v29 = *v21;
                  v22 = MiReferenceControlAreaFile((__int64)v21);
                  if ( (*(_DWORD *)(v14 + 64) & 0x8000000) != 0 )
                  {
                    LOBYTE(v23) = 0;
                    v24 = 0;
                  }
                  else
                  {
                    v25 = *(unsigned __int8 *)(v29 + 15);
                    v26 = v25 >> 1;
                    v23 = v25 >> 4;
                    v24 = v26 & 7;
                  }
                  EtwpTraceImageUnload(
                    (unsigned __int16 *)(v22 + 88),
                    v22,
                    BugCheckParameter1,
                    v4,
                    v17,
                    *(_DWORD *)(*(_QWORD *)(v29 + 56) + 60LL),
                    v23,
                    v24,
                    1u,
                    0);
                  MiDereferenceControlAreaFile((__int64)v21, v22);
                }
              }
            }
          }
        }
      }
      MiUnmapVad(v14, v18, v31);
      v19 = 0;
      goto LABEL_14;
    }
  }
  v19 = -1073741800;
LABEL_40:
  MiUnlockAndDereferenceVad((PVOID)v14, v11, v12, v13);
LABEL_14:
  if ( v5 == 1 )
    KiUnstackDetachProcess((__int64)v33, 0LL);
  if ( v4 )
    DbgkUnMapViewOfSection((PVOID)BugCheckParameter1);
  return (unsigned int)v19;
}
