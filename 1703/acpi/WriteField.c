/*
 * XREFs of WriteField @ 0x1C0017038
 * Callers:
 *     AccFieldUnit @ 0x1C0017A60 (AccFieldUnit.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     FindRSAccess @ 0x1C0017018 (FindRSAccess.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x1C005EB24 (RawFieldAccess.c)
 */

__int64 __fastcall WriteField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r15d
  __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 RSAccess; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int ObjectTypeName; // edx
  int v17; // ecx

  v5 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  v8 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
      return (unsigned int)RawFieldAccess(a1, 1LL, a2, a4);
    v13 = -1072431087;
    LogError(3222536209LL);
    AcpiDiagTraceAmlError(v8, 3222536209LL);
    ObjectTypeName = *(_DWORD *)(a3 + 12);
    v17 = 213;
    goto LABEL_19;
  }
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v9 = 8;
    v10 = a4 + 16;
    if ( v5 < 8 )
      v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  }
  else
  {
    if ( *(_WORD *)(a4 + 2) == 2 )
    {
      v9 = *(_DWORD *)(a4 + 24) - 1;
    }
    else
    {
      if ( *(_WORD *)(a4 + 2) != 3 )
      {
        v13 = -1072431095;
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(v8, 3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
        v17 = 214;
LABEL_19:
        PrintDebugMessage(v17, ObjectTypeName, 0, 0, 0LL);
        return v13;
      }
      v9 = *(_DWORD *)(a4 + 24);
    }
    v10 = *(_QWORD *)(a4 + 32);
  }
  if ( *(_WORD *)(a2 + 2) == 5 )
  {
    v11 = **(_QWORD **)(a2 + 32);
    if ( *(_WORD *)(v11 + 66) == 131 )
    {
      RSAccess = FindRSAccess(*(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v11 + 96) + 96LL) + 12LL));
      if ( RSAccess )
      {
        if ( *(_QWORD *)(RSAccess + 32) && !*(_QWORD *)(RSAccess + 16) )
        {
          a1 = v8;
          return (unsigned int)RawFieldAccess(a1, 1LL, a2, a4);
        }
      }
    }
  }
  v13 = 0;
  v14 = HeapAlloc(v8 + 440, 1297237576, 0x40u);
  if ( !v14 )
  {
    v13 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(v8, 3222536194LL);
    ObjectTypeName = 0;
    v17 = 153;
    goto LABEL_19;
  }
  *(_QWORD *)(v14 + 8) = *(_QWORD *)(v8 + 416);
  *(_QWORD *)(v8 + 416) = v14;
  *(_QWORD *)(v14 + 24) = WriteFieldLoop;
  *(_DWORD *)v14 = 1279677015;
  *(_QWORD *)(v14 + 32) = a2;
  *(_QWORD *)(v14 + 40) = a3;
  *(_QWORD *)(v14 + 48) = v10;
  *(_DWORD *)(v14 + 56) = v9;
  *(_DWORD *)(v14 + 60) = v5;
  return v13;
}
