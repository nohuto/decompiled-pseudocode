/*
 * XREFs of IfElse @ 0x1C001A100
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 */

__int64 __fastcall IfElse(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE *v5; // rcx
  __int64 *v6; // rdx
  unsigned __int8 *v7; // rax
  unsigned int v8; // r9d
  unsigned __int8 *v9; // r10
  unsigned __int8 v10; // r8
  unsigned __int8 i; // r11
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
  int v26; // r9d
  unsigned __int8 *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rax
  _QWORD *v34; // rdx
  char v35; // al
  __int64 v36; // rax
  unsigned __int8 v37; // r10
  int v38; // eax
  char v39; // cl
  __int64 v40; // [rsp+80h] [rbp+18h]

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
        v27 = v25 + 2;
        if ( ((v25[1] >> 6) & 3) != 0 )
        {
          v26 &= 0xFu;
          v37 = 0;
          do
          {
            v38 = *v27++;
            v39 = v37++;
            v26 |= v38 << (8 * v39 + 4);
          }
          while ( v37 < (unsigned __int8)((v25[1] >> 6) & 3) );
        }
        v28 = (__int64)&v25[v26 + 1];
      }
      else
      {
        v28 = 0LL;
      }
      v29 = *(_QWORD *)(a2 + 88);
      v30 = a1[40];
      v31 = a1[11];
      v32 = a1[10];
      v40 = a1[15];
      v33 = HeapAlloc((__int64)(a1 + 55), 1297237576, 0x50u);
      v34 = (_QWORD *)v33;
      if ( v33 )
      {
        *(_QWORD *)(v33 + 8) = a1[52];
        a1[52] = v33;
        *(_DWORD *)v33 = 1347371859;
        *(_QWORD *)(v33 + 24) = ParseScope;
        a1[15] = v40;
        *(_QWORD *)(v33 + 32) = v25;
        *(_QWORD *)(v33 + 40) = v28;
        *(_QWORD *)(v33 + 48) = a1[10];
        v35 = gdwfAMLI;
        a1[10] = v32;
        if ( (v35 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 112));
        v34[7] = a1[11];
        v36 = a1[40];
        a1[11] = v31;
        v34[8] = v36;
        a1[40] = v30;
        v34[9] = v29;
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
      v10 = (v8 >> 6) & 3;
      if ( v10 )
      {
        v8 &= 0xFu;
        for ( i = 0; i < v10; ++i )
        {
          v12 = *v9++;
          v13 = i;
          a1[15] = v9;
          v8 |= v12 << (8 * v13 + 4);
        }
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
      v21 = HeapAlloc((__int64)(a1 + 55), 1297237576, 0x50u);
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
