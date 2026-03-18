/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C008ED20
 * Callers:
 *     <none>
 * Callees:
 *     IrqPolicyGetDevicePolicy @ 0x1C008DA58 (IrqPolicyGetDevicePolicy.c)
 *     IrqPolicyQuerySteeringEnabledForInterrupt @ 0x1C008DFA8 (IrqPolicyQuerySteeringEnabledForInterrupt.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C008E4A0 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C008E908 (ProcessorpFindAffinitizedIdtEntries.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C008EFCC (ProcessorpGetSecondaryInterruptAffinity.c)
 *     ProcessorpSelectProcessorSet @ 0x1C008F620 (ProcessorpSelectProcessorSet.c)
 *     ProcessorpValidateTargetSet @ 0x1C008F824 (ProcessorpValidateTargetSet.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0092638 (IcIsInterruptTypeSecondary.c)
 */

NTSTATUS __fastcall ProcessorpFindIdtEntriesApic(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        int a8)
{
  int DeviceIdtAssignment; // ebx
  __int128 v12; // xmm0
  NTSTATUS result; // eax
  int DevicePolicy; // eax
  char v15; // r14
  unsigned __int16 v16; // si
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS SecondaryInterruptAffinity; // ecx
  __int64 v21; // r8
  __int64 v22; // r8
  __int128 v23; // xmm0
  char SteeringEnabledForInterrupt; // al
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r8
  __int128 v28; // xmm0
  _BYTE v29[4]; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+5Ch] [rbp-35h] BYREF
  int v31; // [rsp+60h] [rbp-31h] BYREF
  __int128 v32; // [rsp+68h] [rbp-29h] BYREF
  __int128 v33; // [rsp+78h] [rbp-19h] BYREF
  int v34; // [rsp+8Ch] [rbp-5h]

  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v33);
  if ( DeviceIdtAssignment >= 0 )
  {
    v12 = v33;
    *(_DWORD *)(a3 + 32) = v34;
    LOWORD(v30) = IrqMachinePolicy;
    *(_BYTE *)(a3 + 4) = 1;
    *(_OWORD *)(a3 + 16) = v12;
    IrqPolicyGetDevicePolicy(Pdo, a2, (unsigned __int64 *)&v32, &v31, (__int16 *)&v30, (__int64)v29);
    *(_WORD *)(a3 + 6) = v30;
    return DeviceIdtAssignment;
  }
  if ( *(_BYTE *)(a3 + 4) )
  {
    v16 = *(_WORD *)(a3 + 6);
    v15 = *(_BYTE *)(a3 + 8);
    v32 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    DevicePolicy = IrqPolicyGetDevicePolicy(Pdo, a2, (unsigned __int64 *)&v32, &v31, (__int16 *)&v30, (__int64)v29);
    v15 = v29[0];
    if ( DevicePolicy >= 0 )
    {
      v16 = v30;
    }
    else
    {
      v16 = IrqMachinePolicy;
      v32 = 0uLL;
    }
  }
  v17 = a7 & 1;
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
  {
    v30 = 0;
    SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(v19, a4, &v32);
    if ( SecondaryInterruptAffinity >= 0 )
    {
      v15 = 0;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (__int64)Pdo,
                                     (__int64 *)&v32,
                                     v21,
                                     v17,
                                     a4,
                                     a5,
                                     a6,
                                     a8,
                                     &v30);
LABEL_24:
      if ( SecondaryInterruptAffinity >= 0 )
      {
        v28 = v32;
        *(_DWORD *)(a3 + 32) = v30;
        *(_OWORD *)(a3 + 16) = v28;
        *(_WORD *)(a3 + 6) = v16;
        *(_BYTE *)(a3 + 8) = v15;
        *(_BYTE *)(a3 + 4) = 1;
      }
    }
  }
  else
  {
    if ( (_QWORD)v32 )
    {
      if ( (unsigned __int8)ProcessorpValidateTargetSet(&v32) )
      {
        result = ProcessorpFindAffinitizedIdtEntries((__int64)Pdo, (__int64 *)&v32, v22, v17, a4, a5, a6, a8, &v30);
        v18 = (unsigned int)result;
        if ( result >= 0 )
        {
          v23 = v32;
          *(_DWORD *)(a3 + 32) = v30;
          *(_OWORD *)(a3 + 16) = v23;
          *(_WORD *)(a3 + 6) = v16;
          *(_BYTE *)(a3 + 8) = v15;
          *(_BYTE *)(a3 + 4) = 1;
          return result;
        }
      }
      else
      {
        v18 = 3221225659LL;
      }
      if ( v16 == 4 )
      {
        if ( a2 && (*(_BYTE *)(a2 + 4) & 4) != 0 )
          return v18;
        v16 = IrqMachinePolicy;
      }
    }
    SteeringEnabledForInterrupt = IrqPolicyQuerySteeringEnabledForInterrupt(a5, v18, a6 & 1);
    v30 = 0;
    LOBYTE(v33) = 0;
    while ( 1 )
    {
      LOBYTE(v26) = SteeringEnabledForInterrupt;
      LOBYTE(v25) = v15;
      SecondaryInterruptAffinity = ProcessorpSelectProcessorSet(v16, v25, v26, (unsigned int)&v32, (__int64)&v33);
      if ( SecondaryInterruptAffinity < 0 )
        break;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (__int64)Pdo,
                                     (__int64 *)&v32,
                                     v27,
                                     v17,
                                     a4,
                                     a5,
                                     a6,
                                     a8,
                                     &v30);
      SteeringEnabledForInterrupt = 0;
      if ( SecondaryInterruptAffinity >= 0 )
        goto LABEL_24;
    }
  }
  return SecondaryInterruptAffinity;
}
