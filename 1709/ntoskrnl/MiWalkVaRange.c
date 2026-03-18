/*
 * XREFs of MiWalkVaRange @ 0x1400EBE20
 * Callers:
 *     MiResetVirtualMemory @ 0x140127420 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140584814 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiMakeProtoLeafValid @ 0x140128454 (MiMakeProtoLeafValid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  LONG *SharedVm; // rbx
  _KPROCESS *v11; // rdx
  KIRQL v12; // r15
  unsigned __int64 v13; // rax
  __int64 NextPageTable; // rax
  unsigned __int64 v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 ProtoPteAddress; // rsi
  int v20; // r15d
  __int64 PteShadow; // rbx
  _KPROCESS *v22; // rdx
  _KPROCESS *v23; // rdx
  int v24; // r8d
  int v25; // r8d
  int v26; // eax
  _KPROCESS *v27; // rdx
  unsigned __int64 v28; // rbx
  int v29; // ebx
  __int64 v30; // rsi
  LONG *v31; // rbx
  unsigned __int8 v33; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v34[3]; // [rsp+41h] [rbp-BFh] BYREF
  int v35; // [rsp+44h] [rbp-BCh]
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 *v38; // [rsp+50h] [rbp-B0h]
  unsigned int v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-90h]
  unsigned __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  struct _KEVENT *v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+90h] [rbp-70h] BYREF
  __int16 v46; // [rsp+94h] [rbp-6Ch]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]

  v37 = a4;
  v35 = 0;
  v34[0] = 17;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v46 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v47 = 20LL;
  v45 = 1;
  v40 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v38 = &Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  v33 = v12;
  v13 = v40;
  SharedVm[1] = 0;
  if ( v9 > v13 )
    goto LABEL_86;
  do
  {
    NextPageTable = MiGetNextPageTable(v9, v13, (__int64)&v45, v12, 4u, &v39);
    v36 = 1;
    v15 = NextPageTable;
    if ( NextPageTable != v9 )
    {
      if ( (*(_DWORD *)(a3 + 48) & 0x8000) == 0
        && *(_QWORD *)(a3 + 80)
        && MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 1u, &v41) )
      {
        v16 = 0;
        v36 = 0;
        goto LABEL_10;
      }
      v6 = -1073740748;
      v35 = -1073740748;
      if ( !v15 )
        break;
      v9 = v15;
    }
    v16 = v36;
LABEL_10:
    v11 = (_KPROCESS *)v39;
    if ( v39 )
    {
      v17 = v39;
      do
      {
        v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v17;
      }
      while ( v17 );
      v12 = v33;
      v9 += 8LL;
      v18 = v39;
      do
      {
        v9 = (__int64)(v9 << 25) >> 16;
        --v18;
      }
      while ( v18 );
      goto LABEL_85;
    }
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v20 = 0;
      if ( !v16 )
        goto LABEL_50;
      PteShadow = *(_QWORD *)v9;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v9, *(_QWORD *)v9);
      if ( !PteShadow )
      {
        v16 = v36;
LABEL_50:
        if ( (*(_DWORD *)(a3 + 48) & 0x8000) == 0 && *(_QWORD *)(a3 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 1u, &v41);
          if ( ProtoPteAddress )
            goto LABEL_28;
          if ( !v16 )
          {
            v20 = 1;
LABEL_55:
            v9 -= 8LL;
            goto LABEL_68;
          }
        }
        goto LABEL_56;
      }
      if ( (PteShadow & 1) != 0 || (PteShadow & 0x400) == 0 )
        goto LABEL_56;
      if ( v37 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(PteShadow) )
      {
        ProtoPteAddress = MiGetPrototypePteDirect(PteShadow);
        goto LABEL_27;
      }
      if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(PteShadow) )
      {
        if ( v9 == 0xFFFFF680003FFF00uLL && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
        {
          v35 = -1073740748;
          goto LABEL_68;
        }
        if ( (*(_DWORD *)(a3 + 48) & 0x8000) != 0
          || !*(_QWORD *)(a3 + 80)
          || (ProtoPteAddress = MiGetProtoPteAddress(a3, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 1u, &v41),
              !(unsigned int)MiIsPrototypePteVadLookup(PteShadow))
          && ProtoPteAddress != MiGetPrototypePteDirect(PteShadow) )
        {
          ProtoPteAddress = MiGetPrototypePteDirect(PteShadow);
          if ( v25 != 2 )
          {
            v35 = -1073740748;
            goto LABEL_68;
          }
        }
LABEL_27:
        if ( ProtoPteAddress )
        {
LABEL_28:
          if ( ((v8 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            if ( v7 )
            {
              MiUnlockProtoPoolPage(v7, v34[0]);
              v8 = 0LL;
            }
            v7 = MiLockProtoPoolPage(ProtoPteAddress, v34);
            if ( !v7 )
            {
              MiFlushTbList((__int64)&v45, v22);
              MiUnlockWorkingSetExclusive((__int64)v38, v33);
              MmAccessFault(2uLL, ProtoPteAddress, 0LL, 0LL);
              v31 = MiGetSharedVm((__int64)v38);
              v12 = ExAcquireSpinLockExclusive(v31);
              v33 = v12;
              v31[1] = 0;
              goto LABEL_84;
            }
            v8 = ProtoPteAddress;
          }
          goto LABEL_58;
        }
LABEL_56:
        if ( v7 )
        {
          MiUnlockProtoPoolPage(v7, v34[0]);
          v7 = 0LL;
          v8 = 0LL;
        }
LABEL_58:
        v26 = MiActOnPte(a3, v36, v9, ProtoPteAddress, v37, a5, &v44, &v43);
        if ( v26 )
        {
          if ( v26 == 274 )
          {
            MiInsertTbFlushEntry(&v45, (__int64)(v9 << 25) >> 16, 1LL, 0);
            MiFlushTbList((__int64)&v45, v27);
            MiCopyOnWriteEx((__int64)(v9 << 25) >> 16, (__int64 *)v9, -1LL, v33, 0);
            v9 -= 8LL;
            v20 = 1;
          }
          else if ( v26 == -1073741791 )
          {
            MiInsertTbFlushEntry(&v45, (__int64)(v9 << 25) >> 16, 1LL, 0);
          }
          else
          {
            v35 = v26;
          }
        }
        v28 = v43;
        if ( v43 )
        {
          if ( v7 )
          {
            MiUnlockProtoPoolPage(v7, v34[0]);
            v7 = 0LL;
            v8 = 0LL;
          }
          MiReleasePageFileInfo(v44, v28, 1);
        }
        goto LABEL_68;
      }
      if ( v24 == 1 )
      {
        v35 = -1073740748;
      }
      else
      {
        if ( v7 )
        {
          MiUnlockProtoPoolPage(v7, v34[0]);
          v7 = 0LL;
          v8 = 0LL;
        }
        MiFlushTbList((__int64)&v45, v23);
        if ( MiMakeProtoLeafValid(v9) == v9 )
          goto LABEL_55;
        v35 = -1073740748;
      }
LABEL_68:
      v9 += 8LL;
      v29 = 0;
      if ( v20 == 1 || v9 > v40 || (v9 & 0xFFF) == 0 )
        v29 = 1;
      v30 = (__int64)v38;
      if ( (v9 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended((__int64)v38) || KeShouldYieldProcessor() )
        v29 |= 2u;
      if ( v29 )
        break;
      v16 = v36;
    }
    if ( v7 )
    {
      MiUnlockProtoPoolPage(v7, v34[0]);
      v7 = 0LL;
      v8 = 0LL;
    }
    if ( (v29 & 2) != 0 )
    {
      MiFlushTbList((__int64)&v45, v11);
      v12 = v33;
      MiRelockWorkingSetExclusive(v30, v33);
    }
    else
    {
      v12 = v33;
    }
LABEL_84:
    v6 = v35;
LABEL_85:
    v13 = v40;
  }
  while ( v9 <= v40 );
LABEL_86:
  MiFlushTbList((__int64)&v45, v11);
  MiUnlockWorkingSetExclusive((__int64)v38, v12);
  return v6;
}
