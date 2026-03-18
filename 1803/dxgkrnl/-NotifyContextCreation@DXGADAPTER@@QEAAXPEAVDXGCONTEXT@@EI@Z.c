/*
 * XREFs of ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00162D4
 * Callers:
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C00F2B0C (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F2C74 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FD9FC (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00FDD94 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C002508C (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00271D0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0027344 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyContextCreation(DXGADAPTER *this, struct DXGCONTEXT *a2, char a3, int a4)
{
  unsigned int i; // esi
  signed __int32 v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  void (__fastcall *v20)(_QWORD, __int64); // rax
  int v21; // eax
  unsigned int v22; // edx
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 **v25; // rcx
  _BYTE v26[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v29; // [rsp+48h] [rbp-20h]

  if ( *((_DWORD *)a2 + 36) != 2 && (*((_DWORD *)a2 + 91) & 8) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 660); ++i )
    {
      v10 = *((_QWORD *)this + 312) + 520LL * i;
      if ( !*(_DWORD *)(v10 + 208)
        && (a4 == *(_DWORD *)(v10 + 212) && *((_DWORD *)a2 + 90) == *(unsigned __int16 *)(v10 + 6)
         || *(_BYTE *)(v10 + 358)) )
      {
        DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v26, (DXGADAPTER *)((char *)this + 2960), 1u);
        v11 = *(_DWORD *)(v10 + 416);
        if ( a3 )
        {
          v12 = v11 + 1;
          *(_DWORD *)(v10 + 416) = v12;
          if ( v12 == 1 )
          {
            v13 = *(_DWORD *)(v10 + 4);
            *(_DWORD *)(v10 + 384) = 0;
            DXGADAPTER::SetPowerComponentLatencyCB(this, v13, **((_QWORD **)this + 348));
            if ( *(int *)(v10 + 388) > 0 )
            {
              v14 = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)(v10 + 392) = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)(v10 + 392) = v14 + *(_QWORD *)(*((_QWORD *)this + 348) + 8LL);
              v15 = (_QWORD *)(v10 + 400);
              if ( !*v15 )
              {
                v16 = (_QWORD *)((char *)this + 2944);
                v17 = *((_QWORD *)this + 368);
                if ( *(DXGADAPTER **)(v17 + 8) != (DXGADAPTER *)((char *)this + 2944) )
                  __fastfail(3u);
                *v15 = v17;
                v15[1] = v16;
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
          }
        }
        else
        {
          v21 = v11 - 1;
          *(_DWORD *)(v10 + 416) = v21;
          if ( !v21 )
          {
            v22 = *(_DWORD *)(v10 + 4);
            *(_DWORD *)(v10 + 384) = 2;
            DXGADAPTER::SetPowerComponentLatencyCB(this, v22, *(_QWORD *)(*((_QWORD *)this + 348) + 32LL));
            v23 = (__int64 *)(v10 + 400);
            v24 = *v23;
            if ( *v23 )
            {
              if ( *(__int64 **)(v24 + 8) != v23 || (v25 = (__int64 **)v23[1], *v25 != v23) )
                __fastfail(3u);
              *v25 = (__int64 *)v24;
              *(_QWORD *)(v24 + 8) = v25;
              *v23 = 0LL;
            }
          }
        }
        if ( v29 )
        {
          v29 = 0;
          *(_QWORD *)(v27 + 8) = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
    }
    if ( a3 )
      v9 = _InterlockedIncrement((volatile signed __int32 *)this + 663);
    else
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 663, 0xFFFFFFFF);
    if ( v9 == 1 )
    {
      if ( *((_QWORD *)this + 313) )
        DXGADAPTER::UpdateLatencyTolerances(this);
    }
  }
}
