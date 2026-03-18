/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CC3F4
 * Callers:
 *     xxxSendMessageBSM @ 0x1C00CD550 (xxxSendMessageBSM.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     CanForceForeground @ 0x1C0090A90 (CanForceForeground.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     _PostTransformableMessageIL @ 0x1C00CC8E0 (_PostTransformableMessageIL.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00E34AC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        unsigned int a6)
{
  __int64 v7; // r13
  unsigned int v9; // edi
  unsigned int v10; // r14d
  int v11; // r12d
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *i; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edx
  __int16 v19; // dx
  int v20; // esi
  int v21; // r13d
  int v22; // esi
  BOOL v23; // r12d
  int v24; // r14d
  struct _LARGE_STRING *v25; // r9
  bool v26; // cf
  __int64 v27; // rdx
  void *v28; // rcx
  __m128i v30; // xmm1
  PETHREAD *v31; // rcx
  PETHREAD *v32; // rcx
  _QWORD *v33; // rcx
  bool v34; // zf
  void *v35; // rax
  int v36; // [rsp+50h] [rbp-B0h]
  BOOL v37; // [rsp+54h] [rbp-ACh]
  int v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+5Ch] [rbp-A4h]
  int v40; // [rsp+60h] [rbp-A0h]
  HANDLE InputBuffer; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+7Ch] [rbp-84h]
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v48[2]; // [rsp+98h] [rbp-68h] BYREF
  void *Handle; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 *v50; // [rsp+A8h] [rbp-58h]
  struct tagBWL *v51; // [rsp+B0h] [rbp-50h]
  struct _LARGE_STRING *v52; // [rsp+B8h] [rbp-48h]
  _QWORD v53[3]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v54; // [rsp+D8h] [rbp-28h] BYREF
  int v55; // [rsp+E8h] [rbp-18h]

  v40 = 0;
  v37 = 0;
  v7 = a4;
  v9 = a2;
  v46 = gptiCurrent;
  v10 = 1;
  v52 = (struct _LARGE_STRING *)a4;
  v36 = 1;
  if ( (unsigned int)(a2 - 1024) <= 0xBBFF )
  {
    v38 = 1;
    UserSetLastError(87LL, a2);
  }
  else
  {
    v38 = 0;
  }
  if ( a1 )
  {
    v11 = a6;
    if ( !a6 && (v9 == 26 || v9 == 21 || v9 == 29 || v9 == 295 || v9 == 794) )
    {
      v11 = 1;
      a6 = 1;
    }
    v51 = BuildHwndList(*((_QWORD *)a1 + 14), (struct tagWND *)2, 0LL);
    if ( v51 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && *((_QWORD *)a1 + 3) == grpdeskRitInput
        && ((*(_DWORD *)(v46 + 464) & 8) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v46 + 400))) )
      {
        CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      }
      if ( v9 != 537 || ((a3 - 0x8000) & 0xFFFFFFFFFFFFFFFBuLL) != 0 || *(_DWORD *)(v7 + 4) != 2 )
        goto LABEL_14;
      if ( (*(_DWORD *)(v7 + 12) & 0x40000000) == 0 )
      {
        v30 = *(__m128i *)v7;
        v55 = *(_DWORD *)(v7 + 16);
        v54 = v30;
        v34 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v54.m128i_i32[3] = _mm_srli_si128(v30, 8).m128i_i32[1] | 0x40000000;
        if ( v34 )
        {
          v45 = 0LL;
          GetProcessLuid(0LL, &v45);
          if ( (_DWORD)v45 == luidSystem[0] )
            v37 = HIDWORD(v45) == luidSystem[1];
        }
LABEL_14:
        for ( i = (unsigned __int64 *)((char *)v51 + 32); ; ++i )
        {
          v15 = *i;
          v50 = i;
          if ( v15 == 1 )
          {
LABEL_46:
            FreeHwndList(v51);
            return v10;
          }
          v39 = 0;
          v16 = HMValidateHandleNoSecure(v15, 1LL, v12, v13);
          v17 = v16;
          if ( v16 )
          {
            v18 = *((_DWORD *)a5 + 1);
            if ( (v18 & 2) == 0 || *(_QWORD *)(*(_QWORD *)(v16 + 16) + 408LL) != *(_QWORD *)(v46 + 408) )
            {
              if ( (v18 & 0x400) == 0
                || (v33 = *(_QWORD **)(v16 + 16), v44 = 0, v43 = 0, (int)GetProcessLuid(*v33, &v43) >= 0)
                && *((_DWORD *)a5 + 8) == v43
                && *((_DWORD *)a5 + 9) == v44 )
              {
                v12 = 1LL;
                if ( v37 )
                {
                  if ( (int)GetProcessLuid(**(_QWORD **)(v17 + 16), v48) < 0 )
                    continue;
                  if ( luidSystem[0] == v48[0] && luidSystem[1] == v48[1] )
                  {
                    v12 = 1LL;
                  }
                  else
                  {
                    v12 = 1LL;
                    v39 = 1;
                  }
                }
                if ( (*(_WORD *)(v17 + 82) & 0x3FFF) != 0x29C )
                {
                  v19 = *(_WORD *)(*(_QWORD *)(v17 + 168) + 8LL);
                  if ( *(_WORD *)(gpsi + 892LL) != v19
                    && gaOleMainThreadWndClass != v19
                    && (!v38 || (*(_BYTE *)(v17 + 61) & 2) == 0) )
                  {
                    v53[0] = *(_QWORD *)(v46 + 392);
                    *(_QWORD *)(v46 + 392) = v53;
                    v53[1] = v17;
                    _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
                    v20 = *((_DWORD *)a5 + 1);
                    if ( (v20 & 0x10) != 0 )
                    {
                      PostTransformableMessageIL((struct tagWND *)v17, v9, a3, v7, v11);
                    }
                    else if ( (v20 & 0x100) != 0 )
                    {
                      xxxSendNotifyMessage((struct tagWND *)v17, v9, a3, (struct _LARGE_STRING *)v7, v11);
                    }
                    else if ( (v20 & 0x20000000) != 0 )
                    {
                      QueueNotifyTransformableMessage((struct tagWND *)v17, v9, a3, v7, v11, 1);
                    }
                    else
                    {
                      BugCheckParameter3 = 0LL;
                      v21 = v20 & 8;
                      v22 = v20 & 0x20;
                      v23 = v9 == 536 && a3 == 4;
                      if ( v21 )
                        v24 = v23 ? 2000 : 5000;
                      else
                        v24 = 0;
                      if ( v23 )
                      {
                        v31 = *(PETHREAD **)(v17 + 16);
                        InputBuffer = 0LL;
                        InputBuffer = PsGetThreadProcessId(*v31);
                        ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                      }
                      v25 = (struct _LARGE_STRING *)&v54;
                      v26 = v21 != 0;
                      v7 = (__int64)v52;
                      if ( !v39 )
                        v25 = v52;
                      if ( xxxSendTransformableMessageTimeout(
                             (__int64 *)v17,
                             v9,
                             a3,
                             v25,
                             (v26 ? 2 : 0) | (*((_DWORD *)a5 + 1) >> 3) & 8u,
                             v24,
                             (__int64 *)&BugCheckParameter3,
                             a6,
                             1) )
                      {
                        if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
                        {
                          v10 = 0;
                          if ( v9 == 17 )
                            v34 = BugCheckParameter3 == 0;
                          else
                            v34 = BugCheckParameter3 == 1112363332;
                          LOBYTE(v10) = !v34;
                          v36 = v10;
                        }
                        else
                        {
                          v10 = v36;
                        }
                      }
                      else
                      {
                        v10 = v22;
                        v36 = v22;
                      }
                      if ( v23 )
                      {
                        v32 = *(PETHREAD **)(v17 + 16);
                        InputBuffer = 0LL;
                        InputBuffer = PsGetThreadProcessId(*v32);
                        ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                      }
                      if ( !v10 )
                      {
                        v34 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                        *((_QWORD *)a5 + 3) = *(_QWORD *)v17;
                        if ( !v34 )
                        {
                          v28 = *(void **)(v17 + 24);
                          v35 = 0LL;
                          Handle = 0LL;
                          if ( v28 )
                          {
                            ObOpenObjectByPointer(v28, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                            v35 = Handle;
                          }
                          *((_QWORD *)a5 + 2) = v35;
                        }
                        v40 = 1;
                      }
                      v11 = a6;
                    }
                    ThreadUnlock1(v28, v27);
                    if ( v40 )
                      goto LABEL_46;
                    i = v50;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
