/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC
 * Callers:
 *     ExSubscribeWnfStateChange @ 0x14045BC80 (ExSubscribeWnfStateChange.c)
 *     NtSubscribeWnfStateChange @ 0x1404EED08 (NtSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfNotifySubscription @ 0x1404446CC (ExpWnfNotifySubscription.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     ExpCaptureWnfStateName @ 0x1404EF5B8 (ExpCaptureWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1404EF98C (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x1404F0008 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
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
  __int64 v8; // rax
  ACCESS_MASK v9; // r14d
  int NameInstance; // esi
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  _KPROCESS *Process; // rax
  int v14; // eax
  int v15; // r12d
  __int64 v16; // rbx
  BOOL v17; // ecx
  int v18; // r8d
  unsigned int v19; // r8d
  __int64 v21; // [rsp+68h] [rbp-70h] BYREF
  PVOID P; // [rsp+70h] [rbp-68h] BYREF
  _KPROCESS *v23; // [rsp+78h] [rbp-60h]
  int v24[2]; // [rsp+80h] [rbp-58h] BYREF
  _DWORD v25[2]; // [rsp+88h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v27[8]; // [rsp+98h] [rbp-40h] BYREF

  v8 = a3;
  P = 0LL;
  *(_QWORD *)v24 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  v9 = 0;
  LOBYTE(a3) = a8;
  NameInstance = ExpCaptureWnfStateName(v8, v27, a3);
  v25[1] = NameInstance;
  if ( NameInstance >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      NameInstance = -1073741811;
      goto LABEL_23;
    }
    v11 = v27[0];
    v12 = (v27[0] >> 4) & 3;
    if ( a8 )
    {
      v9 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v9 |= 2u;
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = v27[0];
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v23 = Process;
    NameInstance = ExpWnfResolveScopeInstance((int)v24, (int)Process, 0, (v27[0] >> 6) & 0xF, 0LL);
    if ( NameInstance >= 0 )
    {
      v14 = ExpWnfLookupNameInstance(*(_QWORD *)v24, v11, &v21);
      NameInstance = v14;
      if ( v14 != -1073741772 || (_DWORD)v12 == 3 )
      {
        if ( v14 < 0 )
          goto LABEL_23;
        if ( a8 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v21 + 72), v9);
          if ( NameInstance < 0 )
            goto LABEL_23;
        }
        v15 = (int)v23;
      }
      else
      {
        NameInstance = ExpWnfLookupPermanentName(v11, &P);
        if ( NameInstance < 0 )
          goto LABEL_23;
        if ( a8 )
        {
          NameInstance = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v9);
          if ( NameInstance < 0 )
            goto LABEL_23;
        }
        v15 = (int)v23;
        NameInstance = ExpWnfCreateNameInstance(v24[0], v11, (_DWORD)P, (_DWORD)v23, (__int64)&v21);
        ExFreePoolWithTag(P, 0x20666E57u);
        P = 0LL;
        if ( NameInstance < 0 )
          goto LABEL_23;
      }
      v16 = v21;
      NameInstance = ExpWnfSubscribeNameInstance(v21, v15, a5, a6, a4, a7, a8, a1, a2, (__int64)&v26, (__int64)v25);
      if ( NameInstance >= 0 )
      {
        v17 = 0;
        if ( a4 != *(_DWORD *)(v16 + 96) )
          v17 = *(_QWORD *)(v16 + 88) != 0LL;
        v18 = v17 | 8;
        if ( *(_DWORD *)(v21 + 164) )
          v18 = v17;
        if ( !v25[0] )
        {
          if ( *(_DWORD *)(v21 + 160) )
            v18 |= 2u;
          else
            v18 |= 4u;
        }
        v19 = a7 & v18;
        if ( v19 )
          ExpWnfNotifySubscription(v21, (__int64)v26, v19, a8 != 0);
      }
    }
  }
LABEL_23:
  if ( v26 )
    ExReleaseRundownProtection(v26 + 1);
  if ( v21 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v21 + 8));
  if ( *(_QWORD *)v24 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v24 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)NameInstance;
}
