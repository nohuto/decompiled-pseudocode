/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C000A0C0
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0006B50 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0007F80 (VidSchiInsertCommandToSoftwareQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0008F20 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C00098D0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUnwaitContext @ 0x1C000DA38 (VidSchiUnwaitContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000DB74 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000DCA4 (VidSchiCompleteRewindPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000E3A0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000ED5C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F360 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchSuspendResumeDevice @ 0x1C0010450 (VidSchSuspendResumeDevice.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0010870 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchSetNodePowerState @ 0x1C00142B0 (VidSchSetNodePowerState.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C0026C00 (VidSchiReadCommandFromContextQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C001FA90 (Template_pqq.c)
 *     Template_piixqq @ 0x1C0023EF4 (Template_piixqq.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  int v5; // r13d
  int v6; // esi
  __int64 v8; // r15
  __int64 v9; // rcx
  _QWORD *v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r14
  _QWORD *v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  unsigned int v35; // r12d
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // r9
  void (__fastcall *v39)(_QWORD); // rax
  void (__fastcall *v40)(_QWORD); // rax
  _QWORD *v41; // rax
  __int64 *v42; // rcx
  __int64 *v43; // r14
  void (__fastcall *v44)(_QWORD, _QWORD); // rax
  __int64 v45; // r9

  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0;
  v5 = a3;
  v6 = (int)a2;
  v8 = *(_QWORD *)(v3 + 24);
  if ( bTracingEnabled )
  {
    v38 = *(_QWORD *)(a1 + 56);
    if ( !v38 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v38) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pqq(a1, (unsigned int)&EventUpdateContextStatus, a3, v38, (char)a2, a3);
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
      v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
      v41[3] = 281LL;
      v41[4] = 1024LL;
      v41[5] = v8;
      v41[6] = v3;
      v41[7] = a1;
      WdLogEvent5_WdCriticalError(v41);
      JUMPOUT(0x1C001A6EELL);
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) == 0 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = (_QWORD *)(a1 + 8);
      v18 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v16 + 8) != a1 + 8 || (_QWORD *)*v18 != v17 )
        __fastfail(3u);
      *v18 = v16;
      *(_QWORD *)(v16 + 8) = v18;
      v19 = *(_DWORD *)(a1 + 396);
      a2 = (_QWORD *)(16LL * v19 + v3 + 1960);
      if ( (_QWORD *)*a2 == a2 )
        *(_DWORD *)(v3 + 1688) |= 1 << v19;
      if ( !*(_DWORD *)(v3 + 2756) )
      {
        if ( !*(_QWORD *)(v8 + 392) && *(_DWORD *)(*(_QWORD *)(v8 + 16) + 136LL) == 1 )
        {
          if ( *(_DWORD *)(v3 + 2792) != -1 )
          {
            v39 = *(void (__fastcall **)(_QWORD))(v8 + 2872);
            if ( v39 )
              v39(*(_QWORD *)(v8 + 2912));
          }
          LODWORD(a2) = *(_DWORD *)(v3 + 2792);
          if ( (_DWORD)a2 != -1 )
          {
            v40 = *(void (__fastcall **)(_QWORD))(v8 + 2880);
            if ( v40 )
              v40(*(_QWORD *)(v8 + 2912));
          }
        }
        v20 = *(_QWORD *)(v8 + 392);
        _bittestandset64(&v20, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 392) = v20;
      }
      ++*(_DWORD *)(v3 + 2756);
      *(_DWORD *)(a1 + 176) |= 1u;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 1;
      v21 = v3 + 1960;
      v22 = *(unsigned int *)(a1 + 396);
      if ( v11 )
      {
        v27 = (__int64 *)(16 * v22 + v21);
        v28 = *v27;
        if ( *(__int64 **)(*v27 + 8) != v27 )
          __fastfail(3u);
        *v17 = v28;
        *(_QWORD *)(a1 + 16) = v27;
        *(_QWORD *)(v28 + 8) = v17;
        *v27 = (__int64)v17;
      }
      else
      {
        v23 = 16 * v22 + v21;
        v24 = *(_QWORD **)(v23 + 8);
        if ( *v24 != v23 )
          __fastfail(3u);
        *v17 = v23;
        *(_QWORD *)(a1 + 16) = v24;
        *v24 = v17;
        *(_QWORD *)(v23 + 8) = v17;
      }
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v30 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 648LL);
        v31 = (_QWORD *)(a1 + 408);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 1 )
        {
          a2 = (_QWORD *)*v30;
          if ( *(_QWORD **)(*v30 + 8LL) != v30 )
            __fastfail(3u);
          *v31 = a2;
          *(_QWORD *)(a1 + 416) = v30;
          a2[1] = v31;
          *v30 = v31;
        }
        else
        {
          a2 = (_QWORD *)v30[1];
          if ( (_QWORD *)*a2 != v30 )
            __fastfail(3u);
          *v31 = v30;
          *(_QWORD *)(a1 + 416) = a2;
          *a2 = v31;
          v30[1] = v31;
        }
      }
      v4 = 1;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    a2 = (_QWORD *)(a1 + 8);
    v10 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v9 + 8) != a1 + 8 || (_QWORD *)*v10 != a2 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
    {
      v11 = (*(_DWORD *)(v3 + 2756))-- == 1;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v8 + 392);
        _bittestandreset64(&v12, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 392) = v12;
      }
      v13 = *(_DWORD *)(a1 + 396);
      if ( *(_QWORD *)(v3 + 16LL * v13 + 1960) == v3 + 16LL * v13 + 1960 )
        *(_DWORD *)(v3 + 1688) &= ~(1 << v13);
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v32 = (_QWORD *)(a1 + 408);
        a3 = *(_QWORD *)(a1 + 408);
        v33 = *(_QWORD **)(a1 + 416);
        if ( *(_QWORD *)(a3 + 8) != a1 + 408 || (_QWORD *)*v33 != v32 )
          __fastfail(3u);
        *v33 = a3;
        *(_QWORD *)(a3 + 8) = v33;
        *(_QWORD *)(a1 + 416) = 0LL;
        *v32 = 0LL;
      }
      *(_DWORD *)(a1 + 176) &= ~1u;
    }
    if ( v6 )
    {
      switch ( v6 )
      {
        case 8:
          *(_DWORD *)(a1 + 176) |= 0x80u;
          v14 = v3 + 2504;
          v15 = *(_QWORD **)(v3 + 2512);
          if ( *v15 != v3 + 2504 )
            __fastfail(3u);
          goto LABEL_18;
        case 9:
          v37 = *(_QWORD **)(v3 + 2528);
          if ( *v37 != v3 + 2520 )
            __fastfail(3u);
          *a2 = v3 + 2520;
          *(_QWORD *)(a1 + 16) = v37;
          *v37 = a2;
          *(_QWORD *)(v3 + 2528) = a2;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1053LL) )
          {
            KeResetEvent((PRKEVENT)(v8 + 2792));
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1053LL) = 1;
          }
          *(_DWORD *)(a1 + 176) |= 0x200u;
          ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1056LL);
          break;
        case 10:
          v34 = *(_QWORD **)(v3 + 2528);
          if ( *v34 != v3 + 2520 )
            __fastfail(3u);
          *a2 = v3 + 2520;
          *(_QWORD *)(a1 + 16) = v34;
          *v34 = a2;
          *(_QWORD *)(v3 + 2528) = a2;
          if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
          {
            --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1056LL);
            *(_DWORD *)(a1 + 176) &= ~0x200u;
          }
          *(_DWORD *)(a1 + 176) |= 0x100u;
          *(_DWORD *)(a1 + 176) &= ~0x80u;
          v35 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 2792LL);
          if ( v35 != -1 )
          {
            v42 = (__int64 *)(a1 + 672);
            v43 = *(__int64 **)(a1 + 672);
            if ( v43 != (__int64 *)(a1 + 672) )
            {
              do
              {
                if ( (v43[6] & 0x10) != 0 )
                {
                  v44 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2880);
                  if ( v44 )
                  {
                    v44(*(_QWORD *)(v8 + 2912), v35);
                    v42 = (__int64 *)(a1 + 672);
                  }
                  *((_DWORD *)v43 + 12) &= ~0x10u;
                }
                v43 = (__int64 *)*v43;
              }
              while ( v43 != v42 );
            }
          }
          v36 = *(_QWORD *)(a1 + 104);
          if ( !*(_DWORD *)(v36 + 1056) )
          {
            *(_BYTE *)(v36 + 1052) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1053LL) = 0;
            KeSetEvent((PRKEVENT)(v8 + 2792), 0, 0);
          }
          break;
        case 1:
          v14 = v3 + 2488;
          v15 = *(_QWORD **)(v3 + 2496);
          if ( *v15 != v3 + 2488 )
            __fastfail(3u);
LABEL_18:
          *a2 = v14;
          *(_QWORD *)(a1 + 16) = v15;
          *v15 = a2;
          *(_QWORD *)(v14 + 8) = a2;
          break;
        default:
          v29 = *(_QWORD **)(v3 + 2480);
          if ( *v29 != v3 + 2472 )
            __fastfail(3u);
          *a2 = v3 + 2472;
          *(_QWORD *)(a1 + 16) = v29;
          *v29 = a2;
          *(_QWORD *)(v3 + 2480) = a2;
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
      v26 = *(_QWORD **)(v3 + 2496);
      if ( *v26 != v3 + 2488 )
        __fastfail(3u);
      *a2 = v3 + 2488;
      *(_QWORD *)(a1 + 16) = v26;
      *v26 = a2;
      *(_QWORD *)(v3 + 2496) = a2;
      *(_DWORD *)(a1 + 176) = 0;
    }
  }
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 180) = v6;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 184) = v5;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 188) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 308) + 12LL)) = *(_DWORD *)(a1 + 788);
  v11 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 308) = ((unsigned __int8)*(_DWORD *)(a1 + 308) + 1) & 7;
  if ( !v11 )
  {
    v45 = *(_QWORD *)(a1 + 56);
    if ( !v45 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v45) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_piixqq(
        *(_QWORD *)(a1 + 464),
        (_DWORD)a2,
        a3,
        v45,
        *(_QWORD *)(a1 + 464),
        *(_QWORD *)(a1 + 456),
        *(_QWORD *)(v3 + 1936),
        *(_DWORD *)(a1 + 448),
        3);
  }
  return v4;
}
