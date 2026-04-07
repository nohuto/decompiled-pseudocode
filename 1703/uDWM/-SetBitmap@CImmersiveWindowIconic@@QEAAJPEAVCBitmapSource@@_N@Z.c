/*
 * XREFs of ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x18007CB50
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007C6F0 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x18007CA70 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::SetBitmap(CImmersiveWindowIconic *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v4 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 37) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = CImmersiveWindowIconic::OnIconUpdated(this, 0);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xDAu);
  return v6;
}
