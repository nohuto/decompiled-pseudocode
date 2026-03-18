/*
 * XREFs of ACPIEcInitOpRegionHandler @ 0x1C0013098
 * Callers:
 *     ACPITableLoad @ 0x1C00132C0 (ACPITableLoad.c)
 * Callees:
 *     ACPIMapNamedTable @ 0x1C000DD20 (ACPIMapNamedTable.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     RtlStringCchLengthA @ 0x1C004209C (RtlStringCchLengthA.c)
 *     ACPIEcCreateEcData @ 0x1C004BB6C (ACPIEcCreateEcData.c)
 *     RegisterOperationRegionHandler @ 0x1C008DA20 (RegisterOperationRegionHandler.c)
 *     ACPIEcConnectGpeVector @ 0x1C00A0EC8 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00A0F04 (ACPIEcConnectGpioInterrupt.c)
 *     ACPIEcDisconnectGpeVector @ 0x1C00A0FE0 (ACPIEcDisconnectGpeVector.c)
 *     ACPIEcDisconnectGpioInterrupt @ 0x1C00A100C (ACPIEcDisconnectGpioInterrupt.c)
 */

void ACPIEcInitOpRegionHandler()
{
  char *PoolWithTag; // rbx
  unsigned int v1; // r11d
  SIZE_T v2; // r11
  __int64 EcData; // rax
  _BYTE *v4; // rdi
  int v5; // eax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( !gECDTContext
    && (unsigned int)ACPIMapNamedTable(1413759813, 0LL, 0LL, 0LL, (unsigned int *)&NumberOfBytes) == -1073741789 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x45706341u);
    if ( PoolWithTag )
    {
      if ( (int)ACPIMapNamedTable(1413759813, 0LL, 0LL, PoolWithTag, (unsigned int *)&NumberOfBytes) < 0 )
        goto LABEL_25;
      v1 = *((_DWORD *)PoolWithTag + 1);
      if ( v1 < 0x42 )
        goto LABEL_25;
      if ( RtlStringCchLengthA(PoolWithTag + 65, v1 - 65, &NumberOfBytes) < 0 )
        goto LABEL_25;
      if ( v2 < NumberOfBytes + 66 )
        goto LABEL_25;
      EcData = ACPIEcCreateEcData();
      v4 = (_BYTE *)EcData;
      if ( !EcData )
        goto LABEL_25;
      *(_QWORD *)EcData = 0LL;
      if ( PoolWithTag[36] == 1
        && PoolWithTag[37] == 8
        && !PoolWithTag[38]
        && PoolWithTag[48] == 1
        && PoolWithTag[49] == 8
        && !PoolWithTag[50] )
      {
        *(_QWORD *)(EcData + 32) = *((_QWORD *)PoolWithTag + 5);
        *(_QWORD *)(EcData + 40) = *((_QWORD *)PoolWithTag + 5);
        *(_QWORD *)(EcData + 24) = *(_QWORD *)(PoolWithTag + 52);
        *(_DWORD *)(EcData + 48) = (unsigned __int8)PoolWithTag[64];
        *(_DWORD *)(EcData + 16) = *((_DWORD *)PoolWithTag + 15);
        if ( (int)AMLIGetNameSpaceObject(PoolWithTag + 65) >= 0 )
        {
          v5 = *((_BYTE *)AcpiInformation + 133) ? ACPIEcConnectGpioInterrupt(v4) : ACPIEcConnectGpeVector(v4);
          if ( v5 >= 0 )
          {
            if ( (int)RegisterOperationRegionHandler(
                        0,
                        2,
                        3,
                        (unsigned int)&ACPIEcOpRegionHandler,
                        (__int64)v4,
                        (__int64)(v4 + 80)) >= 0 )
            {
              v4[120] = 1;
              gECDTContext = (__int64)v4;
              goto LABEL_25;
            }
            if ( *((_BYTE *)AcpiInformation + 133) )
              ACPIEcDisconnectGpioInterrupt(v4);
            else
              ACPIEcDisconnectGpeVector(v4);
          }
        }
      }
      ExFreePoolWithTag(v4, 0);
LABEL_25:
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
}
