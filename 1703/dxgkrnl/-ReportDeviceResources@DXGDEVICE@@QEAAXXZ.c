/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C0188A18
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0188ABC (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C01889AC (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *i; // rbx
  BOOL v6; // ebp
  struct DXGALLOCATION *v7; // rdi
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v8, this + 23, a3, a4);
  for ( i = this[7]; i; i = (struct _KTHREAD *)*((_QWORD *)i + 5) )
  {
    v6 = (*((_DWORD *)i + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)i + 7) + 12LL) & 2) == 0;
    v7 = (struct DXGALLOCATION *)*((_QWORD *)i + 3);
    while ( v7 )
    {
      DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v7, v6);
      v7 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 8);
      if ( (*((_DWORD *)i + 1) & 1) != 0 )
        *(_DWORD *)(*((_QWORD *)i + 7) + 12LL) |= 2u;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
}
