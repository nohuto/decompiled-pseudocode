/*
 * XREFs of PiDrvDbQuerySyncNodesUpdated @ 0x14073D110
 * Callers:
 *     PpDevCfgInit @ 0x1408B341C (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x140505EBC (_RegRtlQueryValue.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     _RegRtlSetValue @ 0x1405E2DB0 (_RegRtlSetValue.c)
 *     IopCreateRegistryKeyEx @ 0x1405F7BC4 (IopCreateRegistryKeyEx.c)
 *     RtlGetPersistedStateLocation @ 0x140648E80 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PiDrvDbQuerySyncNodesUpdated(char a1, char *a2)
{
  char v2; // r12
  SIZE_T i; // rsi
  int PersistedStateLocation; // ebx
  PVOID PoolWithTag; // rdi
  __int64 j; // rsi
  const WCHAR *v10; // rdx
  int v11; // [rsp+60h] [rbp+7h] BYREF
  int v12; // [rsp+64h] [rbp+Bh] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+Fh] BYREF
  __int64 Source2; // [rsp+70h] [rbp+17h] BYREF
  _BYTE Source1[8]; // [rsp+78h] [rbp+1Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+27h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+77h] BYREF
  int v18; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  Handle = 0LL;
  for ( i = 520LL; ; i = (unsigned int)v17 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, i, 0x62647050u);
    if ( !PoolWithTag )
    {
      PersistedStateLocation = -1073741670;
      goto LABEL_7;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"DriverDatabaseUpdates",
                               0LL,
                               L"\\Registry\\Machine\\System\\DriverDatabase\\Updates",
                               0,
                               PoolWithTag,
                               i,
                               (unsigned int *)&v17);
    if ( PersistedStateLocation != -2147483643 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
    if ( (unsigned int)v17 <= (unsigned int)i )
    {
      PersistedStateLocation = -1073741595;
      break;
    }
  }
  if ( PersistedStateLocation >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
    PersistedStateLocation = IopCreateRegistryKeyEx(&Handle, 0LL, &DestinationString, 0xF003Fu, 0, 0LL);
    if ( PersistedStateLocation >= 0 )
    {
      for ( j = PiDrvDbNodeList; (__int64 *)j != &PiDrvDbNodeList; j = *(_QWORD *)j )
      {
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(j + 24),
                    7u,
                    *(_QWORD *)(j + 72),
                    0LL,
                    (__int64)&DEVPKEY_DriverDatabase_LastUpdateDate,
                    (__int64)&v18,
                    (__int64)Source1,
                    8,
                    (__int64)&v11,
                    0) >= 0
          && v18 == 16
          && v11 == 8 )
        {
          v10 = *(const WCHAR **)(j + 24);
          LODWORD(v17) = 8;
          PersistedStateLocation = RegRtlQueryValue(Handle, v10, &v12, &Source2, (unsigned int *)&v17);
          if ( PersistedStateLocation < 0 || v12 != 3 || (_DWORD)v17 != 8 )
          {
            PersistedStateLocation = 0;
            Source2 = 0LL;
          }
          if ( RtlCompareMemory(Source1, &Source2, 8uLL) != 8 )
          {
            v2 = 1;
            if ( !a1 )
              break;
            PersistedStateLocation = RegRtlSetValue(Handle, *(const WCHAR **)(j + 24), 3u, Source1, 8u);
            if ( PersistedStateLocation < 0 )
              goto LABEL_31;
          }
        }
        else
        {
          PersistedStateLocation = 0;
        }
      }
      if ( PersistedStateLocation >= 0 && a2 )
        *a2 = v2;
    }
LABEL_31:
    if ( Handle )
      ZwClose(Handle);
  }
LABEL_7:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)PersistedStateLocation;
}
