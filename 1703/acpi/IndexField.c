/*
 * XREFs of IndexField @ 0x1C0029CC0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C0017F88 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall IndexField(__int64 a1, unsigned __int64 *a2)
{
  unsigned int NameSpaceObject; // ebx
  __int64 *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rcx

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32));
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72));
    if ( !NameSpaceObject )
    {
      if ( MEMORY[0x42] == 5 )
      {
        v5 = (__int64 *)(a2 + 8);
        NameSpaceObject = CreateNameSpaceObject(
                            *(_QWORD *)(a1 + 320),
                            0LL,
                            *(_QWORD *)(a1 + 80),
                            *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                            a2 + 8,
                            0);
        if ( !NameSpaceObject )
        {
          *(_WORD *)(*v5 + 66) = 132;
          *(_DWORD *)(*v5 + 88) = 16;
          v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1180191048, *(_DWORD *)(*v5 + 88));
          *(_QWORD *)(*v5 + 96) = v6;
          if ( v6 )
          {
            memset(*(void **)(*v5 + 96), 0, *(unsigned int *)(*v5 + 88));
            v7 = *(_QWORD **)(*v5 + 96);
            *v7 = 0LL;
            v7[1] = 0LL;
            return (unsigned int)ParseFieldList(a1, a2[5], *v5, *(unsigned int *)(a2[10] + 96), 0xFFFFFFFF);
          }
          else
          {
            NameSpaceObject = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            PrintDebugMessage(63, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        NameSpaceObject = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(64, *(const void **)(a2[10] + 32), 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
