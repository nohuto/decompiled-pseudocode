/*
 * XREFs of MdlInvariantPostProcessing1 @ 0x1402509C4
 * Callers:
 *     IovpCompleteRequest2 @ 0x14076DDF0 (IovpCompleteRequest2.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     RtlpComputeCrcInternal @ 0x1401334C0 (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x140250838 (MdlInvariantFindMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall MdlInvariantPostProcessing1(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 MdlInfo; // rbx
  __int64 v8; // r11
  PVOID v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx

  v5 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)v5
    && (KeGetCurrentIrql() >= 2u || *(_DWORD *)(v5 + 40) != -1)
    && ((MmVerifierData & 0x2000) == 0 || (MmVerifierData & 0x4000) != 0 || *(_BYTE *)(a2 + 67) == *(_BYTE *)(a2 + 66))
    && (*(_WORD *)(v5 + 10) & 0x4000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 224);
    if ( v6 )
      *(_QWORD *)(v6 + 16) = v5;
    MdlInfo = MdlInvariantFindMdlInfo(a1, *(_QWORD *)(a2 + 8));
    if ( MdlInfo || *a3 != 4 )
    {
      v9 = (*(_BYTE *)(v8 + 10) & 5) != 0
         ? *(PVOID *)(v8 + 24)
         : MmMapLockedPagesSpecifyCache((PMDL)v8, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( v9 )
      {
        if ( !MdlInfo
          || (v10 = *(unsigned int *)(MdlInfo + 24),
              v11 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
              (_DWORD)v10 == (_DWORD)v11) )
        {
          if ( *a3 == 4 )
          {
            if ( RtlpComputeCrcInternal(
                   (unsigned __int64)v9,
                   *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                   0LL,
                   (__int64)&Crc64Ctrl) == *(_QWORD *)(MdlInfo + 8) )
              return;
            goto LABEL_27;
          }
        }
        else
        {
          v12 = *(_QWORD *)(MdlInfo + 16);
          if ( (unsigned __int64)v9 < v12 || (unsigned __int64)v9 + v11 > v12 + v10 )
            goto LABEL_27;
        }
        if ( *a3 == 3 && KeGetCurrentIrql() < 2u )
        {
          v13 = RtlpComputeCrcInternal(
                  (unsigned __int64)v9,
                  *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                  0LL,
                  (__int64)&Crc64Ctrl);
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&IovMdlInvariant10Milliseconds);
          if ( v13 != RtlpComputeCrcInternal(
                        (unsigned __int64)v9,
                        *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                        0LL,
                        (__int64)&Crc64Ctrl) )
LABEL_27:
            VerifierBugCheckIfAppropriate(0xC4u, (ULONG_PTR)v9);
        }
      }
    }
  }
}
