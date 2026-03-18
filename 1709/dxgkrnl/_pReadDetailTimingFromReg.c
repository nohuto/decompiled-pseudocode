/*
 * XREFs of _pReadDetailTimingFromReg @ 0x1C02012F4
 * Callers:
 *     _pLoadAdditinalMode @ 0x1C0200EA0 (_pLoadAdditinalMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

__int64 __fastcall pReadDetailTimingFromReg(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _DWORD *v19; // rbx
  __int64 v20; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+3Ch] [rbp-4Ch]
  int v25; // [rsp+40h] [rbp-48h]
  unsigned int v26; // [rsp+44h] [rbp-44h]

  v4 = 0;
  v5 = a3;
  v6 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    v10 = ZwQueryValueKey(
            KeyHandle,
            (PUNICODE_STRING)&unk_1C003B7D0 + v4,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    v14 = v10;
    if ( v10 < 0 )
      break;
    if ( v24 != 4 || v25 != 4 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v17[3] = v7;
      v17[4] = v5;
      v17[5] = v4;
      v17[6] = v14;
LABEL_45:
      WdLogEvent5_WdWarning(v17);
      LODWORD(v14) = -1073741811;
      return (unsigned int)v14;
    }
    v15 = v26;
    if ( v4 )
    {
      *(_DWORD *)(v6 + a4 + 4) = v26;
    }
    else
    {
      v12 = HIBYTE(v26);
      *(_DWORD *)a4 = v12;
      *(_DWORD *)(a4 + 4) = v15 & 0xFFFFFF;
      if ( (_DWORD)v12 != 255
        && (_DWORD)v12 != 1
        && (_DWORD)v12 != 2
        && (_DWORD)v12 != 3
        && (_DWORD)v12 != 4
        && (_DWORD)v12 != 5
        && (_DWORD)v12 != 6
        && (_DWORD)v12 != 7
        && (_DWORD)v12 != 8
        && (_DWORD)v12 != 9
        && (_DWORD)v12 != 10
        && (_DWORD)v12 != 11
        && (_DWORD)v12 != 12
        && (_DWORD)v12 != 13
        && (_DWORD)v12 != 14
        && (_DWORD)v12 != 15
        && (_DWORD)v12 != 16
        && (_DWORD)v12 != 17
        && (_DWORD)v12 != 18
        && (_DWORD)v12 != 19
        && (_DWORD)v12 != 20
        && (_DWORD)v12 != 21
        && (_DWORD)v12 != 22
        && (_DWORD)v12 != 23
        && (_DWORD)v12 != 24
        && (_DWORD)v12 != 25
        && (_DWORD)v12 != 26
        && (_DWORD)v12 != 27 )
      {
        LODWORD(v14) = -1071774942;
        v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v16 + 24) = v5;
        *(_QWORD *)(v16 + 32) = v7;
        WdLogEvent5_WdWarning(v16);
        return (unsigned int)v14;
      }
      LODWORD(v14) = 0;
    }
    ++v4;
    v6 += 4LL;
    if ( v4 >= 6 )
      goto LABEL_41;
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
  v18[5] = v4;
  v18[3] = v7;
  v18[4] = v5;
  v18[6] = v14;
  WdLogEvent5_WdWarning(v18);
LABEL_41:
  if ( (int)v14 < 0 )
    return (unsigned int)v14;
  v19 = (_DWORD *)(a4 + 8);
  if ( (*(_DWORD *)(a4 + 8) & 0xFFFFFF) == 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v20 = *v19 & 0xFFFFFF;
LABEL_44:
    v17[3] = v20;
    v17[4] = v19;
    goto LABEL_45;
  }
  if ( *(_WORD *)(a4 + 12) < 0x64u )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v20 = *(unsigned __int16 *)(a4 + 12);
    goto LABEL_44;
  }
  if ( *(_WORD *)(a4 + 20) < 0x64u )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v20 = *(unsigned __int16 *)(a4 + 20);
    goto LABEL_44;
  }
  LODWORD(v14) = 0;
  return (unsigned int)v14;
}
