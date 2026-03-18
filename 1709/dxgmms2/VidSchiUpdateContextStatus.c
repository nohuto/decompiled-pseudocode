/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C000B5B0
 * Callers:
 *     VidSchiProcessDpcSystemRequest @ 0x1C00025C0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0007950 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0009AE0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0009D80 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000ADA0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000D414 (VidSchiCompleteRewindPacket.c)
 *     VidSchiUnwaitContext @ 0x1C000D6E4 (VidSchiUnwaitContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D814 (VidSchiSubmitWaitCommand.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000DF5C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchSuspendResumeDevice @ 0x1C000ECF0 (VidSchSuspendResumeDevice.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F6B0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0011110 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C0028D08 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchSetNodePowerState @ 0x1C002BE60 (VidSchSetNodePowerState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C0021B54 (McTemplateK0pqq.c)
 *     McTemplateK0piixqq @ 0x1C0025F78 (McTemplateK0piixqq.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  int v5; // r13d
  int v6; // esi
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // rcx
  bool v12; // zf
  __int64 v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r14
  _QWORD *v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r9
  _QWORD *v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  unsigned int v37; // r12d
  __int64 v38; // rax
  _QWORD *v39; // rcx
  void (__fastcall *v40)(_QWORD); // rax
  void (__fastcall *v41)(_QWORD); // rax
  _QWORD *v42; // rax
  __int64 *v43; // rcx
  __int64 *v44; // r14
  void (__fastcall *v45)(_QWORD, _QWORD); // rax

  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0;
  v5 = (int)a3;
  v6 = (int)a2;
  v8 = *(_QWORD *)(v3 + 24);
  if ( bTracingEnabled )
  {
    v9 = *(_QWORD *)(a1 + 56);
    if ( !v9 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v9) = a1;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqq(a1, (unsigned int)&EventUpdateContextStatus, (_DWORD)a3, v9, (char)a2, (char)a3);
  }
  if ( v6 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 176) & 8) != 0
      || (*(_DWORD *)(a1 + 176) & 4) != 0
      || (*(_DWORD *)(a1 + 176) & 0x10) != 0
      || (*(_DWORD *)(a1 + 176) & 0x40) != 0
      || (*(_DWORD *)(a1 + 176) & 0x200) != 0
      || (*(_DWORD *)(a1 + 176) & 0x100) != 0
      || (*(_DWORD *)(a1 + 176) & 0x80u) != 0
      || (*(_DWORD *)(a1 + 176) & 0x20) != 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
      v42[3] = 281LL;
      v42[4] = 1024LL;
      v42[5] = v8;
      v42[6] = v3;
      v42[7] = a1;
      WdLogEvent5_WdCriticalError(v42);
      JUMPOUT(0x1C001C859LL);
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) == 0 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = (_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v17 + 8) != a1 + 8 || (v19 = *(_QWORD **)(a1 + 16), (_QWORD *)*v19 != v18) )
        __fastfail(3u);
      *v19 = v17;
      *(_QWORD *)(v17 + 8) = v19;
      v20 = *(_DWORD *)(a1 + 396);
      a2 = (_QWORD *)(16LL * v20 + v3 + 1976);
      if ( (_QWORD *)*a2 == a2 )
        *(_DWORD *)(v3 + 1704) |= 1 << v20;
      if ( !*(_DWORD *)(v3 + 2780) )
      {
        if ( !*(_QWORD *)(v8 + 400) && *(_DWORD *)(*(_QWORD *)(v8 + 16) + 136LL) == 1 )
        {
          if ( *(_DWORD *)(v3 + 5904) != -1 )
          {
            v40 = *(void (__fastcall **)(_QWORD))(v8 + 2888);
            if ( v40 )
              v40(*(_QWORD *)(v8 + 2928));
          }
          LODWORD(a2) = *(_DWORD *)(v3 + 5904);
          if ( (_DWORD)a2 != -1 )
          {
            v41 = *(void (__fastcall **)(_QWORD))(v8 + 2896);
            if ( v41 )
              v41(*(_QWORD *)(v8 + 2928));
          }
        }
        v21 = *(_QWORD *)(v8 + 400);
        _bittestandset64(&v21, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 400) = v21;
      }
      ++*(_DWORD *)(v3 + 2780);
      *(_DWORD *)(a1 + 176) |= 1u;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 428), 0, 0) == 1;
      v22 = v3 + 1976;
      v23 = *(unsigned int *)(a1 + 396);
      if ( v12 )
      {
        v29 = (__int64 *)(16 * v23 + v22);
        v30 = *v29;
        if ( *(__int64 **)(*v29 + 8) != v29 )
          __fastfail(3u);
        *v18 = v30;
        *(_QWORD *)(a1 + 16) = v29;
        *(_QWORD *)(v30 + 8) = v18;
        *v29 = (__int64)v18;
      }
      else
      {
        v24 = 16 * v23 + v22;
        v25 = *(_QWORD **)(v24 + 8);
        if ( *v25 != v24 )
          __fastfail(3u);
        *v18 = v24;
        *(_QWORD *)(a1 + 16) = v25;
        *v25 = v18;
        *(_QWORD *)(v24 + 8) = v18;
      }
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v32 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 648LL);
        v33 = (_QWORD *)(a1 + 408);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 428), 0, 0) == 1 )
        {
          a2 = (_QWORD *)*v32;
          if ( *(_QWORD **)(*v32 + 8LL) != v32 )
            __fastfail(3u);
          *v33 = a2;
          *(_QWORD *)(a1 + 416) = v32;
          a2[1] = v33;
          *v32 = v33;
        }
        else
        {
          a2 = (_QWORD *)v32[1];
          if ( (_QWORD *)*a2 != v32 )
            __fastfail(3u);
          *v33 = v32;
          *(_QWORD *)(a1 + 416) = a2;
          *a2 = v33;
          v32[1] = v33;
        }
      }
      v4 = 1;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
    a2 = (_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v10 + 8) != a1 + 8 || (v11 = *(_QWORD **)(a1 + 16), (_QWORD *)*v11 != a2) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
    {
      v12 = (*(_DWORD *)(v3 + 2780))-- == 1;
      if ( v12 )
      {
        v13 = *(_QWORD *)(v8 + 400);
        _bittestandreset64(&v13, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 400) = v13;
      }
      v14 = *(_DWORD *)(a1 + 396);
      if ( *(_QWORD *)(v3 + 16LL * v14 + 1976) == v3 + 16LL * v14 + 1976 )
        *(_DWORD *)(v3 + 1704) &= ~(1 << v14);
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v34 = (_QWORD *)(a1 + 408);
        v35 = *(_QWORD *)(a1 + 408);
        if ( *(_QWORD *)(v35 + 8) != a1 + 408 || (a3 = *(_QWORD **)(a1 + 416), (_QWORD *)*a3 != v34) )
          __fastfail(3u);
        *a3 = v35;
        *(_QWORD *)(v35 + 8) = a3;
        *(_QWORD *)(a1 + 416) = 0LL;
        *v34 = 0LL;
      }
      *(_DWORD *)(a1 + 176) &= ~1u;
    }
    if ( v6 )
    {
      switch ( v6 )
      {
        case 8:
          *(_DWORD *)(a1 + 176) |= 0x80u;
          v15 = v3 + 2520;
          v16 = *(_QWORD **)(v3 + 2528);
          if ( *v16 != v3 + 2520 )
            __fastfail(3u);
          goto LABEL_22;
        case 9:
          v39 = *(_QWORD **)(v3 + 2544);
          if ( *v39 != v3 + 2536 )
            __fastfail(3u);
          *a2 = v3 + 2536;
          *(_QWORD *)(a1 + 16) = v39;
          *v39 = a2;
          *(_QWORD *)(v3 + 2544) = a2;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1053LL) )
          {
            KeResetEvent((PRKEVENT)(v8 + 2808));
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1053LL) = 1;
          }
          *(_DWORD *)(a1 + 176) |= 0x200u;
          ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1056LL);
          break;
        case 10:
          v36 = *(_QWORD **)(v3 + 2544);
          if ( *v36 != v3 + 2536 )
            __fastfail(3u);
          *a2 = v3 + 2536;
          *(_QWORD *)(a1 + 16) = v36;
          *v36 = a2;
          *(_QWORD *)(v3 + 2544) = a2;
          if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
          {
            --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1056LL);
            *(_DWORD *)(a1 + 176) &= ~0x200u;
          }
          *(_DWORD *)(a1 + 176) |= 0x100u;
          *(_DWORD *)(a1 + 176) &= ~0x80u;
          v37 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 5904LL);
          if ( v37 != -1 )
          {
            v43 = (__int64 *)(a1 + 648);
            v44 = *(__int64 **)(a1 + 648);
            if ( v44 != (__int64 *)(a1 + 648) )
            {
              do
              {
                if ( (v44[6] & 0x10) != 0 )
                {
                  v45 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2896);
                  if ( v45 )
                  {
                    v45(*(_QWORD *)(v8 + 2928), v37);
                    v43 = (__int64 *)(a1 + 648);
                  }
                  *((_DWORD *)v44 + 12) &= ~0x10u;
                }
                v44 = (__int64 *)*v44;
              }
              while ( v44 != v43 );
            }
          }
          v38 = *(_QWORD *)(a1 + 104);
          if ( !*(_DWORD *)(v38 + 1056) )
          {
            *(_BYTE *)(v38 + 1052) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1053LL) = 0;
            KeSetEvent((PRKEVENT)(v8 + 2808), 0, 0);
          }
          break;
        case 1:
          v15 = v3 + 2504;
          v16 = *(_QWORD **)(v3 + 2512);
          if ( *v16 != v3 + 2504 )
            __fastfail(3u);
LABEL_22:
          *a2 = v15;
          *(_QWORD *)(a1 + 16) = v16;
          *v16 = a2;
          *(_QWORD *)(v15 + 8) = a2;
          break;
        default:
          v31 = *(_QWORD **)(v3 + 2496);
          if ( *v31 != v3 + 2488 )
            __fastfail(3u);
          *a2 = v3 + 2488;
          *(_QWORD *)(a1 + 16) = v31;
          *v31 = a2;
          *(_QWORD *)(v3 + 2496) = a2;
          switch ( v6 )
          {
            case 2:
              *(_DWORD *)(a1 + 176) |= 8u;
              break;
            case 3:
              *(_DWORD *)(a1 + 176) |= 0x10u;
              break;
            case 4:
              *(_DWORD *)(a1 + 176) |= 0x20u;
              break;
            case 7:
              *(_DWORD *)(a1 + 176) |= 0x40u;
              break;
          }
          break;
      }
    }
    else
    {
      v28 = *(_QWORD **)(v3 + 2512);
      if ( *v28 != v3 + 2504 )
        __fastfail(3u);
      *a2 = v3 + 2504;
      *(_QWORD *)(a1 + 16) = v28;
      *v28 = a2;
      *(_QWORD *)(v3 + 2512) = a2;
      *(_DWORD *)(a1 + 176) = 0;
    }
  }
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 180) = v6;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 184) = v5;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 188) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 308) + 12LL)) = *(_DWORD *)(a1 + 764);
  v12 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 308) = ((unsigned __int8)*(_DWORD *)(a1 + 308) + 1) & 7;
  if ( !v12 )
  {
    v26 = *(_QWORD *)(a1 + 56);
    if ( !v26 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v26) = a1;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0piixqq(
        *(_QWORD *)(a1 + 440),
        (_DWORD)a2,
        (_DWORD)a3,
        v26,
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(a1 + 432),
        *(_QWORD *)(v3 + 1952),
        *(_DWORD *)(a1 + 428),
        3);
  }
  return v4;
}
