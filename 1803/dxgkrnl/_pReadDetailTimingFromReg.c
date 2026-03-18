/*
 * XREFs of _pReadDetailTimingFromReg @ 0x1C0234E68
 * Callers:
 *     _pLoadAdditinalMode @ 0x1C0234914 (_pLoadAdditinalMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall pReadDetailTimingFromReg(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  unsigned int *v7; // rsi
  unsigned int v9; // edi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-60h] BYREF
  int v23; // [rsp+3Ch] [rbp-5Ch]
  int v24; // [rsp+40h] [rbp-58h]
  unsigned int v25; // [rsp+44h] [rbp-54h]

  v5 = a3;
  v6 = a2;
  v7 = (unsigned int *)(a4 + 4);
  v9 = 0;
  while ( 1 )
  {
    v10 = ZwQueryValueKey(
            KeyHandle,
            (PUNICODE_STRING)&unk_1C0055E30 + v9,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    v14 = v10;
    if ( v10 < 0 )
      break;
    if ( v23 != 4 || v24 != 4 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v16[3] = v6;
      v16[4] = v5;
      v16[5] = v9;
      v16[6] = v14;
LABEL_19:
      WdLogEvent5_WdWarning(v16);
      LODWORD(v14) = -1073741811;
      return (unsigned int)v14;
    }
    if ( v9 )
    {
      *v7 = v25;
    }
    else
    {
      v12 = HIBYTE(v25);
      *(_DWORD *)(a4 + 4) = v25 & 0xFFFFFF;
      *(_DWORD *)a4 = v12;
      if ( (unsigned int)(v12 - 1) > 0x1A && (_DWORD)v12 != 255 )
      {
        LODWORD(v14) = -1071774942;
        v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v15 + 24) = v5;
        *(_QWORD *)(v15 + 32) = v6;
        WdLogEvent5_WdWarning(v15);
        return (unsigned int)v14;
      }
      LODWORD(v14) = 0;
    }
    ++v9;
    ++v7;
    if ( v9 >= 6 )
      goto LABEL_15;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
  v17[5] = v9;
  v17[3] = v6;
  v17[4] = v5;
  v17[6] = v14;
  WdLogEvent5_WdWarning(v17);
LABEL_15:
  if ( (int)v14 < 0 )
    return (unsigned int)v14;
  v18 = (_DWORD *)(a4 + 8);
  if ( (*(_DWORD *)(a4 + 8) & 0xFFFFFF) == 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v19 = *v18 & 0xFFFFFFLL;
LABEL_18:
    v16[3] = v19;
    v16[4] = v18;
    goto LABEL_19;
  }
  if ( *(_WORD *)(a4 + 12) < 0x64u )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v19 = *(unsigned __int16 *)(a4 + 12);
    goto LABEL_18;
  }
  if ( *(_WORD *)(a4 + 20) < 0x64u )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v19 = *(unsigned __int16 *)(a4 + 20);
    goto LABEL_18;
  }
  LODWORD(v14) = 0;
  return (unsigned int)v14;
}
