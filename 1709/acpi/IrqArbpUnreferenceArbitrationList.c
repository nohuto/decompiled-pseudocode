/*
 * XREFs of IrqArbpUnreferenceArbitrationList @ 0x1C0088208
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008A3E0 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E138 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C000E1F4 (WPP_RECORDER_SF_DDq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C000EF94 (ProcessorDeleteDeviceIdtAssignment.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C00891E0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C00893E8 (IrqArbGsivFromIrq.c)
 *     IcGetPossibleInput @ 0x1C009545C (IcGetPossibleInput.c)
 *     IcRemovePossibleReference @ 0x1C0097194 (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00A8040 (LinkNodeGetPossibleGsiv.c)
 */

__int64 __fastcall IrqArbpUnreferenceArbitrationList(__int64 a1, __int64 ***a2)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  PRTL_RANGE i; // rcx
  int v7; // edx
  _DWORD *UserData; // rsi
  __int64 **j; // rdi
  int v11; // eax
  PRTL_RANGE v12; // rax
  unsigned int k; // r14d
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // r15d
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // ebx
  int v21; // [rsp+20h] [rbp-60h]
  _BYTE v22[20]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-2Ch]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+B0h] [rbp+30h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 40), &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    WPP_RECORDER_SF_DDq(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5, v21, i->Start, i->End, (char)i->Owner);
    UserData = Range->UserData;
    UserData[1] &= ~8u;
    for ( j = *a2; a2 != (__int64 ***)j; j = (__int64 **)*j )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        20,
        20,
        (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
        (char)j[4]);
      if ( Range->Owner == j[4] )
      {
        v11 = UserData[1];
        if ( (v11 & 8) == 0 )
        {
          UserData[1] = v11 | 8;
          v12 = Range;
          for ( k = Range->Start; k <= LODWORD(v12->End); ++k )
          {
            v14 = IrqArbGsivFromIrq(k);
            v16 = v14;
            if ( v14 < 0xFFF00000 && (int)IcGetPossibleInput(v14, v15, 0LL) >= 0 )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v17,
                v18 + 20,
                v18 + 21,
                (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
                v16);
              LOBYTE(v19) = Range->Attributes & 1;
              IcRemovePossibleReference(v16, v19);
            }
            if ( (int)ProcessorGetDeviceIdtAssignment(j[4], v16, 1LL, v22) >= 0 )
            {
              v20 = v23;
              LOBYTE(v7) = 4;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v7,
                20,
                22,
                (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
                v23);
              ProcessorDeleteDeviceIdtAssignment(j[4], v16, v20, 1);
            }
            v12 = Range;
          }
          if ( UserData[2] == 2 )
          {
            LinkNodeGetPossibleGsiv(*((_QWORD *)UserData + 2), 0LL);
            --*(_DWORD *)(*((_QWORD *)UserData + 2) + 28LL);
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
