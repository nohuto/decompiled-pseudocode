/*
 * XREFs of ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x180110E78
 * Callers:
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z @ 0x180110B00 (-v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z.c)
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180110BF0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::SendViewStateToWindow(LegacyViewWrapper *this, char a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    if ( (~(*((_DWORD *)this + 110) >> 4) & 1) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, unsigned __int64))(**(_QWORD **)(*((_QWORD *)this + 20) + 400LL)
                                                                                           + 24LL))(
        *(_QWORD *)(*((_QWORD *)this + 20) + 400LL),
        v3,
        1LL,
        *((unsigned __int16 *)this + 102) | ((unsigned __int64)*((unsigned __int16 *)this + 104) << 16),
        *((unsigned __int16 *)this + 106) | ((unsigned __int64)(a2 != 0 ? 2 : 0) << 16));
  }
}
