/*
 * XREFs of PspWriteTebIdealProcessor @ 0x1404F87BC
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x14008B4A0 (KeGetProcessorNumberFromIndex.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2)
{
  _PROCESSOR_NUMBER *v4; // r15
  _PROCESSOR_NUMBER *v5; // r14
  _PROCESSOR_NUMBER *v6; // r13
  _KPROCESS *v7; // r9
  unsigned __int64 v8; // rax
  char v9; // di
  char v10; // si
  _PROCESSOR_NUMBER *i; // r12
  _PROCESSOR_NUMBER v12; // eax
  __int16 v13; // cx
  signed __int32 v14[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v15; // [rsp+20h] [rbp-A8h]
  char v16; // [rsp+21h] [rbp-A7h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  _KPROCESS *v18; // [rsp+28h] [rbp-A0h]
  _PROCESSOR_NUMBER v19; // [rsp+30h] [rbp-98h] BYREF
  _PROCESSOR_NUMBER *v20; // [rsp+38h] [rbp-90h]
  _PROCESSOR_NUMBER *v21; // [rsp+40h] [rbp-88h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+48h] [rbp-80h]
  _PROCESSOR_NUMBER *v23; // [rsp+50h] [rbp-78h]
  __int64 v24; // [rsp+58h] [rbp-70h]
  $5BC46E0569261879018906DEC3127961 v25; // [rsp+60h] [rbp-68h] BYREF

  v24 = a2;
  v19 = 0;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v6 = *(_PROCESSOR_NUMBER **)(a2 + 240);
  v23 = v6;
  v7 = *(_KPROCESS **)(a2 + 544);
  v18 = v7;
  p_ProcNumber = &ProcNumber;
  v8 = v7[1].ActiveProcessors.Bitmap[7];
  if ( v8 )
  {
    v13 = *(_WORD *)(v8 + 8);
    if ( v13 == 332 || v13 == 452 )
    {
      if ( *(_WORD *)(v8 + 8) == 0x8664 )
      {
        v5 = v6 + 2048;
        v21 = v6 + 2048;
      }
      else
      {
        v4 = v6 + 2048;
        v20 = v6 + 2048;
      }
    }
  }
  v9 = 0;
  v15 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1712)) )
      return;
    v9 = 1;
    v15 = 1;
    v7 = v18;
  }
  v10 = 0;
  v16 = 0;
  if ( v7 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v7, 0, (__int64)&v25);
    v10 = 1;
    v16 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  for ( i = p_ProcNumber; ; *i = v19 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v12 = ProcNumber;
    v6[1489] = ProcNumber;
    if ( v5 )
      v5[1489] = v12;
    if ( v4 )
    {
      LOWORD(v18) = v12.Group;
      BYTE2(v18) = v12.Number & 0x1F;
      BYTE3(v18) = v12.Reserved & 0x1F;
      v4[989] = (_PROCESSOR_NUMBER)v18;
    }
    _InterlockedOr(v14, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v19);
    if ( v19.Group == i->Group && v19.Number == ProcNumber.Number )
      break;
  }
  if ( v10 )
    KiUnstackDetachProcess(&v25, 0LL);
  if ( v9 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1712));
}
