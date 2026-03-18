/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C00F8900
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rax
  _OWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  if ( a1 )
  {
    v8 = 0LL;
    v9 = *(_QWORD *)(v4 + 392);
    if ( !v9 )
    {
LABEL_19:
      UserSetLastError(6LL);
      goto LABEL_14;
    }
    v10 = v9;
    do
    {
      if ( *(_QWORD *)(v10 + 40) == a1 )
      {
        if ( *(int *)(v10 + 32) >= 0 )
          goto LABEL_6;
        v8 = v10;
      }
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 != v9 );
    v10 = v8;
  }
  else
  {
    v10 = *(_QWORD *)(v4 + 392);
  }
LABEL_6:
  if ( !v10 )
    goto LABEL_19;
  v11 = W32UserProbeAddress;
  v12 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v12 = (_DWORD *)W32UserProbeAddress;
  if ( *v12 == 32 )
  {
    *(_QWORD *)&v14[0] = 32LL;
    *((_QWORD *)&v14[0] + 1) = *(_QWORD *)(v10 + 40);
    LODWORD(v14[1]) = *(_DWORD *)(v10 + 112);
    DWORD1(v14[1]) = *(unsigned __int16 *)(v10 + 72);
    *((_QWORD *)&v14[1] + 1) = *(_QWORD *)(v10 + 64);
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_OWORD *)W32UserProbeAddress;
    *a2 = v14[0];
    a2[1] = v14[1];
    v7 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v11, v10, v5, v6);
  return v7;
}
