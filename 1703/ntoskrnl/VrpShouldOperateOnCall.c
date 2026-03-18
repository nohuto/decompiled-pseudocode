/*
 * XREFs of VrpShouldOperateOnCall @ 0x1406793FC
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 * Callees:
 *     VrpGetContextsForNotifyInfo @ 0x140679188 (VrpGetContextsForNotifyInfo.c)
 *     VRegEnabledInJob @ 0x14067948C (VRegEnabledInJob.c)
 */

__int64 __fastcall VrpShouldOperateOnCall(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  _QWORD v14[2]; // [rsp+28h] [rbp-10h] BYREF

  VrpGetContextsForNotifyInfo(a1, a2, &v13, v14);
  v7 = v13;
  if ( v13 )
  {
    *a3 = v13;
    v8 = *(_QWORD *)(v7 + 40);
LABEL_3:
    v9 = 1;
    *a4 = v8;
    return v9;
  }
  v10 = v14[0];
  if ( v14[0] )
  {
    *a3 = 0LL;
    v8 = *(_QWORD *)(v10 + 8);
    goto LABEL_3;
  }
  if ( v6 == 32 && (v9 = VRegEnabledInJob(v14)) != 0 )
  {
    v11 = v14[0];
    *a3 = 0LL;
    *a4 = v11;
  }
  else
  {
    v9 = 0;
    *a3 = 0LL;
    *a4 = 0LL;
  }
  return v9;
}
