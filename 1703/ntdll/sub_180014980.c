/*
 * XREFs of sub_180014980 @ 0x180014980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013038 @ 0x180013038 (sub_180013038.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800130C0 (RtlRegisterThreadWithCsrss.c)
 *     sub_180013164 @ 0x180013164 (sub_180013164.c)
 *     sub_1800131F0 @ 0x1800131F0 (sub_1800131F0.c)
 *     sub_180014090 @ 0x180014090 (sub_180014090.c)
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     sub_180015A40 @ 0x180015A40 (sub_180015A40.c)
 *     sub_180015C50 @ 0x180015C50 (sub_180015C50.c)
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     sub_18001655C @ 0x18001655C (sub_18001655C.c)
 *     sub_1800165B0 @ 0x1800165B0 (sub_1800165B0.c)
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     sub_1800714DC @ 0x1800714DC (sub_1800714DC.c)
 *     sub_180082410 @ 0x180082410 (sub_180082410.c)
 *     sub_180082A08 @ 0x180082A08 (sub_180082A08.c)
 *     sub_180082E68 @ 0x180082E68 (sub_180082E68.c)
 *     sub_18008302C @ 0x18008302C (sub_18008302C.c)
 *     sub_1800834C8 @ 0x1800834C8 (sub_1800834C8.c)
 *     sub_1800865E8 @ 0x1800865E8 (sub_1800865E8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwWorkerFactoryWorkerReady @ 0x1800A5320 (ZwWorkerFactoryWorkerReady.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A8B90 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800DF0F4 @ 0x1800DF0F4 (sub_1800DF0F4.c)
 *     sub_180105430 @ 0x180105430 (sub_180105430.c)
 *     sub_180105AEC @ 0x180105AEC (sub_180105AEC.c)
 *     sub_180105B94 @ 0x180105B94 (sub_180105B94.c)
 *     sub_180105C14 @ 0x180105C14 (sub_180105C14.c)
 */

void __fastcall __noreturn sub_180014980(__int64 a1)
{
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _PEB *v5; // rbx
  struct _PEB_LDR_DATA *Ldr; // rcx
  _OWORD **v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // esi
  _OWORD *v10; // rbx
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64, __int64); // rax
  signed __int64 v19; // rax
  int v20; // ecx
  signed __int64 v21; // rtt
  __int64 v22; // r9
  __int64 (__fastcall *v23)(__int64, __int64, __int64, __int64); // rcx
  __int64 v24; // r8
  __int64 (__fastcall *v25)(__int64, __int64, __int64, __int64); // rax
  __int64 Heap; // rax
  __int64 v27; // rax
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rcx
  unsigned __int16 v31; // r14
  unsigned __int16 v32; // r15
  __int64 v33; // r8
  int v34; // r8d
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  struct _PEB *v37; // rbx
  __int128 v38; // kr00_16
  bool v39; // [rsp+31h] [rbp-2D7h]
  char v40; // [rsp+32h] [rbp-2D6h] BYREF
  char v41; // [rsp+33h] [rbp-2D5h]
  char v42; // [rsp+34h] [rbp-2D4h]
  char v43; // [rsp+35h] [rbp-2D3h]
  char v44; // [rsp+36h] [rbp-2D2h]
  char v45; // [rsp+37h] [rbp-2D1h]
  char v46; // [rsp+38h] [rbp-2D0h]
  char v47; // [rsp+39h] [rbp-2CFh]
  char v48; // [rsp+3Ah] [rbp-2CEh]
  char v49; // [rsp+3Bh] [rbp-2CDh]
  char v50; // [rsp+3Ch] [rbp-2CCh]
  char v51; // [rsp+3Dh] [rbp-2CBh]
  char v52; // [rsp+3Eh] [rbp-2CAh]
  int v53; // [rsp+40h] [rbp-2C8h]
  int v54; // [rsp+44h] [rbp-2C4h]
  int v55; // [rsp+48h] [rbp-2C0h]
  signed __int64 v56; // [rsp+50h] [rbp-2B8h]
  int v57; // [rsp+58h] [rbp-2B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-2A8h]
  struct _PEB *v59; // [rsp+68h] [rbp-2A0h]
  signed __int64 v60; // [rsp+70h] [rbp-298h]
  __int64 v61; // [rsp+78h] [rbp-290h]
  _OWORD *v62; // [rsp+80h] [rbp-288h]
  _QWORD *v63; // [rsp+88h] [rbp-280h] BYREF
  int v64; // [rsp+90h] [rbp-278h] BYREF
  int v65; // [rsp+98h] [rbp-270h]
  int v66; // [rsp+A0h] [rbp-268h] BYREF
  int v67; // [rsp+A8h] [rbp-260h]
  __int64 v68; // [rsp+B0h] [rbp-258h] BYREF
  __int64 (__fastcall ***v69)(__int64, __int64, __int64, __int64); // [rsp+B8h] [rbp-250h] BYREF
  int v70; // [rsp+C8h] [rbp-240h]
  int v71; // [rsp+D4h] [rbp-234h]
  __int64 v72; // [rsp+E0h] [rbp-228h]
  __int64 v73; // [rsp+E8h] [rbp-220h]
  struct _TEB *v74; // [rsp+100h] [rbp-208h]
  struct _TEB *v75; // [rsp+108h] [rbp-200h]
  struct _TEB *v76; // [rsp+110h] [rbp-1F8h]
  struct _TEB *v77; // [rsp+120h] [rbp-1E8h]
  struct _TEB *v78; // [rsp+128h] [rbp-1E0h]
  struct _TEB *v79; // [rsp+130h] [rbp-1D8h]
  __int64 v80; // [rsp+148h] [rbp-1C0h]
  _OWORD v81[23]; // [rsp+150h] [rbp-1B8h] BYREF
  _QWORD v82[2]; // [rsp+2C0h] [rbp-48h] BYREF

  v56 = a1;
  v68 = 0LL;
  v58 = a1;
  v41 = 0;
  v42 = 0;
  v45 = 0;
  v43 = 0;
  v40 = 0;
  v46 = 0;
  v44 = 0;
  v63 = 0LL;
  v53 = 0;
  RtlRegisterThreadWithCsrss();
  v59 = NtCurrentPeb();
  sub_180013164(&v68);
  sub_1800131F0(&v63);
  if ( v63 )
    *v63 = v81;
  memset(v81, 0, 0x168uLL);
  RtlAcquireSRWLockShared(a1 + 368);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v54 = -1073741558;
  }
  else
  {
    v72 = *(_QWORD *)(a1 + 56);
    v54 = ZwWorkerFactoryWorkerReady();
    if ( v54 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v45;
LABEL_8:
      RtlReleaseSRWLockShared(a1 + 368);
      if ( v2 )
        goto LABEL_118;
      sub_180013038(a1, (__int64)v81);
      v43 = 1;
      v5 = v59;
      RtlAcquireSRWLockExclusive(&v59[1].Mutant);
      Ldr = v59[1].Ldr;
      if ( *(struct _PEB **)&Ldr->Length != (struct _PEB *)&v59[1].ImageBaseAddress )
        __fastfail(3u);
      *(_QWORD *)&v81[0] = (char *)v59 + 912;
      *((_QWORD *)&v81[0] + 1) = Ldr;
      *(_QWORD *)&Ldr->Length = v81;
      v5[1].Ldr = (struct _PEB_LDR_DATA *)v81;
      v42 = 1;
      RtlReleaseSRWLockExclusive(&v5[1].Mutant);
      memset((char *)&v81[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v41 = 1;
      sub_180017A78(a1, (char *)&v81[21] + 8, 0LL);
LABEL_12:
      while ( 1 )
      {
        v53 = 0;
        memset(&v81[19], 0, 0x20uLL);
        v7 = *(_OWORD ***)&v81[21];
        v55 = 16;
        if ( !*(_QWORD *)&v81[21] )
          break;
        if ( *(_DWORD *)(*(_QWORD *)&v81[21] + 8LL) != 1 )
          goto LABEL_82;
        v8 = *(_QWORD *)&v81[21];
        memset(**(void ***)&v81[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v81[21] + 12LL));
        v9 = *(_DWORD *)(v8 + 12);
        v55 = v9;
        v10 = *v7;
LABEL_15:
        v62 = v10;
        v57 = 0;
        v73 = *(_QWORD *)(a1 + 56);
        v11 = ZwWaitForWorkViaWorkerFactory(v73, v10, v9, &v57, (char *)&v81[16] + 8);
        v54 = v11;
        if ( v11 )
          v57 = 0;
        if ( (BYTE12(v81[17]) & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
          HIDWORD(v81[17]) &= ~1u;
          v11 = v54;
          LODWORD(v10) = (_DWORD)v62;
          v9 = v55;
        }
        if ( v11 )
        {
          v28 = v11 - 128;
          if ( !v28 )
            goto LABEL_118;
          v29 = v28 - 64;
          if ( v29 )
          {
            if ( v29 == 66 )
            {
              v44 = 1;
              goto LABEL_118;
            }
          }
          else
          {
            sub_180015A40(0LL);
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            sub_180105430(a1);
          if ( (unsigned __int8)sub_180015C50((unsigned int)v81, (_DWORD)v10, v57, v9, a1, (__int64)&v40) )
            goto LABEL_118;
          if ( !v40 )
          {
            v13 = *(_QWORD *)&v81[19];
            if ( *(_QWORD *)&v81[19] )
            {
              v61 = *(_QWORD *)&v81[19];
              *(_QWORD *)&v81[9] = *(_QWORD *)(*(_QWORD *)&v81[19] + 56LL);
              *((_QWORD *)&v81[9] + 1) = *(_QWORD *)&v81[19];
              v66 = *(unsigned __int8 *)(*(_QWORD *)&v81[19] + 68LL);
              v14 = *(unsigned int *)(*(_QWORD *)&v81[19] + 64LL);
              v15 = DWORD2(v81[21]);
              v16 = *(_DWORD *)(a1 + 428);
              v17 = DWORD2(v81[21]);
              if ( (_DWORD)v14 == DWORD2(v81[21]) )
              {
                if ( v16 == -1 && !LOBYTE(v81[22]) )
                {
                  LOBYTE(v81[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v14));
                }
              }
              else
              {
                if ( v16 == -1 )
                {
                  if ( LOBYTE(v81[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v81[21])));
                  else
                    LOBYTE(v81[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v14));
                }
                DWORD2(v81[21]) = v14;
                v30 = *(_QWORD *)(a1 + 48);
                v31 = *(_WORD *)(v30 + 16 * v14 + 8);
                v32 = *(_WORD *)(v30 + 16 * v15 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId(v30, v3, v4, v12) )
                  v17 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
                else
                  v17 = 2147353478LL;
                if ( *(_BYTE *)v17 )
                  sub_180105AEC(a1, v15, v14, v32, v31);
                if ( v32 != v31 )
                {
                  v82[1] = v31;
                  v82[0] = 0LL;
                  ZwSetInformationThread(-2LL, 30LL, v82);
                  ZwSetInformationThread(-2LL, 13LL, &v66);
                }
              }
              v81[18] = NtCurrentTeb()->ActivityId;
              if ( *((_QWORD *)&v81[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v81[11] + 1) + 436LL) & 1) == 0 )
              {
                LODWORD(v81[10]) |= 8u;
                v74 = NtCurrentTeb();
                v33 = LODWORD(v81[10]);
                if ( v74->IsImpersonating )
                {
                  v33 = LODWORD(v81[10]) | 4u;
                  LODWORD(v81[10]) |= 4u;
                }
                if ( (unsigned __int8)sub_18001655C(v17, v3, v33) )
                  LODWORD(v81[10]) = v34 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v67 = 1;
                  v47 = 1;
                  LODWORD(v81[10]) |= 0x20u;
                }
                else
                {
                  v67 = 0;
                  v47 = 0;
                }
                v75 = NtCurrentTeb();
                if ( v75->PreferredLanguages )
                {
                  v48 = 1;
                  LODWORD(v81[10]) |= 0x40u;
                }
                else
                {
                  v48 = 0;
                }
                v76 = NtCurrentTeb();
                if ( v76->SavedPriorityState )
                {
                  v49 = 1;
                  LODWORD(v81[10]) |= 0x80u;
                }
                else
                {
                  v49 = 0;
                }
              }
              v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v13 + 56);
              if ( (char *)v18 == (char *)sub_180016110 )
              {
                sub_180016110((char *)&v81[3] + 8, v61, *((_QWORD *)&v81[19] + 1), &v81[20]);
              }
              else if ( (char *)v18 == (char *)sub_180016810 )
              {
                sub_180016810((char *)&v81[3] + 8, v61, *((_QWORD *)&v81[19] + 1), &v81[20]);
              }
              else if ( v18 == sub_180014570 )
              {
                sub_180014570((__int64)&v81[3] + 8, v61, *((__int64 *)&v81[19] + 1));
              }
              else if ( (char *)v18 == (char *)sub_180018A00 )
              {
                sub_180018A00((char *)&v81[3] + 8, v61, *((_QWORD *)&v81[19] + 1), &v81[20]);
              }
              else
              {
                ((void (__fastcall *)(char *, __int64, _QWORD, _OWORD *))v18)(
                  (char *)&v81[3] + 8,
                  v61,
                  *((_QWORD *)&v81[19] + 1),
                  &v81[20]);
              }
              goto LABEL_37;
            }
            while ( 1 )
            {
              if ( !(unsigned int)sub_180028830(a1, v81, &v69) )
                goto LABEL_118;
              if ( (BYTE12(v81[17]) & 1) != 0 )
              {
                sub_180082E68((char *)&v81[3] + 8);
                HIDWORD(v81[17]) &= ~1u;
              }
              *(_QWORD *)&v81[2] = v69;
              v23 = **v69;
              *(_QWORD *)&v81[9] = v23;
              *((_QWORD *)&v81[9] + 1) = v69;
              *((_QWORD *)&v81[11] + 1) = *(_QWORD *)&v81[3];
              v81[18] = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&v81[3] && (*(_BYTE *)(*(_QWORD *)&v81[3] + 436LL) & 1) == 0 )
              {
                LODWORD(v81[10]) |= 8u;
                v77 = NtCurrentTeb();
                v24 = LODWORD(v81[10]);
                if ( v77->IsImpersonating )
                {
                  v24 = LODWORD(v81[10]) | 4u;
                  LODWORD(v81[10]) |= 4u;
                }
                if ( (unsigned __int8)sub_18001655C(v23, v69, v24) )
                {
                  v4 = (unsigned int)v4 | 0x10;
                  LODWORD(v81[10]) = v4;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v65 = 1;
                  v50 = 1;
                  LODWORD(v81[10]) |= 0x20u;
                }
                else
                {
                  v65 = 0;
                  v50 = 0;
                }
                v78 = NtCurrentTeb();
                if ( v78->PreferredLanguages )
                {
                  v51 = 1;
                  LODWORD(v81[10]) |= 0x40u;
                }
                else
                {
                  v51 = 0;
                }
                v79 = NtCurrentTeb();
                if ( v79->SavedPriorityState )
                {
                  v52 = 1;
                  LODWORD(v81[10]) |= 0x80u;
                }
                else
                {
                  v52 = 0;
                }
              }
              v25 = **v69;
              if ( (char *)v25 == (char *)sub_1800165B0 )
              {
                sub_1800165B0((char *)&v81[3] + 8);
              }
              else if ( v25 == sub_180014090 )
              {
                sub_180014090((__int64)&v81[3] + 8, (__int64)v69, v4, v22);
              }
              else
              {
                ((void (__fastcall *)(char *))v25)((char *)&v81[3] + 8);
              }
LABEL_37:
              if ( (BYTE4(v81[8]) & 4) != 0 )
                v46 = 1;
              v39 = LODWORD(v81[8]) == 4;
              sub_1800156B0((char *)&v81[3] + 8);
              *(_QWORD *)&v81[2] = 0LL;
              if ( v46 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                sub_180105430(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v19 = *(_QWORD *)(a1 + 8);
              v60 = v19;
              do
              {
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_118;
                if ( HIDWORD(v19) && ((v60 & 0x8000u) == 0LL || v39) )
                {
                  LOBYTE(v4) = 0;
                  v3 = (unsigned int)(HIDWORD(v19) - 1);
                  HIDWORD(v60) = HIDWORD(v19) - 1;
                }
                else
                {
                  LOBYTE(v4) = 1;
                  v20 = (unsigned __int16)(v60 ^ (v60 + 1));
                  v3 = v20 ^ (unsigned int)v60;
                  LODWORD(v60) = v20 ^ v60;
                }
                v21 = v19;
                v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v60, v19);
                v60 = v19;
              }
              while ( v21 != v19 );
              v40 = v4;
              v71 = 1;
              if ( (_BYTE)v4 )
                goto LABEL_12;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v35 = *(_QWORD *)(a1 + 8);
            v56 = v35;
            do
            {
              LODWORD(v56) = (unsigned __int16)(v56 ^ (v56 + 1)) ^ (unsigned int)v56;
              v36 = v35;
              v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v56, v35);
              v56 = v35;
            }
            while ( v36 != v35 );
            v64 = 3;
            v80 = *(_QWORD *)(a1 + 56);
            ZwSetInformationWorkerFactory(v80, 9LL, &v64);
LABEL_118:
            if ( (BYTE12(v81[17]) & 1) != 0 )
            {
              sub_180082E68((char *)&v81[3] + 8);
              HIDWORD(v81[17]) &= ~1u;
            }
            if ( v41 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v42 )
            {
              v37 = v59;
              RtlAcquireSRWLockExclusive(&v59[1].Mutant);
              v38 = v81[0];
              if ( *(_OWORD **)(*(_QWORD *)&v81[0] + 8LL) != v81 || **((_OWORD ***)&v81[0] + 1) != v81 )
                __fastfail(3u);
              **((_QWORD **)&v81[0] + 1) = *(_QWORD *)&v81[0];
              *(_QWORD *)(v38 + 8) = *((_QWORD *)&v38 + 1);
              RtlReleaseSRWLockExclusive(&v37[1].Mutant);
            }
            if ( v43 )
            {
              sub_180082410(v81);
              if ( v44 )
                sub_1800714DC(a1);
            }
            if ( a1 == qword_18015C378 )
            {
              sub_180018928(&qword_18015C378, &unk_18015C380, v4);
            }
            else if ( a1 == qword_18015C368 )
            {
              sub_180018928(&qword_18015C368, &unk_18015C370, v4);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              sub_180082A08(a1, v3, v4);
            }
            sub_1800865E8(v68);
            sub_1800834C8(v63);
            sub_18008302C(v81);
            v54 = 0;
            RtlExitUserThread(0LL);
          }
        }
      }
      v70 = dword_18015C000 + 3145728;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 3145728) | 8u, 912LL);
      v10 = (_OWORD *)Heap;
      if ( Heap )
      {
        v27 = Heap + 896;
        *(_QWORD *)v27 = v10;
        *(_DWORD *)(v27 + 8) = 1;
        *(_DWORD *)(v27 + 12) = 16;
        *(_QWORD *)&v81[21] = v27;
        v9 = 16;
      }
      else
      {
LABEL_82:
        v9 = 1;
        v10 = &v81[19];
      }
      v55 = v9;
      goto LABEL_15;
    }
  }
  v2 = 1;
  v45 = 1;
  goto LABEL_8;
}
