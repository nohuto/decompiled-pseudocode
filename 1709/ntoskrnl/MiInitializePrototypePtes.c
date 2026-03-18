/*
 * XREFs of MiInitializePrototypePtes @ 0x14048DF98
 * Callers:
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 * Callees:
 *     MiEncodeProtoFill @ 0x14012459C (MiEncodeProtoFill.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14017C818 (MiMakeSubsectionPte.c)
 */

unsigned __int64 __fastcall MiInitializePrototypePtes(char *a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8

  v4 = 8 * a2;
  v6 = 4096LL;
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
  if ( v7 )
  {
    result = MiMakeSubsectionPte((__int64)a3);
LABEL_6:
    v9 = result;
    goto LABEL_7;
  }
  result = *(unsigned int *)(*(_QWORD *)a3 + 56LL);
  if ( (result & 0x1000) == 0 )
  {
    result = MiMakeDemandZeroPte((a3[16] >> 1) & 0x1F);
    goto LABEL_6;
  }
  v9 = 0LL;
LABEL_7:
  if ( v4 >= v6 && a4 == 1 )
  {
    result = (unsigned int)dword_140400104;
    if ( (dword_140400104 & 2) == 0 )
    {
      v10 = v9;
      if ( !v9 )
        v10 = MiMakeDemandZeroPte(4) & 0xFFFFFFFFFFFFFC1FuLL;
      v11 = v10 | 2;
      v12 = v11 | 0x400;
      if ( v7 )
        v12 = v11;
      MiEncodeProtoFill((unsigned __int64)a1, v4, v12);
      result = v4 & 0xFFFFFFFFFFFFF000uLL;
      a1 += v4 & 0xFFFFFFFFFFFFF000uLL;
      v4 &= 0xFFFu;
    }
  }
  if ( v4 )
  {
    result = v9;
    memset64(a1, v9, v4 >> 3);
  }
  return result;
}
