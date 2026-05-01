/*
 * XREFs of ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025F30
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011974 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180024630 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180026670 (-HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@.c)
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800269CC (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800269E4 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180026A0C (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180027260 (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampWakeContextWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  DWORD v5; // edi
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int8 v8; // di
  DWORD v9; // ecx
  _QWORD *v10; // rax
  char v11; // di
  __int64 v12; // rdx
  _WORD *v13; // rcx
  __int16 v14; // ax
  _WORD *v15; // rax
  __int64 v16; // rdx
  _WORD *v17; // rcx
  __int16 v18; // ax
  _WORD *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // esi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int128 v30; // xmm1
  __int64 v31; // xmm0_8
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  signed __int64 v35; // rax
  signed __int64 v36; // rcx
  bool v37; // zf
  signed __int64 v38; // rtt
  unsigned __int64 v39; // rdi
  signed __int64 v40; // rax
  bool v41; // cc
  signed __int64 v42; // rax
  DWORD v43; // esi
  _QWORD *v44; // rdi
  DWORD v45; // ecx
  char v46; // al
  _QWORD *v47; // rax
  signed __int64 v48; // rax
  signed __int64 v49; // rcx
  bool v50; // zf
  signed __int64 v51; // rtt
  unsigned __int64 v52; // rdi
  signed __int64 v53; // r12
  signed __int64 v54; // r12
  DWORD v55; // ebx
  __int128 v56; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v57; // [rsp+38h] [rbp-D0h]
  __int64 v58; // [rsp+48h] [rbp-C0h]
  __int64 v59; // [rsp+50h] [rbp-B8h] BYREF
  int v60; // [rsp+58h] [rbp-B0h] BYREF
  int v61; // [rsp+5Ch] [rbp-ACh]
  int v62; // [rsp+60h] [rbp-A8h]
  _BYTE v63[128]; // [rsp+64h] [rbp-A4h] BYREF
  _BYTE v64[128]; // [rsp+E4h] [rbp-24h] BYREF
  int v65; // [rsp+164h] [rbp+5Ch]
  int v66; // [rsp+16Ch] [rbp+64h]
  char v67[40]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  __int64 v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  __int64 v72; // [rsp+1B8h] [rbp+B0h]
  int v73; // [rsp+1C0h] [rbp+B8h]
  int v74; // [rsp+1C4h] [rbp+BCh]
  _BYTE TlsValue[144]; // [rsp+1D8h] [rbp+D0h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *Value |= 0x800uLL;
      ++Value[12];
    }
  }
  RtlAcquireSRWLockExclusive(a2 + 40);
  *((_DWORD *)a2 + 12) = GetCurrentThreadId();
  CurrentThreadId = GetCurrentThreadId();
  v8 = a2[185];
  *((_DWORD *)a2 + 45) = CurrentThreadId;
  while ( v8 )
  {
    v9 = HampLockTrackerId;
    a2[185] = 0;
    if ( v9 != -1 )
    {
      v10 = TlsGetValue(v9);
      if ( (*(_DWORD *)v10 & 0x800LL) == 0 )
        __int2c();
      v37 = v10[12]-- == 1LL;
      if ( v37 )
        *v10 &= ~0x800uLL;
    }
    *((_DWORD *)a2 + 12) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    if ( (v8 & 4) != 0 && (a2[160] & 2) != 0 )
    {
      HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
      *((_QWORD *)a2 + 16) = 0LL;
    }
    HampWakeContextComputeNextState(a2, v8, &v56);
    v11 = v58;
    if ( ((a2[160] & 2) != 0) != ((v58 & 2) != 0) )
    {
      if ( (v58 & 2) == 0 )
      {
        HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
LABEL_20:
        v57 = 0uLL;
        LOBYTE(v58) = v11 & 0xFD;
        goto LABEL_56;
      }
      memset_0(&v60, 0, 0x180uLL);
      v60 = 524304;
      v12 = 64LL;
      v13 = v63;
      do
      {
        if ( v12 == -2147483582 )
          break;
        v14 = *(_WORD *)((char *)v13 + (char *)L"WakeReference" - v63);
        if ( !v14 )
          break;
        *v13++ = v14;
        --v12;
      }
      while ( v12 );
      v37 = v12 == 0;
      v15 = v13 - 1;
      v16 = 64LL;
      if ( !v37 )
        v15 = v13;
      v17 = v64;
      *v15 = 0;
      do
      {
        if ( v16 == -2147483582 )
          break;
        v18 = *(_WORD *)((char *)v17 + (char *)&pwsz - v64);
        if ( !v18 )
          break;
        *v17++ = v18;
        --v16;
      }
      while ( v16 );
      v19 = v17 - 1;
      if ( v16 )
        v19 = v17;
      *v19 = 0;
      v65 = 5;
      memset_0(v67, 0, 0x60uLL);
      v20 = *((_QWORD *)a2 + 7);
      v60 |= 0x212u;
      v61 |= 4u;
      v62 |= 8u;
      v68 |= 0x22FuLL;
      v21 = *((_QWORD *)a2 + 21);
      v73 = 100;
      v66 = 0;
      v69 = 0LL;
      v70 = 0LL;
      v71 = 0LL;
      v72 = 0LL;
      v74 = 1;
      if ( (int)HamSrvCreateActivityInternal(
                  *(struct _HOST_ACTIVITY_MANAGER ***)(v20 + 8),
                  v21,
                  (struct _HAM_ACTIVITY_PROPERTIES *)&v60,
                  (unsigned __int64 *)a2 + 11) < 0 )
        goto LABEL_20;
      HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7));
      if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
        __fastfail(0xEu);
      v23 = *((_QWORD *)a2 + 7);
      v24 = *(_QWORD *)(v23 + 88);
      if ( (v24 & 1) != 0 )
      {
        v25 = *(_QWORD *)(v23 + 80);
        if ( v25 )
          v26 = v25 ^ (v23 + 80);
        else
          v26 = 0LL;
      }
      else
      {
        v26 = *(_QWORD *)(v23 + 80);
      }
      LOBYTE(v22) = 0;
      v27 = v24 & 1;
      if ( v26 )
      {
        while ( 1 )
        {
          if ( (int)HampWakeContextTreeCompareByActivityId(a2 + 88, (struct _RTL_BALANCED_NODE *)v26) < 0 )
          {
            v28 = *(_QWORD *)v26;
            if ( v27 )
            {
              if ( !v28 )
                goto LABEL_53;
              v28 ^= v26;
            }
            if ( !v28 )
            {
LABEL_53:
              LOBYTE(v22) = 0;
              break;
            }
          }
          else
          {
            v28 = *(_QWORD *)(v26 + 8);
            if ( v27 )
            {
              if ( !v28 )
                goto LABEL_47;
              v28 ^= v26;
            }
            if ( !v28 )
            {
LABEL_47:
              LOBYTE(v22) = 1;
              break;
            }
          }
          v26 = v28;
        }
      }
      RtlRbInsertNodeEx(v23 + 80, v26, v22, a2 + 64);
      HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a2 + 7));
      if ( (int)HamSrvStartActivityAsync(
                  *(struct _HAM_CLIENT_CONTEXT **)(*((_QWORD *)a2 + 7) + 8LL),
                  *((_QWORD *)a2 + 11),
                  0,
                  0LL) < 0 )
      {
        HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
        LOBYTE(v58) = v58 & 0xFD;
        v57 = 0uLL;
      }
    }
LABEL_56:
    v29 = -1LL;
    v30 = v57;
    *((_OWORD *)a2 + 8) = v56;
    v31 = v58;
    *((_OWORD *)a2 + 9) = v30;
    *((_QWORD *)a2 + 20) = v31;
    v32 = *((_QWORD *)a2 + 18);
    v33 = *((_QWORD *)a2 + 17);
    if ( v33 < v32 && v32 != -1LL )
      v29 = *((_QWORD *)a2 + 18);
    v34 = *((_QWORD *)a2 + 19);
    if ( v33 < v34 && v34 < v29 )
      v29 = *((_QWORD *)a2 + 19);
    if ( v29 == -1LL )
    {
      if ( (unsigned int)TpSetTimerEx(*((_QWORD *)a2 + 13), 0LL, 0LL, 0LL) )
        CemRcObjectDereference((struct _CEM_RC_OBJECT *)a2);
    }
    else
    {
      v59 = -10000LL * (unsigned int)(v29 - v33);
      if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
        __fastfail(0xEu);
      if ( (unsigned int)TpSetTimerEx(*((_QWORD *)a2 + 13), &v59, 0LL, 0LL) )
      {
        _m_prefetchw(a2 + 24);
        v35 = *((_QWORD *)a2 + 3);
        v36 = v35 - 1;
        v37 = v35 == 1;
        if ( v35 - 1 <= 0 )
        {
LABEL_69:
          if ( !v37 )
            __fastfail(0xEu);
          v39 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( *((_QWORD *)a2 + 2) == -1LL )
          {
            if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
              __fastfail(0xEu);
            (*(void (__fastcall **)(char *))(v39 + 24))(a2);
          }
          else
          {
            RtlAcquireSRWLockExclusive(v39 + 16);
            v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
            v41 = v40 <= 1;
            v42 = v40 - 1;
            if ( v41 )
            {
              if ( v42 )
                __fastfail(0xEu);
              RtlReleaseSRWLockExclusive(v39 + 16);
              (*(void (__fastcall **)(char *))(v39 + 24))(a2);
            }
            else
            {
              RtlReleaseSRWLockExclusive(v39 + 16);
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v38 = v35;
            v35 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v36, v35);
            if ( v38 == v35 )
              break;
            v36 = v35 - 1;
            v37 = v35 == 1;
            if ( v35 - 1 <= 0 )
              goto LABEL_69;
          }
        }
      }
    }
    v43 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v44 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v43) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *v44 |= 0x800uLL;
      ++v44[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 40);
    *((_DWORD *)a2 + 12) = GetCurrentThreadId();
    if ( (a2[160] & 1) != 0 )
    {
      a2[184] |= 2u;
      break;
    }
    v8 = a2[185];
  }
  v45 = HampLockTrackerId;
  v46 = a2[184] & 0xFE;
  *((_DWORD *)a2 + 45) = 0;
  a2[184] = v46;
  if ( v45 != -1 )
  {
    v47 = TlsGetValue(v45);
    if ( (*(_DWORD *)v47 & 0x800LL) == 0 )
      __int2c();
    v37 = v47[12]-- == 1LL;
    if ( v37 )
      *v47 &= ~0x800uLL;
  }
  *((_DWORD *)a2 + 12) = 0;
  RtlReleaseSRWLockExclusive(a2 + 40);
  _m_prefetchw(a2 + 24);
  v48 = *((_QWORD *)a2 + 3);
  v49 = v48 - 1;
  v50 = v48 == 1;
  if ( v48 - 1 <= 0 )
  {
LABEL_98:
    if ( !v50 )
      __fastfail(0xEu);
    v52 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *((_QWORD *)a2 + 2) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(char *))(v52 + 24))(a2);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v52 + 16);
      v53 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v41 = v53 <= 1;
      v54 = v53 - 1;
      if ( v41 )
      {
        if ( v54 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v52 + 16);
        (*(void (__fastcall **)(char *))(v52 + 24))(a2);
      }
      else
      {
        RtlReleaseSRWLockExclusive(v52 + 16);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v51 = v48;
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v49, v48);
      if ( v51 == v48 )
        break;
      v49 = v48 - 1;
      v50 = v48 == 1;
      if ( v48 - 1 <= 0 )
        goto LABEL_98;
    }
  }
  v55 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v55, 0LL);
  }
}
