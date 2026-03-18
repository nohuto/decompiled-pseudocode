/*
 * XREFs of ?SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAPEAX0@Z @ 0x1C01BEA0C
 * Callers:
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAPEAX0@Z @ 0x1C01E80C0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAPEAX0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendCreateCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        void **a2,
        void **a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v17[2]; // [rsp+48h] [rbp-28h] BYREF

  v16[0] = 0xC0000001706D6F63uLL;
  v16[1] = 1LL;
  memset(v17, 0, sizeof(v17));
  v5 = *((_QWORD *)this + 1);
  *(_QWORD *)&v17[0] = 0xC0000001706D6F63uLL;
  DWORD2(v17[0]) = 2;
  v17[1] = 0LL;
  v15 = 32;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, _OWORD *, unsigned int *))(*(_QWORD *)v5 + 32LL))(
         v5,
         v16,
         16LL,
         v17,
         &v15);
  v10 = v6;
  if ( v6 < 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdWarning(v11);
    return (unsigned int)v10;
  }
  if ( v15 != 32 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v13 = v15;
LABEL_5:
    *(_QWORD *)(v12 + 24) = v13;
    *(_QWORD *)(v12 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v12);
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  if ( DWORD2(v17[0]) != 2 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v13 = SDWORD2(v17[0]);
    goto LABEL_5;
  }
  LODWORD(v10) = DWORD1(v17[0]);
  if ( (SDWORD1(v17[0]) & 0x80000000) == 0 )
    *(_OWORD *)a2 = v17[1];
  return (unsigned int)v10;
}
