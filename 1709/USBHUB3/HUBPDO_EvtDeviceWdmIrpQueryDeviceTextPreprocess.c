/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0013D3C
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013710 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     RtlStringCbPrintfW @ 0x1C0010794 (RtlStringCbPrintfW.c)
 *     HUBMISC_WaitForSignal @ 0x1C002A6AC (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 v6; // r14
  unsigned int Length; // eax
  wchar_t *PoolWithTag; // rbx
  unsigned __int16 v9; // r9
  NTSTATUS v10; // eax
  __int16 Size; // r15
  _BYTE *v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // rax
  _WORD *v15; // rcx
  void *v16; // rcx
  unsigned __int8 *v17; // rax
  unsigned __int16 v18; // bx
  _WORD *v19; // rax
  _WORD *v20; // rdi

  v3 = -1073741637;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v4 + 24);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x64334855u);
    if ( !PoolWithTag )
    {
      v9 = 53;
LABEL_4:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        v9,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
      v3 = -1073741670;
      goto LABEL_31;
    }
    v10 = RtlStringCbPrintfW(
            PoolWithTag,
            0x2AuLL,
            L"Port_#%04d.Hub_#%04d",
            *(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 200LL),
            *(_DWORD *)(*(_QWORD *)v6 + 96LL));
    v3 = v10;
    if ( v10 < 0 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        0x36u,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
        v10);
      ExFreePoolWithTag(PoolWithTag, 0x64334855u);
      goto LABEL_31;
    }
    a2->IoStatus.Information = (unsigned __int64)PoolWithTag;
    goto LABEL_30;
  }
  if ( !Length && *(_BYTE *)(v6 + 2003) && (*(_DWORD *)(v6 + 1644) & 1) == 0 )
  {
    a2->IoStatus.Information = 0LL;
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    if ( Size )
    {
      v12 = *(_BYTE **)(v6 + 2024);
      if ( v12 )
      {
        if ( *v12 > 2u )
        {
          v13 = 0;
          v14 = ((unsigned __int64)(unsigned __int8)*v12 - 2) >> 1;
          if ( (_DWORD)v14 )
          {
            v15 = v12 + 2;
            do
            {
              if ( !*v15 )
                break;
              if ( *v15 == Size )
                goto LABEL_20;
              ++v13;
              ++v15;
            }
            while ( v13 < (unsigned int)v14 );
          }
        }
      }
    }
    Size = 1033;
LABEL_20:
    if ( Size != *(_WORD *)(v6 + 2040) )
    {
      v16 = *(void **)(v6 + 2032);
      *(_WORD *)(v6 + 2040) = Size;
      if ( v16 )
        ExFreePoolWithTag(v16, 0x64334855u);
      *(_QWORD *)(v6 + 2032) = 0LL;
      KeClearEvent((PRKEVENT)(v6 + 472));
      HUBSM_AddEvent(v6 + 504, 4087);
      HUBMISC_WaitForSignal((PVOID)(v6 + 472));
    }
    v17 = *(unsigned __int8 **)(v6 + 2032);
    if ( v17
      || Size != 1033
      && (*(_WORD *)(v6 + 2040) = 1033,
          KeClearEvent((PRKEVENT)(v6 + 472)),
          HUBSM_AddEvent(v6 + 504, 4087),
          HUBMISC_WaitForSignal((PVOID)(v6 + 472)),
          (v17 = *(unsigned __int8 **)(v6 + 2032)) != 0LL) )
    {
      v18 = (((unsigned __int64)*v17 - 2) >> 1) + 1;
      v19 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * v18, 0x64334855u);
      v20 = v19;
      if ( !v19 )
      {
        v9 = 55;
        goto LABEL_4;
      }
      memmove(v19, (const void *)(*(_QWORD *)(v6 + 2032) + 2LL), 2LL * v18 - 2);
      v20[v18 - 1] = 0;
      a2->IoStatus.Information = (unsigned __int64)v20;
LABEL_30:
      v3 = 0;
    }
  }
LABEL_31:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
