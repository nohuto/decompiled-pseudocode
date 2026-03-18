/*
 * XREFs of MdlInvariantPreProcessing1 @ 0x1402AA534
 * Callers:
 *     IovpCallDriver1 @ 0x14081C2B8 (IovpCallDriver1.c)
 * Callees:
 *     MmMdlPageContentsState @ 0x1400BA570 (MmMdlPageContentsState.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     RtlpComputeCrcInternal @ 0x140149C5C (RtlpComputeCrcInternal.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MdlInvariantFindMdlInfo @ 0x1402AA1B4 (MdlInvariantFindMdlInfo.c)
 *     MdlInvariantInsertMdlInfo @ 0x1402AA1F4 (MdlInvariantInsertMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int64 __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r13
  __int64 v6; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *MdlInfo; // rsi
  ULONG_PTR v13; // r11
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  ULONG_PTR v21; // r9
  ULONG_PTR v22; // rdx
  unsigned __int64 v23; // rdx
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-28h]
  int v26; // [rsp+48h] [rbp-20h]
  char v27; // [rsp+4Ch] [rbp-1Ch]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 168);
  v6 = 0LL;
  v9 = *(_QWORD *)(v4 + 8);
  if ( !*(_QWORD *)v9 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result >= 2u || *(_DWORD *)(v9 + 40) != -1 )
    {
      result = MmMdlPageContentsState(v9, 2u);
      if ( (_DWORD)result == 1 )
      {
        result = *(_QWORD *)(a1 + 168);
        v10 = *(_QWORD *)(result + 8);
        if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
        {
          v11 = *(_QWORD *)(v10 + 24);
        }
        else
        {
          result = (unsigned __int64)MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000020u);
          v11 = result;
        }
        if ( v11 )
        {
          MdlInfo = MdlInvariantFindMdlInfo(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
          if ( MdlInfo )
          {
            v14 = *(_BYTE *)(v13 + 67);
            if ( v14 == *(_BYTE *)(v13 + 66) || *((_BYTE *)MdlInfo + 28) == v14 )
            {
              memset(MdlInfo, 0, 0x20uLL);
              MdlInfo = 0LL;
              *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
              v13 = *(_QWORD *)(a1 + 168);
            }
          }
          v15 = *(_QWORD *)(v13 + 8);
          if ( !MdlInfo )
          {
            v16 = RtlpComputeCrcInternal(v11, *(unsigned int *)(v15 + 40), 0LL, &Crc64Ctrl);
            v17 = *(_QWORD *)(a1 + 168);
            *((_QWORD *)&v24 + 1) = v16;
            v25 = v11;
            *(_QWORD *)&v24 = *(_QWORD *)(v17 + 8);
            v26 = *(_DWORD *)(v24 + 40);
            v27 = *(_BYTE *)(v17 + 67);
            return MdlInvariantInsertMdlInfo(a2, &v24);
          }
          v18 = *((unsigned int *)MdlInfo + 6);
          result = *(unsigned int *)(v15 + 40);
          if ( (_DWORD)v18 == (_DWORD)result )
          {
            v20 = result;
          }
          else
          {
            v19 = MdlInfo[2];
            if ( v11 < v19 || (v20 = (unsigned int)result, result += v11, result > v19 + v18) )
            {
              v21 = v13;
              LOBYTE(v6) = *(_BYTE *)a3 != 4;
              v22 = v6 + 4112;
              return VerifierBugCheckIfAppropriate(0xC4u, v22, *(_QWORD *)(a3 + 40), v21, v11);
            }
          }
          if ( (MmVerifierData & 0x4000) != 0 )
          {
            result = RtlpComputeCrcInternal(v11, v20, 0LL, &Crc64Ctrl);
            v23 = result;
            if ( MdlInfo[1] != result )
            {
              if ( *(_BYTE *)a3 == 4 )
              {
                v22 = 4112LL;
              }
              else
              {
                result = *(unsigned int *)(a3 + 8);
                if ( *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) != (_DWORD)result )
                {
                  MdlInfo[1] = v23;
                  return result;
                }
                v22 = 4113LL;
              }
              v21 = *(_QWORD *)(a1 + 168);
              return VerifierBugCheckIfAppropriate(0xC4u, v22, *(_QWORD *)(a3 + 40), v21, v11);
            }
          }
        }
      }
    }
  }
  return result;
}
