/*
 * XREFs of ACPIRangeValidatePciResources @ 0x1C00374D0
 * Callers:
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0077CF0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C00781C0 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C00370B8 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRangeValidatePciMemoryResource @ 0x1C0037284 (ACPIRangeValidatePciMemoryResource.c)
 *     WPP_RECORDER_SF_dDDL @ 0x1C00378D4 (WPP_RECORDER_SF_dDDL.c)
 *     WPP_RECORDER_SF_dxxxx @ 0x1C0037DE4 (WPP_RECORDER_SF_dxxxx.c)
 */

void __fastcall ACPIRangeValidatePciResources(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 a3)
{
  ULONG_PTR v3; // r13
  int v5; // edi
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rsi
  char v11; // cl
  ULONGLONG v12; // rax
  int v13; // edx
  ULONGLONG v14; // r12
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  char v17; // cl
  int v18; // r9d
  int v19; // r15d
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  unsigned __int64 MinimumAddress; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 Alignment; // [rsp+58h] [rbp-10h] BYREF
  int v24; // [rsp+B8h] [rbp+50h] BYREF
  int v25; // [rsp+C0h] [rbp+58h]
  unsigned __int64 MaximumAddress; // [rsp+C8h] [rbp+60h] BYREF

  v3 = BugCheckParameter3;
  v24 = 0;
  v5 = 0;
  if ( !BugCheckParameter3 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      13,
      15,
      (__int64)&WPP_188439d352933c43d81bb97719738185_Traceguids);
    KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, 2uLL, 0LL);
  }
  v6 = BugCheckParameter3 + 32;
  v7 = 0;
  v25 = 0;
  if ( *(_DWORD *)(BugCheckParameter3 + 28) )
  {
    do
    {
      v8 = *(_DWORD *)(v6 + 4);
      v9 = 0;
      if ( v8 )
      {
        do
        {
          v10 = 32LL * v9;
          v11 = *(_BYTE *)(v10 + v6 + 9);
          if ( ((v11 - 1) & 0xF9) == 0 && v11 != 5 )
          {
            v12 = RtlIoDecodeMemIoResource(
                    (PIO_RESOURCE_DESCRIPTOR)(v10 + v6 + 8),
                    &Alignment,
                    &MinimumAddress,
                    &MaximumAddress);
            a3 = MaximumAddress;
            v14 = v12;
            v15 = MinimumAddress;
            v16 = MaximumAddress - MinimumAddress + 1;
            if ( v16 > 0xFFFFFFFF && *(_BYTE *)(v10 + v6 + 9) != 7 )
            {
              WPP_RECORDER_SF_dxxxx(
                WPP_GLOBAL_Control->DeviceExtension,
                v13,
                MaximumAddress,
                16,
                BugCheckParameter4,
                v9,
                MinimumAddress,
                MaximumAddress,
                MaximumAddress - MinimumAddress + 1,
                *(_DWORD *)(v10 + v6 + 20));
              a3 = MaximumAddress;
              ++v5;
              v15 = MinimumAddress;
            }
            if ( v16 != v14 )
            {
              WPP_RECORDER_SF_dxxxx(
                WPP_GLOBAL_Control->DeviceExtension,
                v13,
                a3,
                17,
                BugCheckParameter4,
                v9,
                v15,
                a3,
                v14,
                Alignment);
              a3 = MaximumAddress;
              ++v5;
              v15 = MinimumAddress;
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
                v9,
                v15,
                a3,
                v14,
                0);
              a3 = MaximumAddress;
              ++v5;
              v15 = MinimumAddress;
              BugCheckParameter3 = Alignment;
            }
            if ( ((BugCheckParameter3 - 1) & v15) != 0 )
            {
              WPP_RECORDER_SF_dxxxx(
                WPP_GLOBAL_Control->DeviceExtension,
                BugCheckParameter3,
                a3,
                19,
                BugCheckParameter4,
                v9,
                v15,
                a3,
                v14,
                BugCheckParameter3);
              ++v5;
            }
          }
          v17 = *(_BYTE *)(v10 + v6 + 9);
          if ( v17 == 6 )
          {
            LODWORD(BugCheckParameter3) = *(_DWORD *)(v10 + v6 + 24);
            a3 = *(unsigned int *)(v10 + v6 + 20);
            v18 = *(_DWORD *)(v10 + v6 + 16);
            if ( (_DWORD)BugCheckParameter3 - (_DWORD)a3 + 1 != v18 )
            {
              WPP_RECORDER_SF_dDDL(
                WPP_GLOBAL_Control->DeviceExtension,
                BugCheckParameter3,
                a3,
                v18,
                BugCheckParameter4,
                v9,
                a3,
                BugCheckParameter3,
                *(_DWORD *)(v10 + v6 + 16));
              v17 = *(_BYTE *)(v10 + v6 + 9);
              ++v5;
            }
          }
          if ( ((v17 - 3) & 0xFB) == 0 )
          {
            ACPIRangeValidatePciMemoryResource(v6, v9, a3, &v24);
            v19 = v24;
            if ( v24 )
            {
              if ( ACPIIgnoreResourceMapValidation((struct _IO_RESOURCE_DESCRIPTOR *)(v10 + v6 + 8)) )
                v19 = 0;
              v24 = v19;
            }
            v5 += v19;
          }
          v8 = *(_DWORD *)(v6 + 4);
          ++v9;
        }
        while ( v9 < v8 );
        v7 = v25;
      }
      v25 = ++v7;
      v6 += 32 * v8 + 8;
    }
    while ( v7 < *(_DWORD *)(v3 + 28) );
    if ( v5 )
    {
      LOBYTE(BugCheckParameter3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        BugCheckParameter3,
        13,
        21,
        (__int64)&WPP_188439d352933c43d81bb97719738185_Traceguids);
      KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, v3, (ULONG_PTR)E820Info);
    }
  }
}
