/*
 * XREFs of CmpMountPreloadedHives @ 0x1406309E0
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlAreBitsClear @ 0x140006FE0 (RtlAreBitsClear.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlSetAllBits @ 0x14007D2B0 (RtlSetAllBits.c)
 *     RtlNumberOfSetBits @ 0x14008B0F0 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpInitializeActualFileSizes @ 0x140498B08 (CmpInitializeActualFileSizes.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14057F47C (CmpQueryHiveRedirectionFileList.c)
 *     CmRmFinalizeRecovery @ 0x1405824E8 (CmRmFinalizeRecovery.c)
 *     HvpDropPagedBins @ 0x1406334A0 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x1406FBB78 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x1407C5960 (ExRaiseHardError.c)
 *     SyspartGetSystemPartition @ 0x1407E5ECC (SyspartGetSystemPartition.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // esi
  wchar_t *PoolWithTag; // r13
  __int64 v2; // rdi
  int v3; // eax
  __int64 HostSilo; // rax
  const WCHAR *v5; // rdx
  int SystemPartition; // ebx
  ULONG v7; // ebx
  unsigned int v8; // r15d
  ULONG i; // r15d
  ULONG v10; // eax
  int v11; // ebx
  PKRESOURCEMANAGER *v12; // rcx
  UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  int Source; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v15; // [rsp+6Ch] [rbp-9Ch]
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  __int64 Length; // [rsp+78h] [rbp-90h] BYREF
  int v18; // [rsp+84h] [rbp-84h] BYREF
  int v19; // [rsp+88h] [rbp-80h] BYREF
  int v20; // [rsp+8Ch] [rbp-7Ch] BYREF
  HANDLE v21; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v22; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v23; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING *p_Destination; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v25[44]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v26[48]; // [rsp+218h] [rbp+110h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Source = 0;
  memset(v25, 0, sizeof(v25));
  Length = 0LL;
  v0 = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x62534D43u);
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v2 = CmpPreloadedHivesList;
  if ( (__int64 *)CmpPreloadedHivesList != &CmpPreloadedHivesList )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 - 1456) & 1) != 0 )
        goto LABEL_39;
      *(_DWORD *)&Destination.Length = 0x10000000;
      Destination.Buffer = PoolWithTag;
      if ( !CmpQueryHiveRedirectionFileList((PUNICODE_STRING)(v2 + 232), &Destination) || Destination.Length == 2 )
        break;
LABEL_17:
      ExFreePoolWithTag(*(PVOID *)(v2 + 208), 0);
      *(_DWORD *)(v2 + 200) = 0;
      *(_QWORD *)(v2 + 208) = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination, 0, &v21, &v18, 7u, 0LL, (int *)&Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_46:
        *(_QWORD *)(v2 - 1560) = v25;
        v25[0] = v2 - 1616;
        SetFailureLocation(*(_QWORD *)(v2 - 1560), 0, 21, SystemPartition, v0);
        CmpPuntBoot = 1;
        p_Destination = &Destination;
        ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&p_Destination, 1, (__int64)&v16);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1616, SystemPartition);
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 4u, &v22, &v19, 0x12u, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_46;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 5u, &v23, &v20, 0x12u, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_46;
      }
      v7 = Length;
      *(_QWORD *)(v2 - 80) = v21;
      *(_QWORD *)(v2 - 48) = v22;
      *(_QWORD *)(v2 - 40) = v23;
      *(_DWORD *)(v2 - 1456) &= ~2u;
      *(_DWORD *)(v2 - 1432) = HIDWORD(Length);
      v8 = *(_DWORD *)(v2 - 1344) + 4096;
      v15 = v8;
      if ( *(_DWORD *)(v2 - 1480) != v7 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1528); i += v7 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1528), i, v7) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1528), i, v7);
        }
        v10 = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1528));
        v8 = v15;
        *(_DWORD *)(v2 - 1512) = v10;
        *(_DWORD *)(v2 - 1480) = v7;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1616, &v16);
      if ( SystemPartition < 0 )
      {
        v0 = 64;
        goto LABEL_46;
      }
      if ( (int)CmpDoFileSetSizeEx(v2 - 1616, 0, v8, 1) < 0 )
        BYTE2(NlsMbCodePageTag) = 1;
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 - 1528));
        *(_DWORD *)(v2 - 1512) = *(_DWORD *)(v2 - 1528);
      }
      SystemPartition = HvpDropPagedBins(v2 - 1616);
      if ( SystemPartition < 0 )
      {
        v0 = 96;
        goto LABEL_46;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) )
      {
        CmpUnlockRegistry();
        CmpFlushHive(v2 - 1616, 0xCu);
        CmpLockRegistryExclusive();
        *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) = 0;
      }
      if ( BYTE2(NlsMbCodePageTag) )
        CmpDiskFullWarning();
      v11 = *(_DWORD *)(v2 - 1456);
      *(_DWORD *)(v2 - 1456) = v11 & 0xFFFFF7FF;
      CmpUnlockRegistry();
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v26);
      CmpInitCmRM(v2 - 1616, (v11 & 0x800) != 0);
      KiUnstackDetachProcess((__int64)v26, 0LL);
      v12 = *(PKRESOURCEMANAGER **)(v2 + 2576);
      *(_DWORD *)(v2 + 2536) |= 8u;
      if ( v12 )
      {
        TmEnableCallbacks(v12[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v12);
        CmRmFinalizeRecovery(*(_QWORD *)(v2 + 2576));
      }
      CmpLockRegistryExclusive();
LABEL_39:
      *(_DWORD *)(v2 + 2536) |= 4u;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &CmpPreloadedHivesList )
        goto LABEL_3;
    }
    *(_DWORD *)&Destination.Length = 0x10000000;
    Destination.Buffer = PoolWithTag;
    v3 = *(_DWORD *)(v2 - 1456);
    if ( (v3 & 0x1000) != 0 )
    {
      HostSilo = PsGetHostSilo();
      LOWORD(Source) = **((_WORD **)PsGetServerSiloGlobals(HostSilo) + 132);
      RtlAppendUnicodeToString(&Destination, L"\\??\\");
      RtlAppendUnicodeToString(&Destination, (PCWSTR)&Source);
      v5 = L":";
    }
    else
    {
      if ( (v3 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(PoolWithTag);
        if ( SystemPartition < 0 )
          goto LABEL_46;
        goto LABEL_16;
      }
      if ( (v3 & 0x200000) == 0 )
      {
LABEL_16:
        RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(v2 + 208));
        goto LABEL_17;
      }
      v5 = L"\\OSDataRoot";
    }
    RtlAppendUnicodeToString(&Destination, v5);
    goto LABEL_16;
  }
LABEL_3:
  ExFreePoolWithTag(PoolWithTag, 0);
}
