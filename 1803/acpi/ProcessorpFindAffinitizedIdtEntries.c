/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1C008E908
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C008ED20 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_DDqDss @ 0x1C00580F0 (WPP_RECORDER_SF_DDqDss.c)
 *     WPP_RECORDER_SF_qDss @ 0x1C0058328 (WPP_RECORDER_SF_qDss.c)
 *     IcCheckIrqConflict @ 0x1C0091F80 (IcCheckIrqConflict.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0092638 (IcIsInterruptTypeSecondary.c)
 */

NTSTATUS __fastcall ProcessorpFindAffinitizedIdtEntries(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned int *a9)
{
  __int64 *v9; // r15
  unsigned __int8 v10; // di
  NTSTATUS result; // eax
  char IsInterruptTypeSecondary; // al
  __int64 v13; // r9
  unsigned __int8 v14; // dl
  int *v15; // rax
  int v16; // r10d
  unsigned int v17; // r13d
  int v18; // r8d
  int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // r14
  unsigned __int8 v22; // r15
  unsigned int v23; // edi
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v25; // r9
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r10
  struct _RTL_RANGE_LIST *v27; // rcx
  char v28; // al
  unsigned int v29; // r14d
  bool v30; // sf
  char v31; // al
  bool v32; // zf
  int v33; // r14d
  const char *v34; // rax
  const char *v35; // rdx
  const char *v36; // rax
  const char *v37; // rdx
  int AttributeAvailableMask; // [rsp+20h] [rbp-B9h]
  unsigned __int8 Available; // [rsp+60h] [rbp-79h] BYREF
  char v40; // [rsp+61h] [rbp-78h]
  char v41[2]; // [rsp+62h] [rbp-77h] BYREF
  int v42; // [rsp+64h] [rbp-75h]
  unsigned int v43; // [rsp+68h] [rbp-71h]
  struct _PROCESSOR_NUMBER v44; // [rsp+6Ch] [rbp-6Dh]
  int v45; // [rsp+70h] [rbp-69h]
  int v46; // [rsp+74h] [rbp-65h]
  int v47; // [rsp+78h] [rbp-61h]
  unsigned int v48; // [rsp+7Ch] [rbp-5Dh]
  unsigned int v49; // [rsp+80h] [rbp-59h]
  __int64 *v50; // [rsp+88h] [rbp-51h]
  __int64 Context; // [rsp+90h] [rbp-49h] BYREF
  __int64 v52; // [rsp+98h] [rbp-41h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+A0h] [rbp-39h] BYREF
  int v54; // [rsp+A8h] [rbp-31h]
  _DWORD *v55; // [rsp+B0h] [rbp-29h]
  __int64 v56; // [rsp+B8h] [rbp-21h]
  unsigned int *v57; // [rsp+C0h] [rbp-19h]
  _DWORD v58[4]; // [rsp+C8h] [rbp-11h] BYREF

  v9 = a2;
  v57 = a9;
  Context = 0LL;
  v52 = 0LL;
  v10 = ~(a5 - 1);
  v40 = a4;
  v50 = a2;
  v56 = a1;
  v46 = ~(a5 - 1);
  if ( a5 != (a5 & v46) )
    return -1073741581;
  if ( a5 > 0x10 )
    return -1073741581;
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a6);
  if ( IsInterruptTypeSecondary )
  {
    if ( a5 > 1 )
      return -1073741581;
  }
  v58[0] = 2;
  v58[1] = 1;
  v13 = 0LL;
  if ( IsInterruptTypeSecondary )
    v13 = 256LL;
  v49 = 3;
  v58[2] = 3;
  v43 = v13;
  if ( IsInterruptTypeSecondary )
  {
    v58[3] = 0;
    v49 = 4;
  }
  v14 = 0;
  v45 = 0;
  Available = 0;
  while ( 2 )
  {
    v15 = v58;
    v48 = 0;
    v55 = v58;
    do
    {
      v16 = *v15;
      v17 = 0;
      v47 = *v15;
      while ( 2 )
      {
        v18 = 16;
        v42 = 16;
        v19 = v10 & (unsigned __int8)(a5 + v17 + ProcessorVectorColumnBias - 1) & 0xF;
        v54 = v19;
        do
        {
          v20 = ((_BYTE)v18 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
          if ( ProcessorIdtRowPriority[v20] == v16 )
          {
            v21 = *v9;
            v22 = 0;
            v23 = v13 + (v19 | (16 * v20));
            if ( v21 )
            {
              while ( 1 )
              {
                if ( _bittest64(&v21, v22) )
                {
                  *(_WORD *)&v44.Number = v22;
                  v44.Group = *((_WORD *)v50 + 4);
                  ProcNumber = v44;
                  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                  if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
                    v25 = 0LL;
                  else
                    v25 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
                  if ( !v25 )
                    return -1073741811;
                  if ( v45 == 1 )
                  {
                    Callback = ProcessorpRangeConflictCallback;
                    Context = v56;
                    LODWORD(v52) = a6;
                    WORD2(v52) = (a7 & 1) != 0;
                    BYTE6(v52) = v40;
                  }
                  else
                  {
                    Callback = 0LL;
                    Context = 0LL;
                    v52 = 0LL;
                  }
                  v27 = v25 + 1;
                  if ( a8 != 1 )
                    v27 = v25;
                  result = RtlIsRangeAvailable(v27, v23, v23 + a5 - 1LL, 0, 0, &Context, Callback, &Available);
                  if ( result < 0 )
                    return result;
                  v14 = Available;
                  if ( !Available )
                    goto LABEL_39;
                }
                v28 = v22++;
                v21 &= ~(1LL << v28);
                if ( !v21 )
                {
                  v18 = v42;
                  break;
                }
              }
            }
            if ( v14 )
            {
              v41[0] = 0;
              if ( a6 >= 0xFFF00000 )
                goto LABEL_47;
              v29 = v23;
              if ( v23 >= v23 + a5 )
                goto LABEL_47;
              while ( 1 )
              {
                v30 = (int)IcCheckIrqConflict(a6, v29, a7, v41) < 0;
                v31 = 1;
                if ( v30 )
                  break;
                if ( ++v29 >= v23 + a5 )
                {
                  v31 = v41[0];
                  break;
                }
              }
              if ( !v31 )
              {
LABEL_47:
                v33 = 0;
                if ( v57 )
                  *v57 = v23;
                v34 = "edge";
                if ( (a7 & 1) == 0 )
                  v34 = "level";
                v35 = "share";
                if ( !v40 )
                  v35 = "noshare";
                WPP_RECORDER_SF_DDqDss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  (__int64)v35,
                  (__int64)"noshare",
                  v13,
                  AttributeAvailableMask,
                  v23,
                  v23 + a5 - 1,
                  *v50,
                  a6,
                  v35,
                  v34);
                return v33;
              }
              v14 = Available;
LABEL_39:
              v18 = v42;
            }
            v9 = v50;
          }
          v19 = v54;
          v32 = v18-- == 1;
          v13 = v43;
          v16 = v47;
          v42 = v18;
        }
        while ( !v32 );
        v10 = v46;
        v17 += a5;
        if ( v17 < 0x10 )
          continue;
        break;
      }
      v15 = v55 + 1;
      ++v48;
      ++v55;
    }
    while ( v48 < v49 );
    if ( ++v45 <= 1 )
      continue;
    break;
  }
  v33 = -1073741275;
  v36 = "edge";
  if ( (a7 & 1) == 0 )
    v36 = "level";
  v37 = "share";
  if ( !v40 )
    v37 = "noshare";
  WPP_RECORDER_SF_qDss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v37,
    (__int64)"noshare",
    v43,
    AttributeAvailableMask,
    *v9,
    a6,
    v37,
    v36);
  return v33;
}
