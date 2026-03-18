/*
 * XREFs of Package @ 0x1C00522C0
 * Callers:
 *     <none>
 * Callees:
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall Package(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rax
  _DWORD *v7; // r14
  int v8; // ecx
  const void *v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, "I");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    if ( v5 > 0xFF )
    {
      v4 = -1072431100;
      LogError(-1072431100);
      AcpiDiagTraceAmlError(a1, -1072431100);
      v8 = 118;
      v9 = *(const void **)(a2[10] + 16LL);
      goto LABEL_8;
    }
    *(_DWORD *)(a2[11] + 24LL) = 40 * v5 + 8;
    v6 = (_DWORD *)HeapAlloc(gpheapGlobal, 1196118088, *(_DWORD *)(a2[11] + 24LL));
    v7 = v6;
    if ( !v6 )
    {
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v8 = 117;
      v9 = (const void *)*(unsigned int *)(a2[11] + 24LL);
LABEL_8:
      PrintDebugMessage(v8, v9, 0LL, 0LL, 0LL);
      return v4;
    }
    *(_WORD *)(a2[11] + 2LL) = 4;
    memset(v6, 0, *(unsigned int *)(a2[11] + 24LL));
    *(_QWORD *)(a2[11] + 32LL) = v7;
    *v7 = *(unsigned __int8 *)(a2[10] + 16LL);
    v4 = PushFrame(a1, 1179077456, 56LL, (__int64)ParsePackage, &v12);
    if ( !v4 )
    {
      v10 = v12;
      *(_QWORD *)(v12 + 32) = v7;
      *(_QWORD *)(v10 + 48) = a2[5];
    }
  }
  return v4;
}
