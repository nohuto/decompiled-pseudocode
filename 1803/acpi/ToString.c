/*
 * XREFs of ToString @ 0x1C00536D0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 */

__int64 __fastcall ToString(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // ecx
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a2 + 76) - 2;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      PrintDebugMessage(191, (const void *)*(unsigned int *)(a2 + 76), 0LL, 0LL, 0LL);
      return (unsigned int)-1072431098;
    }
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "BI");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 133, (__int64)&v13);
      if ( !v5 )
      {
        v7 = *(_QWORD *)(a2 + 80);
        if ( *(_QWORD *)(v7 + 56) )
        {
          v8 = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
          v7 = *(_QWORD *)(a2 + 80);
          v9 = *(_QWORD *)(v7 + 56);
          if ( v9 != v8 )
          {
LABEL_14:
            v10 = ConvertToString(v7, v9, *(_QWORD *)(a2 + 88), v6);
            v5 = v10;
            switch ( v10 )
            {
              case 0xC000009A:
                LogError(-1073741670);
                AcpiDiagTraceAmlError(a1, -1073741670);
                v11 = 190;
                break;
              case 0xC0000206:
                LogError(-1072431098);
                AcpiDiagTraceAmlError(a1, -1072431098);
                PrintDebugMessage(189, 0LL, 0LL, 0LL, 0LL);
                return (unsigned int)-1072431098;
              case 0xC0140006:
                LogError(-1072431098);
                AcpiDiagTraceAmlError(a1, -1072431098);
                v11 = 192;
                break;
              default:
                return v5;
            }
            PrintDebugMessage(v11, 0LL, 0LL, 0LL, 0LL);
            return v5;
          }
        }
LABEL_13:
        v9 = 0LL;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "B");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 133, (__int64)&v13);
      if ( !v5 )
      {
        v7 = *(_QWORD *)(a2 + 80);
        goto LABEL_13;
      }
    }
  }
  return v5;
}
