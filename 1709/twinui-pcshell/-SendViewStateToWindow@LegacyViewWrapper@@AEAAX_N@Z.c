/*
 * XREFs of ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x18013B128
 * Callers:
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z @ 0x18013ADB0 (-v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z.c)
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18013AEA0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::SendViewStateToWindow(LegacyViewWrapper *this, unsigned __int8 a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 34);
  if ( v3 )
  {
    if ( (~(*((_DWORD *)this + 116) >> 4) & 1) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, unsigned __int64))(**(_QWORD **)(*((_QWORD *)this + 23) + 472LL)
                                                                                           + 24LL))(
        *(_QWORD *)(*((_QWORD *)this + 23) + 472LL),
        v3,
        1LL,
        *((unsigned __int16 *)this + 114) | (unsigned __int64)(*((unsigned __int16 *)this + 116) << 16),
        *((unsigned __int16 *)this + 118) | (unsigned __int64)(a2 << 17));
  }
}
