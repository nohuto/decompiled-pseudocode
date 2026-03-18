/*
 * XREFs of KiIpiProcessRequests @ 0x140006360
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x1401883D0 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentProcess @ 0x1400D8F50 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140182870 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PerfInfoLogIpi @ 0x1402553CC (PerfInfoLogIpi.c)
 */

__int64 __fastcall KiIpiProcessRequests(__int64 a1)
{
  unsigned __int8 v1; // bl
  char v2; // r15
  struct _KPRCB *CurrentPrcb; // r14
  char *v5; // rdi
  char *v7; // rax
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rbp
  void **v11; // r11
  int v12; // r10d
  void **v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-98h]
  __int128 v22; // [rsp+40h] [rbp-88h]
  __int128 v23; // [rsp+50h] [rbp-78h]
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int128 v25; // [rsp+70h] [rbp-58h]
  _BYTE v26[24]; // [rsp+80h] [rbp-48h] BYREF

  v1 = 0;
  v2 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v2 = 1;
    EtwGetKernelTraceTimestamp(v26, 1077936128LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    _R12D = 0;
    v5 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v5 )
    {
      _R13D = 1;
      while ( 1 )
      {
        v7 = v5;
        v8 = v5;
        v5 = *(char **)v5;
        v9 = *((_QWORD *)v8 + 1);
        v10 = KiProcessorBlock[(unsigned int)((v7 - (char *)CurrentPrcb - 32384) >> 6)];
        switch ( v9 & 0xF )
        {
          case 1LL:
            if ( !KiFlushPcid )
              goto LABEL_23;
            v23 = 2uLL;
            __asm { invpcid r13d, [rsp+0C8h+var_78] }
            break;
          case 2LL:
            v18 = v9 >> 16;
            if ( ((1 << *(_DWORD *)(v18 + 8)) & 0xA) != 0
              && KiFlushPcid
              && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              *(_QWORD *)&v24 = 1LL;
              *((_QWORD *)&v24 + 1) = *(_QWORD *)v18;
              __asm { invpcid r12d, [rsp+0C8h+var_68] }
            }
            __invlpg(*(void **)v18);
            break;
          case 3LL:
            if ( KiFlushPcid )
            {
              v25 = 2uLL;
              __asm { invpcid r13d, [rsp+0C8h+var_58] }
              if ( !*(_BYTE *)(PsGetCurrentProcess(a1, v9, 0x140000000uLL) + 640) )
                KiSetUserTbFlushPending();
            }
            else
            {
              v19 = __readcr4();
              if ( (v19 & 0x20080) != 0 )
              {
                __writecr4(v19 ^ 0x80);
                __writecr4(v19);
              }
              else
              {
LABEL_23:
                v17 = __readcr3();
                __writecr3(v17);
              }
            }
            break;
          case 4LL:
            v11 = *(void ***)(v9 >> 16);
            v12 = (1 << *(_DWORD *)((v9 >> 16) + 0xC)) & 0xA;
            v13 = &v11[BYTE1(v9)];
            do
            {
              v14 = (unsigned __int64)*v11;
              if ( v12 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              {
                *(_QWORD *)&v21 = 1LL;
                *((_QWORD *)&v21 + 1) = *v11;
                __asm { invpcid r12d, [rsp+0C8h+var_98] }
              }
              __invlpg((void *)v14);
              v15 = v14 & 0x3FF;
              v16 = 4096LL << (9 * ((unsigned __int8)(v14 >> 10) & 3u));
              if ( (v14 & 0x3FF) != 0 )
              {
                do
                {
                  v14 += v16;
                  if ( v12 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                  {
                    *(_QWORD *)&v22 = 1LL;
                    *((_QWORD *)&v22 + 1) = v14;
                    __asm { invpcid r12d, [rsp+0C8h+var_88] }
                  }
                  __invlpg((void *)v14);
                  --v15;
                }
                while ( v15 );
              }
              ++v11;
            }
            while ( v11 < v13 );
            break;
          case 5LL:
            (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v8 + 5))(
              v10,
              *((_QWORD *)v8 + 2),
              *((_QWORD *)v8 + 3),
              *((_QWORD *)v8 + 4));
            break;
          case 6LL:
            __wbinvd();
            break;
          case 7LL:
            break;
          default:
            __fastfail(0x25u);
        }
        a1 = (unsigned int)_InterlockedExchangeAdd(*((volatile signed __int32 **)v8 + 6), 0xFFFFFFFF);
        if ( (_DWORD)a1 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 11652), 0xFFFFFFFF) == 1 )
          *(_DWORD *)(v10 + 11648) = 0;
        v1 = 1;
        if ( !v5 )
        {
          v5 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
          if ( !v5 )
            break;
        }
      }
    }
  }
  if ( v2 )
    PerfInfoLogIpi(v26);
  return v1;
}
