/*
 * XREFs of ?ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_NI@Z @ 0x1C00F81A4
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00A25FC (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     qsort @ 0x1C009D560 (qsort.c)
 */

__int64 __fastcall ValidateSDCv1ModeInfoArray(
        struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *a1,
        unsigned int a2,
        char a3,
        char a4)
{
  unsigned int v7; // edi
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  int v13; // ecx
  unsigned int v15; // r10d
  unsigned int *v16; // rbx
  unsigned int v17; // eax
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rcx

  v7 = 0;
  qsort(a1, a2, 0x10uLL, (int (__cdecl *)(const void *, const void *))DisplayConfigModeSortSdcv1);
  v10 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x10000) != 0 )
  {
    v7 = 1;
    v11 = 1LL;
  }
  else
  {
    v11 = (v10 & 0x20000) != 0;
  }
  if ( (v10 & 0x40000) != 0 && (unsigned __int16)v10 > 1u )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v11, v9);
    v12[3] = *((unsigned int *)a1 + 1);
    v13 = *(_DWORD *)a1;
LABEL_7:
    v12[4] = (unsigned __int16)v13;
    v12[5] = -1073741583LL;
    goto LABEL_8;
  }
  if ( a2 != 1 )
  {
    v15 = a2 - 1;
    v16 = (unsigned int *)((char *)a1 + 16 * a2 - 16);
    if ( v15 )
    {
      while ( 1 )
      {
        v9 = *v16;
        if ( (v9 & 0x10000) != 0 )
        {
          ++v7;
          LODWORD(v11) = v11 + 1;
        }
        v17 = v11 + 1;
        if ( (v9 & 0x20000) == 0 )
          v17 = v11;
        v11 = v17;
        if ( (v9 & 0x40000) != 0 && (unsigned __int16)v9 > 1u )
        {
          v12 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v17, v9);
          v12[3] = v16[1];
          v13 = *v16;
          goto LABEL_7;
        }
        if ( (_WORD)v9 )
        {
          v18 = *(v16 - 4);
          if ( (_WORD)v18 )
          {
            if ( v16[2] == *(v16 - 2)
              && v16[3] == *(v16 - 1)
              && v16[1] == *(v16 - 3)
              && (((unsigned int)v9 ^ v18) & 0x40000) == 0 )
            {
              break;
            }
          }
        }
        v16 -= 4;
        if ( !--v15 )
          goto LABEL_24;
      }
      v12 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v17, v9);
      v20 = v16[1];
      goto LABEL_34;
    }
  }
LABEL_24:
  if ( (_DWORD)v11 && v7 != 1 )
  {
    if ( (!a3 || v7 > 1) && ((a4 & 8) == 0 || v7 > 1) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v11, v9);
      v20 = v7;
LABEL_34:
      v12[3] = v20;
      v12[4] = -1073741583LL;
LABEL_8:
      WdLogEvent5_WdError(v12);
      return 3221225713LL;
    }
    v19 = WdLogNewEntry5_WdEvent(1LL, v11);
    *(_QWORD *)(v19 + 24) = v7;
    WdLogEvent5_WdEvent(v19);
  }
  return 0LL;
}
