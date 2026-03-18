/*
 * XREFs of ReadField @ 0x1C004D4C0
 * Callers:
 *     ReadObject @ 0x1C00031E0 (ReadObject.c)
 *     AccFieldUnit @ 0x1C004C040 (AccFieldUnit.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     PushAccFieldObj @ 0x1C004CFE0 (PushAccFieldObj.c)
 *     RawFieldAccess @ 0x1C004D144 (RawFieldAccess.c)
 *     SupportsOnlyRawAccess @ 0x1C004D9F0 (SupportsOnlyRawAccess.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 ObjectTypeName; // rdx
  int v13; // ecx
  unsigned int v14; // r8d
  void *v15; // rax
  char v16; // al
  unsigned int v17; // r9d
  __int64 v18; // r10
  __int64 v19; // r8

  v4 = a4;
  v7 = a1;
  if ( (a3[3] & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) != 5 )
    {
      v11 = -1072431087;
      LogError(-1072431087);
      AcpiDiagTraceAmlError(v7, -1072431087);
      ObjectTypeName = (unsigned int)a3[3];
      v13 = 162;
      goto LABEL_24;
    }
    v19 = a2;
    return (unsigned int)RawFieldAccess(a1, 0, v19, a4);
  }
  v10 = IsCompatableDSDTRevision() ? 8 : 4;
  if ( *(_WORD *)(v4 + 2) )
  {
    if ( *(_WORD *)(v4 + 2) == 1 )
    {
      v10 = 8LL;
      goto LABEL_16;
    }
    if ( *(_WORD *)(v4 + 2) == 2 )
    {
      v10 = (unsigned int)(*(_DWORD *)(v4 + 24) - 1);
      goto LABEL_16;
    }
    if ( *(_WORD *)(v4 + 2) != 3 )
    {
      v11 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(v7, -1072431095);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
      v13 = 163;
LABEL_24:
      PrintDebugMessage(v13, (const void *)ObjectTypeName, 0LL, 0LL, 0LL);
      return v11;
    }
  }
  else
  {
    if ( (a3[3] & 0x10000) == 0 && a3[2] <= (unsigned int)(8 * v10) )
    {
      *(_WORD *)(v4 + 2) = 1;
      goto LABEL_16;
    }
    *(_WORD *)(v4 + 2) = 3;
    v14 = (unsigned int)(a3[2] + 7) >> 3;
    *(_DWORD *)(v4 + 24) = v14;
    v15 = (void *)HeapAlloc(gpheapGlobal, 1179992648, v14);
    *(_QWORD *)(v4 + 32) = v15;
    if ( !v15 )
    {
      v11 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(v7, -1073741670);
      ObjectTypeName = *(unsigned int *)(v4 + 24);
      v13 = 161;
      goto LABEL_24;
    }
    memset(v15, 0, *(unsigned int *)(v4 + 24));
  }
  v10 = *(unsigned int *)(v4 + 24);
LABEL_16:
  v16 = SupportsOnlyRawAccess(a2, v8, v9, v10);
  v19 = a2;
  a1 = v7;
  if ( v16 )
  {
    a4 = v4;
    return (unsigned int)RawFieldAccess(a1, 0, v19, a4);
  }
  return (unsigned int)PushAccFieldObj(v7, (__int64)ReadFieldObj, a2, a3, v18, v17);
}
