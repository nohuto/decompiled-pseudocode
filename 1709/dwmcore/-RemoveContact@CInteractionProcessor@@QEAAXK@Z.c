/*
 * XREFs of ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x18019CF84
 * Callers:
 *     ?RemoveContact@CInteraction@@UEAAXK@Z @ 0x180169D20 (-RemoveContact@CInteraction@@UEAAXK@Z.c)
 *     ?RemoveContact@CInteractionRoot@@UEAAXK@Z @ 0x1801A2A20 (-RemoveContact@CInteractionRoot@@UEAAXK@Z.c)
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x1800921C4 (_anonymous_namespace_--ConvertToInputType.c)
 */

void __fastcall CInteractionProcessor::RemoveContact(CInteractionProcessor *this, int a2)
{
  int v2; // eax
  _BYTE *v3; // r8
  int v4; // eax

  v2 = anonymous_namespace_::ConvertToInputType(a2) - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        v3[468] |= 4u;
    }
    else
    {
      v3[308] |= 4u;
    }
  }
  else
  {
    v3[148] |= 4u;
  }
}
