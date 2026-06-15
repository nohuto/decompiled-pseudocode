/*
 * XREFs of ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x18001F970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014770 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessTerminatedWorkItem::Invoke(CProcessTerminatedWorkItem *this)
{
  CApplicationManager *v2; // rcx
  volatile signed __int32 *v3; // rbx

  v2 = (CApplicationManager *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Au,
      &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids,
      *(_DWORD *)(*((_QWORD *)this + 1) + 216LL));
  }
  CApplicationManager::ProcessTerminated(v2, *((struct CProcess **)this + 1));
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
}
