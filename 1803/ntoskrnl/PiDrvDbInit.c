/*
 * XREFs of PiDrvDbInit @ 0x140622800
 * Callers:
 *     PiPnpRtlInit @ 0x140622640 (PiPnpRtlInit.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     PiDrvDbSuspendNodes @ 0x140622944 (PiDrvDbSuspendNodes.c)
 *     PiDrvDbRegisterNode @ 0x140622A40 (PiDrvDbRegisterNode.c)
 *     DrvDbOpenContext @ 0x140623998 (DrvDbOpenContext.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140623D78 (PiDrvDbEnumDriverStoreNodes.c)
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 */

__int64 __fastcall PiDrvDbInit(__int64 a1)
{
  int k; // edx
  __int64 v2; // r8
  int v3; // edi
  wchar_t **j; // rbx
  unsigned int v5; // ecx
  __int64 v6; // rcx
  __int64 v8; // rbx
  int v9; // eax
  __int64 i; // rbx
  int v11; // eax
  int v12; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-E0h] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v15[22]; // [rsp+50h] [rbp-C8h] BYREF

  v12 = 0;
  k = 0;
  Handle[0] = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      if ( (PiDrvDbOverlayFlags & 1) == 0 )
        return (unsigned int)PiDrvDbSuspendNodes(0LL);
      for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 8) != 0 )
        {
          v11 = PiDrvDbOverlayNodeHive(i, L"SOFTWARE");
          k = v11;
          if ( v11 < 0 )
          {
            if ( *(int *)(i + 492) >= 0 )
              *(_DWORD *)(i + 492) = v11;
            k = 0;
          }
        }
      }
      if ( k >= 0 )
        return (unsigned int)PiDrvDbSuspendNodes(0LL);
    }
  }
  else
  {
    qword_1403C5878 = (__int64)&PiDrvDbNodeList;
    PiDrvDbNodeList = (__int64)&PiDrvDbNodeList;
    k = DrvDbOpenContext(a1, 0LL);
    if ( k >= 0 )
    {
      v3 = 0;
      for ( j = &PiDrvDbNodeDescriptors; ; j += 2 )
      {
        v5 = *((_DWORD *)j + 2);
        if ( (v5 & 4) == 0 || (MEMORY[0xFFFFF780000002F0] & 0x400) == 0 )
        {
          k = PiDrvDbRegisterNode(*j, v5, v2, 0LL);
          if ( k < 0 )
            break;
        }
        if ( (unsigned int)++v3 >= 2 )
        {
          k = PiDrvDbEnumDriverStoreNodes(PiDrvDbRegisterNodeCallback, &v12);
          if ( k >= 0 )
          {
            k = v12;
            if ( v12 >= 0 )
            {
              LOBYTE(v6) = 1;
              k = PiDrvDbSuspendNodes(v6);
              if ( k >= 0 )
              {
                if ( (MEMORY[0xFFFFF780000002F0] & 0x400) != 0 )
                {
                  if ( (int)SysCtxRegOpenKey(
                              0LL,
                              2147483650LL,
                              (__int64)L"SYSTEM\\CurrentControlSet\\Control\\StateSeparation\\PnP",
                              0,
                              0x20019u,
                              (__int64)Handle) >= 0 )
                  {
                    v13 = 0LL;
                    memset(v15, 0, 0xA8uLL);
                    v15[2] = L"OverlayMergeKeys";
                    LODWORD(v15[4]) = 0x4000000;
                    v15[3] = &v13;
                    LODWORD(v15[1]) = 288;
                    v15[9] = L"OverlayResolveFilePaths";
                    LODWORD(v15[11]) = 0x4000000;
                    v15[10] = (char *)&v13 + 4;
                    LODWORD(v15[8]) = 288;
                    if ( (int)RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle[0], (__int64)v15, 0LL) >= 0 )
                    {
                      if ( (_DWORD)v13 )
                        PiDrvDbOverlayFlags |= 1u;
                      if ( HIDWORD(v13) )
                        PiDrvDbOverlayFlags |= 2u;
                    }
                    ZwClose(Handle[0]);
                  }
                  k = 0;
                }
                if ( (PiDrvDbOverlayFlags & 1) != 0 )
                {
                  v8 = PiDrvDbNodeList;
                  for ( k = 0; (__int64 *)v8 != &PiDrvDbNodeList; v8 = *(_QWORD *)v8 )
                  {
                    if ( (*(_DWORD *)(v8 + 64) & 8) != 0 )
                    {
                      v9 = PiDrvDbOverlayNodeHive(v8, L"SYSTEM");
                      k = v9;
                      if ( v9 < 0 )
                      {
                        if ( *(int *)(v8 + 492) >= 0 )
                          *(_DWORD *)(v8 + 492) = v9;
                        k = 0;
                      }
                    }
                  }
                }
              }
            }
          }
          return (unsigned int)k;
        }
      }
    }
  }
  return (unsigned int)k;
}
