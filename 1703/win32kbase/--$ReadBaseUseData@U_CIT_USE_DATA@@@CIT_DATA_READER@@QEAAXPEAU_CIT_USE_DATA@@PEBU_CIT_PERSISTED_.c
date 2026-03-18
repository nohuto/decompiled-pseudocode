/*
 * XREFs of ??$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C0153418
 * Callers:
 *     ?ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z @ 0x1C0156230 (-ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z @ 0x1C0156448 (-ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z.c)
 * Callees:
 *     ??$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMAP@@IIIIPEAI@Z @ 0x1C01534F4 (--$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMA.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C01561AC (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 */

__int64 __fastcall CIT_DATA_READER::ReadBaseUseData<_CIT_USE_DATA>(CIT_DATA_READER *this, _QWORD *a2, unsigned int *a3)
{
  unsigned int *v7; // [rsp+30h] [rbp-18h]
  unsigned int *v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  CIT_DATA_READER::Read(this, a2 + 2, 0x30u, a3[2], a3[3], 4u, v7);
  CIT_DATA_READER::Read(this, a2 + 8, 0x18u, a3[4], a3[5], 2u, v8);
  *a2 = 0LL;
  a2[1] = 0LL;
  CIT_DATA_READER::ValidateRange<_CIT_PERSISTED_BITMAP const>(this, &v9, 8LL, *a3, a3[1]);
  return 0LL;
}
