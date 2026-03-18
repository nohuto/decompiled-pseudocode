/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C01133B8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 */

__int64 __fastcall xxxKeyboardCorrectionCallout(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm1
  unsigned int v6; // edi
  __int128 v7; // xmm0
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 **v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 ThreadWin32Thread; // rax
  _BOOL8 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD v27[3]; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v28[3]; // [rsp+70h] [rbp+Fh] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C8h] [rbp+67h] BYREF
  int v30; // [rsp+D0h] [rbp+6Fh] BYREF

  v30 = a2;
  v4 = *a1;
  LOBYTE(a2) = 1;
  v5 = a1[1];
  v6 = 0;
  v7 = a1[2];
  v8 = *(_QWORD *)a1;
  v28[0] = v4;
  v28[1] = v5;
  v28[2] = v7;
  v9 = HMValidateHandleNoSecure(v8, a2, a3, a4);
  if ( !v9 )
    return 87LL;
  if ( (unsigned int)(*(_DWORD *)(v9 + 320) - 1) <= 1 && (*(_BYTE *)(v9 + 306) & 0x40) == 0 )
    return v6;
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( !v13 )
    return v6;
  v14 = (__int64 **)(v13 + 248);
  v15 = *(_QWORD *)(v13 + 248);
  if ( !v15 )
    return v6;
  if ( *(char *)(v15 + 60) >= 0 && *(char *)(v15 + 59) >= 0 )
  {
    v16 = *(_QWORD *)(v15 + 16);
    if ( gptiCurrent == v16 )
      return 0LL;
    v17 = gbEnforceUIPI;
    v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
    v19 = *(_QWORD *)(*(_QWORD *)(v16 + 400) + 832LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v19 > (unsigned int)v18
      || (_DWORD)v19 == (_DWORD)v18
      && ((v20 = HIDWORD(v19), v21 = HIDWORD(v18), (_DWORD)v20 == (_DWORD)v21)
       || (v17 = 0xFFFFFFFFLL, (_DWORD)v20 == -1)
       || (_DWORD)v21 == -1) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v10, v11);
      v27[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v27;
      v27[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v23 = xxxSendTransformableMessageTimeout(
              *v14,
              812LL,
              (unsigned __int64)&v30,
              (struct _LARGE_STRING *)v28,
              2,
              guiKeyboardCorrectionCalloutTimeout,
              (__int64 *)&BugCheckParameter3,
              1u,
              0) == 0;
      ThreadUnlock1(v25, v24);
      if ( v23 )
      {
        v26 = HMAssignmentUnlock(v14);
        if ( v26 && *(char *)(v26 + 60) >= 0 && *(char *)(v26 + 59) >= 0 )
          PostMessage(v26, 813LL, 0LL, 0LL);
        return 1460;
      }
      else if ( BugCheckParameter3 == 255 )
      {
        return 1296;
      }
      return v6;
    }
  }
  return 5LL;
}
