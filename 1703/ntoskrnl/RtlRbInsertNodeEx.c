/*
 * XREFs of RtlRbInsertNodeEx @ 0x14004A340
 * Callers:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140049B80 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14004B7C8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiSetClockInterval @ 0x140067A94 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x14007DABC (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14007E0DC (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400AF604 (MiBitmapsCachedEntryLengthChanged.c)
 *     PfSnGetFileInformation @ 0x1400B7690 (PfSnGetFileInformation.c)
 *     KiInsertSchedulingGroupQueue @ 0x140113D3C (KiInsertSchedulingGroupQueue.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14011F070 (KiAbEntryUpdateOwnerTreePosition.c)
 *     IoStartDiskIoAttributionForContext @ 0x14011F4F4 (IoStartDiskIoAttributionForContext.c)
 *     MiInitializePagefileBitmapsCache @ 0x14015988C (MiInitializePagefileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1402396E8 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140245DA8 (RtlpHpVsFreeChunkInsert.c)
 *     VmpFaultEntryInsert @ 0x140251D30 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x1402521B8 (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x140819AAC (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbInsertNodeEx(__int64 a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v4; // zf
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  char v7; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // rbx
  _BOOL8 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  BOOL v13; // edi
  unsigned __int64 v14; // rax
  int v15; // r8d
  _BOOL8 v16; // rbx
  __int64 *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 *v19; // r11
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  int v27; // r8d
  unsigned __int64 *v28; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  _DWORD *v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rbp
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // r11

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( !a2 )
  {
    v4 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = a4;
    *(_QWORD *)a1 = a4;
    if ( !v4 )
      *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)(a4 + 16) = 0LL;
    return;
  }
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    v5 = a4 ^ a2;
  else
    v5 = a4;
  *(_QWORD *)(a2 + 8LL * a3) = v5;
  v6 = a2;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    v6 = a4 ^ a2;
  *(_QWORD *)(a4 + 16) = v6 | 1;
  if ( !a3 && a2 == (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v4 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = a4;
    if ( !v4 )
      *(_BYTE *)(a1 + 8) |= 1u;
  }
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    v7 = *(_BYTE *)(a1 + 8) & 1;
    while ( 1 )
    {
      v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v7 && v8 )
        v8 ^= a2;
      v9 = *(_QWORD *)v8;
      if ( v7 && v9 )
        v9 ^= v8;
      v10 = v9 != a2;
      v11 = *(_QWORD *)(v8 + 8LL * (v9 == a2));
      if ( v7 )
      {
        if ( !v11 )
          break;
        v11 ^= v8;
      }
      if ( !v11 || (*(_BYTE *)(v11 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(a2 + 16) &= ~1u;
      a4 = v8;
      *(_BYTE *)(v11 + 16) &= ~1u;
      a2 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( !a2 )
          return;
        a2 ^= v8;
      }
      if ( a2 )
      {
        *(_BYTE *)(v8 + 16) |= 1u;
        v12 = *(_QWORD *)a2;
        v7 = *(_BYTE *)(a1 + 8) & 1;
        if ( v7 && v12 )
          v12 ^= a2;
        a3 = v8 != v12;
        if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
          continue;
      }
      return;
    }
    if ( a3 == v10 )
    {
LABEL_27:
      v13 = !v10;
      v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v15 = *(_BYTE *)(a1 + 8) & 1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v14 )
        v14 ^= a2;
      if ( v14 != v8 )
        __fastfail(0x1Du);
      v16 = v13;
      v17 = (__int64 *)(v8 + 8 * !v13);
      v18 = *v17;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v18 )
        v18 ^= v8;
      if ( v18 != a2 )
        __fastfail(0x1Du);
      v19 = (unsigned __int64 *)(v8 + 16);
      v20 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_83;
        v20 ^= v8;
      }
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v21 )
          v21 ^= v20;
        if ( v21 == v8 )
        {
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
            v22 = a2 ^ v20;
          else
            v22 = a2;
          *(_QWORD *)(v20 + 8) = v22;
        }
        else
        {
          v43 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v43 )
            v43 ^= v20;
          if ( v43 != v8 )
            __fastfail(0x1Du);
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
            v44 = a2 ^ v20;
          else
            v44 = a2;
          *(_QWORD *)v20 = v44;
        }
        goto LABEL_38;
      }
LABEL_83:
      if ( *(_QWORD *)a1 != v8 )
        __fastfail(0x1Du);
      *(_QWORD *)a1 = a2;
LABEL_38:
      if ( v15 && v20 )
        v20 ^= a2;
      *(_QWORD *)(a2 + 16) = v20 | *(_DWORD *)(a2 + 16) & 3;
      v23 = *(_QWORD *)(a2 + 8 * v16);
      if ( v15 )
      {
        if ( !v23 )
        {
LABEL_41:
          if ( v15 && v23 )
            v23 ^= v8;
          *v17 = v23;
          v24 = v8;
          if ( v15 )
            v24 = a2 ^ v8;
          *(_QWORD *)(a2 + 8 * v16) = v24;
          if ( v15 )
            v25 = a2 ^ v8;
          else
            v25 = a2;
          *v19 = v25 | *(_DWORD *)v19 & 3;
          *(_BYTE *)v19 |= 1u;
          *(_BYTE *)(a2 + 16) &= ~1u;
          return;
        }
        v23 ^= a2;
      }
      if ( v23 )
      {
        v40 = *(_QWORD *)(v23 + 16);
        v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v15 && v41 )
          v41 ^= v23;
        if ( v41 != a2 )
          __fastfail(0x1Du);
        if ( v15 )
          v42 = v8 ^ v23;
        else
          v42 = v8;
        *(_QWORD *)(v23 + 16) = v42 | v40 & 3;
      }
      goto LABEL_41;
    }
    v26 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v27 = *(_BYTE *)(a1 + 8) & 1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v26 )
      v26 ^= a4;
    if ( v26 != a2 )
      __fastfail(0x1Du);
    v28 = (unsigned __int64 *)(a2 + 8 * !v10);
    v29 = *v28;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v29 )
      v29 ^= a2;
    if ( v29 != a4 )
      __fastfail(0x1Du);
    v30 = 8 * v10;
    v31 = *(_QWORD *)(8 * v10 + v8);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v31 )
      v31 ^= v8;
    if ( v31 != a2 )
      goto LABEL_117;
    v32 = (_DWORD *)(a2 + 16);
    v33 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v33 )
      v33 ^= a2;
    if ( v33 != v8 )
LABEL_117:
      __fastfail(0x1Du);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v34 = a4 ^ v8;
    else
      v34 = a4;
    *(_QWORD *)(v30 + v8) = v34;
    v35 = v8;
    if ( v27 )
      v35 = a4 ^ v8;
    *(_QWORD *)(a4 + 16) = v35 | *(_DWORD *)(a4 + 16) & 3;
    v36 = *(_QWORD *)(v30 + a4);
    if ( v27 )
    {
      if ( !v36 )
      {
LABEL_62:
        if ( v27 && v36 )
          v36 ^= a2;
        *v28 = v36;
        v37 = a2;
        if ( v27 )
          v37 = a4 ^ a2;
        *(_QWORD *)(v30 + a4) = v37;
        if ( v27 )
          v38 = a4 ^ a2;
        else
          v38 = a4;
        v39 = v38 | *v32 & 3;
        a2 = a4;
        *(_QWORD *)v32 = v39;
        goto LABEL_27;
      }
      v36 ^= a4;
    }
    if ( v36 )
    {
      v45 = *(_QWORD *)(v36 + 16);
      v46 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v27 && v46 )
        v46 ^= v36;
      if ( v46 != a4 )
        __fastfail(0x1Du);
      if ( v27 )
        v47 = a2 ^ v36;
      else
        v47 = a2;
      *(_QWORD *)(v36 + 16) = v47 | v45 & 3;
    }
    goto LABEL_62;
  }
}
