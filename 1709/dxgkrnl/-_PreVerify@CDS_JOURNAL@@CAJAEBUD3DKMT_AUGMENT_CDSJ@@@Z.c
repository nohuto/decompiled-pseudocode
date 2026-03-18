/*
 * XREFs of ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00F7E88
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00E12AC (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ConvertGdiScalingToDMMScaling @ 0x1C00F7F00 (ConvertGdiScalingToDMMScaling.c)
 */

__int64 __fastcall CDS_JOURNAL::_PreVerify(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)a1 & 2) != 0 )
    return 0LL;
  v4 = *(unsigned int **)(a1 + 32);
  v5 = v4[18];
  if ( (v5 & 0x80u) == 0LL
    || (a1 = v4[21], !(_DWORD)a1)
    || (a1 = (unsigned int)(a1 - 1), !(_DWORD)a1)
    || (a1 = (unsigned int)(a1 - 1), (unsigned int)a1 < 2) )
  {
    if ( (v5 & 0x20000000) != 0 && !(unsigned int)ConvertGdiScalingToDMMScaling(v4[22], &v11) )
      return 3221225485LL;
    v6 = *(_QWORD *)(v3 + 32);
    if ( (*(_DWORD *)(v6 + 72) & 0x40000) != 0 )
    {
      v7 = *(_DWORD *)(v6 + 168);
      if ( v7 != 32 && v7 != 8 && v7 != 16 && v7 != 24 )
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, v5, a3);
        v9[3] = v6;
        v9[4] = *(unsigned int *)(v6 + 72);
        v10 = *(unsigned int *)(v6 + 168);
        goto LABEL_13;
      }
    }
    return 0LL;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, v5, a3);
  v9[3] = v4;
  v9[4] = v4[18];
  v10 = v4[21];
LABEL_13:
  v9[5] = v10;
  WdLogEvent5_WdWarning(v9);
  return 3221225485LL;
}
