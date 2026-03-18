/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x1404FF814
 * Callers:
 *     NtSubscribeWnfStateChange @ 0x1404FF390 (NtSubscribeWnfStateChange.c)
 *     ExSubscribeWnfStateChange @ 0x140588290 (ExSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     ExpWnfNotifySubscription @ 0x1404FDA2C (ExpWnfNotifySubscription.c)
 *     ExpCaptureWnfStateName @ 0x14050036C (ExpCaptureWnfStateName.c)
 *     ExpWnfSubscribeNameInstance @ 0x14050080C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x140501678 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x140503078 (ExpWnfCheckCallerAccess.c)
 */

__int64 __fastcall ExpWnfSubscribeWnfStateChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  ACCESS_MASK v8; // r14d
  int NameInstance; // esi
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  _KPROCESS *Process; // rax
  int v13; // eax
  int v14; // r12d
  __int64 v15; // rbx
  BOOL v16; // ecx
  int v17; // r8d
  unsigned int v18; // r8d
  __int64 v20; // [rsp+68h] [rbp-70h] BYREF
  PVOID P; // [rsp+70h] [rbp-68h] BYREF
  _KPROCESS *v22; // [rsp+78h] [rbp-60h]
  int v23[2]; // [rsp+80h] [rbp-58h] BYREF
  _DWORD v24[2]; // [rsp+88h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v26[8]; // [rsp+98h] [rbp-40h] BYREF

  P = 0LL;
  *(_QWORD *)v23 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  v8 = 0;
  NameInstance = ExpCaptureWnfStateName(a3, v26);
  v24[1] = NameInstance;
  if ( NameInstance >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      NameInstance = -1073741811;
      goto LABEL_23;
    }
    v10 = v26[0];
    v11 = (v26[0] >> 4) & 3;
    if ( a8 )
    {
      v8 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v8 |= 2u;
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = v26[0];
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v22 = Process;
    NameInstance = ExpWnfResolveScopeInstance((int)v23, (int)Process, 0, (v26[0] >> 6) & 0xF, 0LL);
    if ( NameInstance >= 0 )
    {
      v13 = ExpWnfLookupNameInstance(*(_QWORD *)v23, v10, &v20);
      NameInstance = v13;
      if ( v13 != -1073741772 || (_DWORD)v11 == 3 )
      {
        if ( v13 < 0 )
          goto LABEL_23;
        if ( a8 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v20 + 72), v8);
          if ( NameInstance < 0 )
            goto LABEL_23;
        }
        v14 = (int)v22;
      }
      else
      {
        NameInstance = ExpWnfLookupPermanentName(v10, &P);
        if ( NameInstance < 0 )
          goto LABEL_23;
        if ( a8 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v8);
          if ( NameInstance < 0 )
            goto LABEL_23;
        }
        v14 = (int)v22;
        NameInstance = ExpWnfCreateNameInstance(v23[0], v10, (_DWORD)P, (_DWORD)v22, (__int64)&v20);
        ExFreePoolWithTag(P, 0x20666E57u);
        P = 0LL;
        if ( NameInstance < 0 )
          goto LABEL_23;
      }
      v15 = v20;
      NameInstance = ExpWnfSubscribeNameInstance(v20, v14, a5, a6, a4, a7, a8, a1, a2, (__int64)&v25, (__int64)v24);
      if ( NameInstance >= 0 )
      {
        v16 = 0;
        if ( a4 != *(_DWORD *)(v15 + 96) )
          v16 = *(_QWORD *)(v15 + 88) != 0LL;
        v17 = v16 | 8;
        if ( *(_DWORD *)(v20 + 164) )
          v17 = v16;
        if ( !v24[0] )
        {
          if ( *(_DWORD *)(v20 + 160) )
            v17 |= 2u;
          else
            v17 |= 4u;
        }
        v18 = a7 & v17;
        if ( v18 )
          ExpWnfNotifySubscription(v20, (__int64)v25, v18, a8 != 0);
      }
    }
  }
LABEL_23:
  if ( v25 )
    ExReleaseRundownProtection_0(v25 + 1);
  if ( v20 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 8));
  if ( *(_QWORD *)v23 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v23 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)NameInstance;
}
