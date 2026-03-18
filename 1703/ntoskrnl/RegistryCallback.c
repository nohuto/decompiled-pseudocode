/*
 * XREFs of RegistryCallback @ 0x140678E30
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VrpShouldOperateOnCall @ 0x1406793FC (VrpShouldOperateOnCall.c)
 *     VrpDecommissionKeyContext @ 0x140679560 (VrpDecommissionKeyContext.c)
 *     VrpFreeKeyContext @ 0x1406795DC (VrpFreeKeyContext.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14067BEA8 (VrpPostOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x14067C12C (VrpPostQueryKey.c)
 *     VrpPostUnloadKey @ 0x14067C4D8 (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x14067C574 (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14067CD10 (VrpPreOpenOrCreate.c)
 *     VrpPreQueryKeyName @ 0x14067D0F8 (VrpPreQueryKeyName.c)
 *     VrpPreUnloadKey @ 0x14067D3BC (VrpPreUnloadKey.c)
 */

__int64 __fastcall RegistryCallback(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+30h] [rbp-20h] BYREF

  v3 = 0;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (unsigned int)a2 > 0x31 || !(unsigned int)VrpShouldOperateOnCall((unsigned int)a2, a3, &v21, &v20) )
    return v3;
  EtwActivityIdControl(1u, &ActivityId);
  if ( a2 > 29 )
  {
    v14 = a2 - 30;
    if ( !v14 )
      return (unsigned int)VrpPreFlushKey(v6, v20);
    v15 = v14 - 2;
    if ( !v15 )
      return (unsigned int)VrpPreLoadKey(a3, v20);
    v16 = v15 - 2;
    if ( !v16 )
      return (unsigned int)VrpPreUnloadKey(a3, v20);
    v17 = v16 - 1;
    if ( !v17 )
      return (unsigned int)VrpPostUnloadKey(a3, v20);
    v18 = v17 - 5;
    if ( v18 )
    {
      if ( v18 == 7 )
        return (unsigned int)VrpPreQueryKeyName(a3);
    }
    else
    {
      VrpFreeKeyContext(*(_QWORD *)(a3 + 8));
    }
  }
  else
  {
    if ( a2 == 29 )
      return (unsigned int)VrpPostOpenOrCreate(a3, v20);
    v7 = a2 - 7;
    if ( !v7 )
      return v3;
    v8 = v7 - 7;
    if ( !v8 )
    {
      if ( *(_QWORD *)(a3 + 16) )
        VrpDecommissionKeyContext();
      return v3;
    }
    v9 = v8 - 6;
    if ( !v9 )
      return (unsigned int)VrpPostEnumerateKey(a3, v20);
    v10 = v9 - 2;
    if ( !v10 )
      return (unsigned int)VrpPostQueryKey(a3);
    v11 = v10 - 4;
    if ( !v11 )
      return (unsigned int)VrpPreOpenOrCreate(a3, v20);
    v12 = v11 - 1;
    if ( !v12 )
      return (unsigned int)VrpPostOpenOrCreate(a3, v20);
    if ( v12 == 1 )
      return (unsigned int)VrpPreOpenOrCreate(a3, v20);
  }
  return v3;
}
