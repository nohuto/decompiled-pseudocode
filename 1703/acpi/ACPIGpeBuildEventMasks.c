/*
 * XREFs of ACPIGpeBuildEventMasks @ 0x1C001F900
 * Callers:
 *     ACPITableLoad @ 0x1C001D690 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C0057CD0 (ACPITableUnload.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C001F1BC (ACPIGpeEnableDisableEvents.c)
 *     AMLIIterateSiblingsNext @ 0x1C001FA30 (AMLIIterateSiblingsNext.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00200DC (ACPIGpeInstallRemoveIndex.c)
 *     AMLIGetFirstChild @ 0x1C00203E8 (AMLIGetFirstChild.c)
 *     WPP_RECORDER_SF_d @ 0x1C0056320 (WPP_RECORDER_SF_d.c)
 */

void ACPIGpeBuildEventMasks()
{
  KIRQL v0; // di
  int v1; // eax
  int v2; // edx
  _QWORD *i; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  char v10; // cl
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int j; // ebx
  unsigned int *v15; // r10
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v1 = AMLIGetNameSpaceObject("\\_GPE", 0LL, &v16);
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
        v10 = ((HIWORD(v7) | v7 & 0xFF0000) >> 16) - 48;
        if ( (unsigned __int8)(BYTE1(v8) - 48) > 9u )
        {
          if ( (unsigned __int8)(v9 - 65) > 5u )
            continue;
          v10 = v9 - 55;
        }
        v11 = 16 * v10;
        LOBYTE(v7) = HIBYTE(v7) - 48;
        if ( (unsigned __int8)(v8 - 48) > 9u )
        {
          if ( (unsigned __int8)(v8 - 65) > 5u )
            continue;
          LOBYTE(v7) = v8 - 55;
        }
        v12 = (unsigned __int8)v7 | (unsigned int)v11;
        LOBYTE(v16) = 1;
        if ( BYTE1(v7) == 76 )
        {
          v13 = 1LL;
LABEL_11:
          ACPIGpeInstallRemoveIndex(v12, v13, 1LL, &v16);
          continue;
        }
        if ( BYTE1(v7) == 69 )
        {
          v13 = 0LL;
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
    v15 = (unsigned int *)*((_QWORD *)GpeVectorTable + 2 * j + 1);
    if ( v15 && !(unsigned __int8)ACPIGpeInstallRemoveIndex(*v15, v15[7] == 0, 0LL, (char *)v15 + 25) )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        14,
        10,
        (__int64)&WPP_7b45772542bc311dd8664fae17eff083_Traceguids,
        j);
    }
  }
  ACPIGpeEnableDisableEvents(1, v4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&GpeTableLock, v0);
}
