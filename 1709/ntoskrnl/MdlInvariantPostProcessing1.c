/*
 * XREFs of MdlInvariantPostProcessing1 @ 0x140277224
 * Callers:
 *     IovpCompleteRequest2 @ 0x1407AFABC (IovpCompleteRequest2.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     RtlpComputeCrcInternal @ 0x140113E30 (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x140277098 (MdlInvariantFindMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall MdlInvariantPostProcessing1(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *MdlInfo; // rbx
  __int64 v8; // r11
  PVOID v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  ULONG_PTR v13; // r9
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // rdx
  __int64 v16; // rbx
  ULONG_PTR v17; // [rsp+20h] [rbp-18h]

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
    if ( MdlInfo || *(_BYTE *)a3 != 4 )
    {
      v9 = (*(_BYTE *)(v8 + 10) & 5) != 0
         ? *(PVOID *)(v8 + 24)
         : MmMapLockedPagesSpecifyCache((PMDL)v8, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( v9 )
      {
        if ( !MdlInfo
          || (v10 = *((unsigned int *)MdlInfo + 6),
              v11 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
              (_DWORD)v10 == (_DWORD)v11) )
        {
          if ( *(_BYTE *)a3 == 4 )
          {
            if ( RtlpComputeCrcInternal(
                   (unsigned __int64)v9,
                   *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                   0LL,
                   (__int64)&Crc64Ctrl) != MdlInfo[1] )
              VerifierBugCheckIfAppropriate(0xC4u, 0x1010uLL, *(_QWORD *)(a3 + 40), a2, (ULONG_PTR)v9);
            return;
          }
        }
        else
        {
          v12 = MdlInfo[2];
          if ( (unsigned __int64)v9 < v12 || (unsigned __int64)v9 + v11 > v12 + v10 )
          {
            v13 = a2;
            v14 = *(_QWORD *)(a3 + 40);
            v17 = (ULONG_PTR)v9;
            if ( *(_BYTE *)a3 == 4 )
            {
              v15 = 4112LL;
LABEL_30:
              VerifierBugCheckIfAppropriate(0xC4u, v15, v14, v13, v17);
              return;
            }
LABEL_29:
            v15 = 4113LL;
            goto LABEL_30;
          }
        }
        if ( *(_BYTE *)a3 == 3 && KeGetCurrentIrql() < 2u )
        {
          v16 = RtlpComputeCrcInternal(
                  (unsigned __int64)v9,
                  *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                  0LL,
                  (__int64)&Crc64Ctrl);
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&IovMdlInvariant10Milliseconds);
          if ( v16 != RtlpComputeCrcInternal(
                        (unsigned __int64)v9,
                        *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                        0LL,
                        (__int64)&Crc64Ctrl) )
          {
            v14 = *(_QWORD *)(a3 + 40);
            v13 = a2;
            v17 = (ULONG_PTR)v9;
            goto LABEL_29;
          }
        }
      }
    }
  }
}
