/*
 * XREFs of PiDmaGuardProcessNewDeviceNode @ 0x140517228
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PipDmgDestroyIommuExtension @ 0x1405171F8 (PipDmgDestroyIommuExtension.c)
 *     PnpQueryInterface @ 0x14051AEB4 (PnpQueryInterface.c)
 *     PiIommuAllocateExtension @ 0x14058F934 (PiIommuAllocateExtension.c)
 */

__int64 __fastcall PiDmaGuardProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rdi
  unsigned int Extension; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 *v10; // rsi
  _WORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  void (__fastcall *v16)(__int64); // [rsp+48h] [rbp-40h]

  PipDmgDestroyIommuExtension(BugCheckParameter2);
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
      v11 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL) + 56LL);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((int)v11, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL) + 56LL));
      }
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL) + 16LL);
      if ( v12 && *(_WORD *)(v12 + 56) )
      {
        IoAddTriageDumpDataBlock(v12 + 56, 2);
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v13 + 64), *(unsigned __int16 *)(v13 + 56));
      }
    }
LABEL_27:
    KeBugCheckEx(0xCAu, 2uLL, v2, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 0LL, v14) >= 0 )
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
    Extension = PiIommuAllocateExtension(BugCheckParameter2, v14, BugCheckParameter2 + 720);
    v16(v15);
  }
  return Extension;
}
