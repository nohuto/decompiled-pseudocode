/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C00E6E80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     SynthesizeMitTouchInput @ 0x1C01302D8 (SynthesizeMitTouchInput.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  CInputThread *v5; // rcx
  int v6; // edi
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  _BYTE v18[32]; // [rsp+20h] [rbp-B98h] BYREF
  _BYTE v19[1456]; // [rsp+40h] [rbp-B78h] BYREF
  _BYTE v20[1456]; // [rsp+5F0h] [rbp-5C8h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v18, a2, a3, a4);
  v6 = 0;
  if ( CInputThread::IsInputThread(v5) )
  {
    if ( a1 + 91 < a1 || (unsigned __int64)(a1 + 91) > MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    v12 = v19;
    v13 = 11LL;
    v14 = 11LL;
    do
    {
      *v12 = *a1;
      v12[1] = a1[1];
      v12[2] = a1[2];
      v12[3] = a1[3];
      v12[4] = a1[4];
      v12[5] = a1[5];
      v12[6] = a1[6];
      v12 += 8;
      *(v12 - 1) = a1[7];
      a1 += 8;
      --v14;
    }
    while ( v14 );
    *v12 = *a1;
    v12[1] = a1[1];
    v12[2] = a1[2];
    v15 = v20;
    v16 = v19;
    do
    {
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      v15[5] = v16[5];
      v15[6] = v16[6];
      v15 += 8;
      *(v15 - 1) = v16[7];
      v16 += 8;
      --v13;
    }
    while ( v13 );
    *v15 = *v16;
    v15[1] = v16[1];
    v15[2] = v16[2];
    if ( (unsigned __int8)SynthesizeMitTouchInput(v20, 0LL, 128LL) )
    {
      v6 = 1;
      goto LABEL_14;
    }
    v7 = 5023;
  }
  else
  {
    v7 = 5;
  }
  UserSetLastError(v7);
LABEL_14:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
