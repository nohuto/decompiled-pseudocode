/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1C0088610
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0088400 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDss @ 0x1C000E440 (WPP_RECORDER_SF_DDqDss.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qDss @ 0x1C0064410 (WPP_RECORDER_SF_qDss.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0088988 (IcIsInterruptTypeSecondary.c)
 *     IcCheckIrqConflict @ 0x1C0093C50 (IcCheckIrqConflict.c)
 */

NTSTATUS __fastcall ProcessorpFindAffinitizedIdtEntries(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned int *a9)
{
  char v9; // r15
  char IsInterruptTypeSecondary; // al
  int v11; // r8d
  unsigned __int8 v12; // dl
  int *v13; // rax
  _DWORD *v14; // r9
  int v15; // r12d
  unsigned int v16; // ecx
  __int64 *v17; // r14
  int v18; // esi
  int v19; // r13d
  __int64 v20; // rdi
  __int64 v21; // r14
  unsigned __int8 v22; // r15
  unsigned int i; // edi
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v25; // rcx
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r9
  NTSTATUS result; // eax
  char v28; // al
  unsigned int v29; // r10d
  char v30; // al
  char v31; // cl
  const char *v32; // rax
  const char *v33; // rdx
  unsigned int v34; // r14d
  const char *v35; // rax
  const char *v36; // rdx
  int AttributeAvailableMask; // [rsp+20h] [rbp-C1h]
  unsigned __int8 Available; // [rsp+60h] [rbp-81h] BYREF
  char v39; // [rsp+61h] [rbp-80h]
  char v40[2]; // [rsp+62h] [rbp-7Fh] BYREF
  int v41; // [rsp+64h] [rbp-7Dh]
  struct _PROCESSOR_NUMBER v42; // [rsp+68h] [rbp-79h]
  int v43; // [rsp+6Ch] [rbp-75h]
  __int64 v44; // [rsp+70h] [rbp-71h]
  unsigned int v45; // [rsp+78h] [rbp-69h]
  unsigned int v46; // [rsp+7Ch] [rbp-65h]
  unsigned int v47; // [rsp+80h] [rbp-61h]
  __int64 Context; // [rsp+88h] [rbp-59h] BYREF
  __int64 v49; // [rsp+90h] [rbp-51h]
  int v50; // [rsp+98h] [rbp-49h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+A0h] [rbp-41h] BYREF
  _DWORD *v52; // [rsp+A8h] [rbp-39h]
  __int64 v53; // [rsp+B0h] [rbp-31h]
  __int64 v54; // [rsp+B8h] [rbp-29h]
  unsigned int *v55; // [rsp+C0h] [rbp-21h]
  _DWORD v56[4]; // [rsp+C8h] [rbp-19h] BYREF

  v9 = a5;
  v55 = a9;
  Context = 0LL;
  v49 = 0LL;
  v39 = a4;
  v50 = ~(a5 - 1);
  v44 = a2;
  v54 = a1;
  if ( a5 != (a5 & v50) )
    return -1073741581;
  if ( a5 > 0x10 )
    return -1073741581;
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a6);
  if ( IsInterruptTypeSecondary )
  {
    if ( a5 > 1 )
      return -1073741581;
  }
  v11 = 0;
  v53 = 0LL;
  v41 = 0;
  if ( IsInterruptTypeSecondary )
  {
    v11 = 256;
    v41 = 256;
  }
  v56[0] = 2;
  v47 = 3;
  v56[2] = 3;
  v56[1] = 1;
  if ( IsInterruptTypeSecondary )
  {
    v56[3] = 0;
    v47 = 4;
  }
  v12 = 0;
  v43 = 0;
  Available = 0;
  while ( 2 )
  {
    v13 = v56;
    v46 = 0;
    v14 = ProcessorIdtRowPriority;
    v52 = v56;
    do
    {
      v15 = *v13;
      LOBYTE(v16) = 0;
      v45 = 0;
      while ( 2 )
      {
        v17 = (__int64 *)v44;
        v18 = 16;
        v19 = (unsigned __int8)v50 & (unsigned __int8)(ProcessorVectorColumnBias + v16 + v9 - 1) & 0xF;
        do
        {
          v20 = ((_BYTE)v18 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
          if ( ProcessorIdtRowPriority[v20] == v15 )
          {
            v21 = *v17;
            v22 = 0;
            for ( i = v11 + (v19 | (16 * v20)); v21; v21 &= ~(1LL << v28) )
            {
              if ( _bittest64(&v21, v22) )
              {
                *(_WORD *)&v42.Number = v22;
                v42.Group = *(_WORD *)(v44 + 8);
                ProcNumber = v42;
                ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                if ( ProcessorIndexFromNumber == -1 )
                  return -1073741811;
                if ( ProcessorIndexFromNumber >= ProcessorInstanceCount )
                  return -1073741811;
                v25 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
                if ( !v25 )
                  return -1073741811;
                if ( v43 == 1 )
                {
                  Callback = (BOOLEAN (__stdcall *)(PVOID, struct _RTL_RANGE *))ProcessorpRangeConflictCallback;
                  Context = v54;
                  LODWORD(v49) = a6;
                  WORD2(v49) = (a7 & 1) != 0;
                  BYTE6(v49) = v39;
                }
                else
                {
                  Callback = 0LL;
                  Context = 0LL;
                  v49 = 0LL;
                }
                if ( a8 == 1 )
                  ++v25;
                result = RtlIsRangeAvailable(v25, i, i + a5 - 1LL, 0, 0, &Context, Callback, &Available);
                if ( result < 0 )
                  return result;
                v12 = Available;
                if ( !Available )
                  goto LABEL_27;
              }
              v28 = v22++;
            }
            if ( v12 )
            {
              v29 = a6;
              v30 = a5;
              v40[0] = 0;
              if ( a6 >= 0xFFF00000 || (v34 = i, i >= i + a5) )
              {
LABEL_31:
                if ( v55 )
                  *v55 = i;
                v31 = v30 - 1;
                v32 = "edge";
                if ( (a7 & 1) == 0 )
                  v32 = "level";
                v33 = "share";
                if ( !v39 )
                  v33 = "noshare";
                WPP_RECORDER_SF_DDqDss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  (__int64)v33,
                  (__int64)"noshare",
                  (__int64)v14,
                  AttributeAvailableMask,
                  i,
                  i + v31,
                  *(_QWORD *)v44,
                  v29,
                  v33,
                  v32);
                return v53;
              }
              while ( (int)IcCheckIrqConflict(v29, v34, a7, v40) >= 0 )
              {
                v29 = a6;
                if ( ++v34 >= i + a5 )
                {
                  if ( !v40[0] )
                  {
                    v30 = a5;
                    goto LABEL_31;
                  }
                  break;
                }
              }
              v12 = Available;
            }
LABEL_27:
            v17 = (__int64 *)v44;
          }
          v11 = v41;
          v14 = ProcessorIdtRowPriority;
          --v18;
        }
        while ( v18 );
        v14 = ProcessorIdtRowPriority;
        v9 = a5;
        v16 = a5 + v45;
        v45 = v16;
        if ( v16 < 0x10 )
          continue;
        break;
      }
      v14 = ProcessorIdtRowPriority;
      v13 = v52 + 1;
      ++v46;
      ++v52;
    }
    while ( v46 < v47 );
    if ( ++v43 <= 1 )
      continue;
    break;
  }
  LODWORD(v53) = -1073741275;
  v35 = "edge";
  if ( (a7 & 1) == 0 )
    v35 = "level";
  v36 = "share";
  if ( !v39 )
    v36 = "noshare";
  WPP_RECORDER_SF_qDss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v36,
    (__int64)"noshare",
    (__int64)ProcessorIdtRowPriority,
    AttributeAvailableMask,
    *v17,
    a6,
    v36,
    v35);
  return v53;
}
