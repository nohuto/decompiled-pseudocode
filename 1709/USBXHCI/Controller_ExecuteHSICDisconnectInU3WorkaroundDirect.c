/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C00572F0
 * Callers:
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0055044 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0014E44 (WPP_RECORDER_SF_LL.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_ReadUshort @ 0x1C001F770 (XilRegister_ReadUshort.c)
 */

__int64 __fastcall Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int16 Ulong; // ax
  char v6; // bl
  unsigned __int16 v7; // r9
  __int64 v8; // rcx
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *(_QWORD *)(a1 + 88);
  result = XilRegister_ReadUshort(v2, (unsigned __int16 *)(*(_QWORD *)(v2 + 24) + 33824LL));
  if ( (result & 3) != 0 )
  {
    Ulong = XilRegister_ReadUlong(v2, (unsigned int *)(*(_QWORD *)(v2 + 24) + 1360LL));
    if ( (Ulong & 0x201) == 0x201 && (Ulong & 0x1E0u) < 0x80 )
      v6 = 4;
    else
      v6 = (Ulong & 0x1E0) != 256 ? 0 : 4;
    LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64, int))(a1 + 232))(
                        *(_QWORD *)(a1 + 216),
                        0LL,
                        &v9,
                        162LL,
                        1);
    if ( (_DWORD)result == 1 )
    {
      v8 = *(_QWORD *)(a1 + 216);
      v9 = v6 | v9 & 0xFB;
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, int))(a1 + 224))(v8, 0LL, &v9, 162LL, 1);
      if ( (_DWORD)result == 1 )
        return result;
      v7 = 239;
    }
    else
    {
      v7 = 238;
    }
    return WPP_RECORDER_SF_LL(
             *(_QWORD *)(a1 + 72),
             2u,
             4u,
             v7,
             (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
             1,
             result);
  }
  return result;
}
