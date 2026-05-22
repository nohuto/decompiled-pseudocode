/*
 * XREFs of ?_Tidy@?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180090A30
 * Callers:
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x180090304 (--1InputConfigContextProvider@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::_Tidy(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) / 24;
    if ( v3 <= 0xAAAAAAAAAAAAAAALL )
    {
      if ( 24 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2, v3);
    JUMPOUT(0x180090ABFLL);
  }
}
