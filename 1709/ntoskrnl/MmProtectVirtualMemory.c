/*
 * XREFs of MmProtectVirtualMemory @ 0x140498B10
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140497B10 (NtProtectVirtualMemory.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     MiIsProcessCfgEnabled @ 0x1400A53F4 (MiIsProcessCfgEnabled.c)
 *     MiAllowProtectionChange @ 0x1400A64D8 (MiAllowProtectionChange.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiCheckSecuredVad @ 0x140462914 (MiCheckSecuredVad.c)
 *     MiCommitVadCfgBits @ 0x1404D1EE4 (MiCommitVadCfgBits.c)
 *     MiProtectAweRegion @ 0x1406E568C (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1406E8DE4 (MiProtectEnclavePages.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        int a5,
        _DWORD *a6)
{
  int v7; // r12d
  int v8; // r13d
  int v9; // r15d
  __int64 result; // rax
  unsigned int ProtectionMask; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r10
  char v15; // r11
  unsigned int v16; // edi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int16 v21; // cx
  bool v22; // zf
  ULONG_PTR v23; // rax
  int v24; // ebx
  __int16 v25; // r8
  ULONG_PTR v26; // r10
  unsigned __int64 v27; // r12
  int v28; // edx
  int v29; // ecx
  char *v30; // rcx
  int v31; // eax
  int v32; // ebx
  int v33; // r8d
  ULONG_PTR v34; // r13
  unsigned __int64 v35; // rdx
  unsigned int v36; // r9d
  int v37; // ecx
  char *v38; // rcx
  __int64 *ProtoPteAddress; // rbx
  __int64 v40; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v42; // rsi
  signed __int64 *v43; // rsi
  __int64 v44; // r10
  __int64 v45; // r11
  unsigned __int64 v46; // r9
  __int64 PteShadow; // rax
  int v48; // ebx
  __int64 v49; // rcx
  int v50; // eax
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // [rsp+60h] [rbp-D8h]
  char *P; // [rsp+68h] [rbp-D0h]
  int v55; // [rsp+70h] [rbp-C8h] BYREF
  int v56; // [rsp+74h] [rbp-C4h]
  int v57; // [rsp+78h] [rbp-C0h]
  int v58; // [rsp+7Ch] [rbp-BCh] BYREF
  PVOID v59; // [rsp+80h] [rbp-B8h]
  int v60; // [rsp+88h] [rbp-B0h] BYREF
  unsigned __int64 v61; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v62; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v63; // [rsp+A0h] [rbp-98h]
  __int64 v64; // [rsp+A8h] [rbp-90h]
  _QWORD *Teb; // [rsp+B0h] [rbp-88h]
  _QWORD v66[2]; // [rsp+B8h] [rbp-80h] BYREF
  _QWORD v67[4]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v68[10]; // [rsp+E8h] [rbp-50h] BYREF
  int v69; // [rsp+140h] [rbp+8h]
  int v73; // [rsp+160h] [rbp+28h]

  v69 = a1;
  v56 = 1;
  *a6 = 1;
  v58 = 0;
  v57 = 0;
  v7 = 1;
  LODWORD(v59) = 1;
  v63 = *a3;
  v67[1] = v63;
  v64 = *a4;
  v67[2] = v64;
  v8 = a5 & 0x20000000;
  LODWORD(v61) = a5 & 0x20000000;
  v9 = a5 & 0x20000000 ^ a5;
  if ( v9 < 0 )
  {
    v9 &= ~0x80000000;
    v57 = 1;
  }
  if ( (v9 & 0x40000000) != 0 )
  {
    v9 &= ~0x40000000u;
    if ( (v9 & 0xFFFFFF0F) != 0 )
      return 3221225714LL;
    v7 = 0;
    LODWORD(v59) = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  v16 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v17 = (v13 + v12 - 1) | 0xFFF;
  v66[1] = v17;
  v18 = v12 & 0xFFFFFFFFFFFFF000uLL;
  v53 = v12 & 0xFFFFFFFFFFFFF000uLL;
  Teb = v14;
  v19 = (unsigned __int64)v14;
  v62 = (unsigned __int64)v14;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    if ( KeGetCurrentThread()->ApcStateIndex != v15 )
    {
      v20 = *(_QWORD *)(a2 + 1064);
      if ( !v20 )
      {
LABEL_14:
        Teb = KeGetCurrentThread()->Teb;
        v67[3] = Teb;
        v19 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
        v62 = v19;
        goto LABEL_17;
      }
      v21 = *(_WORD *)(v20 + 8);
      if ( v21 == 332 )
      {
        v18 = v12 & 0xFFFFFFFFFFFFF000uLL;
      }
      else
      {
        v22 = v21 == 452;
        v18 = v12 & 0xFFFFFFFFFFFFF000uLL;
        if ( !v22 )
          goto LABEL_14;
      }
    }
    v19 = v62;
  }
LABEL_17:
  v59 = v14;
  v61 = v17 >> 12;
  v23 = MiObtainReferencedVad(v18, &v55);
  P = (char *)v23;
  if ( !v23 )
  {
    v24 = v55;
    if ( v55 == -1073741664 )
      goto LABEL_113;
    goto LABEL_114;
  }
  v59 = (PVOID)v23;
  if ( v61 > (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) )
    goto LABEL_113;
  v73 = 0;
  if ( (v16 & 2) == 0 )
    goto LABEL_31;
  v24 = MiAllowProtectionChange(a2, a1, v23, v16, v53, v17);
  v55 = v24;
  if ( v24 < 0 )
    goto LABEL_114;
  if ( (*((_DWORD *)P + 12) & 0x10) == 0 && MiIsProcessCfgEnabled() && v7 == 1 )
  {
    v27 = v63;
    if ( (v25 & 0x4000) != 0 )
    {
      v24 = MiCheckSecuredVad(v26, v63, v64, v16);
      if ( v24 < 0 )
        goto LABEL_114;
      v73 = 1;
      v26 = (ULONG_PTR)P;
    }
    v68[0] = v53;
    v68[1] = v17;
    v24 = MiCommitVadCfgBits(v26, v68, 0LL);
    v55 = v24;
    if ( v24 < 0 )
      goto LABEL_114;
  }
  else
  {
LABEL_31:
    v27 = v63;
  }
  v28 = *((_DWORD *)P + 12);
  v29 = v28 & 7;
  if ( ((v29 - 5) & 0xFFFFFFFD) == 0 )
  {
    if ( v16 == (unsigned __int8)v28 >> 3 )
    {
      MiUnlockAndDereferenceVad(P);
      *a4 = v17 - v53 + 1;
      *a3 = v53;
      *a6 = MmProtectToValue[v16];
      return 0LL;
    }
LABEL_113:
    v24 = -1073741800;
    goto LABEL_114;
  }
  if ( (v28 & 0x40000) != 0 )
  {
    v24 = MiProtectEnclavePages(a2, v69, (_DWORD)P, v53, v17, v9, v16, v8, (__int64)a6, (__int64)a3, (__int64)a4);
    v30 = P;
    goto LABEL_116;
  }
  if ( v29 == 3 )
  {
    if ( v16 > 0x18 )
      goto LABEL_113;
    v31 = 16777234;
    if ( !_bittest(&v31, v16) )
      goto LABEL_113;
    v32 = MiProtectAweRegion(v53, v17, v16);
    MiUnlockAndDereferenceVad(P);
    *a4 = v17 - v53 + 1;
    *a3 = v53;
    *a6 = v32;
    return 0LL;
  }
  if ( v29 == 1 )
    goto LABEL_113;
  v33 = v57;
  if ( v57 == 1 )
  {
    if ( (v28 & 0x8000) != 0 )
      goto LABEL_43;
    v34 = (ULONG_PTR)P;
    if ( (*(_DWORD *)(**((_QWORD **)P + 9) + 56LL) & 0x20) != 0 )
      goto LABEL_43;
  }
  else
  {
    v34 = (ULONG_PTR)P;
  }
  if ( (v28 & 0x4000) != 0 && !v73 )
  {
    v24 = MiCheckSecuredVad(v34, v27, v64, v16);
    v55 = v24;
    if ( v24 < 0 )
      goto LABEL_114;
    v33 = v57;
  }
  v35 = *(unsigned int *)(v34 + 48);
  if ( (v35 & 0x8000) != 0 )
  {
    if ( (v9 & 0x88) != 0 || v33 == 1 )
    {
LABEL_43:
      v24 = -1073741582;
      goto LABEL_114;
    }
    if ( (v35 & 7) == 6 )
    {
      if ( (v9 & 0xFFFFF9F9) != 0 )
      {
        v24 = -1073741755;
        goto LABEL_114;
      }
      v9 &= 0xFFFFF9FF;
      v50 = (unsigned __int8)v35 >> 6;
      if ( v50 == 3 && (v35 & 0x38) != 0 )
      {
        v9 |= 0x400u;
      }
      else if ( v50 == 1 )
      {
        v9 |= 0x200u;
      }
      v16 = MiMakeProtectionMask(v9);
    }
    v24 = MiProtectPrivateMemory(v34, v53, v17, v16, v9, &v60, &v58);
    if ( v24 < 0 )
      goto LABEL_114;
    if ( v19 )
    {
      if ( v19 < v17 )
      {
        v51 = v19 >> 12;
        if ( v51 >= (*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32)) )
        {
          v52 = *(unsigned int *)(v34 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 33) << 32);
          if ( v51 <= v52 && (v17 + 1) >> 12 <= v52 )
            Teb[2] = v17 + 1;
        }
      }
    }
  }
  else
  {
    if ( (v9 & 0x600) != 0 )
    {
      v24 = -1073741582;
      goto LABEL_114;
    }
    v36 = *(_DWORD *)(**(_QWORD **)(v34 + 72) + 56LL);
    if ( ((v36 >> 5) & 1) == 0 )
    {
      v37 = MmCompatibleProtectionMask[(v35 >> 3) & 7] | 0x700;
      if ( (v9 | v37) != v37 )
      {
        v24 = -1073741746;
        goto LABEL_114;
      }
    }
    if ( (v36 & 0x80u) == 0 || ((v36 >> 5) & 1) != 0 )
    {
      if ( MiVadMapsLargeImage(v34) )
      {
        if ( v9 == 64 || v9 == 4 )
        {
          MiUnlockAndDereferenceVad(v38);
          *a4 = v17 - v53 + 1;
          *a3 = v53;
          *a6 = MmProtectToValue[v16];
          return 0LL;
        }
        v24 = -1073741746;
        goto LABEL_114;
      }
      ProtoPteAddress = (__int64 *)MiGetProtoPteAddress((__int64)v38, v53 >> 12, 5u, v66);
      if ( !ProtoPteAddress )
        goto LABEL_88;
      v40 = MiGetProtoPteAddress(v34, v61, 5u, v67);
      if ( !v40 )
        goto LABEL_88;
      CurrentThread = KeGetCurrentThread();
      v42 = ***(_QWORD ***)(v34 + 72);
      --CurrentThread->SpecialApcDisable;
      v43 = (signed __int64 *)(v42 + 40);
      ExAcquirePushLockSharedEx((ULONG_PTR)v43, 0LL);
      v44 = v66[0];
      v45 = v67[0];
      while ( 1 )
      {
        v46 = v44 == v45 ? v40 : *(_QWORD *)(v44 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v44 + 44) - 1);
        if ( (unsigned __int64)ProtoPteAddress > v46 )
        {
LABEL_76:
          v48 = v56;
        }
        else
        {
          while ( 1 )
          {
            PteShadow = *ProtoPteAddress;
            if ( (unsigned __int64)ProtoPteAddress >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)ProtoPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
            {
              PteShadow = MiReadPteShadow();
            }
            if ( !PteShadow )
              break;
            if ( (unsigned __int64)++ProtoPteAddress > v46 )
              goto LABEL_76;
          }
          v48 = 0;
          v56 = 0;
        }
        if ( v44 == v45 )
          break;
        v44 = *(_QWORD *)(v44 + 16);
        v66[0] = v44;
        ProtoPteAddress = *(__int64 **)(v44 + 8);
        if ( !ProtoPteAddress )
        {
          v48 = 0;
          break;
        }
      }
      if ( _InterlockedCompareExchange64(v43, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v43);
      KeAbPostRelease((ULONG_PTR)v43);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v49);
      }
      if ( !v48 )
      {
LABEL_88:
        v24 = -1073741779;
        goto LABEL_114;
      }
    }
    v24 = MiSetProtectionOnSection(a2, v34, v53, v17, v9, v57, &v60, &v58);
    if ( v24 < 0 )
    {
LABEL_114:
      if ( !v59 )
        return (unsigned int)v24;
      v30 = (char *)v59;
LABEL_116:
      MiUnlockAndDereferenceVad(v30);
      return (unsigned int)v24;
    }
  }
  MiUnlockAndDereferenceVad((char *)v34);
  *a4 = v17 - v53 + 1;
  *a3 = v53;
  *a6 = v60;
  result = 0LL;
  if ( v58 == 1 )
    return 1073741847LL;
  return result;
}
