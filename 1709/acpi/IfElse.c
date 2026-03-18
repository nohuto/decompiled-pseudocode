/*
 * XREFs of IfElse @ 0x1C000C3D0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 */

__int64 __fastcall IfElse(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE *v5; // rcx
  __int64 *v6; // rdx
  unsigned __int8 *v7; // rax
  unsigned int v8; // r9d
  unsigned __int8 *v9; // r10
  unsigned int v10; // r8d
  unsigned __int8 v11; // r11
  int v12; // eax
  unsigned __int8 v13; // cl
  __int64 v14; // r12
  __int64 v15; // rdi
  unsigned int v16; // ebp
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rdx
  char v23; // al
  __int64 v24; // rax
  _BYTE *v25; // r14
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  unsigned __int8 *v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rax
  _QWORD *v35; // rdx
  char v36; // al
  __int64 v37; // rax
  unsigned __int8 v38; // r10
  int v39; // eax
  unsigned __int8 v40; // cl
  __int64 v41; // [rsp+80h] [rbp+18h]

  if ( **(_BYTE **)(a2 + 32) != 0xA0 )
  {
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(59, 0, 0, 0, 0LL);
    return 3222536193LL;
  }
  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "I");
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
    {
      v25 = *(_BYTE **)(a2 + 40);
      v16 = 0;
      if ( (unsigned __int64)v25 < *(_QWORD *)(a2 + 48) && *v25 == 0xA1 )
      {
        v26 = (unsigned __int8)v25[1];
        v27 = v26 >> 6;
        v28 = v25 + 2;
        if ( v25[1] >> 6 )
        {
          v26 &= 0xFu;
          v38 = 0;
          do
          {
            v39 = *v28++;
            v40 = v38++;
            v26 |= v39 << (8 * v40 + 4);
          }
          while ( v38 < (unsigned __int8)v27 );
        }
        v29 = (__int64)&v25[v26 + 1];
      }
      else
      {
        v29 = 0LL;
      }
      v30 = *(_QWORD *)(a2 + 88);
      v31 = a1[40];
      v32 = a1[11];
      v33 = a1[10];
      v41 = a1[15];
      v34 = HeapAlloc((__int64)(a1 + 60), 1297237576, 0x50u);
      v35 = (_QWORD *)v34;
      if ( v34 )
      {
        *(_QWORD *)(v34 + 8) = a1[52];
        a1[52] = v34;
        *(_DWORD *)v34 = 1347371859;
        *(_QWORD *)(v34 + 24) = ParseScope;
        a1[15] = v41;
        *(_QWORD *)(v34 + 32) = v25;
        *(_QWORD *)(v34 + 40) = v29;
        *(_QWORD *)(v34 + 48) = a1[10];
        v36 = gdwfAMLI;
        a1[10] = v33;
        if ( (v36 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v33 + 112));
        v35[7] = a1[11];
        v37 = a1[40];
        a1[11] = v32;
        v35[8] = v37;
        a1[40] = v31;
        v35[9] = v30;
        return v16;
      }
      goto LABEL_31;
    }
    v5 = *(_BYTE **)(a2 + 40);
    v6 = (__int64 *)(a2 + 40);
    a1[15] = v5;
    if ( (unsigned __int64)v5 < *(_QWORD *)(a2 + 48) && *v5 == 0xA1 )
    {
      a1[15] = v5 + 1;
      if ( a2 != -40 )
        *v6 = (__int64)(v5 + 1);
      v7 = (unsigned __int8 *)a1[15];
      v8 = *v7;
      v9 = v7 + 1;
      a1[15] = v7 + 1;
      v10 = v8 >> 6;
      if ( (unsigned __int8)(v8 >> 6) )
      {
        v8 &= 0xFu;
        v11 = 0;
        do
        {
          v12 = *v9++;
          v13 = v11++;
          a1[15] = v9;
          v8 |= v12 << (8 * v13 + 4);
        }
        while ( v11 < (unsigned __int8)v10 );
      }
      if ( a2 != -40 )
        *v6 += v8;
      v14 = *v6;
      v15 = *(_QWORD *)(a2 + 88);
      v16 = 0;
      v17 = a1[40];
      v18 = a1[11];
      v19 = a1[10];
      v20 = a1[15];
      v21 = HeapAlloc((__int64)(a1 + 60), 1297237576, 0x50u);
      v22 = (_QWORD *)v21;
      if ( v21 )
      {
        *(_QWORD *)(v21 + 8) = a1[52];
        a1[52] = v21;
        *(_DWORD *)v21 = 1347371859;
        *(_QWORD *)(v21 + 24) = ParseScope;
        a1[15] = v20;
        *(_QWORD *)(v21 + 32) = v14;
        *(_QWORD *)(v21 + 40) = 0LL;
        *(_QWORD *)(v21 + 48) = a1[10];
        v23 = gdwfAMLI;
        a1[10] = v19;
        if ( (v23 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 112));
        v22[7] = a1[11];
        v24 = a1[40];
        a1[11] = v18;
        v22[8] = v24;
        a1[40] = v17;
        v22[9] = v15;
        return v16;
      }
LABEL_31:
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      return (unsigned int)-1072431102;
    }
  }
  return result;
}
