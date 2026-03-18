/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C0088400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0088610 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0088988 (IcIsInterruptTypeSecondary.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C00891E0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C0089D5C (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpSelectProcessorSet @ 0x1C008B4BC (ProcessorpSelectProcessorSet.c)
 *     ProcessorpValidateTargetSet @ 0x1C008B708 (ProcessorpValidateTargetSet.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C00908E4 (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C00A841C (ProcessorpGetSecondaryInterruptAffinity.c)
 */

__int64 __fastcall ProcessorpFindIdtEntriesApic(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        unsigned int a8)
{
  int DeviceIdtAssignment; // ebx
  int DevicePolicy; // eax
  char v13; // r14
  unsigned __int16 v14; // si
  unsigned int v15; // edx
  int v16; // r8d
  char v17; // al
  int SecondaryInterruptAffinity; // ecx
  int v19; // r8d
  int v20; // r9d
  __int128 v21; // xmm0
  __int64 result; // rax
  int v23; // r9d
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  unsigned int v26; // ebx
  int v27; // r8d
  int v28; // r9d
  _BYTE v29[4]; // [rsp+50h] [rbp-59h] BYREF
  int v30; // [rsp+54h] [rbp-55h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-51h]
  __int128 v32; // [rsp+60h] [rbp-49h] BYREF
  PDEVICE_OBJECT v33; // [rsp+78h] [rbp-31h]
  __int128 v34; // [rsp+80h] [rbp-29h] BYREF
  __int64 v35; // [rsp+90h] [rbp-19h]

  v31 = a4;
  v33 = Pdo;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v34);
  if ( DeviceIdtAssignment >= 0 )
  {
    v25 = v34;
    *(_DWORD *)(a3 + 32) = HIDWORD(v35);
    LOWORD(v30) = IrqMachinePolicy;
    *(_BYTE *)(a3 + 4) = 1;
    *(_OWORD *)(a3 + 16) = v25;
    IrqPolicyGetDevicePolicy(Pdo, (__int64)&v30, (__int64)v29);
    *(_WORD *)(a3 + 6) = v30;
    return (unsigned int)DeviceIdtAssignment;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 4) )
    {
      v14 = *(_WORD *)(a3 + 6);
      v13 = *(_BYTE *)(a3 + 8);
      v32 = *(_OWORD *)(a3 + 16);
    }
    else
    {
      DevicePolicy = IrqPolicyGetDevicePolicy(Pdo, (__int64)&v30, (__int64)v29);
      v13 = v29[0];
      if ( DevicePolicy < 0 )
      {
        v14 = IrqMachinePolicy;
        v32 = 0uLL;
      }
      else
      {
        v14 = v30;
      }
    }
    if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
    {
      v26 = v31;
      v30 = 0;
      SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(0LL, v31, &v32);
      if ( SecondaryInterruptAffinity >= 0 )
      {
        LOBYTE(v28) = a7 & 1;
        v13 = 0;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       (_DWORD)v33,
                                       (unsigned int)&v32,
                                       v27,
                                       v28,
                                       v26,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v30);
LABEL_12:
        if ( SecondaryInterruptAffinity >= 0 )
        {
          v21 = v32;
          *(_DWORD *)(a3 + 32) = v30;
          *(_OWORD *)(a3 + 16) = v21;
          *(_WORD *)(a3 + 6) = v14;
          *(_BYTE *)(a3 + 8) = v13;
          *(_BYTE *)(a3 + 4) = 1;
        }
      }
      return (unsigned int)SecondaryInterruptAffinity;
    }
    if ( !(_QWORD)v32 )
    {
LABEL_7:
      if ( IrqMachinePolicy == 6 )
      {
        v35 = 0LL;
        LODWORD(v34) = a5;
        BYTE4(v34) = a5 + 0x100000 > 0xFFFFE;
        WORD3(v34) = 1;
        BYTE5(v34) = a6 & 1;
        *((_QWORD *)&v34 + 1) = KeQueryGroupAffinity(0);
        v17 = IrqPolicyQueryInterruptSteeringEnabled(&v34);
      }
      else
      {
        v17 = 0;
      }
      LOBYTE(v34) = 0;
      v30 = 0;
      while ( 1 )
      {
        LOBYTE(v16) = v17;
        LOBYTE(v15) = v13;
        SecondaryInterruptAffinity = ProcessorpSelectProcessorSet(v14, v15, v16, (unsigned int)&v32, (__int64)&v34);
        if ( SecondaryInterruptAffinity < 0 )
          return (unsigned int)SecondaryInterruptAffinity;
        LOBYTE(v20) = a7 & 1;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       (_DWORD)v33,
                                       (unsigned int)&v32,
                                       v19,
                                       v20,
                                       v31,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v30);
        v17 = 0;
        if ( SecondaryInterruptAffinity >= 0 )
          goto LABEL_12;
      }
    }
    if ( (unsigned __int8)ProcessorpValidateTargetSet(&v32) )
    {
      LOBYTE(v23) = a7 & 1;
      result = ProcessorpFindAffinitizedIdtEntries(
                 (_DWORD)v33,
                 (unsigned int)&v32,
                 v16,
                 v23,
                 v31,
                 a5,
                 a6,
                 a8,
                 (__int64)&v30);
      v15 = result;
      if ( (int)result >= 0 )
      {
        v24 = v32;
        *(_DWORD *)(a3 + 32) = v30;
        *(_OWORD *)(a3 + 16) = v24;
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
      goto LABEL_7;
    if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
    {
      v14 = IrqMachinePolicy;
      goto LABEL_7;
    }
    return v15;
  }
}
