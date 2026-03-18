/*
 * XREFs of DrvIsExternalMonitorActive @ 0x1C009CB5C
 * Callers:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C009CAD4 (UpdateExternalMonitorConnectedStatus.c)
 * Callees:
 *     DrvQueryDisplayConfig @ 0x1C000D270 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000D3A0 (DrvGetDisplayConfigBufferSizes.c)
 *     ?Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ @ 0x1C00623DC (-Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C0062444 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvIsExternalMonitorActive(_BYTE *a1)
{
  unsigned int v2; // ebx
  int DisplayConfigBufferSizes; // edi
  int v4; // eax
  _BYTE v6[528]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+248h] [rbp+140h] BYREF
  __int64 v8; // [rsp+250h] [rbp+148h]
  __int64 v9; // [rsp+258h] [rbp+150h]

  memset(v6, 0, sizeof(v6));
  v2 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  *a1 = 0;
  do
  {
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2u, (__int64)&v7, (__int64)&v7 + 4);
    if ( DisplayConfigBufferSizes >= 0 )
    {
      DisplayConfigBufferSizes = QDC_AUTO_BUFFERS::Allocate((QDC_AUTO_BUFFERS *)v6);
      if ( DisplayConfigBufferSizes >= 0 )
        DisplayConfigBufferSizes = DrvQueryDisplayConfig(2u, &v7, v8, (__int64)&v7 + 4, v9, 0LL);
    }
  }
  while ( DisplayConfigBufferSizes == -1073741789 || DisplayConfigBufferSizes == -2147483643 );
  if ( DisplayConfigBufferSizes >= 0 && (_DWORD)v7 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v8 + 72LL * v2 + 68) & 1) != 0 )
      {
        v4 = *(_DWORD *)(v8 + 72LL * v2 + 36);
        if ( v4 != 0x80000000 && v4 != 11 && v4 != 13 )
          break;
      }
      if ( ++v2 >= (unsigned int)v7 )
        goto LABEL_14;
    }
    *a1 = 1;
  }
LABEL_14:
  QDC_AUTO_BUFFERS::Free((QDC_AUTO_BUFFERS *)v6);
  return (unsigned int)DisplayConfigBufferSizes;
}
