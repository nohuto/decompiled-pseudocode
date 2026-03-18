/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x180060B90
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005D88C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x1800467F0 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTarget(CHwndRenderTarget *this, unsigned int a2)
{
  char *v2; // rbx
  __int64 v4; // rax
  CHwDisplayRenderTarget *v5; // rcx
  __int64 (__fastcall *v6)(CHwDisplayRenderTarget *, unsigned int, bool); // rax
  int refreshed; // eax
  int v8; // ebx
  unsigned int v10; // eax

  v2 = (char *)this - 64;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 216LL))((char *)this - 64)
    || (v4 = *((_QWORD *)v2 + 21), !*(_BYTE *)(v4 + 324))
    || !*(_BYTE *)(v4 + 325)
    || (v5 = (CHwDisplayRenderTarget *)*((_QWORD *)v2 + 22)) == 0LL )
  {
    v8 = -2003304307;
    v10 = 1597;
    goto LABEL_12;
  }
  v6 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, unsigned int, bool))(*(_QWORD *)v5 + 352LL);
  if ( v6 == CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget )
    refreshed = CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(v5, a2, 0);
  else
    refreshed = v6(v5, a2, 0);
  v8 = refreshed;
  if ( refreshed < 0 )
  {
    v10 = 1593;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v8, v10);
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v8, 0x64Eu);
  }
  return (unsigned int)v8;
}
