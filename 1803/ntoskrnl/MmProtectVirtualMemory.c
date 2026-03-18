/*
 * XREFs of MmProtectVirtualMemory @ 0x1404D6080
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405B5960 (NtProtectVirtualMemory.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiIsProcessCfgEnabled @ 0x14003E8C4 (MiIsProcessCfgEnabled.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     MiAllowProtectionChange @ 0x140062454 (MiAllowProtectionChange.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 *     MiCheckSecuredVad @ 0x1404D73E0 (MiCheckSecuredVad.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        ULONG_PTR *a4,
        unsigned int a5,
        int *a6)
{
  char v7; // r11
  _QWORD *v8; // r10
  int v9; // r13d
  unsigned __int64 v10; // r8
  ULONG_PTR v11; // r9
  unsigned int v12; // r15d
  int v13; // esi
  unsigned int ProtectionMask; // r12d
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  ULONG_PTR v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // r14
  int v22; // r13d
  int v23; // ecx
  int v24; // eax
  unsigned __int64 v25; // r15
  void *v26; // rcx
  __int64 *ProtoPteAddress; // rbx
  __int64 v28; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v30; // r15
  signed __int64 *v31; // r15
  __int64 v32; // r10
  __int64 v33; // r11
  unsigned __int64 v34; // r9
  __int64 PteShadow; // rax
  int v36; // ebx
  int v38; // ebx
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // rcx
  PVOID v44; // rcx
  __int16 v45; // cx
  int v46; // r15d
  int v47; // ecx
  int v48; // edx
  int v49; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v50; // [rsp+68h] [rbp-E0h]
  int v51; // [rsp+70h] [rbp-D8h] BYREF
  int v52; // [rsp+74h] [rbp-D4h]
  int v53; // [rsp+78h] [rbp-D0h] BYREF
  _QWORD *v54; // [rsp+80h] [rbp-C8h]
  _QWORD *v55; // [rsp+88h] [rbp-C0h]
  int v56; // [rsp+90h] [rbp-B8h]
  int v57; // [rsp+94h] [rbp-B4h]
  int v58; // [rsp+98h] [rbp-B0h] BYREF
  PVOID P; // [rsp+A0h] [rbp-A8h]
  unsigned __int64 v60; // [rsp+A8h] [rbp-A0h]
  unsigned __int64 v61; // [rsp+B0h] [rbp-98h]
  int v62; // [rsp+B8h] [rbp-90h] BYREF
  ULONG_PTR v63; // [rsp+C0h] [rbp-88h]
  _QWORD *Teb; // [rsp+C8h] [rbp-80h]
  ULONG_PTR v65; // [rsp+D0h] [rbp-78h]
  _QWORD v66[2]; // [rsp+D8h] [rbp-70h] BYREF
  _QWORD v67[2]; // [rsp+E8h] [rbp-60h] BYREF
  _QWORD v68[10]; // [rsp+F8h] [rbp-50h] BYREF
  int v73; // [rsp+170h] [rbp+28h]

  v7 = 1;
  v52 = 1;
  *a6 = 1;
  v8 = 0LL;
  v53 = 0;
  v9 = 1;
  v56 = 1;
  v10 = *a3;
  v61 = v10;
  v67[1] = v10;
  v11 = *a4;
  v63 = v11;
  v65 = v11;
  v49 = a5 >> 31;
  LODWORD(v60) = a5 >> 31;
  v12 = a5 & 0xB0000000;
  LODWORD(P) = a5 & 0xB0000000;
  v13 = a5 & 0x4FFFFFFF;
  if ( (a5 & 0x40000000) != 0 )
  {
    v13 = a5 & 0xFFFFFFF;
    if ( (a5 & 0xFFFFF0F) != 0 )
      return 3221225714LL;
    v9 = 0;
    v56 = 0;
  }
  if ( v13 )
  {
    ProtectionMask = MiMakeProtectionMask(v13);
    v57 = ProtectionMask;
    if ( ProtectionMask != -1 )
      goto LABEL_4;
    return 3221225541LL;
  }
  if ( v12 != 0x80000000 && v12 != 0x10000000 )
    return 3221225541LL;
  ProtectionMask = 24;
  v57 = 24;
LABEL_4:
  v15 = (v11 + v10 - 1) | 0xFFF;
  v66[1] = v15;
  v16 = v10 & 0xFFFFFFFFFFFFF000uLL;
  v50 = v10 & 0xFFFFFFFFFFFFF000uLL;
  Teb = v8;
  v54 = v8;
  v55 = v8;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == v7
      || (v40 = *(_QWORD *)(a2 + 1064)) != 0 && ((v45 = *(_WORD *)(v40 + 8), v45 == 332) || v45 == 452) )
    {
      v41 = (unsigned __int64)v55;
    }
    else
    {
      Teb = KeGetCurrentThread()->Teb;
      v54 = Teb;
      v41 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
      v55 = (_QWORD *)v41;
    }
    v54 = (_QWORD *)v41;
  }
  P = v8;
  v60 = v15 >> 12;
  v17 = MiObtainReferencedVadEx(v16, 0, &v51);
  v21 = v17;
  v65 = v17;
  if ( !v17 )
  {
    v38 = v51;
    if ( v51 != -1073741664 )
      goto LABEL_75;
    goto LABEL_90;
  }
  P = (PVOID)v17;
  if ( v60 > (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) )
  {
LABEL_90:
    v38 = -1073741800;
    goto LABEL_75;
  }
  v73 = 0;
  if ( (ProtectionMask & 2) == 0 )
    goto LABEL_8;
  v38 = MiAllowProtectionChange(a2, a1, v17, ProtectionMask, v16, v15);
  v51 = v38;
  if ( v38 < 0 )
    goto LABEL_75;
  v19 = *(unsigned int *)(v21 + 48);
  if ( (v19 & 0x10) == 0 && MiIsProcessCfgEnabled() && v9 == 1 )
  {
    v22 = v61;
    if ( (v19 & 0x8000000) != 0 )
    {
      v38 = MiCheckSecuredVad(v21, v61, v63, ProtectionMask, KeGetCurrentThread()->PreviousMode);
      if ( v38 < 0 )
        goto LABEL_75;
      v73 = 1;
      v54 = v55;
    }
    v68[0] = v50;
    v68[1] = v15;
    v38 = MiCommitVadCfgBits(v21, (__int64)v68, 0LL);
    v51 = v38;
    if ( v38 < 0 )
    {
LABEL_75:
      v44 = P;
      if ( !P )
        return (unsigned int)v38;
LABEL_81:
      MiUnlockAndDereferenceVad(v44, v18, v19, v20);
      return (unsigned int)v38;
    }
  }
  else
  {
LABEL_8:
    v22 = v61;
  }
  v18 = *(unsigned int *)(v21 + 48);
  v23 = *(_DWORD *)(v21 + 48) & 7;
  if ( ((v23 - 5) & 0xFFFFFFFD) == 0 )
  {
    v18 = (unsigned __int8)v18 >> 3;
    if ( ProtectionMask == (_DWORD)v18 )
    {
      MiUnlockAndDereferenceVad((PVOID)v21, v18, v19, v20);
      *a4 = v15 - v50 + 1;
      *a3 = v50;
      *a6 = MmProtectToValue[ProtectionMask];
      return 0LL;
    }
    goto LABEL_90;
  }
  if ( (v18 & 0x10000) != 0 )
  {
    v38 = MiProtectEnclavePages(a2, a1, v21, v50, v15, v13, ProtectionMask, v12, (__int64)a6, (__int64)a3, (__int64)a4);
    v44 = (PVOID)v21;
    goto LABEL_81;
  }
  if ( (v12 & 0x5FFFFFFF) != 0 )
  {
    v38 = -1073741755;
    goto LABEL_75;
  }
  if ( !v13 )
  {
    v38 = -1073741755;
    goto LABEL_75;
  }
  if ( v23 == 3 )
  {
    v46 = MiProtectAweRegion(v50, v15, ProtectionMask, &v62);
    if ( v46 >= 0 )
    {
      MiUnlockAndDereferenceVad((PVOID)v21, v18, v19, v20);
      v47 = MmProtectToValue[v62];
      *a4 = v15 - v50 + 1;
      *a3 = v50;
      *a6 = v47;
      return (unsigned int)v46;
    }
    goto LABEL_90;
  }
  if ( v23 == 1 )
    goto LABEL_90;
  v24 = v49;
  if ( v49 == 1 )
  {
    if ( (v18 & 0x4000) != 0 || (*(_DWORD *)(**(_QWORD **)(v21 + 72) + 56LL) & 0x20) != 0 )
      goto LABEL_98;
    v24 = 1;
  }
  if ( (v18 & 0x8000000) == 0 || v73 )
  {
    v25 = (unsigned __int64)v54;
  }
  else
  {
    v38 = MiCheckSecuredVad(v21, v22, v63, ProtectionMask, KeGetCurrentThread()->PreviousMode);
    v51 = v38;
    if ( v38 < 0 )
      goto LABEL_75;
    v25 = (unsigned __int64)v55;
    v24 = v49;
  }
  v19 = *(unsigned int *)(v21 + 48);
  if ( (v19 & 0x4000) != 0 )
  {
    if ( (v13 & 0x88) == 0 && v24 != 1 )
    {
      if ( (v19 & 7) == 6 )
      {
        if ( (v13 & 0xFFFFF9F9) != 0 )
        {
          v38 = -1073741755;
          goto LABEL_75;
        }
        v13 &= 0xFFFFF9FF;
        v48 = (unsigned __int8)v19 >> 6;
        if ( (v19 & 0x38) != 0 && v48 == 3 )
        {
          v13 |= 0x400u;
        }
        else if ( v48 == 1 )
        {
          v13 |= 0x200u;
        }
        ProtectionMask = MiMakeProtectionMask(v13);
      }
      v38 = MiProtectPrivateMemory(v21, v50, v15, ProtectionMask, v13, &v58, &v53);
      if ( v38 < 0 )
        goto LABEL_75;
      if ( v25 )
      {
        if ( v25 < v15 )
        {
          v42 = v25 >> 12;
          if ( v42 >= (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) )
          {
            v43 = *(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32);
            if ( v42 <= v43 )
            {
              v18 = v15 + 1;
              if ( (v15 + 1) >> 12 <= v43 )
                Teb[2] = v18;
            }
          }
        }
      }
      goto LABEL_39;
    }
LABEL_98:
    v38 = -1073741582;
    goto LABEL_75;
  }
  if ( (v13 & 0x600) != 0 )
  {
    v38 = -1073741582;
    goto LABEL_75;
  }
  v18 = *(unsigned int *)(**(_QWORD **)(v21 + 72) + 56LL);
  if ( (v18 & 0x20) == 0 )
  {
    v19 = (v19 >> 3) & 7;
    if ( (v13 | MmCompatibleProtectionMask[v19] | 0x700) != (MmCompatibleProtectionMask[v19] | 0x700) )
    {
      v38 = -1073741746;
      goto LABEL_75;
    }
  }
  if ( (v18 & 0xA0) != 0x80 )
  {
    if ( MiVadMapsLargeImage(v21) )
    {
      if ( v13 != 64 && v13 != 4 )
      {
        v38 = -1073741746;
        goto LABEL_75;
      }
      MiUnlockAndDereferenceVad(v26, v18, v19, v20);
      *a4 = v15 - v50 + 1;
      *a3 = v50;
      *a6 = MmProtectToValue[ProtectionMask];
      return 0LL;
    }
    ProtoPteAddress = (__int64 *)MiGetProtoPteAddress((__int64)v26, v50 >> 12, 2, v66);
    if ( !ProtoPteAddress )
      goto LABEL_108;
    v28 = MiGetProtoPteAddress(v21, v60, 2, v67);
    if ( !v28 )
      goto LABEL_108;
    CurrentThread = KeGetCurrentThread();
    v30 = ***(_QWORD ***)(v21 + 72);
    --CurrentThread->SpecialApcDisable;
    v31 = (signed __int64 *)(v30 + 40);
    ExAcquirePushLockSharedEx((ULONG_PTR)v31, 0LL);
    v32 = v66[0];
    v33 = v67[0];
    while ( 1 )
    {
      v34 = v32 == v33 ? v28 : *(_QWORD *)(v32 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v32 + 44) - 1);
      if ( (unsigned __int64)ProtoPteAddress > v34 )
      {
LABEL_32:
        v36 = v52;
      }
      else
      {
        while ( 1 )
        {
          PteShadow = *ProtoPteAddress;
          if ( (unsigned __int64)ProtoPteAddress >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)ProtoPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
          {
            PteShadow = MiReadPteShadow((unsigned __int64)ProtoPteAddress, *ProtoPteAddress);
          }
          if ( !PteShadow )
            break;
          if ( (unsigned __int64)++ProtoPteAddress > v34 )
            goto LABEL_32;
        }
        v36 = 0;
        v52 = 0;
      }
      if ( v32 == v33 )
        break;
      v32 = *(_QWORD *)(v32 + 16);
      v66[0] = v32;
      ProtoPteAddress = *(__int64 **)(v32 + 8);
      if ( !ProtoPteAddress )
      {
        v36 = 0;
        break;
      }
    }
    if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v31);
    KeAbPostRelease((ULONG_PTR)v31);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v36 )
    {
LABEL_108:
      v38 = -1073741779;
      goto LABEL_75;
    }
  }
  v38 = MiSetProtectionOnSection(a2, v21, v50, v15, v13, v49, &v58, &v53);
  if ( v38 < 0 )
    goto LABEL_75;
LABEL_39:
  MiUnlockAndDereferenceVad((PVOID)v21, v18, v19, v20);
  *a4 = v15 - v50 + 1;
  *a3 = v50;
  *a6 = v58;
  if ( v53 != 1 )
    return 0LL;
  return 1073741847LL;
}
