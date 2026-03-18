/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0054268
 * Callers:
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00541C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_ReadUshort @ 0x1C00197AC (XilRegister_ReadUshort.c)
 */

__int64 __fastcall Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int Ulong; // eax
  unsigned int v6; // ecx
  char v7; // bl
  unsigned __int16 v8; // r9
  __int64 v9; // rcx
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *(_QWORD *)(a1 + 88);
  result = XilRegister_ReadUshort(v2, (unsigned __int16 *)(*(_QWORD *)(v2 + 24) + 33824LL));
  if ( (result & 3) != 0 )
  {
    Ulong = XilRegister_ReadUlong(v2, (unsigned int *)(*(_QWORD *)(v2 + 24) + 1360LL));
    v6 = Ulong >> 5;
    if ( (Ulong & 0x201) == 0x201 && (v6 & 0xF) < 4 )
      v7 = 4;
    else
      v7 = (v6 & 0xF) != 8 ? 0 : 4;
    LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64, int))(a1 + 232))(
                        *(_QWORD *)(a1 + 216),
                        0LL,
                        &v10,
                        162LL,
                        1);
    if ( (_DWORD)result == 1 )
    {
      v9 = *(_QWORD *)(a1 + 216);
      v10 = v7 | v10 & 0xFB;
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, int))(a1 + 224))(v9, 0LL, &v10, 162LL, 1);
      if ( (_DWORD)result == 1 )
        return result;
      v8 = 241;
    }
    else
    {
      v8 = 240;
    }
    return WPP_RECORDER_SF_dd(
             *(_QWORD *)(a1 + 72),
             2u,
             4u,
             v8,
             (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
             1,
             result);
  }
  return result;
}
