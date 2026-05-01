/*
 * XREFs of ?PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@@Z @ 0x180060CFC
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180054140 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18005745C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800642E0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

void __fastcall CReportWindowVisibilityChange::PushForcedGlobalReportingState(__int64 a1, int a2)
{
  __int64 v2; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r9
  int v7; // r8d
  unsigned __int128 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // rdi
  _DWORD *v11; // rdx
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v2 != v4 )
    goto LABEL_17;
  v6 = v2 + 1;
  if ( v6 > 0xFFFFFFFE )
    return;
  if ( v6 <= v4 )
    goto LABEL_17;
  v7 = -2147024362;
  v8 = v4 * (unsigned __int128)2uLL;
  v9 = 2 * v4;
  if ( !is_mul_ok(v4, 2uLL) )
  {
    v9 = -1LL;
    DWORD2(v8) = -2147024362;
  }
  if ( (SDWORD2(v8) & 0x80000000) == 0 )
  {
    v10 = v4 + 4096;
    if ( v9 - v4 <= 0x1000 )
      v10 = v9;
    if ( v6 > v10 )
      v10 = v6;
    if ( v10 > 0xFFFFFFFE )
      v10 = 4294967294LL;
    v12 = 0LL;
    if ( is_mul_ok(v10, 4uLL) )
    {
      v7 = CTCoAllocPolicy::Realloc((IMalloc *)&v12, (v10 * (unsigned __int128)4uLL) >> 64, *(void **)a1, 4 * v10, &v12);
      if ( v7 < 0 )
        return;
      *(_QWORD *)a1 = v12;
      *(_QWORD *)(a1 + 24) = v10;
    }
    if ( v7 >= 0 )
    {
LABEL_17:
      v11 = (_DWORD *)(*(_QWORD *)a1 + 4 * (*(_QWORD *)(a1 + 8))++);
      if ( v11 )
        *v11 = a2;
    }
  }
}
