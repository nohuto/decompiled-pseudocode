/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C0085A70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C00840E4 (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0085C80 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0085FE0 (IcIsInterruptTypeSecondary.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0086860 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C0087C78 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpSelectProcessorSet @ 0x1C008833C (ProcessorpSelectProcessorSet.c)
 *     ProcessorpValidateTargetSet @ 0x1C0088DD4 (ProcessorpValidateTargetSet.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C00A5970 (ProcessorpGetSecondaryInterruptAffinity.c)
 */

__int64 __fastcall ProcessorpFindIdtEntriesApic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        unsigned int a8)
{
  int v10; // esi
  int DeviceIdtAssignment; // ebx
  int DevicePolicy; // eax
  char v13; // r14
  unsigned __int16 v14; // si
  unsigned int v15; // edx
  int v16; // r8d
  __int16 v17; // ax
  char v18; // al
  int SecondaryInterruptAffinity; // ecx
  int v20; // r8d
  int v21; // r9d
  __int128 v22; // xmm0
  __int64 result; // rax
  int v24; // r9d
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  unsigned int v27; // ebx
  int v28; // r8d
  int v29; // r9d
  _BYTE v30[4]; // [rsp+50h] [rbp-59h] BYREF
  int v31; // [rsp+54h] [rbp-55h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-51h]
  __int128 v33; // [rsp+60h] [rbp-49h] BYREF
  char v34; // [rsp+70h] [rbp-39h] BYREF
  __int64 v35; // [rsp+78h] [rbp-31h]
  __int128 v36; // [rsp+80h] [rbp-29h] BYREF
  __int64 v37; // [rsp+90h] [rbp-19h]

  v32 = a4;
  v10 = a1;
  v35 = a1;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v36);
  if ( DeviceIdtAssignment >= 0 )
  {
    v26 = v36;
    *(_DWORD *)(a3 + 32) = HIDWORD(v37);
    LOWORD(v31) = IrqMachinePolicy;
    *(_BYTE *)(a3 + 4) = 1;
    *(_OWORD *)(a3 + 16) = v26;
    IrqPolicyGetDevicePolicy(v10, a2, (unsigned int)&v33, (unsigned int)&v34, (__int64)&v31, (__int64)v30);
    *(_WORD *)(a3 + 6) = v31;
    return (unsigned int)DeviceIdtAssignment;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 4) )
    {
      v14 = *(_WORD *)(a3 + 6);
      v13 = *(_BYTE *)(a3 + 8);
      v33 = *(_OWORD *)(a3 + 16);
    }
    else
    {
      DevicePolicy = IrqPolicyGetDevicePolicy(
                       v10,
                       a2,
                       (unsigned int)&v33,
                       (unsigned int)&v34,
                       (__int64)&v31,
                       (__int64)v30);
      v13 = v30[0];
      if ( DevicePolicy < 0 )
      {
        v14 = IrqMachinePolicy;
        v33 = 0uLL;
      }
      else
      {
        v14 = v31;
      }
    }
    if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
    {
      v27 = v32;
      v31 = 0;
      SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(0LL, v32, &v33);
      if ( SecondaryInterruptAffinity >= 0 )
      {
        LOBYTE(v29) = a7 & 1;
        v13 = 0;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       v35,
                                       (unsigned int)&v33,
                                       v28,
                                       v29,
                                       v27,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v31);
LABEL_13:
        if ( SecondaryInterruptAffinity >= 0 )
        {
          v22 = v33;
          *(_DWORD *)(a3 + 32) = v31;
          *(_OWORD *)(a3 + 16) = v22;
          *(_WORD *)(a3 + 6) = v14;
          *(_BYTE *)(a3 + 8) = v13;
          *(_BYTE *)(a3 + 4) = 1;
        }
      }
      return (unsigned int)SecondaryInterruptAffinity;
    }
    if ( !(_QWORD)v33 )
      goto LABEL_7;
    if ( (unsigned __int8)ProcessorpValidateTargetSet(&v33) )
    {
      LOBYTE(v24) = a7 & 1;
      result = ProcessorpFindAffinitizedIdtEntries(v35, (unsigned int)&v33, v16, v24, v32, a5, a6, a8, (__int64)&v31);
      v15 = result;
      if ( (int)result >= 0 )
      {
        v25 = v33;
        *(_DWORD *)(a3 + 32) = v31;
        *(_OWORD *)(a3 + 16) = v25;
        *(_WORD *)(a3 + 6) = v14;
        *(_BYTE *)(a3 + 8) = v13;
        *(_BYTE *)(a3 + 4) = 1;
        return result;
      }
    }
    else
    {
      v15 = -1073741637;
    }
    if ( v14 != 4 )
    {
LABEL_7:
      v17 = IrqMachinePolicy;
      goto LABEL_8;
    }
    if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
    {
      v17 = IrqMachinePolicy;
      v14 = IrqMachinePolicy;
LABEL_8:
      if ( v17 == 6 )
      {
        v37 = 0LL;
        LODWORD(v36) = a5;
        BYTE4(v36) = a5 + 0x100000 > 0xFFFFE;
        WORD3(v36) = 1;
        BYTE5(v36) = a6 & 1;
        *((_QWORD *)&v36 + 1) = KeQueryGroupAffinity(0);
        v18 = IrqPolicyQueryInterruptSteeringEnabled(&v36);
      }
      else
      {
        v18 = 0;
      }
      LOBYTE(v36) = 0;
      v31 = 0;
      while ( 1 )
      {
        LOBYTE(v16) = v18;
        LOBYTE(v15) = v13;
        SecondaryInterruptAffinity = ProcessorpSelectProcessorSet(v14, v15, v16, (unsigned int)&v33, (__int64)&v36);
        if ( SecondaryInterruptAffinity < 0 )
          return (unsigned int)SecondaryInterruptAffinity;
        LOBYTE(v21) = a7 & 1;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       v35,
                                       (unsigned int)&v33,
                                       v20,
                                       v21,
                                       v32,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v31);
        v18 = 0;
        if ( SecondaryInterruptAffinity >= 0 )
          goto LABEL_13;
      }
    }
    return v15;
  }
}
