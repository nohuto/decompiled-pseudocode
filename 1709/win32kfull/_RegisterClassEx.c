/*
 * XREFs of _RegisterClassEx @ 0x1C0075704
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C0074FD0 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     InternalRegisterClassEx @ 0x1C0073DB8 (InternalRegisterClassEx.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, unsigned __int16 a3, unsigned int a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax

  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    v11 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), 7);
    if ( v11 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 16LL);
  }
  v8 = InternalRegisterClassEx(a1, a3, a4);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v8[6] = a2[1];
  v8[5] = *a2;
  result = *((unsigned __int16 *)v8 + 5);
  *((_WORD *)v9 + 16) = 0;
  return result;
}
