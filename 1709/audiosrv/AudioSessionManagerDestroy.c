/*
 * XREFs of AudioSessionManagerDestroy @ 0x18007AD50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x18005B6CC (--_GCAudioSessionManagerProxy@@QEAAPEAXI@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerDestroy(CAudioSessionManagerProxy **a1)
{
  CAudioSessionManagerProxy *v1; // rbx
  CAudioDGProcess *v3; // rcx

  v1 = *a1;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        61LL,
        &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
        *(_QWORD *)v1);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v3 + 28) & 0x40) != 0 && *((_BYTE *)v3 + 25) >= 4u )
      WPP_SF_q(*((_QWORD *)v3 + 2), 62LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, *(_QWORD *)v1);
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 16LL))(*(_QWORD *)v1);
  CAudioSessionManagerProxy::`scalar deleting destructor'(v1);
  *a1 = 0LL;
  return 0LL;
}
