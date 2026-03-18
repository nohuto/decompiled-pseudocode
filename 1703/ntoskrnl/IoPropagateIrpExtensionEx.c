/*
 * XREFs of IoPropagateIrpExtensionEx @ 0x14012C780
 * Callers:
 *     IoPropagateIrpExtension @ 0x14012C760 (IoPropagateIrpExtension.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14012C8B4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateIrpExtension @ 0x14012C8E8 (IopAllocateIrpExtension.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoPropagateIrpExtensionEx(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 IrpExtension; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, __int64, __int64); // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rax

  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 0LL;
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( (a4 & 1) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = v4;
    return 0LL;
  }
  if ( (a4 & 2) != 0 && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 0LL);
    if ( !IrpExtension )
      return 3221225626LL;
    *(_OWORD *)(IrpExtension + 24) = *(_OWORD *)(v4 + 24);
  }
  if ( (a4 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v9 && (*(_BYTE *)(v9 + 2) & 4) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = *(_DWORD *)(v4 + 4);
  }
  if ( (a4 & 4) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v10 && (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
    {
      v15 = IopAllocateIrpExtension(a2, 5LL);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 48) = a3 + *(_QWORD *)(v4 + 48);
        v16 = *(_QWORD *)(v4 + 40);
        *(_QWORD *)(v15 + 40) = v16;
        v17 = *(_QWORD *)(v4 + 40);
        v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v17 + 8);
        if ( v18 )
          v18(v17, v16, a3);
        goto LABEL_14;
      }
      return 3221225626LL;
    }
  }
LABEL_14:
  if ( (a4 & 8) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v11 && (*(_BYTE *)(v11 + 2) & 0x40) != 0 )
      IopSetDiskIoAttributionExtension(a2, *(_QWORD *)(v4 + 16));
  }
  if ( (a4 & 0x10) == 0 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v12 || *(char *)(v12 + 2) >= 0 )
    return 0LL;
  v19 = *(_QWORD *)(v4 + 48);
  v20 = 1;
  if ( !v19 || (v20 = *(_DWORD *)(v19 + 16) << 9) != 0 )
  {
    v21 = a3 / v20;
    if ( !(a3 % v20) )
    {
      v22 = IopAllocateIrpExtension(a2, 7LL);
      if ( v22 )
      {
        *(_OWORD *)(v22 + 40) = *(_OWORD *)(v4 + 40);
        *(_QWORD *)(v22 + 40) += v21;
        return 0LL;
      }
      return 3221225626LL;
    }
  }
  return 3221225485LL;
}
