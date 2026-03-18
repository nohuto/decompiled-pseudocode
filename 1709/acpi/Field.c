/*
 * XREFs of Field @ 0x1C001A430
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C001BFC8 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall Field(_QWORD *a1, __int64 a2)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax

  NameSpaceObject = GetNameSpaceObject(*(void **)(*(_QWORD *)(a2 + 80) + 32LL));
  if ( !NameSpaceObject )
  {
    if ( MEMORY[0x42] == 10 )
    {
      v5 = a2 + 64;
      NameSpaceObject = CreateNameSpaceObject(a1[40], 0LL, a1[10], a1[11], a2 + 64, 0);
      if ( !NameSpaceObject )
      {
        *(_WORD *)(*(_QWORD *)v5 + 66LL) = 131;
        *(_DWORD *)(*(_QWORD *)v5 + 88LL) = 8;
        v6 = HeapAlloc(a1[40], 1329874504, *(_DWORD *)(*(_QWORD *)v5 + 88LL));
        *(_QWORD *)(*(_QWORD *)v5 + 96LL) = v6;
        if ( v6 )
        {
          memset(*(void **)(*(_QWORD *)v5 + 96LL), 0, *(unsigned int *)(*(_QWORD *)v5 + 88LL));
          v7 = *(_QWORD *)(*(_QWORD *)v5 + 96LL);
          *(_QWORD *)v7 = 0LL;
          return (unsigned int)ParseFieldList(
                                 (_DWORD)a1,
                                 *(_QWORD *)(a2 + 40),
                                 *(_QWORD *)v5,
                                 *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL),
                                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL));
        }
        else
        {
          NameSpaceObject = -1073741670;
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(51, 0, 0, 0, 0LL);
        }
      }
    }
    else
    {
      NameSpaceObject = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      PrintDebugMessage(52, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
