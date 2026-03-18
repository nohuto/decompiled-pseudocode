/*
 * XREFs of MmProtectVirtualMemory @ 0x14051A990
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x14051D2E0 (NtProtectVirtualMemory.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14006341C (MiIsProcessCfgEnabled.c)
 *     MiAllowProtectionChange @ 0x14007D578 (MiAllowProtectionChange.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiVadMapsLargeImage @ 0x1400CE200 (MiVadMapsLargeImage.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckSecuredVad @ 0x14047B694 (MiCheckSecuredVad.c)
 *     MiCommitVadCfgBits @ 0x14049B12C (MiCommitVadCfgBits.c)
 *     MiProtectAweRegion @ 0x1406B89C4 (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1406BBB84 (MiProtectEnclavePages.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int64 v7; // rsi
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // r8
  unsigned int ProtectionMask; // r13d
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  unsigned int *v14; // rax
  ULONG_PTR v15; // rsi
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  unsigned __int64 v19; // r8
  int v20; // edx
  char *v21; // rcx
  unsigned __int64 ProtoPteAddress; // rbx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v24; // r15
  signed __int64 *v25; // r15
  __int64 v26; // r10
  __int64 v27; // r11
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r9
  int v30; // ebx
  __int64 v31; // rcx
  __int16 v32; // ax
  int v33; // r15d
  __int16 v35; // r8
  int v36; // ecx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int16 v39; // cx
  unsigned int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // edx
  int v44; // [rsp+40h] [rbp-C8h]
  int v45; // [rsp+44h] [rbp-C4h] BYREF
  int v46; // [rsp+48h] [rbp-C0h]
  __int64 v47; // [rsp+4Ch] [rbp-BCh] BYREF
  _DWORD v48[3]; // [rsp+54h] [rbp-B4h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v51; // [rsp+70h] [rbp-98h]
  unsigned __int64 v52; // [rsp+78h] [rbp-90h]
  __int64 v53; // [rsp+80h] [rbp-88h]
  unsigned __int64 v54; // [rsp+88h] [rbp-80h]
  _QWORD *Teb; // [rsp+90h] [rbp-78h]
  _QWORD v56[3]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v57[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v58[9]; // [rsp+C0h] [rbp-48h] BYREF
  int v62; // [rsp+130h] [rbp+28h]

  v46 = 1;
  *a6 = 1;
  v47 = 0x100000000LL;
  v44 = 0;
  v7 = *a3;
  v54 = v7;
  v57[1] = v7;
  v53 = *a4;
  *(_QWORD *)&v48[1] = v53;
  v8 = a5 & 0x20000000;
  LODWORD(P) = a5 & 0x20000000;
  v9 = a5 & 0x20000000 ^ a5;
  if ( v9 < 0 )
  {
    v9 &= ~0x80000000;
    v44 = 1;
  }
  if ( (v9 & 0x40000000) != 0 )
  {
    v9 &= ~0x40000000u;
    if ( (v9 & 0xFFFFFF0F) != 0 )
      return 3221225714LL;
    HIDWORD(v47) = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  LODWORD(v50) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v12 = (v10 + v7 - 1) | 0xFFF;
  v56[1] = v12;
  v13 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v56[2] = v7 & 0xFFFFFFFFFFFFF000uLL;
  Teb = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 && !KeIsAttachedProcess() )
  {
    v37 = *(_QWORD *)(a2 + 1064);
    if ( !v37 || (v39 = *(_WORD *)(v37 + 8), v39 != 332) && v39 != 452 )
    {
      Teb = KeGetCurrentThread()->Teb;
      v51 = (unsigned __int64)Teb;
      v52 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
      v51 = v52;
    }
  }
  P = 0LL;
  v50 = v12 >> 12;
  v14 = MiObtainReferencedVad(v13, &v45);
  v15 = (ULONG_PTR)v14;
  *(_QWORD *)&v48[1] = v14;
  if ( !v14 )
  {
    v33 = v45;
    if ( v45 != -1073741664 )
      goto LABEL_107;
    goto LABEL_106;
  }
  P = v14;
  if ( v50 > (v14[7] | ((unsigned __int64)*((unsigned __int8 *)v14 + 33) << 32)) )
  {
LABEL_106:
    v33 = -1073741800;
    goto LABEL_107;
  }
  v62 = 0;
  if ( (ProtectionMask & 2) != 0 )
  {
    v33 = MiAllowProtectionChange(a2, a1, (__int64)v14, ProtectionMask, v13, v12);
    v45 = v33;
    if ( v33 < 0 )
      goto LABEL_107;
    if ( (*(_DWORD *)(v15 + 48) & 0x10) == 0 && MiIsProcessCfgEnabled() && HIDWORD(v47) == 1 )
    {
      if ( (v35 & 0x4000) != 0 )
      {
        v33 = MiCheckSecuredVad(v15, v54, v53, ProtectionMask);
        if ( v33 < 0 )
          goto LABEL_107;
        v62 = 1;
      }
      v58[0] = v13;
      v58[1] = v12;
      v33 = MiCommitVadCfgBits(v15, (__int64)v58, 0LL);
      v45 = v33;
      if ( v33 < 0 )
        goto LABEL_107;
    }
  }
  v16 = *(_DWORD *)(v15 + 48);
  v17 = v16 & 7;
  if ( ((v17 - 5) & 0xFFFFFFFD) == 0 )
  {
    if ( ProtectionMask == (unsigned __int8)v16 >> 3 )
    {
      MiUnlockAndDereferenceVad((char *)v15);
      *a4 = v12 - v13 + 1;
      *a3 = v13;
      *a6 = MmProtectToValue[ProtectionMask];
      return 0LL;
    }
    goto LABEL_106;
  }
  if ( v17 == 3 )
  {
    if ( (v16 & 0x40000) != 0 )
    {
      v40 = MiProtectEnclavePages(v13, v12, ProtectionMask, v8, (__int64)a6, (__int64)a3, (__int64)a4);
      MiUnlockAndDereferenceVad((char *)v15);
      return v40;
    }
    if ( ProtectionMask <= 0x18 )
    {
      v41 = 16777234;
      if ( _bittest(&v41, ProtectionMask) )
      {
        v42 = MiProtectAweRegion(v13, v12, ProtectionMask);
        MiUnlockAndDereferenceVad((char *)v15);
        *a4 = v12 - v13 + 1;
        *a3 = v13;
        *a6 = v42;
        return 0LL;
      }
    }
    goto LABEL_106;
  }
  if ( v17 == 1 )
    goto LABEL_106;
  v18 = v44;
  if ( v44 == 1 )
  {
    if ( (v16 & 0x8000) != 0 || (*(_DWORD *)(**(_QWORD **)(v15 + 72) + 56LL) & 0x20) != 0 )
      goto LABEL_82;
    v18 = 1;
  }
  if ( (v16 & 0x4000) != 0 && !v62 )
  {
    v33 = MiCheckSecuredVad(v15, v54, v53, ProtectionMask);
    v45 = v33;
    if ( v33 < 0 )
      goto LABEL_107;
    v18 = v44;
  }
  v19 = *(unsigned int *)(v15 + 48);
  if ( (v19 & 0x8000) == 0 )
  {
    if ( (v9 & 0x600) != 0 )
    {
      v33 = -1073741582;
      goto LABEL_107;
    }
    v20 = *(_DWORD *)(**(_QWORD **)(v15 + 72) + 56LL);
    if ( (v20 & 0x20) == 0 )
    {
      v36 = MmCompatibleProtectionMask[(v19 >> 3) & 7] | 0x700;
      if ( (v9 | v36) != v36 )
      {
        v33 = -1073741746;
        goto LABEL_107;
      }
    }
    if ( (v20 & 0xA0) != 0x80 )
    {
      if ( MiVadMapsLargeImage(v15) )
      {
        if ( v9 == 64 || v9 == 4 )
        {
          MiUnlockAndDereferenceVad(v21);
          *a4 = v12 - v13 + 1;
          *a3 = v13;
          *a6 = MmProtectToValue[ProtectionMask];
          return 0LL;
        }
        v33 = -1073741746;
        goto LABEL_107;
      }
      ProtoPteAddress = MiGetProtoPteAddress((__int64)v21, v13 >> 12, 5, v56);
      if ( !ProtoPteAddress )
        goto LABEL_95;
      *(_QWORD *)&v48[1] = MiGetProtoPteAddress(v15, v50, 5, v57);
      if ( !*(_QWORD *)&v48[1] )
        goto LABEL_95;
      CurrentThread = KeGetCurrentThread();
      v24 = ***(_QWORD ***)(v15 + 72);
      --CurrentThread->SpecialApcDisable;
      v25 = (signed __int64 *)(v24 + 40);
      ExAcquirePushLockSharedEx((ULONG_PTR)v25, 0LL);
      v26 = v56[0];
      v27 = v57[0];
      while ( 1 )
      {
        v28 = v26 == v27 ? *(_QWORD *)&v48[1] : *(_QWORD *)(v26 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v26 + 44) - 1);
        if ( ProtoPteAddress > v28 )
        {
LABEL_27:
          v30 = v46;
        }
        else
        {
          while ( MI_READ_PTE_LOCK_FREE(ProtoPteAddress) )
          {
            ProtoPteAddress += 8LL;
            if ( ProtoPteAddress > v29 )
              goto LABEL_27;
          }
          v30 = 0;
          v46 = 0;
        }
        if ( v26 == v27 )
          break;
        v26 = *(_QWORD *)(v26 + 16);
        v56[0] = v26;
        ProtoPteAddress = *(_QWORD *)(v26 + 8);
        if ( !ProtoPteAddress )
        {
          v30 = 0;
          break;
        }
      }
      if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v25);
      KeAbPostRelease((ULONG_PTR)v25);
      v32 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v32;
      if ( !v32
        && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v31);
      }
      if ( !v30 )
      {
LABEL_95:
        v33 = -1073741779;
        goto LABEL_107;
      }
    }
    v33 = MiSetProtectionOnSection(a2, v15, v13, v12, v9, v44, v48, (__int64)&v47);
    if ( v33 >= 0 )
      goto LABEL_34;
    goto LABEL_107;
  }
  if ( (v9 & 0x88) != 0 || v18 == 1 )
  {
LABEL_82:
    v33 = -1073741582;
    goto LABEL_107;
  }
  if ( (v19 & 7) == 6 )
  {
    if ( (v9 & 0xFFFFF9F9) != 0 )
    {
      v33 = -1073741755;
      goto LABEL_107;
    }
    v9 &= 0xFFFFF9FF;
    v43 = *(_DWORD *)(v15 + 48) & 0xC0;
    if ( (v19 & 0x38) != 0 && v43 == 192 )
    {
      v9 |= 0x400u;
    }
    else if ( v43 == 64 )
    {
      v9 |= 0x200u;
    }
    ProtectionMask = MiMakeProtectionMask(v9);
  }
  v33 = MiProtectPrivateMemory(v15, v13, v12, ProtectionMask, v9, v48, &v47);
  if ( v33 >= 0 )
  {
    if ( v51 )
    {
      if ( v51 < v12
        && v51 >> 12 >= (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) )
      {
        v38 = *(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32);
        if ( v51 >> 12 <= v38 && (v12 + 1) >> 12 <= v38 )
          Teb[2] = v12 + 1;
      }
    }
LABEL_34:
    MiUnlockAndDereferenceVad((char *)v15);
    *a4 = v12 - v13 + 1;
    *a3 = v13;
    *a6 = v48[0];
    if ( (_DWORD)v47 == 1 )
      return 1073741847LL;
    return 0LL;
  }
LABEL_107:
  if ( P )
    MiUnlockAndDereferenceVad((char *)P);
  return (unsigned int)v33;
}
