/*
 * XREFs of sub_180026330 @ 0x180026330
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028310 @ 0x180028310 (sub_180028310.c)
 *     sub_180028360 @ 0x180028360 (sub_180028360.c)
 *     sub_180029160 @ 0x180029160 (sub_180029160.c)
 *     sub_18002A150 @ 0x18002A150 (sub_18002A150.c)
 *     sub_18002C670 @ 0x18002C670 (sub_18002C670.c)
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_1800794DC @ 0x1800794DC (sub_1800794DC.c)
 *     sub_18007AF64 @ 0x18007AF64 (sub_18007AF64.c)
 *     sub_18007C574 @ 0x18007C574 (sub_18007C574.c)
 *     sub_18007C734 @ 0x18007C734 (sub_18007C734.c)
 *     sub_18007D6C0 @ 0x18007D6C0 (sub_18007D6C0.c)
 *     RtlRegisterThreadWithCsrss @ 0x18007DC60 (RtlRegisterThreadWithCsrss.c)
 *     sub_18007E200 @ 0x18007E200 (sub_18007E200.c)
 *     sub_18007E534 @ 0x18007E534 (sub_18007E534.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 *     sub_180080944 @ 0x180080944 (sub_180080944.c)
 *     sub_180080AE0 @ 0x180080AE0 (sub_180080AE0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwWorkerFactoryWorkerReady @ 0x18009AAE0 (ZwWorkerFactoryWorkerReady.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x18009E410 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D8968 @ 0x1800D8968 (sub_1800D8968.c)
 *     sub_180108210 @ 0x180108210 (sub_180108210.c)
 *     sub_180108970 @ 0x180108970 (sub_180108970.c)
 *     sub_180108A18 @ 0x180108A18 (sub_180108A18.c)
 *     sub_180108A98 @ 0x180108A98 (sub_180108A98.c)
 */

void __fastcall __noreturn sub_180026330(__int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // di
  __int64 v6; // rdx
  int v7; // ecx
  _OWORD *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64); // rax
  signed __int64 v16; // rax
  char v17; // r8
  signed __int64 v18; // rtt
  struct _PEB *v19; // rbx
  struct _PEB_LDR_DATA *Ldr; // rcx
  _OWORD **v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r8d
  void (__fastcall *v27)(char *); // rax
  __int64 Heap; // rax
  __int64 v29; // rax
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  unsigned __int16 v33; // r14
  unsigned __int16 v34; // r15
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r8d
  int v38; // r9d
  int v39; // r10d
  int v40; // r11d
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  struct _PEB *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // [rsp+31h] [rbp-2B7h] BYREF
  char v47; // [rsp+32h] [rbp-2B6h]
  char v48; // [rsp+33h] [rbp-2B5h]
  char v49; // [rsp+34h] [rbp-2B4h]
  char v50; // [rsp+35h] [rbp-2B3h]
  char v51; // [rsp+36h] [rbp-2B2h]
  char v52; // [rsp+37h] [rbp-2B1h]
  bool v53; // [rsp+38h] [rbp-2B0h]
  int v54; // [rsp+3Ch] [rbp-2ACh]
  int v55; // [rsp+40h] [rbp-2A8h]
  int v56; // [rsp+44h] [rbp-2A4h]
  int v57; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-298h]
  struct _PEB *v59; // [rsp+58h] [rbp-290h]
  signed __int64 v60; // [rsp+60h] [rbp-288h]
  __int64 v61; // [rsp+68h] [rbp-280h]
  _OWORD *v62; // [rsp+70h] [rbp-278h]
  signed __int64 v63; // [rsp+78h] [rbp-270h]
  _QWORD *v64; // [rsp+80h] [rbp-268h] BYREF
  int v65; // [rsp+88h] [rbp-260h] BYREF
  int v66; // [rsp+90h] [rbp-258h] BYREF
  __int64 v67; // [rsp+98h] [rbp-250h] BYREF
  __int64 **v68; // [rsp+A0h] [rbp-248h] BYREF
  int v69; // [rsp+A8h] [rbp-240h]
  __int64 v70; // [rsp+C0h] [rbp-228h]
  __int64 v71; // [rsp+C8h] [rbp-220h]
  struct _TEB *v72; // [rsp+E0h] [rbp-208h]
  struct _TEB *v73; // [rsp+E8h] [rbp-200h]
  struct _TEB *v74; // [rsp+F0h] [rbp-1F8h]
  struct _TEB *v75; // [rsp+100h] [rbp-1E8h]
  struct _TEB *v76; // [rsp+108h] [rbp-1E0h]
  struct _TEB *v77; // [rsp+110h] [rbp-1D8h]
  __int64 v78; // [rsp+128h] [rbp-1C0h]
  _OWORD v79[23]; // [rsp+130h] [rbp-1B8h] BYREF
  _QWORD v80[2]; // [rsp+2A0h] [rbp-48h] BYREF

  v60 = a1;
  v67 = 0LL;
  v58 = a1;
  v47 = 0;
  v48 = 0;
  v51 = 0;
  v49 = 0;
  v46 = 0;
  v52 = 0;
  v50 = 0;
  v64 = 0LL;
  v54 = 0;
  RtlRegisterThreadWithCsrss();
  v59 = NtCurrentPeb();
  sub_18007C574(&v67);
  sub_1800794DC(&v64);
  if ( v64 )
    *v64 = v79;
  memset(v79, 0, 0x168uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368), v2, v3, v4);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v55 = -1073741558;
  }
  else
  {
    v70 = *(_QWORD *)(a1 + 56);
    v55 = ZwWorkerFactoryWorkerReady();
    if ( v55 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v5 = v51;
LABEL_39:
      RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
      if ( v5 )
        goto LABEL_116;
      sub_18007AF64(a1, v79);
      v49 = 1;
      v19 = v59;
      RtlAcquireSRWLockExclusive(&v59[1].Mutant);
      Ldr = v59[1].Ldr;
      if ( *(struct _PEB **)&Ldr->Length != (struct _PEB *)&v59[1].ImageBaseAddress )
        __fastfail(3u);
      *(_QWORD *)&v79[0] = (char *)v59 + 912;
      *((_QWORD *)&v79[0] + 1) = Ldr;
      *(_QWORD *)&Ldr->Length = v79;
      v19[1].Ldr = (struct _PEB_LDR_DATA *)v79;
      v48 = 1;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v19[1].Mutant);
      memset((char *)&v79[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v47 = 1;
      sub_180024854(a1, (_DWORD *)&v79[21] + 2, 0LL);
LABEL_43:
      while ( 1 )
      {
        v54 = 0;
        memset(&v79[19], 0, 0x20uLL);
        v21 = *(_OWORD ***)&v79[21];
        v56 = 16;
        if ( !*(_QWORD *)&v79[21] )
          break;
        if ( *(_DWORD *)(*(_QWORD *)&v79[21] + 8LL) != 1 )
          goto LABEL_86;
        v22 = *(_QWORD *)&v79[21];
        memset(**(void ***)&v79[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v79[21] + 12LL));
        v9 = *(_DWORD *)(v22 + 12);
        v56 = v9;
        v8 = *v21;
LABEL_46:
        v62 = v8;
        v57 = 0;
        v71 = *(_QWORD *)(a1 + 56);
        v7 = ZwWaitForWorkViaWorkerFactory(v71, v8, v9, &v57, (char *)&v79[16] + 8);
        v55 = v7;
        if ( v7 )
          v57 = 0;
        if ( (BYTE12(v79[17]) & 1) != 0 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&v79[16] + 1));
          HIDWORD(v79[17]) &= ~1u;
          v7 = v55;
          LODWORD(v8) = (_DWORD)v62;
          v9 = v56;
        }
        if ( v7 )
        {
          v30 = v7 - 128;
          if ( !v30 )
            goto LABEL_116;
          v31 = v30 - 64;
          if ( v31 )
          {
            if ( v31 == 66 )
            {
              v50 = 1;
              goto LABEL_116;
            }
          }
          else
          {
            sub_1800273D0(0LL);
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            sub_180108210(a1);
          if ( (unsigned __int8)sub_1800275D0((unsigned int)v79, (_DWORD)v8, v57, v9, a1, (__int64)&v46) )
            goto LABEL_116;
          if ( !v46 )
          {
            v10 = *(_QWORD *)&v79[19];
            if ( *(_QWORD *)&v79[19] )
            {
              v61 = *(_QWORD *)&v79[19];
              *(_QWORD *)&v79[9] = *(_QWORD *)(*(_QWORD *)&v79[19] + 56LL);
              *((_QWORD *)&v79[9] + 1) = *(_QWORD *)&v79[19];
              v65 = *(unsigned __int8 *)(*(_QWORD *)&v79[19] + 68LL);
              v11 = *(unsigned int *)(*(_QWORD *)&v79[19] + 64LL);
              v12 = DWORD2(v79[21]);
              v13 = *(_DWORD *)(a1 + 428);
              v14 = DWORD2(v79[21]);
              if ( (_DWORD)v11 == DWORD2(v79[21]) )
              {
                if ( v13 == -1 && !LOBYTE(v79[22]) )
                {
                  LOBYTE(v79[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v11));
                }
              }
              else
              {
                if ( v13 == -1 )
                {
                  if ( LOBYTE(v79[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v79[21])));
                  else
                    LOBYTE(v79[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v11));
                }
                DWORD2(v79[21]) = v11;
                v32 = *(_QWORD *)(a1 + 48);
                v33 = *(_WORD *)(16 * v11 + v32 + 8);
                v34 = *(_WORD *)(v32 + 16 * v12 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                  v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
                else
                  v14 = 2147353478LL;
                if ( *(_BYTE *)v14 )
                  sub_180108970(a1, v12, v11, v34, v33);
                if ( v34 != v33 )
                {
                  v80[1] = v33;
                  v80[0] = 0LL;
                  ZwSetInformationThread(-2LL, 30LL, v80);
                  ZwSetInformationThread(-2LL, 13LL, &v65);
                }
              }
              v79[18] = NtCurrentTeb()->ActivityId;
              if ( *((_QWORD *)&v79[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v79[11] + 1) + 436LL) & 1) == 0 )
              {
                v35 = LODWORD(v79[10]) | 8u;
                LODWORD(v79[10]) = v35;
                v72 = NtCurrentTeb();
                v36 = (unsigned int)v35;
                if ( v72->IsImpersonating )
                {
                  v35 = (unsigned int)v35 | 4;
                  LODWORD(v79[10]) = v35;
                  v36 = (unsigned int)v35;
                }
                if ( (unsigned __int8)sub_180028310(v14, v6, v35, v36) )
                {
                  v40 = v37 | 0x10;
                  LODWORD(v79[10]) = v37 | 0x10;
                  v39 = v37 | 0x10;
                  v38 = v37 | 0x10;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v39 = v40 | 0x20;
                  LODWORD(v79[10]) = v40 | 0x20;
                  v38 = v40 | 0x20;
                }
                v73 = NtCurrentTeb();
                if ( v73->PreferredLanguages )
                {
                  v38 = v39 | 0x40;
                  LODWORD(v79[10]) = v39 | 0x40;
                }
                v74 = NtCurrentTeb();
                if ( v74->SavedPriorityState )
                  LODWORD(v79[10]) = v38 | 0x80;
              }
              v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v10 + 56);
              if ( v15 == sub_180027A70 )
              {
                sub_180027A70((char *)&v79[3] + 8, v61, *((_QWORD *)&v79[19] + 1), &v79[20]);
              }
              else if ( v15 == sub_1800254A0 )
              {
                sub_1800254A0((__int64)&v79[3] + 8, v61, *((__int64 *)&v79[19] + 1), (__int64)&v79[20]);
              }
              else if ( v15 == sub_180029160 )
              {
                sub_180029160((char *)&v79[3] + 8, v61, *((_QWORD *)&v79[19] + 1), &v79[20]);
              }
              else if ( v15 == sub_18002C670 )
              {
                sub_18002C670((char *)&v79[3] + 8, v61, *((_QWORD *)&v79[19] + 1), &v79[20]);
              }
              else
              {
                v15((__int64)&v79[3] + 8, v61, *((_QWORD *)&v79[19] + 1), (__int64)&v79[20]);
              }
              goto LABEL_25;
            }
            while ( 1 )
            {
              if ( !(unsigned int)sub_180027E0C(a1, v79, &v68) )
                goto LABEL_116;
              if ( (BYTE12(v79[17]) & 1) != 0 )
              {
                sub_180080944((char *)&v79[3] + 8, v6);
                HIDWORD(v79[17]) &= ~1u;
              }
              *(_QWORD *)&v79[2] = v68;
              v24 = **v68;
              *(_QWORD *)&v79[9] = v24;
              *((_QWORD *)&v79[9] + 1) = v68;
              *((_QWORD *)&v79[11] + 1) = *(_QWORD *)&v79[3];
              v79[18] = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&v79[3] && (*(_BYTE *)(*(_QWORD *)&v79[3] + 436LL) & 1) == 0 )
              {
                v25 = LODWORD(v79[10]) | 8u;
                LODWORD(v79[10]) |= 8u;
                v75 = NtCurrentTeb();
                if ( v75->IsImpersonating )
                {
                  v25 = (unsigned int)v25 | 4;
                  LODWORD(v79[10]) = v25;
                }
                if ( (unsigned __int8)sub_180028310(v24, v68, v25, v23) )
                  LODWORD(v79[10]) = v26 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  LODWORD(v79[10]) |= 0x20u;
                v76 = NtCurrentTeb();
                if ( v76->PreferredLanguages )
                  LODWORD(v79[10]) |= 0x40u;
                v77 = NtCurrentTeb();
                if ( v77->SavedPriorityState )
                  LODWORD(v79[10]) |= 0x80u;
              }
              v27 = (void (__fastcall *)(char *))**v68;
              if ( (char *)v27 == (char *)sub_180028360 )
              {
                sub_180028360((char *)&v79[3] + 8);
              }
              else if ( (char *)v27 == (char *)sub_18002A150 )
              {
                sub_18002A150((char *)&v79[3] + 8);
              }
              else if ( (char *)v27 == (char *)sub_1800773B0 )
              {
                sub_1800773B0((char *)&v79[3] + 8);
              }
              else
              {
                v27((char *)&v79[3] + 8);
              }
LABEL_25:
              if ( (BYTE4(v79[8]) & 4) != 0 )
                v52 = 1;
              v53 = LODWORD(v79[8]) == 4;
              sub_180027040((char *)&v79[3] + 8);
              *(_QWORD *)&v79[2] = 0LL;
              if ( v52 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                sub_180108210(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v16 = *(_QWORD *)(a1 + 8);
              v63 = v16;
              do
              {
                v6 = (unsigned __int16)v16;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_116;
                if ( HIDWORD(v16) && ((v16 & 0x8000u) == 0LL || v53) )
                {
                  v17 = 0;
                  HIDWORD(v63) = HIDWORD(v16) - 1;
                }
                else
                {
                  v17 = 1;
                  LODWORD(v63) = v16 ^ (unsigned __int16)(v16 ^ (v16 + 1));
                }
                v18 = v16;
                v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v63, v16);
                v63 = v16;
              }
              while ( v18 != v16 );
              v46 = v17;
              if ( v17 )
                goto LABEL_43;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v41 = *(_QWORD *)(a1 + 8);
            v60 = v41;
            do
            {
              LODWORD(v60) = v41 ^ (unsigned __int16)(v41 ^ (v41 + 1));
              v42 = v41;
              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v60, v41);
              v60 = v41;
            }
            while ( v42 != v41 );
            v66 = 3;
            v78 = *(_QWORD *)(a1 + 56);
            ZwSetInformationWorkerFactory(v78, 9LL, &v66);
LABEL_116:
            if ( (BYTE12(v79[17]) & 1) != 0 )
            {
              sub_180080944((char *)&v79[3] + 8, v6);
              HIDWORD(v79[17]) &= ~1u;
            }
            if ( v47 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v48 )
            {
              v43 = v59;
              RtlAcquireSRWLockExclusive(&v59[1].Mutant);
              v44 = *((_QWORD *)&v79[0] + 1);
              v45 = *(_QWORD *)&v79[0];
              if ( *(_OWORD **)(*(_QWORD *)&v79[0] + 8LL) != v79 || **((_OWORD ***)&v79[0] + 1) != v79 )
                __fastfail(3u);
              **((_QWORD **)&v79[0] + 1) = *(_QWORD *)&v79[0];
              *(_QWORD *)(v45 + 8) = v44;
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v43[1].Mutant);
            }
            if ( v49 )
            {
              sub_18007D6C0(v79, v6);
              if ( v50 )
                sub_18007C734(a1);
            }
            if ( a1 == qword_18015D3B8 )
            {
              sub_180047198(&qword_18015D3B8, &unk_18015D3B0);
            }
            else if ( a1 == qword_18015D3A8 )
            {
              sub_180047198(&qword_18015D3A8, &unk_18015D3A0);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              sub_18007E8A0(a1);
            }
            sub_180080AE0(v67, v6);
            sub_18007E534(v64);
            sub_18007E200(v79);
            v55 = 0;
            RtlExitUserThread(0LL);
          }
        }
      }
      v69 = dword_18015D050 + 3145728;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 3145728) | 8u, 912LL);
      v8 = (_OWORD *)Heap;
      if ( Heap )
      {
        v29 = Heap + 896;
        *(_QWORD *)v29 = v8;
        *(_DWORD *)(v29 + 8) = 1;
        *(_DWORD *)(v29 + 12) = 16;
        *(_QWORD *)&v79[21] = v29;
        v9 = 16;
      }
      else
      {
LABEL_86:
        v9 = 1;
        v8 = &v79[19];
      }
      v56 = v9;
      goto LABEL_46;
    }
  }
  v5 = 1;
  v51 = 1;
  goto LABEL_39;
}
