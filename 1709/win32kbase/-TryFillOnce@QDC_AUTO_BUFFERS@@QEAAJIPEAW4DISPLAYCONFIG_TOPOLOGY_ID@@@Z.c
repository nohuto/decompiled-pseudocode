/*
 * XREFs of ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00641DC
 * Callers:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C006417C (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C0064290 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0064710 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0064A40 (DrvQueryDisplayConfig.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::TryFillOnce(
        QDC_AUTO_BUFFERS *this,
        unsigned int a2,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a3)
{
  int *v3; // rdi
  int v5; // esi
  int DisplayConfigBufferSizes; // r9d
  int v9; // r8d
  QDC_AUTO_BUFFERS *v10; // rax

  v3 = (int *)((char *)this + 384);
  v5 = *((_DWORD *)this + 96);
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a2, (char *)this + 384);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v9 = *v3;
    if ( v5 + 1 > (unsigned int)*v3 )
      v9 = v5 + 1;
    *v3 = v9;
  }
  if ( DisplayConfigBufferSizes >= 0 )
  {
    QDC_AUTO_BUFFERS::Free(this);
    if ( (unsigned int)*v3 > 2 )
      v10 = (QDC_AUTO_BUFFERS *)PALLOCMEM2((unsigned int)(192 * *v3), 1936876615LL, 1);
    else
      v10 = this;
    *((_QWORD *)this + 49) = v10;
    if ( v10 )
      return (unsigned int)DrvQueryDisplayConfig(a2, v3, v10, a3);
    else
      return (unsigned int)-1073741801;
  }
  return (unsigned int)DisplayConfigBufferSizes;
}
