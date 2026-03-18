/*
 * XREFs of Notify @ 0x1C004F6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall Notify(__int64 a1, __int64 a2)
{
  const void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // al
  int v8; // eax

  LODWORD(v4) = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "OI");
  if ( !(_DWORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v5 + 56) <= 0xFFuLL )
    {
      if ( ghNotify )
      {
        v6 = *(_QWORD *)(v5 + 16);
        v7 = gdwfAMLI;
        *(_QWORD *)(a2 + 64) = v6;
        if ( (v7 & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
          v6 = *(_QWORD *)(a2 + 64);
          v5 = *(_QWORD *)(a2 + 80);
        }
        v8 = ghNotify(2LL, *(unsigned int *)(v5 + 56), v6 + 120, qword_1C0068628, RestartCtxtCallback, a1 + 328);
        v4 = (const void *)v8;
        if ( v8 == 259 )
        {
          LODWORD(v4) = 32772;
        }
        else if ( v8 )
        {
          LogError(-1072431098);
          AcpiDiagTraceAmlError(a1, -1072431098);
          PrintDebugMessage(114, v4, 0LL, 0LL, 0LL);
          LODWORD(v4) = -1072431098;
        }
      }
    }
    else
    {
      LODWORD(v4) = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      PrintDebugMessage(115, *(const void **)(*(_QWORD *)(a2 + 80) + 56LL), 0LL, 0LL, 0LL);
    }
  }
  return (unsigned int)v4;
}
