/*
 * XREFs of ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x18001FDD0
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CD3DDeviceLevel1@@WBNI@EAAKXZ @ 0x1800C67E0 (-Release@CD3DDeviceLevel1@@WBNI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Release(CD3DDeviceLevel1 *this)
{
  char *v1; // r8
  unsigned __int32 v2; // ebx
  void (__fastcall ***v4)(_QWORD, char *); // rcx

  v1 = (char *)this + 472;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 120);
  if ( !v2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 61);
    if ( v4 )
      (**v4)(v4, v1);
    else
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  }
  return v2;
}
