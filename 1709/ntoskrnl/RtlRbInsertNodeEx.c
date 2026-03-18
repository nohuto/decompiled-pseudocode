/*
 * XREFs of RtlRbInsertNodeEx @ 0x14005E640
 * Callers:
 *     IoStartDiskIoAttributionForContext @ 0x140007CD0 (IoStartDiskIoAttributionForContext.c)
 *     PfSnGetFileInformation @ 0x140012BC0 (PfSnGetFileInformation.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14005DD20 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400A9504 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400AA8CC (KiAbEntryUpdateWaiterTreePosition.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400C300C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400D2BE8 (KiInsertSchedulingGroupQueue.c)
 *     KiSetClockInterval @ 0x14010F168 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x14011A238 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14011A84C (MiInvalidatePageFileBitmapsCache.c)
 *     MiInitializePagefileBitmapsCache @ 0x1401500A0 (MiInitializePagefileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14024E698 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14025D29C (RtlpHpVsFreeChunkInsert.c)
 *     VmpFaultEntryInsert @ 0x140278B6C (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x140279020 (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbInsertNodeEx(__int64 a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  char v7; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  _BOOL8 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  bool v13; // zf
  BOOL v14; // edi
  unsigned __int64 v15; // rax
  int v16; // r8d
  _BOOL8 v17; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 *v20; // r9
  unsigned __int64 v21; // r11
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // r11
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r10
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // r8d
  unsigned __int64 *v34; // r14
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // r15
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r11
  unsigned __int64 *v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rbx
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // r11

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( a2 )
  {
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
      v13 = (*(_BYTE *)(a1 + 8) & 1) == 0;
      *(_QWORD *)(a1 + 8) = a4;
      if ( !v13 )
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
          if ( v7 )
          {
            if ( v12 )
              v12 ^= a2;
          }
          a3 = v8 != v12;
          if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
            continue;
        }
        return;
      }
      if ( a3 == v10 )
      {
LABEL_24:
        v14 = !v10;
        v15 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v16 = *(_BYTE *)(a1 + 8) & 1;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v15 )
          v15 ^= a2;
        if ( v15 != v8 )
          __fastfail(0x1Du);
        v17 = v14;
        v18 = (__int64 *)(v8 + 8 * !v14);
        v19 = *v18;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v19 )
          v19 ^= v8;
        if ( v19 != a2 )
          __fastfail(0x1Du);
        v20 = (unsigned __int64 *)(v8 + 16);
        v21 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_78;
          v21 ^= v8;
        }
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8);
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v22 )
            v22 ^= v21;
          if ( v22 == v8 )
          {
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
              v23 = a2 ^ v21;
            else
              v23 = a2;
            *(_QWORD *)(v21 + 8) = v23;
          }
          else
          {
            v30 = *(_QWORD *)v21;
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v30 )
              v30 ^= v21;
            if ( v30 != v8 )
              __fastfail(0x1Du);
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
              v31 = a2 ^ v21;
            else
              v31 = a2;
            *(_QWORD *)v21 = v31;
          }
          goto LABEL_35;
        }
LABEL_78:
        if ( *(_QWORD *)a1 != v8 )
          __fastfail(0x1Du);
        *(_QWORD *)a1 = a2;
LABEL_35:
        if ( v16 && v21 )
          v21 ^= a2;
        *(_QWORD *)(a2 + 16) = v21 | *(_DWORD *)(a2 + 16) & 3;
        v24 = *(_QWORD *)(a2 + 8 * v17);
        if ( v16 )
        {
          if ( !v24 )
          {
LABEL_38:
            if ( v16 && v24 )
              v24 ^= v8;
            *v18 = v24;
            v25 = v8;
            if ( v16 )
              v25 = a2 ^ v8;
            *(_QWORD *)(a2 + 8 * v17) = v25;
            if ( v16 )
              v26 = a2 ^ v8;
            else
              v26 = a2;
            *v20 = v26 | *(_DWORD *)v20 & 3;
            *(_BYTE *)v20 |= 1u;
            *(_BYTE *)(a2 + 16) &= ~1u;
            return;
          }
          v24 ^= a2;
        }
        if ( v24 )
        {
          v27 = *(_QWORD *)(v24 + 16);
          v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v16 && v28 )
            v28 ^= v24;
          if ( v28 != a2 )
            __fastfail(0x1Du);
          if ( v16 )
            v29 = v8 ^ v24;
          else
            v29 = v8;
          *(_QWORD *)(v24 + 16) = v29 | v27 & 3;
        }
        goto LABEL_38;
      }
      v32 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v33 = *(_BYTE *)(a1 + 8) & 1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v32 )
        v32 ^= a4;
      if ( v32 != a2 )
        __fastfail(0x1Du);
      v34 = (unsigned __int64 *)(a2 + 8 * !v10);
      v35 = *v34;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v35 )
        v35 ^= a2;
      if ( v35 != a4 )
        __fastfail(0x1Du);
      v36 = 8 * v10;
      v37 = *(_QWORD *)(8 * v10 + v8);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v37 )
        v37 ^= v8;
      if ( v37 != a2 )
        goto LABEL_116;
      v38 = (_DWORD *)(a2 + 16);
      v39 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v39 )
        v39 ^= a2;
      if ( v39 != v8 )
LABEL_116:
        __fastfail(0x1Du);
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        v40 = a4 ^ v8;
      else
        v40 = a4;
      *(_QWORD *)(v36 + v8) = v40;
      v41 = v8;
      if ( v33 )
        v41 = a4 ^ v8;
      v42 = (unsigned __int64 *)(v36 + a4);
      *(_QWORD *)(a4 + 16) = v41 | *(_DWORD *)(a4 + 16) & 3;
      v43 = *(_QWORD *)(v36 + a4);
      if ( v33 )
      {
        if ( !v43 )
        {
LABEL_72:
          if ( v33 && v43 )
            v43 ^= a2;
          *v34 = v43;
          v44 = a2;
          if ( v33 )
            v44 = a4 ^ a2;
          *v42 = v44;
          if ( v33 )
            v45 = a4 ^ a2;
          else
            v45 = a4;
          v46 = v45 | *v38 & 3;
          a2 = a4;
          *(_QWORD *)v38 = v46;
          goto LABEL_24;
        }
        v43 ^= a4;
      }
      if ( v43 )
      {
        v47 = *(_QWORD *)(v43 + 16);
        v48 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v33 && v48 )
          v48 ^= v43;
        if ( v48 != a4 )
          __fastfail(0x1Du);
        if ( v33 )
          v49 = a2 ^ v43;
        else
          v49 = a2;
        *(_QWORD *)(v43 + 16) = v49 | v47 & 3;
      }
      goto LABEL_72;
    }
  }
  else
  {
    v13 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = a4;
    *(_QWORD *)a1 = a4;
    if ( !v13 )
      *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
}
