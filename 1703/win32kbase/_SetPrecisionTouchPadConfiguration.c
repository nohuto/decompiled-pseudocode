/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C00D8DC0
 * Callers:
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00E4560 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C007D4E0 (UpdateTPCurrentActiveState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ApiSetGetDefaultPTPConfiguration @ 0x1C013CC6C (ApiSetGetDefaultPTPConfiguration.c)
 *     ApiSetWritePTPSettingValues @ 0x1C013E12C (ApiSetWritePTPSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(_DWORD *a1)
{
  __int64 DefaultPTPConfiguration; // rax
  _DWORD *v3; // r8
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ebp
  int v7; // edx
  int v8; // ecx
  void (__fastcall ***v9)(_QWORD, __int64); // rsi
  __int64 v10; // rdi

  DefaultPTPConfiguration = ApiSetGetDefaultPTPConfiguration();
  v3 = (_DWORD *)DefaultPTPConfiguration;
  if ( !a1 || *a1 )
    return 0LL;
  *(_DWORD *)(DefaultPTPConfiguration + 12) = dword_1C018A100;
  *(_DWORD *)(DefaultPTPConfiguration + 124) = qword_1C018A108;
  v4 = a1[2];
  if ( v4 <= 4 )
  {
    v3[3] = v4;
    dword_1C018A100 = a1[2];
  }
  v5 = v3[31];
  if ( (unsigned int)(a1[4] - 1) <= 0x13 )
    v5 = a1[4];
  v3[31] = v5;
  v3[7] = -__CFSHR__(a1[3], 3);
  v3[11] = -__CFSHR__(a1[3], 4);
  v3[15] = -__CFSHR__(a1[3], 8);
  v3[19] = -__CFSHR__(a1[3], 9);
  v3[23] = -__CFSHR__(a1[3], 10);
  v3[27] = -__CFSHR__(a1[3], 11);
  v3[35] = -(a1[5] & 1);
  v3[39] = -__CFSHR__(a1[5], 2);
  v3[43] = -__CFSHR__(a1[5], 3);
  v3[47] = -__CFSHR__(a1[5], 7);
  v3[51] = -__CFSHR__(a1[5], 8);
  v6 = ApiSetWritePTPSettingValues(v3);
  if ( v6 )
  {
    dword_1C018A104 ^= ((unsigned __int8)dword_1C018A104 ^ (unsigned __int8)a1[3]) & 8;
    v7 = ((unsigned __int8)dword_1C018A104 ^ (unsigned __int8)a1[3]) & 4 ^ dword_1C018A104;
    dword_1C018A104 = v7;
    v8 = a1[4];
    if ( (_DWORD)qword_1C018A108 != v8 && (unsigned int)(v8 - 1) <= 0x13 )
    {
      v9 = (void (__fastcall ***)(_QWORD, __int64))qword_1C01860B0;
      LODWORD(qword_1C018A108) = a1[4];
      v10 = *((_QWORD *)gpDispInfo + 12);
      if ( v10 )
      {
        do
        {
          (**v9)(v9, v10);
          v10 = *(_QWORD *)(v10 + 56);
        }
        while ( v10 );
        v7 = dword_1C018A104;
      }
    }
    dword_1C018A104 = (v7 ^ a1[3]) & 0x80 ^ v7;
    dword_1C018A104 ^= ((unsigned __int16)dword_1C018A104 ^ (unsigned __int16)a1[3]) & 0x100;
    dword_1C018A104 ^= ((unsigned __int16)dword_1C018A104 ^ (unsigned __int16)a1[3]) & 0x200;
    dword_1C018A104 ^= ((unsigned __int16)dword_1C018A104 ^ (unsigned __int16)a1[3]) & 0x400;
    HIDWORD(qword_1C018A108) ^= (BYTE4(qword_1C018A108) ^ (unsigned __int8)a1[5]) & 1;
    HIDWORD(qword_1C018A108) ^= (BYTE4(qword_1C018A108) ^ (unsigned __int8)a1[5]) & 2;
    HIDWORD(qword_1C018A108) ^= (BYTE4(qword_1C018A108) ^ (unsigned __int8)a1[5]) & 4;
    HIDWORD(qword_1C018A108) ^= (BYTE4(qword_1C018A108) ^ (unsigned __int8)a1[5]) & 0x40;
    HIDWORD(qword_1C018A108) ^= (HIDWORD(qword_1C018A108) ^ a1[5]) & 0x80;
  }
  UpdateTPCurrentActiveState();
  return v6;
}
