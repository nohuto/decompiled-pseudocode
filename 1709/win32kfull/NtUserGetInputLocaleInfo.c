/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C0104F30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rax
  ULONG64 v10; // rcx
  _OWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = EnterSharedCrit(0LL, 1LL);
  v6 = 0;
  if ( a1 )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)(v4 + 416);
    if ( !v8 )
    {
LABEL_19:
      UserSetLastError(6LL, v5);
      goto LABEL_14;
    }
    v5 = v8;
    do
    {
      if ( *(_QWORD *)(v5 + 40) == a1 )
      {
        if ( *(int *)(v5 + 32) >= 0 )
          goto LABEL_6;
        v7 = v5;
      }
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 != v8 );
    v5 = v7;
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 416);
  }
LABEL_6:
  if ( !v5 )
    goto LABEL_19;
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  if ( *v9 == 32 )
  {
    *(_QWORD *)&v12[0] = 32LL;
    *((_QWORD *)&v12[0] + 1) = *(_QWORD *)(v5 + 40);
    LODWORD(v12[1]) = *(_DWORD *)(v5 + 112);
    DWORD1(v12[1]) = *(unsigned __int16 *)(v5 + 72);
    *((_QWORD *)&v12[1] + 1) = *(_QWORD *)(v5 + 64);
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v12[0];
    a2[1] = v12[1];
    v6 = 1;
  }
  else
  {
    UserSetLastError(87LL, v5);
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v10, v5);
  return v6;
}
