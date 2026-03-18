/*
 * XREFs of ??$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_USE_DATA@@IPEAI@Z @ 0x1C0152E24
 * Callers:
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C0153784 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 * Callees:
 *     ??$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMAP@@IIIIPEAI@Z @ 0x1C01534F4 (--$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMA.c)
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C0156598 (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 */

char __fastcall CitBaseUseDataValidate<CIT_PERSISTED_USE_DATA>(
        CIT_DATA_READER *this,
        __int64 a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5)
{
  unsigned int v6; // esi
  unsigned int v9; // r8d
  unsigned int v10; // edi
  __int64 v11; // r11
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int *v14; // r11
  _QWORD v16[5]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a3[1];
  if ( v6 && (v9 = a3[3]) != 0 && (v10 = a3[5]) != 0 )
  {
    if ( CIT_DATA_READER::ValidateRange(this, a3[2], v9, 4u) )
    {
      if ( CIT_DATA_READER::ValidateRange(this, *(_DWORD *)(v11 + 16), v10, 2u) )
      {
        if ( (unsigned __int8)CIT_DATA_READER::ValidateRange<_CIT_PERSISTED_BITMAP const>(this, v16, v6, *v14, v6) )
          return 1;
        v12 = a5;
        if ( a5 )
        {
          v13 = a4 + 400;
          goto LABEL_16;
        }
      }
      else
      {
        v12 = a5;
        if ( a5 )
        {
          v13 = a4 + 300;
          goto LABEL_16;
        }
      }
    }
    else
    {
      v12 = a5;
      if ( a5 )
      {
        v13 = a4 + 200;
LABEL_16:
        *v12 = v13;
      }
    }
  }
  else
  {
    v12 = a5;
    if ( a5 )
    {
      v13 = a4 + 100;
      goto LABEL_16;
    }
  }
  return 0;
}
