/*
 * XREFs of ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x1801E26B4
 * Callers:
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1801E2850 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z @ 0x1801E2A70 (-v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::SendViewStateToWindow(LegacyViewWrapper *this, char a2)
{
  if ( *((_QWORD *)this + 34) )
  {
    if ( (*((_BYTE *)this + 464) & 0x10) == 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64))(**(_QWORD **)(*((_QWORD *)this + 22) + 472LL)
                                                                                          + 24LL))(
        *(_QWORD *)(*((_QWORD *)this + 22) + 472LL),
        *((_QWORD *)this + 34),
        1LL,
        *((unsigned __int16 *)this + 114) | (unsigned __int64)(*((unsigned __int16 *)this + 116) << 16),
        *((unsigned __int16 *)this + 118) | (unsigned __int64)((a2 != 0 ? 2 : 0) << 16));
  }
}
