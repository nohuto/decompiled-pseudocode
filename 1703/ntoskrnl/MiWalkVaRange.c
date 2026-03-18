/*
 * XREFs of MiWalkVaRange @ 0x14007B280
 * Callers:
 *     MiResetVirtualMemory @ 0x14007CD40 (MiResetVirtualMemory.c)
 *     MiSetPriorityVaRanges @ 0x1404C9C9C (MiSetPriorityVaRanges.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x1400293F8 (MiMakeProtoLeafValid.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v6; // r13d
  __int64 v7; // r14
  ULONG_PTR v8; // rdi
  __int64 v9; // r12
  __int64 SharedVm; // rbx
  KIRQL v11; // al
  int v12; // r9d
  KIRQL v13; // si
  __int64 v14; // rdx
  __int64 NextPageTable; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  ULONG_PTR ProtoPteAddress; // rsi
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r8d
  unsigned int v31; // ebx
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rbx
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rbx
  KIRQL v38; // al
  __int64 v39; // rdx
  __int64 v40; // rdx
  KIRQL v42; // [rsp+40h] [rbp-C0h]
  char v43[3]; // [rsp+41h] [rbp-BFh] BYREF
  int v44; // [rsp+44h] [rbp-BCh]
  int v45; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v46; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v47; // [rsp+58h] [rbp-A8h]
  unsigned int v48; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp-98h]
  _BYTE v50[8]; // [rsp+70h] [rbp-90h] BYREF
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  __int64 v53; // [rsp+88h] [rbp-78h] BYREF
  int v54; // [rsp+90h] [rbp-70h] BYREF
  __int16 v55; // [rsp+94h] [rbp-6Ch]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]

  v45 = a4;
  v46 = 0LL;
  v43[0] = 17;
  v6 = 0;
  v7 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v56 = 20LL;
  v54 = 1;
  v49 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = (__int64)&Process[1].IdealNode[12];
  v47 = &Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v13 = v11;
  v42 = v11;
LABEL_80:
  while ( v8 <= v49 )
  {
    LOBYTE(v12) = v13;
    NextPageTable = MiGetNextPageTable(v8, v49, (unsigned int)&v54, v12, 4, (__int64)&v48);
    v16 = 1;
    v44 = 1;
    if ( NextPageTable != v8 )
    {
      if ( (*(_DWORD *)(a3 + 48) & 0x8000) == 0
        && *(_QWORD *)(a3 + 80)
        && MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12, 1LL, v50) )
      {
        v16 = 0;
        v44 = 0;
      }
      else
      {
        v6 = -1073740748;
        if ( !NextPageTable )
          break;
        v16 = v44;
        v8 = NextPageTable;
      }
    }
    if ( v48 )
    {
      v17 = v48;
      do
      {
        v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v17;
      }
      while ( v17 );
      v9 = (__int64)v47;
      v8 += 8LL;
      v18 = v48;
      do
      {
        v8 = (__int64)(v8 << 25) >> 16;
        --v18;
      }
      while ( v18 );
      continue;
    }
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v20 = 0;
      if ( !v16 || (v21 = MI_READ_PTE_LOCK_FREE(v8), (v22 = v21) == 0) )
      {
        if ( (*(_DWORD *)(a3 + 48) & 0x8000) != 0 || !*(_QWORD *)(a3 + 80) )
          goto LABEL_54;
        ProtoPteAddress = MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12, 1LL, v50);
        if ( ProtoPteAddress )
          goto LABEL_39;
        v31 = v44;
        if ( !v44 )
        {
          v20 = 1;
          v8 -= 8LL;
          goto LABEL_53;
        }
LABEL_55:
        if ( v7 )
        {
          LOBYTE(v14) = v43[0];
          MiUnlockProtoPoolPage(v7, v14);
          v7 = 0LL;
          v46 = 0LL;
        }
        goto LABEL_45;
      }
      if ( (v21 & 1) != 0 || (v21 & 0x400) == 0 )
        goto LABEL_54;
      if ( v45 == 2 && MI_PROTO_FORMAT_COMBINED(v21) )
      {
        ProtoPteAddress = MiGetPrototypePteDirect(v22, v23, v24, v25);
        goto LABEL_38;
      }
      if ( !MI_PROTO_FORMAT_COMBINED(v22) )
      {
        if ( v8 == 0xFFFFF680003FFF00uLL && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
        {
LABEL_31:
          v6 = -1073740748;
LABEL_53:
          v13 = v42;
          goto LABEL_65;
        }
        if ( (*(_DWORD *)(a3 + 48) & 0x8000) != 0 || !*(_QWORD *)(a3 + 80) )
        {
LABEL_37:
          ProtoPteAddress = MiGetPrototypePteDirect(v22, v14, v26, v27);
          if ( v30 != 2 )
            goto LABEL_31;
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12, 1LL, v50);
          if ( !(unsigned int)MiIsPrototypePteVadLookup(v22)
            && ProtoPteAddress != MiGetPrototypePteDirect(v22, v14, v28, v29) )
          {
            v26 = (unsigned int)v45;
            goto LABEL_37;
          }
        }
LABEL_38:
        if ( ProtoPteAddress )
        {
LABEL_39:
          if ( ((v46 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            if ( v7 )
            {
              LOBYTE(v14) = v43[0];
              MiUnlockProtoPoolPage(v7, v14);
              v46 = 0LL;
            }
            v7 = MiLockProtoPoolPage(ProtoPteAddress, v43);
            if ( !v7 )
            {
              MiFlushTbList(&v54);
              v9 = (__int64)v47;
              LOBYTE(v36) = v42;
              MiUnlockWorkingSetExclusive(v47, v36);
              MmAccessFault(2uLL, ProtoPteAddress);
              v37 = MiGetSharedVm(v9);
              v38 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v37);
              *(_DWORD *)(v37 + 4) = 0;
              v13 = v38;
              v42 = v38;
              goto LABEL_80;
            }
            v46 = ProtoPteAddress;
          }
          v31 = v44;
LABEL_45:
          v32 = MiActOnPte(a3, v31, v8, ProtoPteAddress, v45, a5, &v53, &v52);
          if ( v32 )
          {
            if ( v32 == 274 )
            {
              v20 = 1;
              MiInsertTbFlushEntry(&v54, (__int64)(v8 << 25) >> 16, 1LL, 0LL);
              MiFlushTbList(&v54);
              v13 = v42;
              MiCopyOnWriteEx((__int64)(v8 << 25) >> 16, 0);
              v8 -= 8LL;
              goto LABEL_61;
            }
            if ( v32 == -1073741791 )
              MiInsertTbFlushEntry(&v54, (__int64)(v8 << 25) >> 16, 1LL, 0LL);
            else
              v6 = v32;
          }
          v13 = v42;
LABEL_61:
          v34 = v52;
          if ( v52 )
          {
            if ( v7 )
            {
              LOBYTE(v33) = v43[0];
              MiUnlockProtoPoolPage(v7, v33);
              v7 = 0LL;
              v46 = 0LL;
            }
            MiReleasePageFileInfo(v53, v34, 1LL);
          }
          goto LABEL_65;
        }
LABEL_54:
        v31 = v44;
        goto LABEL_55;
      }
      if ( (_DWORD)v26 == 1 )
        goto LABEL_31;
      if ( v7 )
      {
        LOBYTE(v14) = v43[0];
        MiUnlockProtoPoolPage(v7, v14);
        v7 = 0LL;
        v46 = 0LL;
      }
      MiFlushTbList(&v54);
      v13 = v42;
      if ( MiMakeProtoLeafValid(v8, 24LL, v42) == v8 )
        v8 -= 8LL;
      else
        v6 = -1073740748;
LABEL_65:
      v8 += 8LL;
      v35 = 0;
      if ( v20 == 1 || v8 > v49 || (v8 & 0xFFF) == 0 )
        v35 = 1;
      v9 = (__int64)v47;
      if ( (v8 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended((__int64)v47) || KeShouldYieldProcessor() )
        v35 |= 2u;
      if ( v35 )
        break;
      v16 = v44;
    }
    if ( v7 )
    {
      LOBYTE(v14) = v43[0];
      MiUnlockProtoPoolPage(v7, v14);
      v7 = 0LL;
      v46 = 0LL;
    }
    if ( (v35 & 2) != 0 )
    {
      MiFlushTbList(&v54);
      LOBYTE(v39) = v13;
      MiRelockWorkingSetExclusive(v9, v39);
    }
  }
  MiFlushTbList(&v54);
  LOBYTE(v40) = v13;
  MiUnlockWorkingSetExclusive(v9, v40);
  return v6;
}
