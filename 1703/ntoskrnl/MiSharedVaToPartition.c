/*
 * XREFs of MiSharedVaToPartition @ 0x1400739A4
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14006B974 (MiSessionLookupImage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  _KPROCESS *v15; // rcx
  __int64 Address; // rax
  __int64 *v17; // rax
  char v18; // al
  _QWORD *v19; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rax

  if ( !byte_14036C90C )
    return &MiSystemPartition;
  v6 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = v6;
  if ( (v6 & 0x400) != 0 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v6, v7, v8, v6) )
    return **(ULONG_PTR ***)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v9 >= 0xFFFF800000000000uLL )
  {
    v18 = *(_BYTE *)(a1 + 192) & 7;
    if ( v18 == 4 )
    {
      v19 = &unk_14036C0F8;
    }
    else
    {
      if ( v18 != 1 )
        return (ULONG_PTR *)v10;
      Process = KeGetCurrentThread()->ApcState.Process;
      v21 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v21 )
        return (ULONG_PTR *)v10;
      if ( Process == PsInitialSystemProcess )
        return (ULONG_PTR *)v10;
      v19 = (_QWORD *)(v21 + 2944);
      if ( !v19 )
        return (ULONG_PTR *)v10;
    }
    v22 = (_QWORD *)v19[2];
    while ( v22 )
    {
      v23 = v22[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v9 >= v23 + v22[4] )
      {
        v22 = (_QWORD *)v22[1];
      }
      else
      {
        if ( v9 >= v23 )
        {
          v17 = (__int64 *)(v22[6] & 0xFFFFFFFFFFFFFFF8uLL);
          goto LABEL_27;
        }
        v22 = (_QWORD *)*v22;
      }
    }
    v25 = MiSessionLookupImage(v9);
    if ( !v25 )
      return (ULONG_PTR *)v10;
    v24 = v25[10];
  }
  else
  {
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v11) )
    {
      v15 = KeGetCurrentThread()->ApcState.Process;
      if ( v15[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(v15, a3, v12, v13) )
          return (ULONG_PTR *)v10;
      }
    }
    Address = MiLocateAddress(v14);
    if ( !Address )
      return (ULONG_PTR *)v10;
    if ( (*(_DWORD *)(Address + 48) & 0x8000) != 0 )
      return (ULONG_PTR *)v10;
    v17 = *(__int64 **)(Address + 72);
    if ( !v17 )
      return (ULONG_PTR *)v10;
LABEL_27:
    v24 = *v17;
  }
  if ( v24 )
    return *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v24 + 60) & 0x3FF));
  return (ULONG_PTR *)v10;
}
