/*
 * XREFs of PspWriteTebIdealProcessor @ 0x14053F518
 * Callers:
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KeGetProcessorNumberFromIndex @ 0x1400E6240 (KeGetProcessorNumberFromIndex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2)
{
  _PROCESSOR_NUMBER *v4; // r15
  _PROCESSOR_NUMBER *v5; // r13
  _KPROCESS *v6; // r9
  unsigned __int64 v7; // rcx
  char v8; // di
  char v9; // si
  _PROCESSOR_NUMBER *i; // r12
  _PROCESSOR_NUMBER v11; // eax
  __int16 v12; // ax
  signed __int32 v13[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v14; // [rsp+20h] [rbp-A8h]
  char v15; // [rsp+21h] [rbp-A7h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  _KPROCESS *v17; // [rsp+28h] [rbp-A0h]
  _PROCESSOR_NUMBER v18; // [rsp+30h] [rbp-98h] BYREF
  _PROCESSOR_NUMBER *v19; // [rsp+38h] [rbp-90h]
  __int64 v20; // [rsp+40h] [rbp-88h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+48h] [rbp-80h]
  _PROCESSOR_NUMBER *v22; // [rsp+50h] [rbp-78h]
  __int64 v23; // [rsp+58h] [rbp-70h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v24; // [rsp+60h] [rbp-68h] BYREF

  v23 = a2;
  v18 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v5 = *(_PROCESSOR_NUMBER **)(a2 + 240);
  v22 = v5;
  v6 = *(_KPROCESS **)(a2 + 544);
  v17 = v6;
  p_ProcNumber = &ProcNumber;
  v7 = v6[1].ActiveProcessors.Bitmap[7];
  if ( v7 )
  {
    v12 = *(_WORD *)(v7 + 8);
    if ( v12 == 332 || v12 == 452 )
    {
      v4 = v5 + 2048;
      v19 = v5 + 2048;
    }
  }
  v8 = 0;
  v14 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1720)) )
      return;
    v8 = 1;
    v14 = 1;
    v6 = v17;
  }
  v9 = 0;
  v15 = 0;
  if ( v6 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v6, 0, (__int64)&v24);
    v9 = 1;
    v15 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  for ( i = p_ProcNumber; ; *i = v18 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v11 = ProcNumber;
    v5[1489] = ProcNumber;
    if ( v4 )
    {
      LOWORD(v17) = v11.Group;
      BYTE2(v17) = v11.Number & 0x1F;
      BYTE3(v17) = v11.Reserved & 0x1F;
      v4[989] = (_PROCESSOR_NUMBER)v17;
    }
    _InterlockedOr(v13, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v18);
    if ( v18.Group == ProcNumber.Group && v18.Number == ProcNumber.Number )
      break;
  }
  if ( v9 )
    KiUnstackDetachProcess(&v24, 0LL);
  if ( v8 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1720));
}
