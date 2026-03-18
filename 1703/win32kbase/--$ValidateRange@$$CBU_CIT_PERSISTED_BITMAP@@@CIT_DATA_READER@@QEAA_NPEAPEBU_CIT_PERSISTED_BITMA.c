/*
 * XREFs of ??$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMAP@@IIIIPEAI@Z @ 0x1C01534F4
 * Callers:
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_SYSTEM_DATA@@IPEAI@Z @ 0x1C0152CA8 (--$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSIS.c)
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_USE_DATA@@IPEAI@Z @ 0x1C0152E24 (--$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED.c)
 *     ??$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C0153334 (--$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERS.c)
 *     ??$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C0153418 (--$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_.c)
 * Callees:
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C0156598 (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 */

char __fastcall CIT_DATA_READER::ValidateRange<_CIT_PERSISTED_BITMAP const>(
        CIT_DATA_READER *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v7; // rdi
  unsigned int v10; // r8d
  unsigned int v11; // r11d

  v7 = a4;
  if ( CIT_DATA_READER::ValidateRange(a1, a4, a5, 4u) )
  {
    if ( v11 > v10 )
      v11 = v10;
    *a7 = v11;
    *a2 = *(_QWORD *)a1 + v7;
    return 1;
  }
  else
  {
    *a7 = 0;
    *a2 = 0LL;
    return 0;
  }
}
