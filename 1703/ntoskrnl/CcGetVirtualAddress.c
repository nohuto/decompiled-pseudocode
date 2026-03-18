/*
 * XREFs of CcGetVirtualAddress @ 0x14009DE10
 * Callers:
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     CcMapDataCommon @ 0x1404406E4 (CcMapDataCommon.c)
 *     CcMapAndCopyFromCache @ 0x1405141C0 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x140514420 (CcMapData.c)
 *     CcMdlRead @ 0x140549510 (CcMdlRead.c)
 * Callees:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CcInsertVacbArray @ 0x14015E408 (CcInsertVacbArray.c)
 *     CcBuildUpHighPriorityMappings @ 0x14015E4F4 (CcBuildUpHighPriorityMappings.c)
 *     CcAllocateInitializeVacbArray @ 0x14015E56C (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int a5, int a6)
{
  int v6; // eax
  int v8; // r15d
  __int64 v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  int v13; // esi
  __int64 v14; // rdx
  __int64 VacbMiss; // rsi
  int v16; // r9d
  __int64 v18; // r11
  int v19; // r8d
  int v20; // ecx
  int v21; // r9d
  __int64 v22; // rax
  __int64 *v23; // rdx
  __int64 InitializeVacbArray; // rax
  __int64 v25; // r12
  KIRQL v26; // si
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v29[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  int v31; // [rsp+98h] [rbp+10h]
  __int64 *v32; // [rsp+A0h] [rbp+18h]
  _DWORD *v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v6 = *(_DWORD *)(a1 + 152);
  v31 = 0;
  v8 = a2 & 0x3FFFF;
  v10 = a2 & 0x3FFFF;
  v11 = a2 - v10;
  v12 = v6 & 0x200;
  v29[0] = a2 - v10;
  LODWORD(v28) = v12 != 0;
  if ( v12 || a5 )
  {
    v13 = 1;
    LODWORD(v30) = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 || (unsigned int)CcNumberOfFreeHighPriorityVacbs >= 5 )
      goto LABEL_3;
  }
  else
  {
    v13 = 0;
    LODWORD(v30) = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 )
      goto LABEL_3;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v25 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v13 == 1 )
      CcBuildUpHighPriorityMappings(InitializeVacbArray);
    v26 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v25);
    KeReleaseQueuedSpinLock(4uLL, v26);
  }
LABEL_3:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x546uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || (v11 & 0xFFFFF) != 0
    || v11 < 0x100000
    || v11 == *(_QWORD *)(a1 + 336) )
  {
    v31 = 1;
  }
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 > 0x2000000 )
  {
    v18 = a2;
    v19 = 0;
    v20 = 25;
    do
    {
      v21 = v20;
      v20 += 7;
      ++v19;
    }
    while ( v14 > 1LL << v20 );
    VacbMiss = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (a2 >> v21));
    if ( !VacbMiss )
      goto LABEL_26;
    do
    {
      if ( !v19 )
        break;
      v22 = 1LL << v21;
      v21 -= 7;
      v18 &= v22 - 1;
      --v19;
      VacbMiss = *(_QWORD *)(VacbMiss + 8 * (v18 >> v21));
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  if ( VacbMiss )
  {
    if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(VacbMiss + 16)) )
      KeBugCheckEx(0x34u, 0x97FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    ExReleasePushLockEx(a1 + 104, 0LL);
    v11 = v29[0];
    goto LABEL_15;
  }
LABEL_26:
  ExReleasePushLockEx(a1 + 104, 0LL);
  VacbMiss = CcGetVacbMiss(a1, a2, (unsigned int)v28, (unsigned int)v30);
  if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v11 & 0xFFFFF) == 0 && v11 >= 0x100000 )
  {
    v11 -= 0x100000LL;
    v29[0] = v11;
    CcUnmapVacbArray(a1, (unsigned int)v29, 0x100000, 1, 0, 0);
  }
LABEL_15:
  if ( !v31 )
  {
    LOBYTE(v16) = 1;
    LOBYTE(v27) = 0;
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v11 < 8650752 )
      {
        v28 = 0x40000LL;
        v23 = &v28;
        goto LABEL_35;
      }
    }
    else if ( v11 < 0x800000 )
    {
      v30 = 0LL;
      v23 = &v30;
LABEL_35:
      CcUnmapVacbArray(a1, (_DWORD)v23, v11, v16, 0, v27, v28);
      goto LABEL_16;
    }
    v29[0] = v11 - 0x800000;
    CcUnmapVacbArray(a1, (unsigned int)v29, 0x800000, v16, 0, v27);
  }
LABEL_16:
  *v32 = VacbMiss;
  *v33 = 0x40000 - v8;
  return v10 + *(_QWORD *)VacbMiss;
}
