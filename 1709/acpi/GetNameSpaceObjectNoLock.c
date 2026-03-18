/*
 * XREFs of GetNameSpaceObjectNoLock @ 0x1C000BEE0
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000CA64 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObjectNoLock(const char *Src, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rbp
  int v7; // r14d
  const char *i; // rsi
  unsigned __int64 v9; // rax
  char v10; // r12
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  unsigned int v15; // edi
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2;
  v7 = (int)Src;
  if ( !a2 )
    v6 = gpnsNameSpaceRoot;
  if ( *Src == 92 )
  {
    v6 = gpnsNameSpaceRoot;
    i = Src + 1;
  }
  else
  {
    for ( i = Src; *i == 94; ++i )
    {
      if ( !v6 )
        break;
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  *(_QWORD *)a3 = v6;
  if ( !v6 )
  {
    v15 = -1073741772;
    goto LABEL_26;
  }
  if ( !*i )
  {
LABEL_31:
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)a3 + 112LL));
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
    goto LABEL_13;
  if ( ((*Src - 92) & 0xFD) == 0 )
    goto LABEL_13;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  if ( v9 > 4 )
LABEL_13:
    v10 = 0;
  else
    v10 = 1;
LABEL_14:
  while ( 1 )
  {
    v11 = (_QWORD *)(v6 + 24);
    if ( (_QWORD *)*v11 != v11 )
      break;
LABEL_23:
    v15 = -1073741772;
    if ( v10 )
    {
      if ( v6 )
      {
        v6 = *(_QWORD *)(v6 + 16);
        if ( v6 )
          continue;
      }
    }
    goto LABEL_26;
  }
  v12 = (__int64)strchr(i, 46);
  if ( v12 )
  {
    LODWORD(v12) = v12 - (_DWORD)i;
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( i[v12] );
  }
  if ( (unsigned int)v12 <= 4 )
  {
    v17 = 1600085855;
    v13 = (unsigned int)v12;
    memmove(&v17, i, (unsigned int)v12);
    v14 = (_QWORD *)*v11;
    if ( v11 != (_QWORD *)*v11 )
    {
      while ( v14[2] )
      {
        if ( *((_DWORD *)v14 + 10) == v17 )
        {
          i += v13;
          v6 = (__int64)v14;
          if ( *i == 46 )
          {
            ++i;
            goto LABEL_14;
          }
          if ( *i )
            goto LABEL_14;
          *(_QWORD *)a3 = v14;
          goto LABEL_31;
        }
        v14 = (_QWORD *)*v14;
        if ( v11 == v14 )
          goto LABEL_23;
      }
    }
    goto LABEL_23;
  }
  v15 = -1073741773;
  LogError(3221225523LL);
  AcpiDiagTraceAmlError(0LL, 3221225523LL);
  PrintDebugMessage(57, v7, 0, 0, 0LL);
LABEL_26:
  if ( a4 < 0 && v15 == -1073741772 )
  {
    LogError(3221225524LL);
    AcpiDiagTraceAmlError(0LL, 3221225524LL);
    PrintDebugMessage(58, v7, 0, 0, 0LL);
  }
  *(_QWORD *)a3 = 0LL;
  return v15;
}
