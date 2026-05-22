/*
 * XREFs of ?UpdateScale@MagnifierComponent@@QEAAJM@Z @ 0x1800A5D68
 * Callers:
 *     ?OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800A6640 (-OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetScaleAndPosition@MagnifierComponent@@AEAAXMUtagPOINT@@@Z @ 0x1800A5DD8 (-SetScaleAndPosition@MagnifierComponent@@AEAAXMUtagPOINT@@@Z.c)
 *     ?UpdateMagnifier@MagnifierComponent@@AEAAJXZ @ 0x1800A5E64 (-UpdateMagnifier@MagnifierComponent@@AEAAJXZ.c)
 */

__int64 __fastcall MagnifierComponent::UpdateScale(struct tagPOINT *this, float a2)
{
  unsigned int v2; // ebx
  MagnifierComponent *v3; // rcx
  int updated; // eax
  __int64 v5; // rcx

  v2 = 0;
  if ( LOBYTE(this[7].x) )
  {
    if ( a2 != *(float *)&this[5].x )
    {
      MagnifierComponent::SetScaleAndPosition((MagnifierComponent *)this, a2, this[4]);
      updated = MagnifierComponent::UpdateMagnifier(v3);
      v2 = updated;
      if ( updated < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 393, updated);
    }
  }
  else
  {
    v2 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 386, 255);
  }
  return v2;
}
