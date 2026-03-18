/*
 * XREFs of ?IsOpaque@CHwConstantColorSource@@UEBA_NXZ @ 0x1801A24F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwConstantColorSource::IsOpaque(CHwConstantColorSource *this)
{
  _BYTE v2[12]; // [rsp+20h] [rbp-28h] BYREF
  float v3; // [rsp+2Ch] [rbp-1Ch]

  (*(void (__fastcall **)(CHwConstantColorSource *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v2);
  return v3 >= 1.0;
}
