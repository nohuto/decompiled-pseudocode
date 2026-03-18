/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00C8B7C
 * Callers:
 *     xxxSendMessageBSM @ 0x1C00C9B50 (xxxSendMessageBSM.c)
 * Callees:
 *     CanForceForeground @ 0x1C001BDE0 (CanForceForeground.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C65F4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     _PostTransformableMessageIL @ 0x1C00C8F84 (_PostTransformableMessageIL.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  __int64 v7; // r12
  unsigned int v10; // r14d
  _BOOL8 v11; // r13
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rax
  bool i; // zf
  __int64 v15; // rax
  ULONG_PTR v16; // rbx
  int v17; // edx
  __int16 v18; // dx
  int v19; // esi
  int v20; // ecx
  int v21; // esi
  BOOL v22; // r12d
  int v23; // r14d
  struct _LARGE_STRING *v24; // r9
  __int64 v25; // rdx
  void *v26; // rcx
  PETHREAD *v28; // rcx
  PETHREAD *v29; // rcx
  __m128i v30; // xmm1
  _QWORD *v31; // rcx
  bool v32; // zf
  void *v33; // rax
  int v34; // [rsp+50h] [rbp-99h]
  __int64 v35; // [rsp+58h] [rbp-91h] BYREF
  int v36; // [rsp+60h] [rbp-89h]
  int v37; // [rsp+64h] [rbp-85h]
  int v38; // [rsp+68h] [rbp-81h]
  unsigned __int64 v39; // [rsp+70h] [rbp-79h]
  HANDLE InputBuffer; // [rsp+78h] [rbp-71h] BYREF
  void *Handle; // [rsp+80h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-61h] BYREF
  int v43[2]; // [rsp+90h] [rbp-59h]
  _DWORD v44[2]; // [rsp+98h] [rbp-51h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-49h]
  _QWORD *v46; // [rsp+A8h] [rbp-41h]
  struct tagBWL *v47; // [rsp+B0h] [rbp-39h]
  _QWORD v48[3]; // [rsp+B8h] [rbp-31h] BYREF
  __m128i v49; // [rsp+D0h] [rbp-19h] BYREF
  int v50; // [rsp+E0h] [rbp-9h]

  v38 = 0;
  v7 = a4;
  *(_QWORD *)v43 = a4;
  v39 = a3;
  v34 = 1;
  v10 = 1;
  v45 = gptiCurrent;
  if ( a2 - 1024 <= 0xBBFF )
  {
    v36 = 1;
    UserSetLastError(87LL);
  }
  else
  {
    v36 = 0;
  }
  if ( a1 )
  {
    if ( !a6 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794) )
      a6 = 1;
    v47 = BuildHwndList(*((_QWORD *)a1 + 14), 2, 0LL);
    if ( v47 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && *((_QWORD *)a1 + 3) == grpdeskRitInput
        && ((*(_DWORD *)(gptiCurrent + 440LL) & 8) != 0
         || (unsigned int)CanForceForeground(*(_QWORD *)(gptiCurrent + 376LL))) )
      {
        CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      }
      v11 = 0LL;
      if ( a2 != 537 || a3 != 32772 && a3 != 0x8000 )
        goto LABEL_15;
      v11 = 0LL;
      if ( *(_DWORD *)(v7 + 4) != 2 )
        goto LABEL_15;
      if ( (*(_DWORD *)(v7 + 12) & 0x40000000) == 0 )
      {
        v30 = *(__m128i *)v7;
        v50 = *(_DWORD *)(v7 + 16);
        v49 = v30;
        i = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v49.m128i_i32[3] = _mm_srli_si128(v30, 8).m128i_i32[1] | 0x40000000;
        if ( i )
        {
          v35 = 0LL;
          GetProcessLuid(0LL, &v35);
          v11 = v35 == __PAIR64__(luidSystem[1], luidSystem[0]);
        }
LABEL_15:
        v12 = (_QWORD *)((char *)v47 + 32);
        v13 = *((_QWORD *)v47 + 4);
        for ( i = v13 == 1; ; i = *v12 == 1LL )
        {
          v46 = v12;
          if ( i )
          {
LABEL_47:
            FreeHwndList(v47);
            return v10;
          }
          v37 = 0;
          v15 = HMValidateHandleNoSecure(v13, 1);
          v16 = v15;
          if ( v15 )
          {
            v17 = *((_DWORD *)a5 + 1);
            if ( (v17 & 2) == 0 || *(_QWORD *)(*(_QWORD *)(v15 + 16) + 384LL) != *(_QWORD *)(v45 + 384) )
            {
              if ( (v17 & 0x400) == 0
                || (v31 = *(_QWORD **)(v15 + 16), v35 = 0LL, (int)GetProcessLuid(*v31, &v35) >= 0)
                && *((_QWORD *)a5 + 4) == v35 )
              {
                if ( v11 )
                {
                  if ( (int)GetProcessLuid(**(_QWORD **)(v16 + 16), v44) < 0 )
                    goto LABEL_45;
                  if ( luidSystem[0] != v44[0] || luidSystem[1] != v44[1] )
                    v37 = 1;
                }
                if ( (*(_WORD *)(v16 + 82) & 0x3FFF) != 0x29C )
                {
                  v18 = *(_WORD *)(*(_QWORD *)(v16 + 168) + 8LL);
                  if ( *(_WORD *)(gpsi + 892LL) != v18
                    && gaOleMainThreadWndClass != v18
                    && (!v36 || (*(_BYTE *)(v16 + 61) & 2) == 0) )
                  {
                    v48[0] = *(_QWORD *)(v45 + 368);
                    *(_QWORD *)(v45 + 368) = v48;
                    v48[1] = v16;
                    ++*(_DWORD *)(v16 + 8);
                    v19 = *((_DWORD *)a5 + 1);
                    if ( (v19 & 0x10) != 0 )
                    {
                      PostTransformableMessageIL((struct tagWND *)v16, a2, v39, v7, a6);
                    }
                    else if ( (v19 & 0x100) != 0 )
                    {
                      xxxSendNotifyMessage((struct tagWND *)v16, a2, v39, (struct _LARGE_STRING *)v7, a6);
                    }
                    else if ( (v19 & 0x20000000) != 0 )
                    {
                      QueueNotifyTransformableMessage((struct tagWND *)v16, a2, v39, v7, a6, 1);
                    }
                    else
                    {
                      BugCheckParameter3 = 0LL;
                      v20 = v19 & 8;
                      v21 = v19 & 0x20;
                      LODWORD(Handle) = v20;
                      v22 = a2 == 536 && v39 == 4;
                      if ( v20 )
                        v23 = v22 ? 2000 : 5000;
                      else
                        v23 = 0;
                      if ( v22 )
                      {
                        v28 = *(PETHREAD **)(v16 + 16);
                        InputBuffer = 0LL;
                        InputBuffer = PsGetThreadProcessId(*v28);
                        ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                        v20 = (int)Handle;
                      }
                      v24 = (struct _LARGE_STRING *)&v49;
                      if ( !v37 )
                        v24 = *(struct _LARGE_STRING **)v43;
                      if ( xxxSendTransformableMessageTimeout(
                             v16,
                             a2,
                             v39,
                             v24,
                             (v20 != 0 ? 2 : 0) | (*((_DWORD *)a5 + 1) >> 3) & 8u,
                             v23,
                             (__int64 *)&BugCheckParameter3,
                             a6,
                             1) )
                      {
                        if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
                        {
                          v10 = 0;
                          if ( a2 == 17 )
                            v32 = BugCheckParameter3 == 0;
                          else
                            v32 = BugCheckParameter3 == 1112363332;
                          LOBYTE(v10) = !v32;
                          v34 = v10;
                        }
                        else
                        {
                          v10 = v34;
                        }
                      }
                      else
                      {
                        v10 = v21;
                        v34 = v21;
                      }
                      if ( v22 )
                      {
                        v29 = *(PETHREAD **)(v16 + 16);
                        InputBuffer = 0LL;
                        InputBuffer = PsGetThreadProcessId(*v29);
                        ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                      }
                      if ( !v10 )
                      {
                        i = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                        *((_QWORD *)a5 + 3) = *(_QWORD *)v16;
                        if ( !i )
                        {
                          v26 = *(void **)(v16 + 24);
                          v33 = 0LL;
                          Handle = 0LL;
                          if ( v26 )
                          {
                            ObOpenObjectByPointer(v26, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                            v33 = Handle;
                          }
                          *((_QWORD *)a5 + 2) = v33;
                        }
                        v38 = 1;
                      }
                      v7 = *(_QWORD *)v43;
                    }
                    ThreadUnlock1(v26, v25);
                    if ( v38 )
                      goto LABEL_47;
                    v12 = v46;
                  }
                }
              }
            }
          }
LABEL_45:
          v13 = *++v12;
        }
      }
    }
  }
  return 0LL;
}
