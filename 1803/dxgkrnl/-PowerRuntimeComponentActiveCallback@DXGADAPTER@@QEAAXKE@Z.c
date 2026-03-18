/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0025B70
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0026A20 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0026EF0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C002B970 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C002B9D0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C002508C (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C0026778 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00271D0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0027344 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, char a3, __int64 a4)
{
  unsigned int *v6; // rdi
  unsigned int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  void (__fastcall *v20)(_QWORD, __int64); // rax
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 **v24; // rdx
  int v25; // eax
  _BYTE v26[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v29; // [rsp+58h] [rbp-40h]
  _BYTE v30[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v31; // [rsp+68h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+70h] [rbp-28h] BYREF
  char v33; // [rsp+88h] [rbp-10h]

  v6 = (unsigned int *)(*((_QWORD *)this + 312) + 520LL * a2);
  *((_BYTE *)v6 + 356) = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    v7 = v6[52];
    if ( v7 )
    {
      if ( v7 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 308)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 744LL))(
          *(_QWORD *)(*((_QWORD *)this + 308) + 552LL),
          *((unsigned __int16 *)v6 + 3),
          v6[53],
          *v6,
          a3);
    }
    else
    {
      LOBYTE(a4) = a3;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 308) + 520LL)
                                                                          + 8LL)
                                                              + 816LL))(
        *(_QWORD *)(*((_QWORD *)this + 308) + 528LL),
        *((unsigned __int16 *)v6 + 3),
        v6[53],
        a4);
    }
    if ( *((_BYTE *)v6 + 357) && (int)v6[97] > 0 )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v26, (KSPIN_LOCK *)this + 370, 1);
      if ( a3 )
      {
        v8 = v6 + 100;
        v9 = *((_QWORD *)v6 + 50);
        if ( v9 )
        {
          if ( *(_QWORD **)(v9 + 8) != v8 || (v10 = (_QWORD *)*((_QWORD *)v6 + 51), (_QWORD *)*v10 != v8) )
            __fastfail(3u);
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          *v8 = 0LL;
        }
      }
      else
      {
        v11 = v6[96];
        if ( v6[104] )
        {
          if ( v11 )
          {
            v13 = v6[1];
            v6[96] = 0;
            DXGADAPTER::SetPowerComponentLatencyCB(this, v13, **((_QWORD **)this + 348));
          }
          v14 = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)v6 + 49) = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)v6 + 49) = v14 + *(_QWORD *)(*((_QWORD *)this + 348) + 8LL);
          v15 = v6 + 100;
          if ( !*((_QWORD *)v6 + 50) )
          {
            v16 = (_QWORD *)((char *)this + 2944);
            v17 = *((_QWORD *)this + 368);
            if ( *(DXGADAPTER **)(v17 + 8) != (DXGADAPTER *)((char *)this + 2944) )
              __fastfail(3u);
            *v15 = v17;
            *((_QWORD *)v6 + 51) = v16;
            *(_QWORD *)(v17 + 8) = v15;
            *v16 = v15;
          }
          if ( !*((_BYTE *)this + 2932) )
          {
            v18 = *((_QWORD *)this + 308);
            *((_BYTE *)this + 2932) = 1;
            v19 = *(_QWORD *)(*(_QWORD *)(v18 + 520) + 8LL);
            v20 = *(void (__fastcall **)(_QWORD, __int64))(v19 + 872);
            LOBYTE(v19) = 1;
            v20(*(_QWORD *)(v18 + 528), v19);
          }
        }
        else if ( v11 != 2 )
        {
          v12 = v6[1];
          v6[96] = 2;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v12, *(_QWORD *)(*((_QWORD *)this + 348) + 32LL));
        }
      }
      if ( v29 )
      {
        v29 = 0;
        *(_QWORD *)(v27 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    if ( !v6[52] && *((_QWORD *)this + 357) )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v30, (KSPIN_LOCK *)this + 370, 1);
      v21 = *((_DWORD *)this + 664);
      if ( a3 )
      {
        if ( !v21 )
        {
          v22 = (__int64 *)(*((_QWORD *)this + 357) + 400LL);
          v23 = *v22;
          if ( *v22 )
          {
            if ( *(__int64 **)(v23 + 8) != v22 || (v24 = *(__int64 ***)(*((_QWORD *)this + 357) + 408LL), *v24 != v22) )
              __fastfail(3u);
            *v24 = (__int64 *)v23;
            *(_QWORD *)(v23 + 8) = v24;
            *(_QWORD *)(*((_QWORD *)this + 357) + 400LL) = 0LL;
          }
          if ( *((_DWORD *)this + 735) )
          {
            *((_DWORD *)this + 735) = 0;
            DXGADAPTER::UpdateLatencyTolerances(this);
          }
        }
        ++*((_DWORD *)this + 664);
      }
      else
      {
        v25 = v21 - 1;
        *((_DWORD *)this + 664) = v25;
        if ( !v25 )
          DXGADAPTER::ScheduleAdapterActivityCheck(this);
      }
      if ( v33 )
      {
        v33 = 0;
        *(_QWORD *)(v31 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v32);
      }
    }
  }
}
