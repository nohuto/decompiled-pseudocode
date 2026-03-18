/*
 * XREFs of ?SendUnbindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAX@Z @ 0x1C01BF228
 * Callers:
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAX@Z @ 0x1C01E8788 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendUnbindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        void *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  _QWORD v15[3]; // [rsp+48h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 1);
  v15[2] = a2;
  v15[0] = 0xC0000001706D6F63uLL;
  v13 = 0xC0000001706D6F63uLL;
  v15[1] = 7LL;
  v14 = 8LL;
  v12 = 16;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, unsigned __int64 *, unsigned int *))(*(_QWORD *)v2 + 32LL))(
         v2,
         v15,
         24LL,
         &v13,
         &v12);
  v7 = v3;
  if ( v3 >= 0 )
  {
    if ( v12 == 16 )
    {
      if ( (_DWORD)v14 == 8 )
      {
        LODWORD(v7) = HIDWORD(v13);
        return (unsigned int)v7;
      }
      v9 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      v10 = (int)v14;
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      v10 = v12;
    }
    *(_QWORD *)(v9 + 24) = v10;
    *(_QWORD *)(v9 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v9);
    LODWORD(v7) = -1073741823;
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
  }
  return (unsigned int)v7;
}
