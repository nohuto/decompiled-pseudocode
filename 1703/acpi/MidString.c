/*
 * XREFs of MidString @ 0x1C0060B70
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 *     ValidateTarget @ 0x1C001B7DC (ValidateTarget.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 */

__int64 __fastcall MidString(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  int v10; // ecx
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"TII");
  if ( !v5 )
  {
    v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 0x87u, &v15);
    if ( !v5 )
    {
      if ( (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 2LL) - 2 > 1 )
      {
        v5 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError(a1, -1072431098);
        v10 = 107;
        goto LABEL_25;
      }
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = *(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL);
      v6 = *(_QWORD *)(a2 + 80);
      v7 = *(unsigned int *)(v6 + 24);
      v8 = *(_QWORD *)(v6 + 56);
      if ( v8 < v7 )
      {
        if ( *(_QWORD *)(v6 + 96) + v8 < v7 )
          v11 = *(_QWORD *)(v6 + 96);
        else
          v11 = v7 - v8;
        if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) == 2 )
        {
          v12 = HeapAlloc(gpheapGlobal, 1381258056, v11 + 1);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v12;
          if ( !v12 )
          {
            v5 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            PrintDebugMessage(106, 0LL, 0LL, 0LL, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v11 + 1;
        }
        else
        {
          v13 = HeapAlloc(gpheapGlobal, 1179992648, v11);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v13;
          if ( !v13 )
          {
            v5 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            PrintDebugMessage(105, 0LL, 0LL, 0LL, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v11;
        }
        if ( !v5 )
        {
          if ( v11 )
          {
            do
            {
              *(_BYTE *)(v4 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = *(_BYTE *)(v4
                                                                                   + *(_QWORD *)(*(_QWORD *)(a2 + 80)
                                                                                               + 32LL)
                                                                                   + v8);
              ++v4;
            }
            while ( v4 < v11 );
          }
          return (unsigned int)WriteObject(a1, v15, *(_QWORD *)(a2 + 88));
        }
      }
      else if ( *(_WORD *)(v6 + 2) == 2 )
      {
        v9 = HeapAlloc(gpheapGlobal, 1381258056, 1u);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v9;
        if ( !v9 )
        {
          v5 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          v10 = 105;
LABEL_25:
          PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
          return v5;
        }
        **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 1;
        return (unsigned int)WriteObject(a1, v15, *(_QWORD *)(a2 + 88));
      }
    }
  }
  return v5;
}
