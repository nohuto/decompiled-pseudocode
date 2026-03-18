/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001316C
 * Callers:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00066BC (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C0013100 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00222E4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C0025190 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C00036E8 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C00068F4 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020434 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0020624 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, char a3, __int64 a4)
{
  unsigned int *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // edx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned int *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int **v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  void (__fastcall *v21)(_QWORD, __int64); // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  char v24[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v27; // [rsp+58h] [rbp-40h]
  char v28[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v29; // [rsp+68h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+70h] [rbp-28h] BYREF
  char v31; // [rsp+88h] [rbp-10h]

  v6 = (unsigned int *)(*((_QWORD *)this + 290) + 520LL * a2);
  *((_BYTE *)v6 + 356) = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    v14 = v6[52];
    if ( v14 )
    {
      if ( v14 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286)
                                                                                             + 432LL)
                                                                                 + 8LL)
                                                                     + 744LL))(
          *(_QWORD *)(*((_QWORD *)this + 286) + 440LL),
          *((unsigned __int16 *)v6 + 3),
          v6[53],
          *v6,
          a3);
    }
    else
    {
      LOBYTE(a4) = a3;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 408LL)
                                                                          + 8LL)
                                                              + 704LL))(
        *(_QWORD *)(*((_QWORD *)this + 286) + 416LL),
        *((unsigned __int16 *)v6 + 3),
        v6[53],
        a4);
    }
    if ( *((_BYTE *)v6 + 357) && (int)v6[97] > 0 )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v24, (KSPIN_LOCK *)this + 348, 1);
      if ( a3 )
      {
        v13 = v6 + 100;
        if ( *((_QWORD *)v6 + 50) )
        {
          v15 = *(_QWORD *)v13;
          v16 = (unsigned int **)*((_QWORD *)v6 + 51);
          if ( *(unsigned int **)(*(_QWORD *)v13 + 8LL) != v13 || *v16 != v13 )
            __fastfail(3u);
          *v16 = (unsigned int *)v15;
          *(_QWORD *)(v15 + 8) = v16;
          *(_QWORD *)v13 = 0LL;
        }
      }
      else if ( v6[104] )
      {
        if ( v6[96] )
        {
          v9 = v6[1];
          v6[96] = 0;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v9, **((_QWORD **)this + 326));
        }
        v10 = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v6 + 49) = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v6 + 49) = v10 + *(_QWORD *)(*((_QWORD *)this + 326) + 8LL);
        v11 = v6 + 100;
        if ( !*((_QWORD *)v6 + 50) )
        {
          v17 = (_QWORD *)((char *)this + 2768);
          v18 = *((_QWORD *)this + 346);
          if ( *(DXGADAPTER **)(v18 + 8) != (DXGADAPTER *)((char *)this + 2768) )
            __fastfail(3u);
          *v11 = v18;
          *((_QWORD *)v6 + 51) = v17;
          *(_QWORD *)(v18 + 8) = v11;
          *v17 = v11;
        }
        if ( !*((_BYTE *)this + 2756) )
        {
          v19 = *((_QWORD *)this + 286);
          *((_BYTE *)this + 2756) = 1;
          v20 = *(_QWORD *)(*(_QWORD *)(v19 + 408) + 8LL);
          v21 = *(void (__fastcall **)(_QWORD, __int64))(v20 + 760);
          LOBYTE(v20) = 1;
          v21(*(_QWORD *)(v19 + 416), v20);
        }
      }
      else if ( v6[96] != 2 )
      {
        v8 = v6[1];
        v6[96] = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v8, *(_QWORD *)(*((_QWORD *)this + 326) + 32LL));
      }
      if ( v27 )
      {
        v27 = 0;
        *(_QWORD *)(v25 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    if ( !v6[52] && *((_QWORD *)this + 335) )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v28, (KSPIN_LOCK *)this + 348, 1);
      if ( a3 )
      {
        if ( !*((_DWORD *)this + 620) )
        {
          v7 = *((_QWORD *)this + 335) + 400LL;
          if ( *(_QWORD *)v7 )
          {
            v22 = *(_QWORD *)v7;
            v23 = *(_QWORD **)(*((_QWORD *)this + 335) + 408LL);
            if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v23 != v7 )
              __fastfail(3u);
            *v23 = v22;
            *(_QWORD *)(v22 + 8) = v23;
            *(_QWORD *)(*((_QWORD *)this + 335) + 400LL) = 0LL;
          }
          if ( *((_DWORD *)this + 691) )
          {
            *((_DWORD *)this + 691) = 0;
            DXGADAPTER::UpdateLatencyTolerances(this);
          }
        }
        ++*((_DWORD *)this + 620);
      }
      else if ( (*((_DWORD *)this + 620))-- == 1 )
      {
        DXGADAPTER::ScheduleAdapterActivityCheck((KSPIN_LOCK *)this);
      }
      if ( v31 )
      {
        v31 = 0;
        *(_QWORD *)(v29 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v30);
      }
    }
  }
}
