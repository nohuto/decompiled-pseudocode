/*
 * XREFs of ndisDriverSystemDispatch @ 0x1C00CA954
 * Callers:
 *     ndisDispatchRequest @ 0x1C00AC650 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisEtwRegisterGuids @ 0x1C00CA9F0 (ndisEtwRegisterGuids.c)
 */

__int64 __fastcall ndisDriverSystemDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  _QWORD *v6; // rdi
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = *(_DWORD *)(v2 + 24);
  v6 = *(_QWORD **)(v2 + 32);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x48u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1, a2, *(unsigned __int8 *)(v2 + 1));
  switch ( *(_BYTE *)(v2 + 1) )
  {
    case 4:
      if ( v5 < 0x30 || !v6 || *(_DWORD *)v6 < 0x30u )
        goto LABEL_29;
      v8 = v6[3] - *(_QWORD *)&ndisControlGuid.Data1;
      if ( !v8 )
        v8 = v6[4] - *(_QWORD *)ndisControlGuid.Data4;
      if ( v8 )
      {
LABEL_29:
        v3 = -1073741811;
      }
      else
      {
        qword_1C009AF10 = v6[1];
        byte_1C009AF0C = BYTE2(qword_1C009AF10);
        ndisLogger = HIDWORD(qword_1C009AF10);
        if ( (qword_1C009AF10 & 0x800000000LL) != 0 )
          LOBYTE(dword_1C009AF18) = 1;
        if ( (qword_1C009AF10 & 0x100000000LL) != 0 )
          BYTE1(dword_1C009AF18) = 1;
        if ( (qword_1C009AF10 & 0x200000000LL) != 0 )
          BYTE2(dword_1C009AF18) = 1;
        if ( (qword_1C009AF10 & 0x400000000LL) != 0 )
          HIBYTE(dword_1C009AF18) = 1;
        if ( (qword_1C009AF10 & 0x1000000000LL) != 0 )
          LOBYTE(word_1C009AF1C) = 1;
        if ( (qword_1C009AF10 & 0x2000000000LL) != 0 )
          HIBYTE(word_1C009AF1C) = 1;
      }
      break;
    case 5:
      byte_1C009AF0C = 0;
      ndisLogger = 0;
      qword_1C009AF10 = 0LL;
      dword_1C009AF18 = 0;
      word_1C009AF1C = 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
    case 0xB:
      v3 = ndisEtwRegisterGuids(v6);
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(0x49u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v3);
  return v3;
}
