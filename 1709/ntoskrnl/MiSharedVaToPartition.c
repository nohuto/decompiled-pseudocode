/*
 * XREFs of MiSharedVaToPartition @ 0x140132CC0
 * Callers:
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 */

ULONG_PTR *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v5; // r10
  __int64 *v6; // rcx
  __int64 PteShadow; // r8
  __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  _KPROCESS *v11; // rcx
  _QWORD *CloneAddress; // rax
  unsigned __int64 Address; // rax
  unsigned __int64 v14; // rax
  char v15; // al
  _QWORD *v16; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rax

  v2 = a2;
  if ( !byte_140388B04 )
    return &MiSystemPartition;
  v5 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
  v6 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v6;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v6, *v6);
  if ( (PteShadow & 0x400) != 0 && MI_PROTO_FORMAT_COMBINED(PteShadow) )
    return **(ULONG_PTR ***)(((v8 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v2 >= 0xFFFF800000000000uLL )
  {
    v15 = *(_BYTE *)(a1 + 192) & 7;
    if ( v15 == 4 )
    {
      v16 = &unk_140388438;
    }
    else
    {
      if ( v15 != 1 )
        return (ULONG_PTR *)v5;
      Process = KeGetCurrentThread()->ApcState.Process;
      v18 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v18 )
        return (ULONG_PTR *)v5;
      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        return (ULONG_PTR *)v5;
      v16 = (_QWORD *)(v18 + 2944);
      if ( !v16 )
        return (ULONG_PTR *)v5;
    }
    v19 = (_QWORD *)v16[2];
    while ( v19 )
    {
      v20 = v19[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v2 >= v20 + v19[4] )
      {
        v19 = (_QWORD *)v19[1];
      }
      else
      {
        if ( v2 >= v20 )
        {
          v14 = v19[6] & 0xFFFFFFFFFFFFFFF8uLL;
          goto LABEL_34;
        }
        v19 = (_QWORD *)*v19;
      }
    }
    v21 = MiSessionLookupImage(v2);
    if ( !v21 )
      return (ULONG_PTR *)v5;
    v14 = (unsigned __int64)(v21 + 10);
  }
  else
  {
    if ( !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
    {
      v11 = KeGetCurrentThread()->ApcState.Process;
      if ( v11[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress((__int64)v11, v10);
        if ( CloneAddress )
        {
          v5 = *(_QWORD *)(CloneAddress[7] + 24LL);
          if ( v5 )
            return (ULONG_PTR *)v5;
        }
      }
    }
    Address = MiLocateAddress(v9);
    if ( !Address )
      return (ULONG_PTR *)v5;
    if ( (*(_DWORD *)(Address + 48) & 0x8000) != 0 )
      return (ULONG_PTR *)v5;
    v14 = *(_QWORD *)(Address + 72);
    if ( !v14 )
      return (ULONG_PTR *)v5;
  }
LABEL_34:
  if ( *(_QWORD *)v14 )
    return *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v14 + 60LL) & 0x3FF));
  return (ULONG_PTR *)v5;
}
