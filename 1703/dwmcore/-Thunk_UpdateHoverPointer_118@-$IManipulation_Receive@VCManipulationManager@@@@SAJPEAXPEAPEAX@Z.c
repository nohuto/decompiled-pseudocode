/*
 * XREFs of ?Thunk_UpdateHoverPointer_118@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18018B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateHoverPointer_118(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx

  v2 = a2[1];
  v3 = **a2;
  if ( *(float *)(v3 + 72) != *(float *)v2 || *(float *)(v3 + 76) != *((float *)v2 + 1) )
  {
    *(_QWORD *)(v3 + 72) = *v2;
    CResource::NotifyOnChanged((_DWORD *)(v3 + 8), 0LL, 0LL);
  }
  CResource::InvalidateAnimationSources((CResource *)(v3 + 8), 0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 16LL))(v3 + 8);
  return 0LL;
}
