/*
 * XREFs of ProcessIncDec @ 0x1C00527D0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 */

__int64 __fastcall ProcessIncDec(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rax
  const void *ObjectTypeName; // rax
  const void *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v4 = a3;
  if ( a3 )
    v6 = 1;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return v4;
    goto LABEL_15;
  }
  v7 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v7 + 2) != 1 )
  {
    FreeDataBuffs(v7, 1u);
    v4 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 2LL));
    PrintDebugMessage(147, v9, ObjectTypeName, 0LL, 0LL);
LABEL_15:
    v12 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v12 + 8);
    HeapFree(v12);
    return v4;
  }
  v10 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(a2 + 32) == 117LL )
    v11 = v10 + 1;
  else
    v11 = v10 - 1;
  *(_QWORD *)(v7 + 16) = v11;
  if ( a3 )
    goto LABEL_15;
  v4 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( v4 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
    goto LABEL_15;
  return v4;
}
