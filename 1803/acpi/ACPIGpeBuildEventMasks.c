/*
 * XREFs of ACPIGpeBuildEventMasks @ 0x1C0027598
 * Callers:
 *     ACPITableLoad @ 0x1C003B1B0 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C003B760 (ACPITableUnload.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00279A4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0027B54 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorBuildVectorMasks @ 0x1C003F78C (ACPIVectorBuildVectorMasks.c)
 *     AMLIGetFirstChild @ 0x1C00439BC (AMLIGetFirstChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     AMLIIterateSiblingsNext @ 0x1C0043EB0 (AMLIIterateSiblingsNext.c)
 */

void ACPIGpeBuildEventMasks()
{
  KIRQL v0; // di
  int v1; // eax
  int v2; // edx
  _QWORD *i; // rax
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v1 = AMLIGetNameSpaceObject("\\_GPE");
  if ( v1 >= 0 )
  {
    for ( i = (_QWORD *)AMLIGetFirstChild(v13); ; i = (_QWORD *)AMLIIterateSiblingsNext(v11) )
    {
      v11 = i;
      if ( !i )
        goto LABEL_19;
      v4 = *i;
      if ( *(_WORD *)(*v11 + 66LL) == 8 && *(_BYTE *)(v4 + 40) == 95 )
      {
        v5 = *(_DWORD *)(v4 + 40);
        v6 = (HIWORD(v5) | v5 & 0xFF0000) >> 8;
        v7 = (HIWORD(v5) | v5 & 0xFF0000) >> 16;
        if ( (unsigned __int8)(v7 - 48) > 9u )
        {
          if ( (unsigned __int8)(v7 - 65) > 5u )
            continue;
          LOBYTE(v7) = v7 - 55;
        }
        v8 = 16 * v7;
        LOBYTE(v5) = HIBYTE(v5) - 48;
        if ( (unsigned __int8)(v6 - 48) > 9u )
        {
          if ( (unsigned __int8)(v6 - 65) > 5u )
            continue;
          LOBYTE(v5) = v6 - 55;
        }
        v9 = (unsigned __int8)v5 | (unsigned int)v8;
        LOBYTE(v13) = 1;
        if ( BYTE1(v5) == 76 )
        {
          v10 = 1LL;
        }
        else
        {
          if ( BYTE1(v5) != 69 )
            continue;
          v10 = 0LL;
        }
        ACPIGpeInstallRemoveIndex(v9, v10, 1LL, &v13);
      }
    }
  }
  LOBYTE(v2) = 2;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    21,
    10,
    (__int64)&WPP_50bfadf9b7e53d7e54c4b33d58eca6f8_Traceguids,
    v1);
LABEL_19:
  ACPIVectorBuildVectorMasks();
  LOBYTE(v12) = 1;
  ACPIGpeEnableDisableEvents(v12);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&GpeTableLock, v0);
}
