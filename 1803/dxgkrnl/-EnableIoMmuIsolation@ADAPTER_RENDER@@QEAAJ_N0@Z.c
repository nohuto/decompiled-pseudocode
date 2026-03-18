/*
 * XREFs of ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C
 * Callers:
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0159BBC (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0172F98 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0040538 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C0040780 (DpiMapMemoryTrackersToIoMmu.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F4DB0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C014D5DC (-MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ.c)
 *     ?DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015CAB4 (-DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015F480 (-DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiCreateIoMmuDomain @ 0x1C0201EE4 (DpiCreateIoMmuDomain.c)
 *     DpiDeleteIoMmuDomain @ 0x1C0201F60 (DpiDeleteIoMmuDomain.c)
 *     DpiDetachIoMmuDomain @ 0x1C0201FC4 (DpiDetachIoMmuDomain.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnableIoMmuIsolation(ADAPTER_RENDER *this, char a2, char a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int IoMmuDomain; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int16 v18; // si
  __int64 v19; // rbx
  __int64 IoMmuContextFromDevice; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rax

  if ( !*((_BYTE *)this + 1512) )
  {
    v6 = *((_QWORD *)this + 2);
    v7 = *(_DWORD *)(v6 + 300);
    if ( (v7 & 8) == 0 && (v7 & 0x10) == 0 && !*(_BYTE *)(v6 + 185) )
    {
      IoMmuDomain = DpiCreateIoMmuDomain(*(_QWORD *)(v6 + 192));
      v12 = IoMmuDomain;
      if ( IoMmuDomain < 0 )
      {
LABEL_6:
        v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
        *(_QWORD *)(v13 + 24) = v12;
        WdLogEvent5_WdWarning(v13);
LABEL_22:
        DpiDeleteIoMmuDomain(*(_QWORD *)(*((_QWORD *)this + 2) + 192LL));
        return (unsigned int)v12;
      }
      if ( a2 )
      {
        v14 = DXGADAPTER::MapHardwareReservedRangesToIoMmu(*((DXGADAPTER **)this + 2));
        v12 = v14;
        if ( v14 < 0 )
          goto LABEL_6;
        v15 = DpiMapMemoryTrackersToIoMmu(*(_QWORD *)(*((_QWORD *)this + 2) + 192LL));
        v12 = v15;
        if ( v15 < 0 )
          goto LABEL_6;
        v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 1216LL))(*((_QWORD *)this + 69));
        v12 = v16;
        if ( v16 < 0 )
          goto LABEL_6;
        if ( a3 )
        {
          DXGADAPTER::AcquireCoreResourceExclusive(*((_QWORD *)this + 2), 3, 1);
          ADAPTER_RENDER::DdiBeginExclusiveAccess(this);
          v17 = *((_QWORD *)this + 2);
          v18 = 0;
          if ( *(_DWORD *)(v17 + 248) )
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)(352LL * v18 + *(_QWORD *)(v17 + 2360) + 8);
              IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(v19);
              v21 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64))qword_1C007AC50)(
                      *(_QWORD *)(IoMmuContextFromDevice + 80),
                      v19,
                      0LL,
                      1LL);
              v12 = v21;
              if ( v21 < 0 )
                break;
              v17 = *((_QWORD *)this + 2);
              if ( (unsigned int)++v18 >= *(_DWORD *)(v17 + 248) )
                goto LABEL_20;
            }
            if ( v18 )
            {
              v25 = 0LL;
              v26 = v18;
              do
              {
                DpiDetachIoMmuDomain(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2360LL) + v25 + 8));
                v25 += 352LL;
                --v26;
              }
              while ( v26 );
            }
            v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
            *(_QWORD *)(v27 + 24) = v18;
            *(_QWORD *)(v27 + 32) = v12;
            WdLogEvent5_WdWarning(v27);
          }
LABEL_20:
          ADAPTER_RENDER::DdiEndExclusiveAccess(this);
          DXGADAPTER::ReleaseCoreResource(*((DXGADAPTER **)this + 2));
          if ( (int)v12 < 0 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 1224LL))(*((_QWORD *)this + 69));
            goto LABEL_22;
          }
        }
      }
      *((_BYTE *)this + 1512) = 1;
    }
  }
  return 0LL;
}
