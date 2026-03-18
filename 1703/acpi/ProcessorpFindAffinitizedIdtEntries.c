/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1C0085C80
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0085A70 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDss @ 0x1C0005CFC (WPP_RECORDER_SF_DDqDss.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qDss @ 0x1C0063240 (WPP_RECORDER_SF_qDss.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0085FE0 (IcIsInterruptTypeSecondary.c)
 *     IcCheckIrqConflict @ 0x1C00884E0 (IcCheckIrqConflict.c)
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
  __int64 v11; // r9
  int v12; // edx
  int *v13; // rax
  int v14; // r12d
  unsigned int v15; // ecx
  __int64 *v16; // r14
  int v17; // esi
  int v18; // r13d
  __int64 v19; // rdi
  __int64 v20; // r14
  unsigned __int8 v21; // r15
  unsigned int i; // edi
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v24; // rcx
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r9
  NTSTATUS result; // eax
  char v27; // al
  unsigned int v28; // r10d
  char v29; // al
  unsigned int v30; // r14d
  char v31; // cl
  const char *v32; // rax
  const char *v33; // rdx
  const char *v34; // rax
  const char *v35; // rdx
  int AttributeAvailableMask; // [rsp+20h] [rbp-C1h]
  unsigned __int8 Available; // [rsp+60h] [rbp-81h] BYREF
  char v38; // [rsp+61h] [rbp-80h]
  char v39[2]; // [rsp+62h] [rbp-7Fh] BYREF
  int v40; // [rsp+64h] [rbp-7Dh]
  struct _PROCESSOR_NUMBER v41; // [rsp+68h] [rbp-79h]
  int v42; // [rsp+6Ch] [rbp-75h]
  __int64 v43; // [rsp+70h] [rbp-71h]
  unsigned int v44; // [rsp+78h] [rbp-69h]
  unsigned int v45; // [rsp+7Ch] [rbp-65h]
  unsigned int v46; // [rsp+80h] [rbp-61h]
  __int64 Context; // [rsp+88h] [rbp-59h] BYREF
  __int64 v48; // [rsp+90h] [rbp-51h]
  int v49; // [rsp+98h] [rbp-49h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+A0h] [rbp-41h] BYREF
  _DWORD *v51; // [rsp+A8h] [rbp-39h]
  __int64 v52; // [rsp+B0h] [rbp-31h]
  __int64 v53; // [rsp+B8h] [rbp-29h]
  unsigned int *v54; // [rsp+C0h] [rbp-21h]
  _DWORD v55[4]; // [rsp+C8h] [rbp-19h] BYREF

  v9 = a5;
  v54 = a9;
  Context = 0LL;
  v48 = 0LL;
  v38 = a4;
  v49 = ~(a5 - 1);
  v43 = a2;
  v53 = a1;
  if ( a5 != (a5 & v49) )
    return -1073741581;
  if ( a5 > 0x10 )
    return -1073741581;
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a6);
  if ( IsInterruptTypeSecondary )
  {
    if ( a5 > 1 )
      return -1073741581;
  }
  v12 = 0;
  v52 = 0LL;
  v40 = 0;
  if ( IsInterruptTypeSecondary )
  {
    v12 = 256;
    v40 = 256;
  }
  v55[0] = 2;
  v46 = 3;
  v55[2] = 3;
  v55[1] = 1;
  if ( IsInterruptTypeSecondary )
  {
    v55[3] = 0;
    v46 = 4;
  }
  Available = 0;
  v42 = 0;
  while ( 2 )
  {
    v13 = v55;
    v45 = 0;
    v51 = v55;
    do
    {
      v14 = *v13;
      LOBYTE(v15) = 0;
      v44 = 0;
      while ( 2 )
      {
        v16 = (__int64 *)v43;
        v17 = 16;
        v18 = (unsigned __int8)v49 & (unsigned __int8)(ProcessorVectorColumnBias + v15 + v9 - 1) & 0xF;
        do
        {
          v19 = ((_BYTE)v17 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
          if ( ProcessorIdtRowPriority[v19] == v14 )
          {
            v20 = *v16;
            v21 = 0;
            for ( i = v12 + (v18 | (16 * v19)); v20; v20 &= ~(1LL << v27) )
            {
              if ( _bittest64(&v20, v21) )
              {
                *(_WORD *)&v41.Number = v21;
                v41.Group = *(_WORD *)(v43 + 8);
                ProcNumber = v41;
                ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                if ( ProcessorIndexFromNumber == -1 )
                  return -1073741811;
                if ( ProcessorIndexFromNumber >= ProcessorInstanceCount )
                  return -1073741811;
                v24 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
                if ( !v24 )
                  return -1073741811;
                if ( v42 == 1 )
                {
                  Callback = (BOOLEAN (__stdcall *)(PVOID, struct _RTL_RANGE *))ProcessorpRangeConflictCallback;
                  Context = v53;
                  LODWORD(v48) = a6;
                  WORD2(v48) = (a7 & 1) != 0;
                  BYTE6(v48) = v38;
                }
                else
                {
                  Callback = 0LL;
                  Context = 0LL;
                  v48 = 0LL;
                }
                if ( a8 == 1 )
                  ++v24;
                result = RtlIsRangeAvailable(v24, i, i + a5 - 1LL, 0, 0, &Context, Callback, &Available);
                if ( result < 0 )
                  return result;
                if ( !Available )
                  goto LABEL_27;
              }
              v27 = v21++;
            }
            if ( Available )
            {
              v28 = a6;
              v29 = a5;
              v39[0] = 0;
              if ( a6 >= 0xFFF00000 || (v30 = i, i >= i + a5) )
              {
LABEL_36:
                if ( v54 )
                  *v54 = i;
                v31 = v29 - 1;
                v32 = "edge";
                if ( (a7 & 1) == 0 )
                  v32 = "level";
                v33 = "share";
                if ( !v38 )
                  v33 = "noshare";
                WPP_RECORDER_SF_DDqDss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  (__int64)v33,
                  (__int64)"noshare",
                  v11,
                  AttributeAvailableMask,
                  i,
                  i + v31,
                  *(_QWORD *)v43,
                  v28,
                  v33,
                  v32);
                return v52;
              }
              while ( (int)IcCheckIrqConflict(v28, v30, a7, v39) >= 0 )
              {
                v28 = a6;
                if ( ++v30 >= i + a5 )
                {
                  if ( v39[0] )
                    break;
                  v29 = a5;
                  goto LABEL_36;
                }
              }
            }
LABEL_27:
            v16 = (__int64 *)v43;
          }
          v12 = v40;
          --v17;
        }
        while ( v17 );
        v9 = a5;
        v15 = a5 + v44;
        v44 = v15;
        if ( v15 < 0x10 )
          continue;
        break;
      }
      v13 = v51 + 1;
      ++v45;
      ++v51;
    }
    while ( v45 < v46 );
    if ( ++v42 <= 1 )
      continue;
    break;
  }
  LODWORD(v52) = -1073741275;
  v34 = "edge";
  if ( (a7 & 1) == 0 )
    v34 = "level";
  v35 = "share";
  if ( !v38 )
    v35 = "noshare";
  WPP_RECORDER_SF_qDss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v35,
    (__int64)"noshare",
    v11,
    AttributeAvailableMask,
    *v16,
    a6,
    v35,
    v34);
  return v52;
}
