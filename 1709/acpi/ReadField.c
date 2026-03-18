/*
 * XREFs of ReadField @ 0x1C001FD00
 * Callers:
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ReadObject @ 0x1C001A0F0 (ReadObject.c)
 *     AccFieldUnit @ 0x1C001FA10 (AccFieldUnit.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x1C005FD04 (RawFieldAccess.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  int v10; // ecx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdi
  int ObjectTypeName; // eax
  unsigned int v26; // r8d
  void *v27; // rax
  unsigned int v28; // [rsp+70h] [rbp+18h] BYREF

  if ( (a3[3] & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
      return RawFieldAccess(a1, 0LL, a2);
    LogError(3222536209LL);
    AcpiDiagTraceAmlError(a1, 3222536209LL);
    PrintDebugMessage(162, a3[3], 0, 0, 0LL);
    return 3222536209LL;
  }
  v8 = 0;
  v28 = 0;
  v9 = 8;
  if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v28), v28 >= 2) )
    v10 = 8;
  else
    v10 = 4;
  if ( !*(_WORD *)(a4 + 2) )
  {
    if ( (a3[3] & 0x10000) == 0 && a3[2] <= (unsigned int)(8 * v10) )
    {
      *(_WORD *)(a4 + 2) = 1;
      v11 = a4 + 16;
      v9 = v10;
      goto LABEL_9;
    }
    *(_WORD *)(a4 + 2) = 3;
    v26 = (unsigned int)(a3[2] + 7) >> 3;
    *(_DWORD *)(a4 + 24) = v26;
    v27 = (void *)HeapAlloc(gpheapGlobal, 1179992648, v26);
    *(_QWORD *)(a4 + 32) = v27;
    if ( !v27 )
    {
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(161, *(_DWORD *)(a4 + 24), 0, 0, 0LL);
      return 3221225626LL;
    }
    memset(v27, 0, *(unsigned int *)(a4 + 24));
    goto LABEL_40;
  }
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v11 = a4 + 16;
    goto LABEL_9;
  }
  if ( *(_WORD *)(a4 + 2) != 2 )
  {
    if ( *(_WORD *)(a4 + 2) != 3 )
    {
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
      PrintDebugMessage(163, ObjectTypeName, 0, 0, 0LL);
      return 3222536201LL;
    }
LABEL_40:
    v9 = *(_DWORD *)(a4 + 24);
    goto LABEL_41;
  }
  v9 = *(_DWORD *)(a4 + 24) - 1;
LABEL_41:
  v11 = *(_QWORD *)(a4 + 32);
LABEL_9:
  if ( *(_WORD *)(a2 + 2) != 5 )
    goto LABEL_17;
  v12 = **(_QWORD **)(a2 + 32);
  if ( *(_WORD *)(v12 + 66) != 131 )
    goto LABEL_17;
  v13 = gpRSAccessHead;
  if ( !gpRSAccessHead )
    goto LABEL_17;
  while ( *(_DWORD *)(v13 + 8) != *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v12 + 96) + 96LL) + 12LL) )
  {
    v13 = *(_QWORD *)v13;
    if ( !v13 )
      goto LABEL_17;
  }
  if ( v13 && *(_QWORD *)(v13 + 32) && !*(_QWORD *)(v13 + 16) )
    return RawFieldAccess(a1, 0LL, a2);
LABEL_17:
  v14 = 128;
  if ( a3[5] )
    v14 = a3[7] + 128;
  v15 = HeapAlloc(a1 + 480, 1297237576, v14);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)(v15 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v15;
    *(_QWORD *)(v15 + 24) = ReadFieldObj;
    *(_DWORD *)v15 = 1330004801;
    *(_QWORD *)(v15 + 32) = a2;
    *(_QWORD *)(v15 + 40) = v11;
    *(_QWORD *)(v15 + 48) = v11 + v9;
    v17 = a3[3] & 0xF;
    v18 = 1;
    if ( (unsigned int)(v17 - 1) <= 3 )
      v18 = 1 << (v17 - 1);
    v19 = 8 * v18;
    *(_DWORD *)(v16 + 56) = v18;
    v20 = 8 * v18 + a3[1] + a3[2] - 1;
    if ( v19 == 8 )
      v21 = v20 >> 3;
    else
      v21 = v20 / v19;
    *(_DWORD *)(v16 + 60) = v21;
    v22 = 8 * *(_DWORD *)(v16 + 56);
    if ( v22 >= 0x40 )
      v23 = 0LL;
    else
      v23 = 1LL << v22;
    *(_QWORD *)(v16 + 64) = v23 - 1;
    *(_DWORD *)(v16 + 72) = 8 * *(_DWORD *)(v16 + 56) - a3[1];
    *(_DWORD *)(v16 + 76) = a3[1];
    memmove((void *)(v16 + 96), a3, (unsigned int)(a3[7] + 32));
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
