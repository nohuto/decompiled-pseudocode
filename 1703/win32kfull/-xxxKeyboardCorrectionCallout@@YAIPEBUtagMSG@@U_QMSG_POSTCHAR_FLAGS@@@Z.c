/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C010A3F8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 */

__int64 __fastcall xxxKeyboardCorrectionCallout(__int128 *a1, int a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm1
  unsigned int v4; // edi
  __int128 v5; // xmm0
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rax
  ULONG_PTR *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _BOOL8 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD v21[3]; // [rsp+50h] [rbp-9h] BYREF
  int v22[4]; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v23; // [rsp+78h] [rbp+1Fh]
  __int128 v24; // [rsp+88h] [rbp+2Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+67h] BYREF
  int v26; // [rsp+C8h] [rbp+6Fh] BYREF

  v26 = a2;
  v2 = *a1;
  v3 = a1[1];
  v4 = 0;
  v5 = a1[2];
  v6 = *(_QWORD *)a1;
  *(_OWORD *)v22 = v2;
  v23 = v3;
  v24 = v5;
  v7 = HMValidateHandleNoSecure(v6, 1);
  if ( !v7 )
    return 87LL;
  if ( (unsigned int)(*(_DWORD *)(v7 + 320) - 1) <= 1 && (*(_BYTE *)(v7 + 306) & 0x40) == 0 )
    return v4;
  v9 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v9 )
    return v4;
  v10 = (ULONG_PTR *)(v9 + 248);
  v11 = *(_QWORD *)(v9 + 248);
  if ( !v11 )
    return v4;
  if ( *(char *)(v11 + 60) >= 0 && *(char *)(v11 + 59) >= 0 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    if ( gptiCurrent == v12 )
      return 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 376) + 824LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v14 > (unsigned int)v13
      || (_DWORD)v14 == (_DWORD)v13
      && ((v15 = HIDWORD(v14), v16 = HIDWORD(v13), (_DWORD)v15 == (_DWORD)v16) || (_DWORD)v15 == -1 || (_DWORD)v16 == -1) )
    {
      v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v21;
      v21[1] = v11;
      ++*(_DWORD *)(v11 + 8);
      v17 = xxxSendTransformableMessageTimeout(
              *v10,
              0x32Cu,
              (unsigned __int64)&v26,
              (struct _LARGE_STRING *)v22,
              2,
              guiKeyboardCorrectionCalloutTimeout,
              (__int64 *)&BugCheckParameter3,
              1,
              0) == 0;
      ThreadUnlock1(v19, v18);
      if ( v17 )
      {
        v20 = HMAssignmentUnlock(v10);
        if ( v20 && *(char *)(v20 + 60) >= 0 && *(char *)(v20 + 59) >= 0 )
          PostMessage(v20, 813LL, 0LL, 0LL);
        return 1460;
      }
      else if ( BugCheckParameter3 == 255 )
      {
        return 1296;
      }
      return v4;
    }
  }
  return 5LL;
}
