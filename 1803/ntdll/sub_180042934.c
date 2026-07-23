/*
 * XREFs of sub_180042934 @ 0x180042934
 * Callers:
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 * Callees:
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180042934(__int64 a1, _UNICODE_STRING *a2, _UNICODE_STRING *a3, _UNICODE_STRING *a4, int a5)
{
  unsigned int v9; // ebx
  _UNICODE_STRING *v11; // r8
  PWCH Buffer; // rax
  _BYTE v13[8]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v14[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( byte_18015CFB4 || byte_18015CFBC )
  {
    v9 = a5;
    v11 = a2;
    v13[0] = 0;
    if ( a5 < 0 )
      v11 = (_UNICODE_STRING *)a1;
    ((void (__fastcall *)(unsigned __int16 *, _BYTE *, _UNICODE_STRING *))(__ROR8__(
                                                                             qword_18016F240,
                                                                             64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
      v14,
      v13,
      v11);
    if ( v13[0] )
    {
      *(_DWORD *)(a1 + 32) |= 0x10000u;
      sub_180042420((__int64)a2);
      Buffer = a4->Buffer;
      a4->Length = 0;
      *Buffer = 0;
      return (unsigned int)sub_18003FCF8(v14, a4, a3, a2, *(_DWORD *)(a1 + 32));
    }
  }
  else
  {
    return (unsigned int)a5;
  }
  return v9;
}
