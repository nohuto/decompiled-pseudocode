/*
 * XREFs of ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C006BD90
 * Callers:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C006BD30 (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0042660 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00426D0 (DrvQueryDisplayConfig.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C006BE44 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::TryFillOnce(
        QDC_AUTO_BUFFERS *this,
        unsigned int a2,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a3)
{
  int *v3; // rbx
  int v5; // esi
  int DisplayConfigBufferSizes; // r10d
  int v9; // r9d
  QDC_AUTO_BUFFERS *v10; // rax

  v3 = (int *)((char *)this + 400);
  v5 = *((_DWORD *)this + 100);
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a2, (__int64)this + 400);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v9 = v5 + 1;
    if ( v5 + 1 <= (unsigned int)*v3 )
      v9 = *v3;
    *v3 = v9;
  }
  if ( DisplayConfigBufferSizes >= 0 )
  {
    QDC_AUTO_BUFFERS::Free(this);
    if ( (unsigned int)*v3 > 2 )
      v10 = (QDC_AUTO_BUFFERS *)PALLOCMEM2((unsigned int)(200 * *v3), 0x73726447u, 1);
    else
      v10 = this;
    *((_QWORD *)this + 51) = v10;
    if ( v10 )
      return (unsigned int)DrvQueryDisplayConfig(a2, (__int64)v3, (__int64)v10, a3);
    else
      return (unsigned int)-1073741801;
  }
  return (unsigned int)DisplayConfigBufferSizes;
}
