/*
 * XREFs of ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180069C00
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18003AB6C (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 *     ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x180069EBC (-OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::OnDeviceRemoval(KeyboardProcessor *this, struct DeviceInfo *a2)
{
  int updated; // ecx
  int v4; // eax
  char v5; // dl

  updated = 0;
  v4 = *((_DWORD *)this + 14);
  if ( (v4 & 1) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), 1, 0);
    if ( updated < 0 )
      goto LABEL_25;
    *((_DWORD *)this + 14) &= ~1u;
    v4 = *((_DWORD *)this + 14);
  }
  if ( (v4 & 2) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), 2, 0);
    if ( updated < 0 )
      goto LABEL_25;
    *((_DWORD *)this + 14) &= ~2u;
    v4 = *((_DWORD *)this + 14);
  }
  if ( (v4 & 4) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), 4, 0);
    if ( updated < 0 )
      goto LABEL_25;
    *((_DWORD *)this + 14) &= ~4u;
    v4 = *((_DWORD *)this + 14);
  }
  if ( (v4 & 8) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), 8, 0);
    if ( updated < 0 )
      goto LABEL_25;
    *((_DWORD *)this + 14) &= ~8u;
    v4 = *((_DWORD *)this + 14);
  }
  if ( (v4 & 0x10) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), 16, 0);
    if ( updated < 0 )
      goto LABEL_25;
    *((_DWORD *)this + 14) &= ~0x10u;
    v4 = *((_DWORD *)this + 14);
  }
  if ( (v4 & 0x20) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), 32, 0);
    if ( updated < 0 )
      goto LABEL_25;
    *((_DWORD *)this + 14) &= ~0x20u;
    v4 = *((_DWORD *)this + 14);
  }
  if ( (v4 & 0x40) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), 64, 0);
    if ( updated < 0 )
      goto LABEL_25;
    *((_DWORD *)this + 14) &= ~0x40u;
    v4 = *((_DWORD *)this + 14);
  }
  v5 = 0x80;
  if ( (v4 & 0x80u) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_DWORD **)this + 6), 128, 0);
    if ( updated >= 0 )
      *((_DWORD *)this + 14) &= ~0x80u;
  }
LABEL_25:
  if ( updated >= 0 )
  {
    KeyboardProcessorTelemetry::OnKeyPress((KeyboardProcessor *)((char *)this + 40), v5);
    return 0;
  }
  return (unsigned int)updated;
}
