/*
 * XREFs of CmpMountPreloadedHives @ 0x1405A67E8
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAreBitsClear @ 0x14006DCF0 (RtlAreBitsClear.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x14012DAF0 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     CmRmFinalizeRecovery @ 0x1404CBACC (CmRmFinalizeRecovery.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404CBB30 (CmpQueryHiveRedirectionFileList.c)
 *     CmpInitializeActualFileSizes @ 0x1404D3A34 (CmpInitializeActualFileSizes.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     SyspartGetSystemPartition @ 0x1405895F8 (SyspartGetSystemPartition.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x140669660 (CmpDiskFullWarning.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 *     ExRaiseHardError @ 0x14071ED80 (ExRaiseHardError.c)
 */

void CmpMountPreloadedHives()
{
  wchar_t *PoolWithTag; // r15
  __int64 *i; // r12
  __int64 *v2; // rdi
  int v3; // eax
  __int64 HostSilo; // rax
  int SystemPartition; // ebx
  ULONG v6; // ebx
  unsigned int v7; // r13d
  ULONG j; // esi
  int v9; // eax
  int v10; // ebx
  PKRESOURCEMANAGER *v11; // rcx
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Length; // [rsp+70h] [rbp-98h] BYREF
  int Source; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v17; // [rsp+80h] [rbp-88h] BYREF
  int v18; // [rsp+84h] [rbp-84h] BYREF
  int v19; // [rsp+88h] [rbp-80h] BYREF
  int v20; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING *p_Destination; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v25[44]; // [rsp+B8h] [rbp-50h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Source = 0;
  memset(v25, 0, sizeof(v25));
  Length = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x62534D43u);
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  for ( i = (__int64 *)CmpPreloadedHivesList; i != &CmpPreloadedHivesList; i = (__int64 *)*i )
  {
    v2 = i - 343;
    if ( (*(_DWORD *)(i - 325) & 1) == 0 )
    {
      *(_DWORD *)&Destination.Length = 0x10000000;
      Destination.Buffer = PoolWithTag;
      if ( !CmpQueryHiveRedirectionFileList((PUNICODE_STRING)v2 + 189, &Destination) || Destination.Length == 2 )
      {
        v3 = *((_DWORD *)v2 + 36);
        if ( (v3 & 0x1000) != 0 )
        {
          HostSilo = PsGetHostSilo();
          LOWORD(Source) = **((_WORD **)PsGetServerSiloGlobals(HostSilo) + 128);
          *(_DWORD *)&Destination.Length = 0x10000000;
          Destination.Buffer = PoolWithTag;
          RtlAppendUnicodeToString(&Destination, L"\\??\\");
          RtlAppendUnicodeToString(&Destination, (PCWSTR)&Source);
          RtlAppendUnicodeToString(&Destination, L":");
        }
        else
        {
          *(_DWORD *)&Destination.Length = 0x10000000;
          Destination.Buffer = PoolWithTag;
          if ( (v3 & 0x2000) != 0 )
          {
            SystemPartition = SyspartGetSystemPartition(PoolWithTag, 0x1000u, &v17);
            if ( SystemPartition < 0 )
            {
              BugCheckParameter4 = 0;
LABEL_43:
              v2[7] = (__int64)v25;
              v25[0] = i - 343;
              SetFailureLocation(v2[7], 0, 21, SystemPartition, BugCheckParameter4);
LABEL_44:
              CmpPuntBoot = 1;
              p_Destination = &Destination;
              ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&p_Destination, 1, (__int64)&v14);
              KeBugCheckEx(0x74u, 2uLL, 1uLL, (ULONG_PTR)(i - 343), SystemPartition);
            }
          }
        }
        RtlAppendUnicodeToString(&Destination, (PCWSTR)v2[375]);
      }
      ExFreePoolWithTag((PVOID)v2[375], 0);
      *((_DWORD *)v2 + 748) = 0;
      v2[375] = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination, 0, (HANDLE *)&v21, &v18, 7, 0LL, (__int64)&Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 16;
        goto LABEL_43;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 4u, (HANDLE *)&v22, &v19, 18, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 32;
        goto LABEL_43;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 5u, (HANDLE *)&v23, &v20, 18, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 48;
        goto LABEL_43;
      }
      v6 = Length;
      v2[333] = v21;
      v2[337] = v22;
      v2[338] = v23;
      *((_DWORD *)v2 + 36) &= ~2u;
      *((_DWORD *)v2 + 42) = HIDWORD(Length);
      v7 = *((_DWORD *)v2 + 350) + 4096;
      if ( *((_DWORD *)v2 + 30) != v6 )
      {
        for ( j = 0; j < *((_DWORD *)v2 + 18); j += v6 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 + 9), j, v6) )
            RtlSetBits((PRTL_BITMAP)(v2 + 9), j, v6);
        }
        *((_DWORD *)v2 + 22) = RtlNumberOfSetBits((PRTL_BITMAP)(v2 + 9));
        *((_DWORD *)v2 + 30) = v6;
      }
      v9 = CmpInitializeActualFileSizes((__int64)(i - 343), &v14);
      SystemPartition = v9;
      if ( v9 < 0 )
      {
        v2[7] = (__int64)v25;
        v25[0] = i - 343;
        SetFailureLocation(v2[7], 0, 21, v9, 64);
        goto LABEL_44;
      }
      if ( (int)CmpDoFileSetSizeEx((__int64)(i - 343), 0LL, v7, 1) < 0 )
      {
        *((_DWORD *)v2 + 36) &= ~0x20000u;
        BYTE2(NlsMbCodePageTag) = 1;
      }
      if ( *(_DWORD *)(v2[8] + 4092) )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 + 9));
        *((_DWORD *)v2 + 22) = *((_DWORD *)v2 + 18);
      }
      SystemPartition = HvpDropPagedBins((ULONG_PTR)(i - 343));
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 96;
        goto LABEL_43;
      }
      if ( *(_DWORD *)(v2[8] + 4092) )
      {
        HvSyncHive((ULONG_PTR)(i - 343));
        *(_DWORD *)(v2[8] + 4092) = 0;
      }
      if ( BYTE2(NlsMbCodePageTag) )
        CmpDiskFullWarning();
      v10 = *((_DWORD *)v2 + 36);
      *((_DWORD *)v2 + 36) = v10 & 0xFFFFF7FF;
      CmpUnlockRegistry();
      CmpInitCmRM((ULONG_PTR)(i - 343), (v10 & 0x800) != 0);
      v11 = (PKRESOURCEMANAGER *)v2[675];
      *((_DWORD *)v2 + 1340) |= 8u;
      if ( v11 )
      {
        TmEnableCallbacks(v11[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v11);
        CmRmFinalizeRecovery(v2[675]);
      }
      CmpLockRegistryExclusive();
    }
    *((_DWORD *)v2 + 1340) |= 4u;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
}
