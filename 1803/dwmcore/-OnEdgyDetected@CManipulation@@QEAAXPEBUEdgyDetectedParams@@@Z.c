/*
 * XREFs of ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x180199404
 * Callers:
 *     ?s_OnReceiveInputThreadMessage@CInputManager@@CAJPEAXPEBXH@Z @ 0x1801CDE60 (-s_OnReceiveInputThreadMessage@CInputManager@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18002BCD4 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

void __fastcall CManipulation::OnEdgyDetected(CManipulation *this, const struct EdgyDetectedParams *a2)
{
  __int64 v2; // rcx
  __int128 *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // rax
  _QWORD v8[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v9; // [rsp+50h] [rbp-48h]
  __int128 v10; // [rsp+60h] [rbp-38h]
  __int128 v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+80h] [rbp-18h]

  if ( CNotificationResource::ShouldNotify(this) )
  {
    v5 = *(_QWORD *)(v2 + 48);
    v6 = v3[1];
    v9 = *v3;
    v10 = v6;
    v12 = *((_QWORD *)v3 + 6);
    v11 = v3[2];
    if ( v5 )
      v7 = *(unsigned int *)(v5 + 68);
    else
      v7 = 0LL;
    v8[0] = v7;
    v8[1] = *(unsigned int *)(v2 + 56);
    CoreUICallSend(v4, v8, 2LL, 11LL, 0, &unk_180239CDB);
  }
}
