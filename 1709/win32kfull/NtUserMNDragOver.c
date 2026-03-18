/*
 * XREFs of NtUserMNDragOver @ 0x1C01E8DC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxMNDragOver @ 0x1C0214184 (xxxMNDragOver.c)
 */

__int64 __fastcall NtUserMNDragOver(__int64 *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  int v6; // ebx
  _OWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  memset(v8, 0, sizeof(v8));
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v9 = *a1;
  v6 = xxxMNDragOver(&v9, v8);
  if ( v6 )
  {
    DWORD1(v8[0]) = 0;
    DWORD1(v8[1]) = 0;
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v8[0];
    a2[1] = v8[1];
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
