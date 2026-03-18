/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001EC80
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001F9C4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C001FE94 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C0023740 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C00237A0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C001E1EC (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C001F71C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020170 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00202B8 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, char a3, __int64 a4)
{
  unsigned int *v6; // rdi
  unsigned int v7; // eax
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int **v10; // rdx
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  void (__fastcall *v19)(_QWORD, __int64); // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  char v24[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v27; // [rsp+58h] [rbp-40h]
  char v28[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v29; // [rsp+68h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+70h] [rbp-28h] BYREF
  char v31; // [rsp+88h] [rbp-10h]

  v6 = (unsigned int *)(*((_QWORD *)this + 293) + 520LL * a2);
  *((_BYTE *)v6 + 356) = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    v7 = v6[52];
    if ( v7 )
    {
      if ( v7 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 289)
                                                                                             + 528LL)
                                                                                 + 8LL)
                                                                     + 744LL))(
          *(_QWORD *)(*((_QWORD *)this + 289) + 536LL),
          *((unsigned __int16 *)v6 + 3),
          v6[53],
          *v6,
          a3);
    }
    else
    {
      LOBYTE(a4) = a3;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 289) + 504LL)
                                                                          + 8LL)
                                                              + 704LL))(
        *(_QWORD *)(*((_QWORD *)this + 289) + 512LL),
        *((unsigned __int16 *)v6 + 3),
        v6[53],
        a4);
    }
    if ( *((_BYTE *)v6 + 357) && (int)v6[97] > 0 )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v24, (KSPIN_LOCK *)this + 351, 1);
      if ( a3 )
      {
        v8 = v6 + 100;
        if ( *((_QWORD *)v6 + 50) )
        {
          v9 = *(_QWORD *)v8;
          if ( *(unsigned int **)(*(_QWORD *)v8 + 8LL) != v8
            || (v10 = (unsigned int **)*((_QWORD *)v6 + 51), *v10 != v8) )
          {
            __fastfail(3u);
          }
          *v10 = (unsigned int *)v9;
          *(_QWORD *)(v9 + 8) = v10;
          *(_QWORD *)v8 = 0LL;
        }
      }
      else if ( v6[104] )
      {
        if ( v6[96] )
        {
          v12 = v6[1];
          v6[96] = 0;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v12, **((_QWORD **)this + 329));
        }
        v13 = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v6 + 49) = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v6 + 49) = v13 + *(_QWORD *)(*((_QWORD *)this + 329) + 8LL);
        v14 = v6 + 100;
        if ( !*((_QWORD *)v6 + 50) )
        {
          v15 = (_QWORD *)((char *)this + 2792);
          v16 = *((_QWORD *)this + 349);
          if ( *(DXGADAPTER **)(v16 + 8) != (DXGADAPTER *)((char *)this + 2792) )
            __fastfail(3u);
          *v14 = v16;
          *((_QWORD *)v6 + 51) = v15;
          *(_QWORD *)(v16 + 8) = v14;
          *v15 = v14;
        }
        if ( !*((_BYTE *)this + 2780) )
        {
          v17 = *((_QWORD *)this + 289);
          *((_BYTE *)this + 2780) = 1;
          v18 = *(_QWORD *)(*(_QWORD *)(v17 + 504) + 8LL);
          v19 = *(void (__fastcall **)(_QWORD, __int64))(v18 + 760);
          LOBYTE(v18) = 1;
          v19(*(_QWORD *)(v17 + 512), v18);
        }
      }
      else if ( v6[96] != 2 )
      {
        v11 = v6[1];
        v6[96] = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v11, *(_QWORD *)(*((_QWORD *)this + 329) + 32LL));
      }
      if ( v27 )
      {
        v27 = 0;
        *(_QWORD *)(v25 + 8) = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    if ( !v6[52] && *((_QWORD *)this + 338) )
    {
      DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v28, (KSPIN_LOCK *)this + 351, 1);
      if ( a3 )
      {
        if ( !*((_DWORD *)this + 626) )
        {
          v20 = *((_QWORD *)this + 338) + 400LL;
          if ( *(_QWORD *)v20 )
          {
            v21 = *(_QWORD *)v20;
            if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20
              || (v22 = *(_QWORD **)(*((_QWORD *)this + 338) + 408LL), *v22 != v20) )
            {
              __fastfail(3u);
            }
            *v22 = v21;
            *(_QWORD *)(v21 + 8) = v22;
            *(_QWORD *)(*((_QWORD *)this + 338) + 400LL) = 0LL;
          }
          if ( *((_DWORD *)this + 697) )
          {
            *((_DWORD *)this + 697) = 0;
            DXGADAPTER::UpdateLatencyTolerances(this);
          }
        }
        ++*((_DWORD *)this + 626);
      }
      else if ( (*((_DWORD *)this + 626))-- == 1 )
      {
        DXGADAPTER::ScheduleAdapterActivityCheck(this);
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
