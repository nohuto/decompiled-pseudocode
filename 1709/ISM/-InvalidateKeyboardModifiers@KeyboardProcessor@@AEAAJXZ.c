/*
 * XREFs of ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x180049244
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180049430 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x180048EA8 (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::InvalidateKeyboardModifiers(KeyboardProcessor *this)
{
  unsigned int v1; // edi
  int updated; // eax
  __int64 v4; // rcx
  int v5; // r9d

  v1 = 0;
  if ( (*((_BYTE *)this + 64) & 1) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 7), 1, 0);
    v1 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 88;
LABEL_5:
        McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, v5, updated);
        return v1;
      }
      return v1;
    }
    *((_DWORD *)this + 16) &= ~1u;
  }
  if ( (*((_BYTE *)this + 64) & 2) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 7), 2, 0);
    v1 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v1;
      v5 = 96;
      goto LABEL_5;
    }
    *((_DWORD *)this + 16) &= ~2u;
  }
  if ( (*((_BYTE *)this + 64) & 4) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 7), 4, 0);
    v1 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v1;
      v5 = 104;
      goto LABEL_5;
    }
    *((_DWORD *)this + 16) &= ~4u;
  }
  if ( (*((_BYTE *)this + 64) & 8) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 7), 8, 0);
    v1 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v1;
      v5 = 112;
      goto LABEL_5;
    }
    *((_DWORD *)this + 16) &= ~8u;
  }
  if ( (*((_BYTE *)this + 64) & 0x10) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 7), 16, 0);
    v1 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v1;
      v5 = 120;
      goto LABEL_5;
    }
    *((_DWORD *)this + 16) &= ~0x10u;
  }
  if ( (*((_BYTE *)this + 64) & 0x20) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 7), 32, 0);
    v1 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v1;
      v5 = 128;
      goto LABEL_5;
    }
    *((_DWORD *)this + 16) &= ~0x20u;
  }
  if ( (*((_BYTE *)this + 64) & 0x40) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 7), 64, 0);
    v1 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v1;
      v5 = 136;
      goto LABEL_5;
    }
    *((_DWORD *)this + 16) &= ~0x40u;
  }
  if ( *((char *)this + 64) < 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 7), 128, 0);
    v1 = updated;
    if ( updated >= 0 )
    {
      *((_DWORD *)this + 16) &= ~0x80u;
      return v1;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 144;
      goto LABEL_5;
    }
  }
  return v1;
}
