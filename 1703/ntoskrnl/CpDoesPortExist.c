/*
 * XREFs of CpDoesPortExist @ 0x14026AA78
 * Callers:
 *     InbvPortInitialize @ 0x14026AF34 (InbvPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

bool __fastcall CpDoesPortExist(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdx
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rdx
  bool v7; // bl

  v2 = ((__int64 (__fastcall *)(__int64))READ_UCHAR[0])(a1 + 4 * CpRegisterWidth);
  v3 = CpRegisterWidth;
  v4 = v2;
  LOBYTE(v3) = 16;
  ((void (__fastcall *)(__int64, __int64))WRITE_UCHAR)(a1 + 4 * CpRegisterWidth, v3);
  LOBYTE(v5) = 16;
  ((void (__fastcall *)(__int64, __int64))WRITE_UCHAR)(a1 + 4 * CpRegisterWidth, v5);
  if ( (((__int64 (__fastcall *)(__int64))READ_UCHAR[0])(a1 + 6 * CpRegisterWidth) & 0xF0) != 0 )
  {
    v7 = 0;
  }
  else
  {
    LOBYTE(v6) = 20;
    ((void (__fastcall *)(__int64, __int64))WRITE_UCHAR)(a1 + 4 * CpRegisterWidth, v6);
    v7 = (((__int64 (__fastcall *)(__int64))READ_UCHAR[0])(a1 + 6 * CpRegisterWidth) & 0x40) != 0;
  }
  LOBYTE(v6) = v4;
  ((void (__fastcall *)(__int64, __int64))WRITE_UCHAR)(a1 + 4 * CpRegisterWidth, v6);
  return v7;
}
