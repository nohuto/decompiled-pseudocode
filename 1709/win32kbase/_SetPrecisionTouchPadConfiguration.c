/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C00DF100
 * Callers:
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00EA4E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C008D530 (UpdateTPCurrentActiveState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ApiSetGetDefaultPTPConfiguration @ 0x1C013BF28 (ApiSetGetDefaultPTPConfiguration.c)
 *     ApiSetWritePTPSettingValues @ 0x1C013D558 (ApiSetWritePTPSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(_DWORD *a1)
{
  __int64 DefaultPTPConfiguration; // rax
  _DWORD *v3; // r8
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ebp
  int v7; // ecx
  void (__fastcall ***v8)(_QWORD, __int64); // rsi
  __int64 i; // rdi

  DefaultPTPConfiguration = ApiSetGetDefaultPTPConfiguration();
  v3 = (_DWORD *)DefaultPTPConfiguration;
  if ( !a1 || *a1 )
    return 0LL;
  *(_DWORD *)(DefaultPTPConfiguration + 12) = dword_1C018EC70;
  *(_DWORD *)(DefaultPTPConfiguration + 124) = qword_1C018EC78;
  v4 = a1[2];
  if ( v4 <= 4 )
  {
    v3[3] = v4;
    dword_1C018EC70 = a1[2];
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
    dword_1C018EC74 ^= ((unsigned __int8)dword_1C018EC74 ^ (unsigned __int8)a1[3]) & 8;
    dword_1C018EC74 ^= ((unsigned __int8)dword_1C018EC74 ^ (unsigned __int8)a1[3]) & 4;
    v7 = a1[4];
    if ( (_DWORD)qword_1C018EC78 != v7 && (unsigned int)(v7 - 1) <= 0x13 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))qword_1C01880B0;
      LODWORD(qword_1C018EC78) = a1[4];
      for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 56) )
        (**v8)(v8, i);
    }
    dword_1C018EC74 ^= (dword_1C018EC74 ^ a1[3]) & 0x80;
    dword_1C018EC74 ^= ((unsigned __int16)dword_1C018EC74 ^ (unsigned __int16)a1[3]) & 0x100;
    dword_1C018EC74 ^= ((unsigned __int16)dword_1C018EC74 ^ (unsigned __int16)a1[3]) & 0x200;
    dword_1C018EC74 ^= ((unsigned __int16)dword_1C018EC74 ^ (unsigned __int16)a1[3]) & 0x400;
    HIDWORD(qword_1C018EC78) ^= (BYTE4(qword_1C018EC78) ^ (unsigned __int8)a1[5]) & 1;
    HIDWORD(qword_1C018EC78) ^= (BYTE4(qword_1C018EC78) ^ (unsigned __int8)a1[5]) & 2;
    HIDWORD(qword_1C018EC78) ^= (BYTE4(qword_1C018EC78) ^ (unsigned __int8)a1[5]) & 4;
    HIDWORD(qword_1C018EC78) ^= (BYTE4(qword_1C018EC78) ^ (unsigned __int8)a1[5]) & 0x40;
    HIDWORD(qword_1C018EC78) ^= (HIDWORD(qword_1C018EC78) ^ a1[5]) & 0x80;
  }
  UpdateTPCurrentActiveState();
  return v6;
}
