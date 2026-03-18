/*
 * XREFs of KiIpiProcessRequests @ 0x140102310
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x140187E80 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentProcess @ 0x1400574C0 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401822F0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PerfInfoLogIpi @ 0x14027DBD8 (PerfInfoLogIpi.c)
 */

__int64 KiIpiProcessRequests()
{
  unsigned __int8 v0; // bl
  char v1; // r15
  struct _KPRCB *CurrentPrcb; // r14
  char *v4; // rdi
  char *v6; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbp
  void **v10; // r11
  int v11; // r10d
  void **v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-98h]
  __int128 v21; // [rsp+40h] [rbp-88h]
  __int128 v22; // [rsp+50h] [rbp-78h]
  __int128 v23; // [rsp+60h] [rbp-68h]
  __int128 v24; // [rsp+70h] [rbp-58h]
  __int64 v25[3]; // [rsp+80h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v1 = 1;
    EtwGetKernelTraceTimestamp(v25, 0x40400000u);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    _R12D = 0;
    v4 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v4 )
    {
      _R13D = 1;
      while ( 1 )
      {
        v6 = v4;
        v7 = v4;
        v4 = *(char **)v4;
        v8 = *((_QWORD *)v7 + 1);
        v9 = KiProcessorBlock[(unsigned int)((v6 - (char *)CurrentPrcb - 32384) >> 6)];
        switch ( v8 & 0xF )
        {
          case 1LL:
            if ( !KiFlushPcid )
              goto LABEL_23;
            v22 = 2uLL;
            __asm { invpcid r13d, [rsp+0C8h+var_78] }
            break;
          case 2LL:
            v17 = v8 >> 16;
            if ( ((1 << *(_DWORD *)(v17 + 8)) & 0xA) != 0
              && KiFlushPcid
              && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              *(_QWORD *)&v23 = 1LL;
              *((_QWORD *)&v23 + 1) = *(_QWORD *)v17;
              __asm { invpcid r12d, [rsp+0C8h+var_68] }
            }
            __invlpg(*(void **)v17);
            break;
          case 3LL:
            if ( KiFlushPcid )
            {
              v24 = 2uLL;
              __asm { invpcid r13d, [rsp+0C8h+var_58] }
              if ( !PsGetCurrentProcess()->AddressPolicy )
                KiSetUserTbFlushPending();
            }
            else
            {
              v18 = __readcr4();
              if ( (v18 & 0x20080) != 0 )
              {
                __writecr4(v18 ^ 0x80);
                __writecr4(v18);
              }
              else
              {
LABEL_23:
                v16 = __readcr3();
                __writecr3(v16);
              }
            }
            break;
          case 4LL:
            v10 = *(void ***)(v8 >> 16);
            v11 = (1 << *(_DWORD *)((v8 >> 16) + 0xC)) & 0xA;
            v12 = &v10[BYTE1(v8)];
            do
            {
              v13 = (unsigned __int64)*v10;
              if ( v11 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              {
                *(_QWORD *)&v20 = 1LL;
                *((_QWORD *)&v20 + 1) = *v10;
                __asm { invpcid r12d, [rsp+0C8h+var_98] }
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
                    *(_QWORD *)&v21 = 1LL;
                    *((_QWORD *)&v21 + 1) = v13;
                    __asm { invpcid r12d, [rsp+0C8h+var_88] }
                  }
                  __invlpg((void *)v13);
                  --v15;
                }
                while ( v15 );
              }
              ++v10;
            }
            while ( v10 < v12 );
            break;
          case 5LL:
            (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v7 + 5))(
              v9,
              *((_QWORD *)v7 + 2),
              *((_QWORD *)v7 + 3),
              *((_QWORD *)v7 + 4));
            break;
          case 6LL:
            __wbinvd();
            break;
          case 7LL:
            break;
          default:
            __fastfail(0x25u);
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
