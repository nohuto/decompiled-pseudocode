/*
 * XREFs of ACPIGpeBuildEventMasks @ 0x1C00136F4
 * Callers:
 *     ACPITableLoad @ 0x1C00132C0 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C00588D0 (ACPITableUnload.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     AMLIIterateSiblingsNext @ 0x1C0013824 (AMLIIterateSiblingsNext.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00138C0 (ACPIGpeInstallRemoveIndex.c)
 *     AMLIGetFirstChild @ 0x1C0013A80 (AMLIGetFirstChild.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056F10 (WPP_RECORDER_SF_d.c)
 */

void ACPIGpeBuildEventMasks()
{
  KIRQL v0; // di
  int v1; // eax
  int v2; // edx
  _QWORD *i; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int j; // ebx
  unsigned int *v14; // r10
  int v15; // edx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v1 = AMLIGetNameSpaceObject("\\_GPE");
  if ( v1 >= 0 )
  {
    for ( i = (_QWORD *)AMLIGetFirstChild(v16); ; i = (_QWORD *)AMLIIterateSiblingsNext(v5) )
    {
      v5 = i;
      if ( !i )
        goto LABEL_14;
      v6 = *i;
      if ( *(_WORD *)(v6 + 66) == 8 && *(_BYTE *)(v6 + 40) == 95 )
      {
        v7 = *(_DWORD *)(v6 + 40);
        v8 = (HIWORD(v7) | v7 & 0xFF0000) >> 8;
        v9 = (HIWORD(v7) | v7 & 0xFF0000) >> 16;
        if ( (unsigned __int8)(v9 - 48) > 9u )
        {
          if ( (unsigned __int8)(v9 - 65) > 5u )
            continue;
          LOBYTE(v9) = v9 - 55;
        }
        v10 = 16 * v9;
        LOBYTE(v7) = HIBYTE(v7) - 48;
        if ( (unsigned __int8)(v8 - 48) > 9u )
        {
          if ( (unsigned __int8)(v8 - 65) > 5u )
            continue;
          LOBYTE(v7) = v8 - 55;
        }
        v11 = (unsigned __int8)v7 | (unsigned int)v10;
        LOBYTE(v16) = 1;
        if ( BYTE1(v7) == 76 )
        {
          v12 = 1LL;
LABEL_11:
          ACPIGpeInstallRemoveIndex(v11, v12, 1LL, &v16);
          continue;
        }
        if ( BYTE1(v7) == 69 )
        {
          v12 = 0LL;
          goto LABEL_11;
        }
      }
    }
  }
  LOBYTE(v2) = 2;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    21,
    10,
    (__int64)&WPP_e6be34b4e0423c2637acb66ebe24608e_Traceguids,
    v1);
LABEL_14:
  for ( j = 0; j < GpeVectorTableSize; ++j )
  {
    v4 = 2LL * j;
    v14 = (unsigned int *)*((_QWORD *)GpeVectorTable + 2 * j + 1);
    if ( v14 && !(unsigned __int8)ACPIGpeInstallRemoveIndex(*v14, v14[7] == 0, 0LL, (char *)v14 + 25) )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        14,
        10,
        (__int64)&WPP_7b45772542bc311dd8664fae17eff083_Traceguids,
        j);
    }
  }
  LOBYTE(v4) = 1;
  ACPIGpeEnableDisableEvents(v4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&GpeTableLock, v0);
}
