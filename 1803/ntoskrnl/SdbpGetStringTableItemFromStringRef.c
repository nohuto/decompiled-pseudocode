/*
 * XREFs of SdbpGetStringTableItemFromStringRef @ 0x14061F4D0
 * Callers:
 *     SdbpGetMappedStringFromTable @ 0x14061F480 (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1404F4560 (RtlRunOnceExecuteOnce.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetStringTableItemFromStringRef(
        _RTL_RUN_ONCE *Parameter,
        int a2,
        _DWORD *a3,
        _RTL_RUN_ONCE **a4)
{
  _RTL_RUN_ONCE *v4; // rbx
  int v9; // ebp
  _RTL_RUN_ONCE *Ptr; // r14
  NTSTATUS v11; // eax
  int v12; // edi
  int v13; // eax
  bool v14; // sf
  int v15; // eax
  unsigned int v16; // edi
  __int64 result; // rax
  NTSTATUS v18; // [rsp+20h] [rbp-38h]
  int *v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0;
  Ptr = 0LL;
  v19 = 0LL;
  if ( LODWORD(Parameter[2].Ptr) )
  {
    if ( !Parameter[170].Value )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetStringTableItemFromStringRef",
        751,
        (unsigned int)"No stringtable in DB");
      v12 = -1073741275;
      goto LABEL_8;
    }
    Ptr = (_RTL_RUN_ONCE *)Parameter[170].Ptr;
    v13 = 6;
  }
  else
  {
    v11 = RtlRunOnceExecuteOnce(Parameter + 168, InitOnceGetStringTableOffset, Parameter, (PVOID *)&v19);
    v12 = v11;
    if ( v11 < 0 )
    {
      v18 = v11;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetStringTableItemFromStringRef",
        771,
        (unsigned int)"RtlRunOnceExecuteOnce failed for InitOnceGetStringTableOffset [%x]",
        v18);
      goto LABEL_8;
    }
    if ( !v19 || (v13 = *v19) == 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetStringTableItemFromStringRef",
        787,
        (unsigned int)"InitOnceGetStringTableOffset succeeded but failed to find string table");
      v12 = -1073741271;
      goto LABEL_8;
    }
    Ptr = Parameter;
  }
  v9 = v13 + a2;
  if ( (unsigned __int16)SdbGetTagFromTagID((__int64)Ptr, (unsigned int)(v13 + a2)) == 0x8801 )
  {
    v12 = 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetStringTableItemFromStringRef",
      801,
      (unsigned int)"Pulled out a non-stringtable item");
    v12 = -1073741788;
  }
LABEL_8:
  v14 = v12 < 0;
  v15 = 0;
  v16 = ~v12;
  if ( !v14 )
  {
    v15 = v9;
    v4 = Ptr;
  }
  *a3 = v15;
  result = v16 >> 31;
  *a4 = v4;
  return result;
}
