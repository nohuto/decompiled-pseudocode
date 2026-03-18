/*
 * XREFs of NtUserMNDragOver @ 0x1C01DCBE0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxMNDragOver @ 0x1C0212C20 (xxxMNDragOver.c)
 */

__int64 __fastcall NtUserMNDragOver(__int64 *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  _OWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  memset(v10, 0, sizeof(v10));
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (__int64 *)W32UserProbeAddress;
  v11 = *a1;
  v6 = xxxMNDragOver(&v11, v10);
  if ( v6 )
  {
    DWORD1(v10[0]) = 0;
    DWORD1(v10[1]) = 0;
    v5 = W32UserProbeAddress;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_OWORD *)W32UserProbeAddress;
    *a2 = v10[0];
    a2[1] = v10[1];
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v6;
}
