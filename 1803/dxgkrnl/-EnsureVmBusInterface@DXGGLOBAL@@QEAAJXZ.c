/*
 * XREFs of ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C019E420
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C003279C (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@XZ @ 0x1C017A2D8 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@XZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017A738 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::EnsureVmBusInterface(DXGGLOBAL *this)
{
  char *v1; // rbp
  DXG_VMBUS_CHANNEL_BASE *v3; // rcx
  __int64 v4; // rcx
  PMDL PagesForMdl; // rax
  struct _DEVICE_OBJECT *v6; // rdx
  PMDL v7; // rcx
  __int64 v8; // rax
  PVOID MappedSystemVa; // rax
  struct VMBCHANNEL__ **v10; // rcx
  int VmBusChannel; // eax
  __int64 v12; // rsi
  __int64 v13; // rax
  int GpadlFromMdl; // eax
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct _MDL *v17; // rcx
  _QWORD *v18; // rcx

  v1 = (char *)this + 264;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 264));
  if ( !*((_QWORD *)this + 152) )
  {
    v3 = (DXG_VMBUS_CHANNEL_BASE *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
    if ( v3 )
      DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(v3);
    else
      v4 = 0LL;
    *((_QWORD *)this + 152) = v4;
    if ( v4 )
    {
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, 0x1000uLL, MmNonCached, 0);
      *((_QWORD *)this + 157) = PagesForMdl;
      v7 = PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          MappedSystemVa = PagesForMdl->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        *((_QWORD *)this + 156) = MappedSystemVa;
        if ( MappedSystemVa )
        {
          v10 = (struct VMBCHANNEL__ **)*((_QWORD *)this + 152);
          if ( *v10
            || (VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(v10, v6), v12 = VmBusChannel,
                                                                                    VmBusChannel >= 0) )
          {
            LODWORD(v12) = 0;
          }
          else
          {
            v13 = WdLogNewEntry5_WdError(v10);
            *(_QWORD *)(v13 + 24) = v12;
            WdLogEvent5_WdError(v13);
          }
          if ( (int)v12 >= 0 )
          {
            GpadlFromMdl = VmbChannelCreateGpadlFromMdl(
                             **((_QWORD **)this + 152),
                             0LL,
                             *((_QWORD *)this + 157),
                             0LL,
                             0,
                             (char *)this + 1244);
            v16 = GpadlFromMdl;
            if ( GpadlFromMdl >= 0 )
              goto LABEL_25;
            v8 = WdLogNewEntry5_WdError(v15);
            *(_QWORD *)(v8 + 24) = v16;
            *(_QWORD *)(v8 + 32) = 5277LL;
          }
          else
          {
            v8 = WdLogNewEntry5_WdError(v10);
            *(_QWORD *)(v8 + 24) = (int)v12;
          }
        }
        else
        {
          v8 = WdLogNewEntry5_WdError(v7);
          *(_QWORD *)(v8 + 24) = 5259LL;
        }
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v8 + 24) = 5252LL;
      }
      WdLogEvent5_WdError(v8);
      v17 = (struct _MDL *)*((_QWORD *)this + 157);
      if ( v17 )
      {
        MmFreePagesFromMdl(v17);
        *((_QWORD *)this + 156) = 0LL;
        *((_QWORD *)this + 157) = 0LL;
      }
      v18 = (_QWORD *)*((_QWORD *)this + 152);
      if ( v18 )
      {
        DXGDIAGNOSTICS::`scalar deleting destructor'(v18);
        *((_QWORD *)this + 152) = 0LL;
      }
    }
  }
LABEL_25:
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return *((_QWORD *)this + 152) == 0LL ? 0xC0000017 : 0;
}
