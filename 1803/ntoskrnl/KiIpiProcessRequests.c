/*
 * XREFs of KiIpiProcessRequests @ 0x1400A3A30
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x1401B1AA0 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401ABF40 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PerfInfoLogIpi @ 0x1402B0DEC (PerfInfoLogIpi.c)
 */

__int64 KiIpiProcessRequests()
{
  unsigned __int8 v0; // si
  char v1; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  char *v4; // rbx
  char *v6; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r14
  void **v10; // r8
  int v11; // r9d
  void **v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // r11
  unsigned __int64 v15; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int128 v20; // [rsp+30h] [rbp-A8h]
  __int128 v21; // [rsp+40h] [rbp-98h]
  __int128 v22; // [rsp+50h] [rbp-88h]
  __int128 v23; // [rsp+60h] [rbp-78h]
  __int128 v24; // [rsp+70h] [rbp-68h]
  _BYTE v25[32]; // [rsp+80h] [rbp-58h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v1 = 1;
    EtwGetKernelTraceTimestamp(v25, 1077936128LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    _R12D = 0;
    v4 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v4 )
    {
      _R15D = 1;
      while ( 1 )
      {
        v6 = v4;
        v7 = v4;
        v4 = *(char **)v4;
        v8 = *((_QWORD *)v7 + 1);
        v9 = KiProcessorBlock[(unsigned int)((v6 - (char *)CurrentPrcb - 32384) >> 6)];
        if ( (v8 & 0xF) == 4 )
        {
          v10 = *(void ***)(v8 >> 16);
          v11 = (1 << *(_DWORD *)((v8 >> 16) + 0xC)) & 0xA;
          v12 = &v10[BYTE1(v8)];
          do
          {
            v13 = (unsigned __int64)*v10;
            if ( v11 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              *(_QWORD *)&v23 = 1LL;
              *((_QWORD *)&v23 + 1) = *v10;
              __asm { invpcid r12d, [rsp+0D8h+var_78] }
            }
            __invlpg((void *)v13);
            v14 = 4096LL << (9 * ((unsigned __int8)(v13 >> 10) & 3u));
            v15 = v13 & 0x3FF;
            if ( (v13 & 0x3FF) != 0 )
            {
              do
              {
                v13 += v14;
                if ( v11 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                {
                  *(_QWORD *)&v24 = 1LL;
                  *((_QWORD *)&v24 + 1) = v13;
                  __asm { invpcid r12d, [rsp+0D8h+var_68] }
                }
                __invlpg((void *)v13);
                --v15;
              }
              while ( v15 );
            }
            ++v10;
          }
          while ( v10 < v12 );
          _R15D = 1;
        }
        else
        {
          switch ( v8 & 0xF )
          {
            case 1LL:
              if ( !KiFlushPcid )
                goto LABEL_39;
              v20 = 2uLL;
              __asm { invpcid r15d, [rsp+0D8h+var_A8] }
              break;
            case 2LL:
              v18 = v8 >> 16;
              if ( ((1 << *(_DWORD *)(v18 + 8)) & 0xA) != 0
                && KiFlushPcid
                && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              {
                *(_QWORD *)&v21 = 1LL;
                *((_QWORD *)&v21 + 1) = *(_QWORD *)v18;
                __asm { invpcid r12d, [rsp+0D8h+var_98] }
              }
              __invlpg(*(void **)v18);
              break;
            case 3LL:
              if ( KiFlushPcid )
              {
                v22 = 2uLL;
                __asm { invpcid r15d, [rsp+0D8h+var_88] }
                if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                  KiSetUserTbFlushPending();
              }
              else
              {
                v17 = __readcr4();
                if ( (v17 & 0x20080) != 0 )
                {
                  __writecr4(v17 ^ 0x80);
                  __writecr4(v17);
                }
                else
                {
LABEL_39:
                  v19 = __readcr3();
                  __writecr3(v19);
                }
              }
              break;
            default:
              __fastfail(0x25u);
          }
        }
        if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v7 + 6), 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 11652), 0xFFFFFFFF) == 1 )
        {
          *(_DWORD *)(v9 + 11648) = 0;
        }
        v0 = 1;
        if ( !v4 )
        {
          v4 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
          if ( !v4 )
            break;
        }
      }
    }
  }
  if ( v1 )
    PerfInfoLogIpi(v25);
  return v0;
}
