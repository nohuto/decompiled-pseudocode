/*
 * XREFs of ndisQueryBusInterface @ 0x1C00C920C
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C00B8CE4 (ndisInitializeConfiguration.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisQueryBusInterface(__int64 a1)
{
  __int64 v2; // r14
  PIRP Irp; // rax
  _IRP *v4; // rsi
  __int64 v5; // rdi
  int v6; // r15d
  _QWORD v8[7]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[10]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v10[9]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v11[8]; // [rsp+108h] [rbp+0h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  memset(v8, 0, sizeof(v8));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x16u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, a1);
  v2 = *(_QWORD *)(a1 + 3864);
  Irp = IoAllocateIrp(*(_BYTE *)(v2 + 76) + 1, 0);
  v4 = Irp;
  if ( Irp )
  {
    v5 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
    *(_WORD *)v5 = 2075;
    *(_QWORD *)(v5 + 40) = v2;
    Irp->IoStatus.Status = -1073741637;
    *(_QWORD *)(v5 + 8) = &GUID_BUS_INTERFACE_STANDARD;
    *(_QWORD *)(v5 + 24) = v11;
    *(_DWORD *)(v5 + 16) = 65600;
    v6 = IoSynchronousCallDriver(v2, Irp);
    if ( v6 >= 0 )
    {
      v6 = 0;
      *(_QWORD *)(a1 + 3712) = v11[6];
      *(_QWORD *)(a1 + 3720) = v11[7];
      *(_QWORD *)(a1 + 3728) = v11[1];
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)v5 = 2075;
    *(_QWORD *)(v5 + 40) = v2;
    v4->IoStatus.Status = -1073741637;
    *(_QWORD *)(v5 + 8) = &GUID_MSIX_TABLE_CONFIG_INTERFACE;
    *(_QWORD *)(v5 + 24) = v10;
    *(_DWORD *)(v5 + 16) = 65608;
    if ( (int)IoSynchronousCallDriver(v2, v4) < 0 )
    {
      *(_QWORD *)(a1 + 4304) = 0LL;
      *(_QWORD *)(a1 + 4312) = 0LL;
      *(_QWORD *)(a1 + 4320) = 0LL;
      *(_QWORD *)(a1 + 4328) = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 4304) = v10[1];
      *(_QWORD *)(a1 + 4312) = v10[4];
      *(_QWORD *)(a1 + 4320) = v10[5];
      *(_QWORD *)(a1 + 4328) = v10[6];
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)v5 = 2075;
    *(_QWORD *)(v5 + 40) = v2;
    v4->IoStatus.Status = -1073741637;
    *(_QWORD *)(v5 + 8) = &GUID_PCI_VIRTUALIZATION_INTERFACE;
    *(_QWORD *)(v5 + 24) = v9;
    *(_DWORD *)(v5 + 16) = 65616;
    if ( (int)IoSynchronousCallDriver(v2, v4) < 0 )
    {
      *(_QWORD *)(a1 + 4848) = 0LL;
      *(_QWORD *)(a1 + 4808) = 0LL;
      *(_QWORD *)(a1 + 4816) = 0LL;
      *(_QWORD *)(a1 + 4824) = 0LL;
      *(_QWORD *)(a1 + 4832) = 0LL;
      *(_QWORD *)(a1 + 4840) = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 4848) = v9[1];
      *(_QWORD *)(a1 + 4808) = v9[4];
      *(_QWORD *)(a1 + 4816) = v9[5];
      *(_QWORD *)(a1 + 4824) = v9[8];
      *(_QWORD *)(a1 + 4832) = v9[6];
      *(_QWORD *)(a1 + 4840) = v9[9];
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)v5 = 2075;
    *(_QWORD *)(v5 + 40) = v2;
    v4->IoStatus.Status = -1073741637;
    *(_QWORD *)(v5 + 8) = &GUID_VPCI_INTERFACE_STANDARD;
    *(_QWORD *)(v5 + 24) = v8;
    *(_DWORD *)(v5 + 16) = 65592;
    if ( (int)IoSynchronousCallDriver(v2, v4) >= 0 )
    {
      *(_QWORD *)(a1 + 4896) = v8[1];
      *(_QWORD *)(a1 + 4872) = v8[3];
      *(_QWORD *)(a1 + 4880) = v8[4];
      *(_QWORD *)(a1 + 4888) = v8[5];
      *(_DWORD *)(a1 + 4904) = v8[6];
    }
    else
    {
      *(_QWORD *)(a1 + 4896) = 0LL;
      *(_QWORD *)(a1 + 4872) = 0LL;
      *(_QWORD *)(a1 + 4880) = 0LL;
      *(_QWORD *)(a1 + 4888) = 0LL;
      *(_DWORD *)(a1 + 4904) = 0;
    }
    IoFreeIrp(v4);
  }
  else
  {
    v6 = -1073741670;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x17u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, a1);
  return (unsigned int)v6;
}
