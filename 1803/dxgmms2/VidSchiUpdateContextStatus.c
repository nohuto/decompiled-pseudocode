/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C000CE10
 * Callers:
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001280 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0004130 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0007FE0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00082B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A450 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B470 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E5FC (VidSchiCompleteRewindPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EE80 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiUnwaitContext @ 0x1C0011080 (VidSchiUnwaitContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00111BC (VidSchiSubmitWaitCommand.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C0011544 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchSuspendResumeDevice @ 0x1C0012590 (VidSchSuspendResumeDevice.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C002BBF4 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchSetNodePowerState @ 0x1C002EEE0 (VidSchSetNodePowerState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C00244A0 (McTemplateK0pqq.c)
 *     McTemplateK0piixqq @ 0x1C0028BAC (McTemplateK0piixqq.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  int v5; // r12d
  int v6; // esi
  __int64 v8; // r13
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
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  signed __int32 v24; // ecx
  _QWORD *v25; // rax
  __int64 v26; // r9
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  unsigned int v38; // r15d
  __int64 v39; // rax
  unsigned int v40; // eax
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  __int64 *v43; // rcx
  __int64 *v44; // r14
  int v45; // eax

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
    if ( (*(_DWORD *)(a1 + 184) & 8) != 0
      || (*(_DWORD *)(a1 + 184) & 4) != 0
      || (*(_DWORD *)(a1 + 184) & 0x10) != 0
      || (*(_DWORD *)(a1 + 184) & 0x40) != 0
      || (*(_DWORD *)(a1 + 184) & 0x200) != 0
      || (*(_DWORD *)(a1 + 184) & 0x100) != 0
      || (*(_DWORD *)(a1 + 184) & 0x80u) != 0
      || (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
      v41[3] = 281LL;
      v41[4] = 1024LL;
      v41[5] = v8;
      v41[6] = v3;
      v41[7] = a1;
      WdLogEvent5_WdCriticalError(v41);
      JUMPOUT(0x1C001E2F9LL);
    }
    if ( (*(_DWORD *)(a1 + 184) & 1) == 0 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = (_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v17 + 8) != a1 + 8 || (v19 = *(_QWORD **)(a1 + 16), (_QWORD *)*v19 != v18) )
        __fastfail(3u);
      *v19 = v17;
      *(_QWORD *)(v17 + 8) = v19;
      v20 = *(_DWORD *)(a1 + 404);
      a3 = *(_QWORD **)(v3 + 24);
      if ( *(_QWORD *)(16LL * v20 + v3 + 2008) == 16LL * v20 + v3 + 2008 )
      {
        *(_DWORD *)(v3 + 1736) |= 1 << v20;
        v21 = a3[53];
        v22 = 1LL << *(_BYTE *)(v3 + 4);
        if ( (v21 & v22) == 0
          && (~((1 << *(_DWORD *)(a1 + 404)) - 1) & *(_DWORD *)(v3 + 1740)) == 0
          && !*(_DWORD *)(v3 + 2836) )
        {
          a3[53] = v22 | v21;
        }
      }
      if ( !*(_DWORD *)(v3 + 2812) )
      {
        if ( !*(_QWORD *)(v8 + 416) && *(_DWORD *)(*(_QWORD *)(v8 + 16) + 136LL) == 1 )
        {
          v40 = *(_DWORD *)(v3 + 6256);
          if ( v40 != -1 )
          {
            a3 = *(_QWORD **)(v8 + 2912);
            if ( a3 )
            {
              (*(void (__fastcall **)(_QWORD))(v8 + 2912))(*(_QWORD *)(v8 + 2952));
              v40 = *(_DWORD *)(v3 + 6256);
            }
          }
          if ( v40 != -1 )
          {
            a3 = *(_QWORD **)(v8 + 2920);
            if ( a3 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2920))(*(_QWORD *)(v8 + 2952), v40);
          }
        }
        v23 = *(_QWORD *)(v8 + 416);
        _bittestandset64(&v23, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 416) = v23;
      }
      ++*(_DWORD *)(v3 + 2812);
      *(_DWORD *)(a1 + 184) |= 1u;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0);
      a2 = (_QWORD *)(16LL * *(unsigned int *)(a1 + 404) + v3 + 2008);
      if ( v24 == 1 )
      {
        v31 = *a2;
        if ( *(_QWORD **)(*a2 + 8LL) != a2 )
          __fastfail(3u);
        *v18 = v31;
        *(_QWORD *)(a1 + 16) = a2;
        *(_QWORD *)(v31 + 8) = v18;
        *a2 = v18;
      }
      else
      {
        v25 = (_QWORD *)a2[1];
        if ( (_QWORD *)*v25 != a2 )
          __fastfail(3u);
        *v18 = a2;
        *(_QWORD *)(a1 + 16) = v25;
        *v25 = v18;
        a2[1] = v18;
      }
      if ( *(_DWORD *)(a1 + 408) == 1 )
      {
        a2 = (_QWORD *)(a1 + 416);
        v32 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 648LL);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
        {
          v33 = *v32;
          if ( *(_QWORD **)(*v32 + 8LL) != v32 )
            __fastfail(3u);
          *a2 = v33;
          *(_QWORD *)(a1 + 424) = v32;
          *(_QWORD *)(v33 + 8) = a2;
          *v32 = a2;
        }
        else
        {
          v36 = (_QWORD *)v32[1];
          if ( (_QWORD *)*v36 != v32 )
            __fastfail(3u);
          *a2 = v32;
          *(_QWORD *)(a1 + 424) = v36;
          *v36 = a2;
          v32[1] = a2;
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
    if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
    {
      v12 = (*(_DWORD *)(v3 + 2812))-- == 1;
      if ( v12 )
      {
        v13 = *(_QWORD *)(v8 + 416);
        _bittestandreset64(&v13, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 416) = v13;
      }
      v14 = *(_DWORD *)(a1 + 404);
      if ( *(_QWORD *)(v3 + 16LL * v14 + 2008) == v3 + 16LL * v14 + 2008 )
        *(_DWORD *)(v3 + 1736) &= ~(1 << v14);
      if ( *(_DWORD *)(a1 + 408) == 1 )
      {
        v34 = (_QWORD *)(a1 + 416);
        v35 = *(_QWORD *)(a1 + 416);
        if ( *(_QWORD *)(v35 + 8) != a1 + 416 || (a3 = *(_QWORD **)(a1 + 424), (_QWORD *)*a3 != v34) )
          __fastfail(3u);
        *a3 = v35;
        *(_QWORD *)(v35 + 8) = a3;
        *(_QWORD *)(a1 + 424) = 0LL;
        *v34 = 0LL;
      }
      *(_DWORD *)(a1 + 184) &= ~1u;
    }
    if ( v6 )
    {
      switch ( v6 )
      {
        case 8:
          *(_DWORD *)(a1 + 184) |= 0x80u;
          v15 = v3 + 2552;
          v16 = *(_QWORD **)(v3 + 2560);
          if ( *v16 != v3 + 2552 )
            __fastfail(3u);
          goto LABEL_22;
        case 9:
          v42 = *(_QWORD **)(v3 + 2576);
          if ( *v42 != v3 + 2568 )
            __fastfail(3u);
          *a2 = v3 + 2568;
          *(_QWORD *)(a1 + 16) = v42;
          *v42 = a2;
          *(_QWORD *)(v3 + 2576) = a2;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1077LL) )
          {
            KeResetEvent((PRKEVENT)(v8 + 2832));
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1077LL) = 1;
          }
          *(_DWORD *)(a1 + 184) |= 0x200u;
          ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1080LL);
          break;
        case 10:
          v37 = *(_QWORD **)(v3 + 2576);
          if ( *v37 != v3 + 2568 )
            __fastfail(3u);
          *a2 = v3 + 2568;
          *(_QWORD *)(a1 + 16) = v37;
          *v37 = a2;
          *(_QWORD *)(v3 + 2576) = a2;
          if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
          {
            --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1080LL);
            *(_DWORD *)(a1 + 184) &= ~0x200u;
          }
          *(_DWORD *)(a1 + 184) |= 0x100u;
          *(_DWORD *)(a1 + 184) &= ~0x80u;
          v38 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 6256LL);
          if ( v38 != -1 )
          {
            v43 = (__int64 *)(a1 + 656);
            v44 = *(__int64 **)(a1 + 656);
            if ( v44 != (__int64 *)(a1 + 656) )
            {
              do
              {
                v45 = *((_DWORD *)v44 + 12);
                if ( (v45 & 0x10) != 0 )
                {
                  a3 = *(_QWORD **)(v8 + 2920);
                  if ( a3 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2920))(*(_QWORD *)(v8 + 2952), v38);
                    v45 = *((_DWORD *)v44 + 12);
                    v43 = (__int64 *)(a1 + 656);
                  }
                  *((_DWORD *)v44 + 12) = v45 & 0xFFFFFFEF;
                }
                v44 = (__int64 *)*v44;
              }
              while ( v44 != v43 );
            }
          }
          v39 = *(_QWORD *)(a1 + 104);
          if ( !*(_DWORD *)(v39 + 1080) )
          {
            *(_BYTE *)(v39 + 1076) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1077LL) = 0;
            KeSetEvent((PRKEVENT)(v8 + 2832), 0, 0);
          }
          break;
        case 1:
          v15 = v3 + 2536;
          v16 = *(_QWORD **)(v3 + 2544);
          if ( *v16 != v3 + 2536 )
            __fastfail(3u);
LABEL_22:
          *a2 = v15;
          *(_QWORD *)(a1 + 16) = v16;
          *v16 = a2;
          *(_QWORD *)(v15 + 8) = a2;
          break;
        default:
          v29 = *(_QWORD **)(v3 + 2528);
          if ( *v29 != v3 + 2520 )
            __fastfail(3u);
          *a2 = v3 + 2520;
          *(_QWORD *)(a1 + 16) = v29;
          *v29 = a2;
          *(_QWORD *)(v3 + 2528) = a2;
          switch ( v6 )
          {
            case 2:
              v30 = *(_DWORD *)(a1 + 184) | 8;
LABEL_58:
              *(_DWORD *)(a1 + 184) = v30;
              goto LABEL_45;
            case 3:
              *(_DWORD *)(a1 + 184) |= 0x10u;
              break;
            case 4:
              *(_DWORD *)(a1 + 184) |= 0x20u;
              break;
            case 7:
              v30 = *(_DWORD *)(a1 + 184) | 0x40;
              goto LABEL_58;
          }
          break;
      }
    }
    else
    {
      v28 = *(_QWORD **)(v3 + 2544);
      if ( *v28 != v3 + 2536 )
        __fastfail(3u);
      *a2 = v3 + 2536;
      *(_QWORD *)(a1 + 16) = v28;
      *v28 = a2;
      *(_QWORD *)(v3 + 2544) = a2;
      *(_DWORD *)(a1 + 184) = 0;
    }
  }
LABEL_45:
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 188) = v6;
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 316) + 12LL)) = v5;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 196) = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 200) = *(_DWORD *)(a1 + 772);
  v12 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 316) = ((unsigned __int8)*(_DWORD *)(a1 + 316) + 1) & 7;
  if ( !v12 )
  {
    v26 = *(_QWORD *)(a1 + 56);
    if ( !v26 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v26) = a1;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0piixqq(
        *(_QWORD *)(a1 + 448),
        (_DWORD)a2,
        (_DWORD)a3,
        v26,
        *(_QWORD *)(a1 + 448),
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(v3 + 1984),
        *(_DWORD *)(a1 + 436),
        3);
  }
  return v4;
}
