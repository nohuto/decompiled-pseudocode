/*
 * XREFs of PiDmaGuardProcessNewDeviceNode @ 0x1405C4A18
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PnpQueryInterface @ 0x1405C5140 (PnpQueryInterface.c)
 *     PipDmgDestroyIommuExtension @ 0x1405C526C (PipDmgDestroyIommuExtension.c)
 *     PiIommuAllocateExtension @ 0x14064308C (PiIommuAllocateExtension.c)
 */

__int64 __fastcall PiDmaGuardProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rsi
  unsigned int Extension; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 *v10; // rdi
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _BYTE v16[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  void (__fastcall *v18)(__int64); // [rsp+48h] [rbp-40h]

  PipDmgDestroyIommuExtension();
  v2 = *(_QWORD *)(BugCheckParameter2 + 32);
  Extension = 0;
  if ( !v2 )
    goto LABEL_27;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter2 + 32), *(unsigned __int16 *)(v2 + 2));
    v7 = *(_QWORD *)(v2 + 8);
    if ( v7 )
    {
      IoAddTriageDumpDataBlock(v7, *(__int16 *)(v7 + 2));
      v8 = (_WORD *)(*(_QWORD *)(v2 + 8) + 56LL);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((int)v8, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(v2 + 8) + 56LL));
      }
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
    if ( v9 )
    {
      v10 = (unsigned __int16 *)(v9 + 40);
      IoAddTriageDumpDataBlock(v9, 728);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((int)v10, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v10 + 1), *v10);
      }
      v11 = *(_QWORD *)(v2 + 312);
      v12 = (_WORD *)(*(_QWORD *)(v11 + 40) + 56LL);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((int)v12, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL) + 56LL));
        v11 = *(_QWORD *)(v2 + 312);
      }
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 16LL);
      if ( v13 )
      {
        v14 = (_WORD *)(v13 + 56);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((int)v14, 2);
          v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 64), *(unsigned __int16 *)(v15 + 56));
        }
      }
    }
LABEL_27:
    KeBugCheckEx(0xCAu, 2uLL, v2, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 0LL, v16) >= 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 720) )
    {
      IoAddTriageDumpDataBlock(BugCheckParameter2, 728);
      if ( *(_WORD *)(BugCheckParameter2 + 40) )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter2 + 40, 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter2 + 48), *(unsigned __int16 *)(BugCheckParameter2 + 40));
      }
      if ( *(_WORD *)(BugCheckParameter2 + 56) )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter2 + 56, 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter2 + 64), *(unsigned __int16 *)(BugCheckParameter2 + 56));
      }
      v6 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( v6 && *(_WORD *)(v6 + 56) )
      {
        IoAddTriageDumpDataBlock(v6 + 56, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 56LL));
      }
      KeBugCheckEx(
        0xCAu,
        0x11uLL,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 720),
        *(unsigned int *)(BugCheckParameter2 + 704));
    }
    Extension = PiIommuAllocateExtension(BugCheckParameter2, v16, BugCheckParameter2 + 720);
    v18(v17);
  }
  return Extension;
}
