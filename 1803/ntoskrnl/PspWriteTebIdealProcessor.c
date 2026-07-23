/*
 * XREFs of PspWriteTebIdealProcessor @ 0x1404B8A58
 * Callers:
 *     PspUserThreadStartup @ 0x1404B8600 (PspUserThreadStartup.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeGetProcessorNumberFromIndex @ 0x140040C40 (KeGetProcessorNumberFromIndex.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2)
{
  _PROCESSOR_NUMBER *v4; // r15
  _PROCESSOR_NUMBER *v5; // rdx
  _KPROCESS *v6; // r12
  unsigned __int64 v7; // rcx
  char v8; // bl
  char v9; // si
  _PROCESSOR_NUMBER *v10; // r13
  _PROCESSOR_NUMBER *i; // r12
  _PROCESSOR_NUMBER v12; // eax
  __int16 v13; // ax
  signed __int32 v14[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v15; // [rsp+20h] [rbp-A8h]
  char v16; // [rsp+21h] [rbp-A7h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  _PROCESSOR_NUMBER v18; // [rsp+28h] [rbp-A0h] BYREF
  _PROCESSOR_NUMBER *v19; // [rsp+30h] [rbp-98h]
  _PROCESSOR_NUMBER *v20; // [rsp+38h] [rbp-90h]
  __int64 v21; // [rsp+40h] [rbp-88h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+48h] [rbp-80h]
  _PROCESSOR_NUMBER *v23; // [rsp+50h] [rbp-78h]
  __int64 v24; // [rsp+58h] [rbp-70h]
  _BYTE v25[48]; // [rsp+60h] [rbp-68h] BYREF

  v24 = a2;
  v18 = 0;
  v4 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v5 = *(_PROCESSOR_NUMBER **)(a2 + 240);
  v19 = v5;
  v23 = v5;
  v6 = *(_KPROCESS **)(a2 + 544);
  p_ProcNumber = &ProcNumber;
  v7 = v6[1].ActiveProcessors.Bitmap[7];
  if ( v7 )
  {
    v13 = *(_WORD *)(v7 + 8);
    if ( v13 == 332 || v13 == 452 )
    {
      v4 = v5 + 2048;
      v20 = v5 + 2048;
    }
  }
  v8 = 0;
  v15 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1720)) )
      return;
    v8 = 1;
    v15 = 1;
  }
  v9 = 0;
  v16 = 0;
  if ( v6 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v6, 0, (__int64)v25);
    v9 = 1;
    v16 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  v10 = v19;
  for ( i = p_ProcNumber; ; *i = v18 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v12 = ProcNumber;
    v10[1489] = ProcNumber;
    if ( v4 )
    {
      LOWORD(v19) = v12.Group;
      BYTE2(v19) = v12.Number & 0x1F;
      BYTE3(v19) = v12.Reserved & 0x1F;
      v4[989] = (_PROCESSOR_NUMBER)v19;
    }
    _InterlockedOr(v14, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v18);
    if ( v18.Group == ProcNumber.Group && v18.Number == ProcNumber.Number )
      break;
  }
  if ( v9 )
    KiUnstackDetachProcess((__int64)v25, 0LL);
  if ( v8 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1720));
}
