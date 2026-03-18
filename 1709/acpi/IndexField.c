/*
 * XREFs of IndexField @ 0x1C002ABB0
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

__int64 __fastcall IndexField(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int NameSpaceObject; // eax
  __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v4 = a2[10];
  v5 = 0LL;
  v13 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(v4 + 32), *(_QWORD *)(a1 + 80), (__int64)&v14, 0x80000000);
  v7 = v14;
  v8 = NameSpaceObject;
  if ( NameSpaceObject )
    goto LABEL_11;
  v8 = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72LL), *(_QWORD *)(a1 + 80), (__int64)&v13, 0x80000000);
  if ( v8 )
    goto LABEL_10;
  if ( *(_WORD *)(v7 + 66) != 5 )
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    PrintDebugMessage(64, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
LABEL_10:
    v5 = v13;
    goto LABEL_11;
  }
  v5 = v13;
  if ( *(_WORD *)(v13 + 66) == 5 )
  {
    v9 = a2 + 8;
    v8 = CreateNameSpaceObject(
           *(_QWORD *)(a1 + 320),
           0LL,
           *(_QWORD *)(a1 + 80),
           *(struct _EX_RUNDOWN_REF **)(a1 + 88),
           (struct _EX_RUNDOWN_REF **)a2 + 8,
           0);
    if ( !v8 )
    {
      *(_WORD *)(*v9 + 66) = 132;
      *(_DWORD *)(*v9 + 88) = 16;
      v10 = HeapAlloc(*(_QWORD *)(a1 + 320), 1180191048, *(_DWORD *)(*v9 + 88));
      *(_QWORD *)(*v9 + 96) = v10;
      if ( v10 )
      {
        memset(*(void **)(*v9 + 96), 0, *(unsigned int *)(*v9 + 88));
        v11 = *(__int64 **)(*v9 + 96);
        *v11 = v7;
        v11[1] = v5;
        v8 = ParseFieldList(a1, a2[5], *v9, *(unsigned int *)(a2[10] + 96LL), 0xFFFFFFFF);
        if ( !v8 )
          return v8;
      }
      else
      {
        v8 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        PrintDebugMessage(63, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    PrintDebugMessage(62, *(const void **)(a2[10] + 72LL), 0LL, 0LL, 0LL);
  }
LABEL_11:
  if ( v7 )
    DereferenceObjectEx(v7);
  if ( v5 )
    DereferenceObjectEx(v5);
  return v8;
}
