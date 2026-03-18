/*
 * XREFs of LoadFieldUnitDDB @ 0x1C005ECF8
 * Callers:
 *     Load @ 0x1C0012BC0 (Load.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     LoadDDB @ 0x1C001524C (LoadDDB.c)
 *     ReadObject @ 0x1C001A0F0 (ReadObject.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall LoadFieldUnitDDB(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int Object; // eax
  unsigned int DDB; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  const void *v13; // r14
  const void *v14; // rdx
  int v15; // ecx
  _QWORD v17[5]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v18[2]; // [rsp+58h] [rbp-1h] BYREF
  int v19; // [rsp+78h] [rbp+1Fh]

  memset(v17, 0, sizeof(v17));
  LODWORD(v17[3]) = 36;
  WORD1(v17[0]) = 3;
  v17[4] = v18;
  Object = ReadObject((__int64)a1, a2, (__int64)v17);
  DDB = Object;
  if ( !Object )
  {
    v8 = HeapAlloc(gpheapGlobal, 1179992648, DWORD1(v18[0]));
    v9 = v8;
    if ( !v8 )
    {
      DDB = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      v10 = 82;
LABEL_15:
      PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
      return DDB;
    }
    *(_OWORD *)v8 = v18[0];
    *(_OWORD *)(v8 + 16) = v18[1];
    *(_DWORD *)(v8 + 32) = v19;
    LODWORD(v17[3]) = DWORD1(v18[0]) - 36;
    v17[4] = v8 + 36;
    v11 = ReadObject((__int64)a1, a2, (__int64)v17);
    DDB = v11;
    if ( v11 )
    {
      if ( v11 == 32772 )
      {
        DDB = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)a1, -1072431098);
        v14 = 0LL;
        v15 = 83;
        goto LABEL_11;
      }
    }
    else
    {
      if ( ghValidateTable )
      {
        v12 = ghValidateTable(v9, qword_1C007A158);
        v13 = (const void *)v12;
        if ( v12 )
        {
          DDB = -1072431079;
          LogError(-1072431079);
          AcpiDiagTraceAmlError((__int64)a1, -1072431079);
          v14 = v13;
          v15 = 84;
LABEL_11:
          PrintDebugMessage(v15, v14, 0LL, 0LL, 0LL);
          goto LABEL_12;
        }
      }
      DDB = LoadDDB(a1, v9, a1[10], a3);
    }
LABEL_12:
    HeapFree(v9);
    return DDB;
  }
  if ( Object == 32772 )
  {
    DDB = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v10 = 83;
    goto LABEL_15;
  }
  return DDB;
}
