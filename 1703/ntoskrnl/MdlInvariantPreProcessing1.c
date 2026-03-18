/*
 * XREFs of MdlInvariantPreProcessing1 @ 0x140250BB4
 * Callers:
 *     IovpCallDriver1 @ 0x14076D490 (IovpCallDriver1.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     RtlpComputeCrcInternal @ 0x1401334C0 (RtlpComputeCrcInternal.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MdlInvariantFindMdlInfo @ 0x140250838 (MdlInvariantFindMdlInfo.c)
 *     MdlInvariantInsertMdlInfo @ 0x14025087C (MdlInvariantInsertMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  struct _MDL *v8; // rcx
  unsigned __int64 MappedSystemVa; // rbx
  __int64 MdlInfo; // rdi
  __int64 v11; // r11
  char v12; // al
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  ULONG_PTR v19; // [rsp+20h] [rbp-48h]
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-28h]
  int v22; // [rsp+48h] [rbp-20h]
  char v23; // [rsp+4Ch] [rbp-1Ch]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 168);
  v8 = *(struct _MDL **)(v4 + 8);
  if ( !v8->Next )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result >= 2u || v8->ByteCount != -1 )
    {
      result = (unsigned __int16)v8->MdlFlags;
      if ( (result & 0x4000) != 0 )
      {
        if ( (result & 5) != 0 )
        {
          MappedSystemVa = (unsigned __int64)v8->MappedSystemVa;
        }
        else
        {
          result = (__int64)MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000020u);
          MappedSystemVa = result;
        }
        if ( MappedSystemVa )
        {
          MdlInfo = MdlInvariantFindMdlInfo(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
          if ( !MdlInfo )
            goto LABEL_26;
          v12 = *(_BYTE *)(v11 + 67);
          if ( v12 == *(_BYTE *)(v11 + 66) || *(_BYTE *)(MdlInfo + 28) == v12 )
          {
            memset((void *)MdlInfo, 0, 0x20uLL);
            *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
            MdlInfo = 0LL;
          }
          if ( MdlInfo )
          {
            v13 = *(unsigned int *)(MdlInfo + 24);
            result = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL);
            v14 = *(unsigned int *)(result + 40);
            if ( (_DWORD)v13 != (_DWORD)v14 )
            {
              v15 = *(_QWORD *)(MdlInfo + 16);
              if ( MappedSystemVa < v15 || (result = v15 + v13, MappedSystemVa + v14 > v15 + v13) )
              {
                v19 = MappedSystemVa;
                return VerifierBugCheckIfAppropriate(0xC4u, v19);
              }
            }
            if ( (MmVerifierData & 0x4000) != 0 )
            {
              result = RtlpComputeCrcInternal(MappedSystemVa, v14, 0LL, (__int64)&Crc64Ctrl);
              v16 = result;
              if ( *(_QWORD *)(MdlInfo + 8) != result )
              {
                if ( *(_BYTE *)a3 == 4
                  || (result = *(unsigned int *)(a3 + 8), *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) == (_DWORD)result) )
                {
                  v19 = MappedSystemVa;
                  return VerifierBugCheckIfAppropriate(0xC4u, v19);
                }
                *(_QWORD *)(MdlInfo + 8) = v16;
              }
            }
          }
          else
          {
LABEL_26:
            v17 = RtlpComputeCrcInternal(
                    MappedSystemVa,
                    *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL) + 40LL),
                    0LL,
                    (__int64)&Crc64Ctrl);
            v18 = *(_QWORD *)(a1 + 168);
            *((_QWORD *)&v20 + 1) = v17;
            v21 = MappedSystemVa;
            *(_QWORD *)&v20 = *(_QWORD *)(v18 + 8);
            v22 = *(_DWORD *)(v20 + 40);
            v23 = *(_BYTE *)(v18 + 67);
            return MdlInvariantInsertMdlInfo(a2, &v20);
          }
        }
      }
    }
  }
  return result;
}
