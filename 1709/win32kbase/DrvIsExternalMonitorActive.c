/*
 * XREFs of DrvIsExternalMonitorActive @ 0x1C00A6B48
 * Callers:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00A6AC0 (UpdateExternalMonitorConnectedStatus.c)
 * Callees:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C006417C (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C0064290 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DrvIsExternalMonitorActive(_BYTE *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  _BYTE v7[384]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned int v8; // [rsp+1A0h] [rbp-28h]
  __int64 v9; // [rsp+1A8h] [rbp-20h]

  memset(v7, 0, sizeof(v7));
  v8 = 0;
  v9 = 0LL;
  *a1 = 0;
  v2 = QDC_AUTO_BUFFERS::Fill((QDC_AUTO_BUFFERS *)v7, 2u, 0LL);
  if ( v2 >= 0 )
  {
    v3 = 0LL;
    if ( v8 )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(192 * v3 + v9);
        if ( v4 < 0 && (v4 & 0x1000000000000000LL) == 0 && (v4 & 0x800000000000000LL) == 0 )
        {
          v5 = *(_DWORD *)(192 * v3 + v9 + 80);
          if ( v5 != 0x80000000 && v5 != 11 && v5 != 13 )
            break;
        }
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v8 )
          goto LABEL_10;
      }
      *a1 = 1;
    }
  }
LABEL_10:
  QDC_AUTO_BUFFERS::Free((QDC_AUTO_BUFFERS *)v7);
  return (unsigned int)v2;
}
