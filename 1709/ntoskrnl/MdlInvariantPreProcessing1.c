/*
 * XREFs of MdlInvariantPreProcessing1 @ 0x140277414
 * Callers:
 *     IovpCallDriver1 @ 0x1407AF150 (IovpCallDriver1.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     RtlpComputeCrcInternal @ 0x140113E30 (RtlpComputeCrcInternal.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MdlInvariantFindMdlInfo @ 0x140277098 (MdlInvariantFindMdlInfo.c)
 *     MdlInvariantInsertMdlInfo @ 0x1402770D8 (MdlInvariantInsertMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  struct _MDL *v8; // rcx
  unsigned __int64 MappedSystemVa; // rbx
  _QWORD *MdlInfo; // rdi
  __int64 v11; // r11
  char v12; // al
  ULONG_PTR v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  ULONG_PTR v17; // r8
  ULONG_PTR v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  ULONG_PTR v22; // [rsp+20h] [rbp-48h]
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-28h]
  int v25; // [rsp+48h] [rbp-20h]
  char v26; // [rsp+4Ch] [rbp-1Ch]
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
            goto LABEL_29;
          v12 = *(_BYTE *)(v11 + 67);
          if ( v12 == *(_BYTE *)(v11 + 66) || *((_BYTE *)MdlInfo + 28) == v12 )
          {
            memset(MdlInfo, 0, 0x20uLL);
            *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
            MdlInfo = 0LL;
          }
          if ( MdlInfo )
          {
            v13 = *(_QWORD *)(a1 + 168);
            v14 = *((unsigned int *)MdlInfo + 6);
            result = *(_QWORD *)(v13 + 8);
            v15 = *(unsigned int *)(result + 40);
            if ( (_DWORD)v14 != (_DWORD)v15 )
            {
              v16 = MdlInfo[2];
              if ( MappedSystemVa < v16 || (result = v16 + v14, MappedSystemVa + v15 > v16 + v14) )
              {
                v17 = *(_QWORD *)(a3 + 40);
                v22 = MappedSystemVa;
                if ( *(_BYTE *)a3 == 4 )
                  v18 = 4112LL;
                else
                  v18 = 4113LL;
                return VerifierBugCheckIfAppropriate(0xC4u, v18, v17, v13, v22);
              }
            }
            if ( (MmVerifierData & 0x4000) != 0 )
            {
              result = RtlpComputeCrcInternal(MappedSystemVa, v15, 0LL, (__int64)&Crc64Ctrl);
              v19 = result;
              if ( MdlInfo[1] != result )
              {
                if ( *(_BYTE *)a3 == 4 )
                {
                  v18 = 4112LL;
LABEL_24:
                  v17 = *(_QWORD *)(a3 + 40);
                  v13 = *(_QWORD *)(a1 + 168);
                  v22 = MappedSystemVa;
                  return VerifierBugCheckIfAppropriate(0xC4u, v18, v17, v13, v22);
                }
                result = *(unsigned int *)(a3 + 8);
                if ( *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) == (_DWORD)result )
                {
                  v18 = 4113LL;
                  goto LABEL_24;
                }
                MdlInfo[1] = v19;
              }
            }
          }
          else
          {
LABEL_29:
            v20 = RtlpComputeCrcInternal(
                    MappedSystemVa,
                    *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL) + 40LL),
                    0LL,
                    (__int64)&Crc64Ctrl);
            v21 = *(_QWORD *)(a1 + 168);
            *((_QWORD *)&v23 + 1) = v20;
            v24 = MappedSystemVa;
            *(_QWORD *)&v23 = *(_QWORD *)(v21 + 8);
            v25 = *(_DWORD *)(v23 + 40);
            v26 = *(_BYTE *)(v21 + 67);
            return MdlInvariantInsertMdlInfo(a2, &v23);
          }
        }
      }
    }
  }
  return result;
}
