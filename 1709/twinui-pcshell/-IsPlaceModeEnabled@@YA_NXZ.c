/*
 * XREFs of ?IsPlaceModeEnabled@@YA_NXZ @ 0x18011007C
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112910 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1801E2048 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801E20A8 (_Init_thread_header.c)
 */

bool IsPlaceModeEnabled(void)
{
  int v0; // eax
  DWORD v2; // ecx
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF

  if ( dword_1802BAFE8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802BAFE8);
    if ( dword_1802BAFE8 == -1 )
    {
      v2 = `IsPPIEdition'::`2'::s_dwProductType;
      if ( !`IsPPIEdition'::`2'::s_dwProductType )
      {
        GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
        v2 = 0;
        `IsPPIEdition'::`2'::s_dwProductType = 0;
      }
      dword_1802BAFEC = (v2 == 119) + 1;
      Init_thread_footer(&dword_1802BAFE8);
    }
  }
  v0 = dword_1802BA8D0;
  if ( !dword_1802BA8D0 )
  {
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\WindowArrangement\\PlaceMode",
           L"Enabled",
           0x10u,
           0LL,
           &pvData,
           &pcbData) )
    {
      v0 = dword_1802BAFEC;
    }
    else
    {
      v0 = 2 - (pvData != 0);
    }
    dword_1802BA8D0 = v0;
  }
  return v0 == 1;
}
