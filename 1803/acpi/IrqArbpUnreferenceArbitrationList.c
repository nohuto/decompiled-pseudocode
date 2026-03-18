/*
 * XREFs of IrqArbpUnreferenceArbitrationList @ 0x1C0091B50
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C00917CC (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C0057F50 (ProcessorDeleteDeviceIdtAssignment.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0058880 (WPP_RECORDER_SF_DDq.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C008D288 (LinkNodeGetPossibleGsiv.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C008E4A0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0090A20 (IrqArbGsivFromIrq.c)
 *     IcGetPossibleInput @ 0x1C0092504 (IcGetPossibleInput.c)
 *     IcRemovePossibleReference @ 0x1C0092854 (IcRemovePossibleReference.c)
 */

__int64 __fastcall IrqArbpUnreferenceArbitrationList(__int64 a1, __int64 ***a2)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  PRTL_RANGE i; // rcx
  int v7; // edx
  PVOID UserData; // rsi
  __int64 **j; // rdi
  int v10; // eax
  PRTL_RANGE v11; // rax
  unsigned int k; // r14d
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r15d
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  unsigned int v19; // ebx
  int v21; // [rsp+20h] [rbp-60h]
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-2Ch]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+B0h] [rbp+30h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 40), &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    WPP_RECORDER_SF_DDq(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5, v21, i->Start, i->End, (char)i->Owner);
    UserData = Range->UserData;
    *((_DWORD *)UserData + 1) &= ~8u;
    for ( j = *a2; a2 != (__int64 ***)j; j = (__int64 **)*j )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        20,
        20,
        (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
        (char)j[4]);
      if ( Range->Owner == j[4] )
      {
        v10 = *((_DWORD *)UserData + 1);
        if ( (v10 & 8) == 0 )
        {
          *((_DWORD *)UserData + 1) = v10 | 8;
          v11 = Range;
          for ( k = Range->Start; k <= LODWORD(v11->End); ++k )
          {
            v13 = IrqArbGsivFromIrq(k);
            v15 = v13;
            if ( v13 < 0xFFF00000 && (int)IcGetPossibleInput(v13, v14, 0LL) >= 0 )
            {
              LOBYTE(v16) = 4;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v16,
                v17 + 20,
                v17 + 21,
                (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
                v15);
              LOBYTE(v18) = Range->Attributes & 1;
              IcRemovePossibleReference(v15, v18);
            }
            if ( (int)ProcessorGetDeviceIdtAssignment(j[4], v15, 1, &v22) >= 0 )
            {
              v19 = v23;
              LOBYTE(v7) = 4;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v7,
                20,
                22,
                (__int64)&WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids,
                v23);
              ProcessorDeleteDeviceIdtAssignment(j[4], v15, v19, 1);
            }
            v11 = Range;
          }
          if ( *((_DWORD *)UserData + 2) == 2 )
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
