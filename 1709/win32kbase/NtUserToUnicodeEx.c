/*
 * XREFs of NtUserToUnicodeEx @ 0x1C0071380
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     xxxToUnicodeEx @ 0x1C0071560 (xxxToUnicodeEx.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtUserToUnicodeEx(int a1, int a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  _OWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE v21[4]; // [rsp+40h] [rbp-1A8h] BYREF
  int v22; // [rsp+44h] [rbp-1A4h]
  _QWORD *v23; // [rsp+60h] [rbp-188h]
  _BYTE v24[24]; // [rsp+78h] [rbp-170h] BYREF
  _QWORD v25[2]; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v26[256]; // [rsp+A0h] [rbp-148h] BYREF

  v25[0] = 0LL;
  v22 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v21);
  if ( a5 <= 0 )
  {
    v15 = 0;
    UserSetLastError(87);
  }
  else
  {
    v11 = v26;
    v12 = 2LL;
    do
    {
      *v11 = *a3;
      v11[1] = a3[1];
      v11[2] = a3[2];
      v11[3] = a3[3];
      v11[4] = a3[4];
      v11[5] = a3[5];
      v11[6] = a3[6];
      v11 += 8;
      *(v11 - 1) = a3[7];
      a3 += 8;
      --v12;
    }
    while ( v12 );
    ProbeForWrite(a4, 2LL * a5, 2u);
    if ( a5 < 4 )
    {
      v14 = v25;
      v23 = v25;
    }
    else
    {
      v13 = Win32AllocPoolWithQuotaZInit(2LL * a5, 0x62757355u);
      v14 = v13;
      v23 = v13;
      if ( !v13 )
        ExRaiseStatus(-1073741801);
      v22 = 1;
      PushW32ThreadLock(v13, v24, Win32FreePool);
    }
    v15 = xxxToUnicodeEx(a1, a2, (unsigned int)v26, (_DWORD)v14, a5, a6, a7);
    memmove((void *)a4, v14, 2LL * a5);
    if ( v22 )
      PopAndFreeAlwaysW32ThreadLock(v24);
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v15;
}
