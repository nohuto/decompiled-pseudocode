/*
 * XREFs of MiWalkVaRange @ 0x14004FC40
 * Callers:
 *     MiResetVirtualMemory @ 0x1400C9330 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140575908 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiMakeProtoLeafValid @ 0x1400BF71C (MiMakeProtoLeafValid.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rsi
  int ProtoLeafValid; // r12d
  ULONG_PTR v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 NextPageTable; // rax
  __int64 v13; // r8
  int v14; // ecx
  unsigned __int64 v15; // rbx
  __int64 v16; // r9
  __int64 ProtoPteAddress; // rsi
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // eax
  int v30; // esi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r8
  unsigned __int8 v36; // [rsp+40h] [rbp-168h] BYREF
  unsigned __int8 v37; // [rsp+41h] [rbp-167h]
  unsigned int v38; // [rsp+44h] [rbp-164h]
  int v39; // [rsp+48h] [rbp-160h]
  unsigned int v40; // [rsp+4Ch] [rbp-15Ch]
  __int64 v41; // [rsp+50h] [rbp-158h]
  unsigned __int16 *v42; // [rsp+58h] [rbp-150h]
  unsigned __int64 v43; // [rsp+60h] [rbp-148h]
  __int64 v44; // [rsp+68h] [rbp-140h]
  __int64 v45; // [rsp+70h] [rbp-138h] BYREF
  int v46; // [rsp+78h] [rbp-130h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-128h]
  __int64 v48; // [rsp+88h] [rbp-120h] BYREF
  __int64 v49; // [rsp+90h] [rbp-118h] BYREF
  int v50; // [rsp+A0h] [rbp-108h] BYREF
  __int16 v51; // [rsp+A4h] [rbp-104h]
  __int64 v52; // [rsp+A8h] [rbp-100h]
  __int64 v53; // [rsp+B0h] [rbp-F8h]
  __int64 v54; // [rsp+B8h] [rbp-F0h]

  v40 = a4;
  v41 = a3;
  v5 = a3;
  v36 = 17;
  ProtoLeafValid = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v52 = 20LL;
  v50 = 1;
  v43 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].IdealNode[12];
  v42 = &Process[1].IdealNode[12];
  v37 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  v11 = v43;
  if ( v9 > v43 )
    goto LABEL_89;
  do
  {
    v44 = 0LL;
    NextPageTable = MiGetNextPageTable(v9, v11, (__int64)&v50, v37, 0, &v46);
    v14 = 1;
    v15 = NextPageTable;
    v38 = 1;
    if ( NextPageTable != v9 )
    {
      if ( (*(_DWORD *)(v5 + 48) & 0x4000) != 0 || !*(_QWORD *)(v5 + 80) )
        goto LABEL_8;
      if ( !MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0, &v45) )
      {
        v14 = v38;
LABEL_8:
        ProtoLeafValid = -1073740748;
        if ( !v15 )
        {
          v10 = (__int64)v42;
          break;
        }
        v9 = v15;
        goto LABEL_10;
      }
      v14 = 0;
      v38 = 0;
    }
LABEL_10:
    v16 = 0xFFFFF68000000000uLL;
    if ( v15 )
      v44 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v18 = 0;
      v39 = 0;
      if ( v14 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v9);
        v21 = v19;
        if ( v19 )
          break;
      }
      v23 = v41;
      if ( (*(_DWORD *)(v41 + 48) & 0x4000) == 0 && *(_QWORD *)(v41 + 80) )
      {
        ProtoPteAddress = MiGetProtoPteAddress(
                            v41,
                            (unsigned __int64)((__int64)((v9 << 25) - (v16 << 25)) >> 16) >> 12,
                            0,
                            &v45);
        if ( ProtoPteAddress )
          goto LABEL_20;
        if ( !v38 )
          goto LABEL_51;
      }
LABEL_62:
      if ( v7 )
      {
        MiUnlockProtoPoolPage(v7, v36, v13, v16);
        v7 = 0LL;
        v8 = 0LL;
      }
LABEL_64:
      v29 = MiActOnPte(v23, v38, v9, ProtoPteAddress, v40, a5, &v49, &v48);
      if ( v29 )
      {
        if ( v29 == 274 )
        {
          MiInsertTbFlushEntry((__int64)&v50, (__int64)(v9 << 25) >> 16, 1LL, 0);
          MiFlushTbList(&v50);
          v30 = MiCopyOnWrite((__int64)(v9 << 25) >> 16);
          v39 = v30;
          v9 -= 8LL;
          v18 = 1;
          goto LABEL_71;
        }
        if ( v29 == -1073741791 )
          MiInsertTbFlushEntry((__int64)&v50, (__int64)(v9 << 25) >> 16, 1LL, 0);
        else
          ProtoLeafValid = v29;
      }
      v30 = 0;
LABEL_71:
      v31 = v48;
      if ( v48 )
      {
        if ( v7 )
          MiUnlockProtoPoolPage(v7, v36, v13, v16);
        v32 = 0LL;
        if ( !v7 )
          v32 = v8;
        v8 = v32;
        MiReleasePageFileInfo(v49, v31, 1LL);
        v7 = 0LL;
      }
      v9 += 8LL;
      if ( v18 == 1 || v30 < 0 )
      {
LABEL_51:
        if ( v7 )
          MiUnlockProtoPoolPage(v7, v36, v13, v16);
        v27 = 0LL;
        if ( !v7 )
          v27 = v8;
        v7 = 0LL;
        v8 = v27;
        MiFlushTbList(&v50);
        v10 = (__int64)v42;
        if ( v44 )
          MiUnlockPageTableInternal(v42, v44);
        MiUnlockWorkingSetShared(v10, v37, v28);
        if ( v39 == -1073740748 )
          MiCopyOnWriteCheckConditions(v10, 3221226548LL);
        goto LABEL_59;
      }
LABEL_79:
      if ( v9 > v43
        || (v9 & 0xFFF) == 0
        || (v9 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended((__int64)v42)
        || KeShouldYieldProcessor() )
      {
        goto LABEL_51;
      }
      v14 = v38;
      v16 = 0xFFFFF68000000000uLL;
    }
    if ( (v19 & 1) != 0 || (v19 & 0x400) == 0 )
    {
      v23 = v41;
      goto LABEL_62;
    }
    v22 = v40;
    if ( v40 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v19, v20, 2LL, v16) )
    {
      ProtoPteAddress = MiGetPrototypePteDirect(v21);
    }
    else
    {
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v21, v20, v22, v16) )
      {
        if ( (_DWORD)v13 == 1 )
        {
          ProtoLeafValid = -1073740748;
          v9 += 8LL;
        }
        else
        {
          if ( v7 )
            MiUnlockProtoPoolPage(v7, v36, v13, v16);
          v25 = 0LL;
          if ( !v7 )
            v25 = v8;
          v7 = 0LL;
          v8 = v25;
          MiFlushTbList(&v50);
          ProtoLeafValid = MiMakeProtoLeafValid(v9);
          if ( ProtoLeafValid < 0 )
          {
            ProtoLeafValid = -1073740748;
            v9 += 8LL;
          }
        }
        goto LABEL_79;
      }
      v26 = ((__int64)((v9 << 25) - (v16 << 25)) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( (v26 == 2147352576 || v26 == qword_1403CB680 && qword_1403CB680)
        && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
      {
        ProtoLeafValid = -1073740748;
        v9 += 8LL;
        goto LABEL_79;
      }
      if ( (*(_DWORD *)(v41 + 48) & 0x4000) != 0
        || !*(_QWORD *)(v41 + 80)
        || (ProtoPteAddress = MiGetProtoPteAddress(
                                v41,
                                (unsigned __int64)((__int64)((v9 << 25) - (v16 << 25)) >> 16) >> 12,
                                0,
                                &v45),
            !(unsigned int)MiIsPrototypePteVadLookup(v21))
        && ProtoPteAddress != MiGetPrototypePteDirect(v21) )
      {
        ProtoPteAddress = MiGetPrototypePteDirect(v21);
        if ( (_DWORD)v13 != 2 )
        {
          ProtoLeafValid = -1073740748;
          v9 += 8LL;
          goto LABEL_79;
        }
      }
    }
    v23 = v41;
    if ( !ProtoPteAddress )
      goto LABEL_62;
LABEL_20:
    if ( ((v8 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      goto LABEL_64;
    if ( v7 )
      MiUnlockProtoPoolPage(v7, v36, v13, v16);
    v24 = 0LL;
    if ( !v7 )
      v24 = v8;
    v8 = v24;
    v7 = MiLockProtoPoolPage(ProtoPteAddress, &v36);
    if ( v7 )
    {
      v8 = ProtoPteAddress;
      goto LABEL_64;
    }
    MiFlushTbList(&v50);
    v10 = (__int64)v42;
    if ( v44 )
      MiUnlockPageTableInternal(v42, v44);
    MiUnlockWorkingSetShared(v10, v37, v33);
    MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
LABEL_59:
    MiLockWorkingSetShared(v10);
    v11 = v43;
    v5 = v41;
  }
  while ( v9 <= v43 );
LABEL_89:
  MiFlushTbList(&v50);
  MiUnlockWorkingSetShared(v10, v37, v34);
  return (unsigned int)ProtoLeafValid;
}
