/*
 * XREFs of ACPIRangeValidatePciResources @ 0x1C00274C8
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C0094290 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0094760 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPIRangeValidatePciMemoryResource @ 0x1C0027630 (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C0056DDC (ACPIIgnoreResourceMapValidation.c)
 *     WPP_RECORDER_SF_dDDL @ 0x1C005700C (WPP_RECORDER_SF_dDDL.c)
 *     WPP_RECORDER_SF_dxxxx @ 0x1C005751C (WPP_RECORDER_SF_dxxxx.c)
 */

void __fastcall ACPIRangeValidatePciResources(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 a3,
        int a4)
{
  ULONG_PTR v4; // r13
  int v6; // edi
  ULONG_PTR v7; // rbx
  unsigned int i; // r14d
  __int64 v9; // rsi
  char v10; // cl
  ULONGLONG v11; // rax
  int v12; // edx
  ULONGLONG v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r15
  int v16; // r15d
  int v17; // ecx
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  unsigned __int64 MinimumAddress; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 Alignment; // [rsp+58h] [rbp-10h] BYREF
  int v22; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+58h]
  unsigned __int64 MaximumAddress; // [rsp+C8h] [rbp+60h] BYREF

  v4 = BugCheckParameter3;
  v22 = 0;
  v6 = 0;
  if ( !BugCheckParameter3 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      13,
      15,
      (__int64)&WPP_6164d1bd80593c5f46f1627d12d38cb1_Traceguids);
    KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, 2uLL, 0LL);
  }
  v7 = BugCheckParameter3 + 32;
  v23 = 0;
  if ( *(_DWORD *)(BugCheckParameter3 + 28) )
  {
    do
    {
      for ( i = 0; i < *(_DWORD *)(v7 + 4); ++i )
      {
        v9 = 32LL * i;
        v10 = *(_BYTE *)(v9 + v7 + 9);
        if ( ((v10 - 1) & 0xF9) == 0 && v10 != 5 )
        {
          v11 = RtlIoDecodeMemIoResource(
                  (PIO_RESOURCE_DESCRIPTOR)(v9 + v7 + 8),
                  &Alignment,
                  &MinimumAddress,
                  &MaximumAddress);
          a3 = MaximumAddress;
          v13 = v11;
          v14 = MinimumAddress;
          v15 = MaximumAddress - MinimumAddress + 1;
          if ( v15 > 0xFFFFFFFF && *(_BYTE *)(v9 + v7 + 9) != 7 )
          {
            WPP_RECORDER_SF_dxxxx(
              WPP_GLOBAL_Control->DeviceExtension,
              v12,
              MaximumAddress,
              16,
              BugCheckParameter4,
              i,
              MinimumAddress,
              MaximumAddress,
              MaximumAddress - MinimumAddress + 1,
              *(_DWORD *)(v9 + v7 + 20));
            a3 = MaximumAddress;
            ++v6;
            v14 = MinimumAddress;
          }
          if ( v15 != v13 )
          {
            WPP_RECORDER_SF_dxxxx(
              WPP_GLOBAL_Control->DeviceExtension,
              v12,
              a3,
              17,
              BugCheckParameter4,
              i,
              v14,
              a3,
              v13,
              Alignment);
            a3 = MaximumAddress;
            ++v6;
            v14 = MinimumAddress;
          }
          BugCheckParameter3 = Alignment;
          if ( !Alignment )
          {
            WPP_RECORDER_SF_dxxxx(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              a3,
              18,
              BugCheckParameter4,
              i,
              v14,
              a3,
              v13,
              0);
            a3 = MaximumAddress;
            ++v6;
            v14 = MinimumAddress;
            BugCheckParameter3 = Alignment;
          }
          if ( ((BugCheckParameter3 - 1) & v14) != 0 )
          {
            WPP_RECORDER_SF_dxxxx(
              WPP_GLOBAL_Control->DeviceExtension,
              BugCheckParameter3,
              a3,
              19,
              BugCheckParameter4,
              i,
              v14,
              a3,
              v13,
              BugCheckParameter3);
            ++v6;
          }
        }
        if ( *(_BYTE *)(v9 + v7 + 9) == 6 )
        {
          v17 = *(_DWORD *)(v9 + v7 + 24);
          LODWORD(BugCheckParameter3) = *(_DWORD *)(v9 + v7 + 20);
          a3 = *(unsigned int *)(v9 + v7 + 16);
          if ( v17 - (_DWORD)BugCheckParameter3 + 1 != (_DWORD)a3 )
          {
            WPP_RECORDER_SF_dDDL(
              WPP_GLOBAL_Control->DeviceExtension,
              BugCheckParameter3,
              a3,
              a4,
              BugCheckParameter4,
              i,
              BugCheckParameter3,
              v17,
              *(_DWORD *)(v9 + v7 + 16));
            ++v6;
          }
        }
        if ( ((*(_BYTE *)(v9 + v7 + 9) - 3) & 0xFB) == 0 )
        {
          ACPIRangeValidatePciMemoryResource(v7, i, a3, &v22);
          v16 = v22;
          if ( v22 )
          {
            if ( (unsigned __int8)ACPIIgnoreResourceMapValidation(v9 + v7 + 8) )
              v16 = 0;
            v22 = v16;
          }
          v6 += v16;
        }
      }
      v7 += (unsigned int)(32 * *(_DWORD *)(v7 + 4) + 8);
      ++v23;
    }
    while ( v23 < *(_DWORD *)(v4 + 28) );
    if ( v6 )
    {
      LOBYTE(BugCheckParameter3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        BugCheckParameter3,
        13,
        21,
        (__int64)&WPP_6164d1bd80593c5f46f1627d12d38cb1_Traceguids);
      KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, v4, E820Info);
    }
  }
}
