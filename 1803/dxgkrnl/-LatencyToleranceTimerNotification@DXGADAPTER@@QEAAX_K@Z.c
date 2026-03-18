/*
 * XREFs of ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00253D0
 * Callers:
 *     ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1C0159950 (-DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C002508C (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00271D0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0027344 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0 @ 0x1C002771C (McTemplateK0.c)
 */

void __fastcall DXGADAPTER::LatencyToleranceTimerNotification(KSPIN_LOCK *this, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  int v9; // eax
  int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  int v13; // eax
  KSPIN_LOCK v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _BYTE v19[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v22; // [rsp+48h] [rbp-30h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0(this, &Dxgk_LatencyToleranceTimer);
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v19, this + 370, 1);
  v5 = this + 368;
  v6 = (_QWORD *)this[368];
  while ( v6 != v5 )
  {
    v7 = v6 - 50;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v7 + 356) || *((_DWORD *)v7 + 86) == *((_DWORD *)v7 + 2) - 1 )
    {
      if ( (_QWORD *)v6[1] != v8 || (v17 = (_QWORD *)v8[1], (_QWORD *)*v17 != v8) )
        __fastfail(3u);
      *v17 = v6;
      v6[1] = v17;
LABEL_13:
      *v8 = 0LL;
    }
    else if ( v7[49] <= a2 )
    {
      v9 = *((_DWORD *)v7 + 52);
      if ( v9 )
      {
        if ( v9 == 6 )
        {
          v13 = *((_DWORD *)this + 735);
          switch ( v13 )
          {
            case 0:
              *((_DWORD *)this + 735) = 1;
              v14 = this[352];
LABEL_19:
              v7[49] = a2 + v14;
              goto LABEL_20;
            case 1:
              *((_DWORD *)this + 735) = 2;
              v14 = this[354];
              goto LABEL_19;
            case 2:
              *((_DWORD *)this + 735) = 3;
              v15 = *v8;
              if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v16 = (_QWORD *)v8[1], (_QWORD *)*v16 != v8) )
                __fastfail(3u);
              *v16 = v15;
              *(_QWORD *)(v15 + 8) = v16;
              *v8 = 0LL;
LABEL_20:
              DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
              break;
          }
        }
      }
      else
      {
        v10 = *((_DWORD *)v7 + 96) + 1;
        DXGADAPTER::SetPowerComponentLatencyCB(
          (DXGADAPTER *)this,
          *((_DWORD *)v7 + 1),
          *(_QWORD *)(this[348] + 16LL * v10));
        *((_DWORD *)v7 + 96) = v10;
        v7[49] = a2 + *(_QWORD *)(this[348] + 16LL * v10 + 8);
        if ( v10 == *((_DWORD *)v7 + 97) )
        {
          v11 = *v8;
          if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v12 = (_QWORD *)v8[1], (_QWORD *)*v12 != v8) )
            __fastfail(3u);
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          goto LABEL_13;
        }
      }
    }
  }
  if ( (_QWORD *)*v5 == v5 )
  {
    *((_BYTE *)this + 2932) = 0;
    LOBYTE(v4) = 0;
  }
  else
  {
    LOBYTE(v4) = *((_BYTE *)this + 2932);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(this[308] + 520) + 8LL) + 872LL))(
    *(_QWORD *)(this[308] + 528),
    v4);
  if ( v22 )
  {
    v22 = 0;
    *(_QWORD *)(v20 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0(v18, &Dxgk_LatencyToleranceTimerEnd);
  }
}
