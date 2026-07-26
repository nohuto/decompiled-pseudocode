/*
 * XREFs of ndisDriverSystemDispatch @ 0x1C00C9310
 * Callers:
 *     ndisDispatchRequest @ 0x1C00B6280 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ndisEtwRegisterGuids @ 0x1C00C93AC (ndisEtwRegisterGuids.c)
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
    WPP_SF_qqd(0x48u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, a1, a2, *(unsigned __int8 *)(v2 + 1));
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
        qword_1C0099FD0 = v6[1];
        byte_1C0099FCC = BYTE2(qword_1C0099FD0);
        ndisLogger = HIDWORD(qword_1C0099FD0);
        if ( (qword_1C0099FD0 & 0x800000000LL) != 0 )
          LOBYTE(dword_1C0099FD8) = 1;
        if ( (qword_1C0099FD0 & 0x100000000LL) != 0 )
          BYTE1(dword_1C0099FD8) = 1;
        if ( (qword_1C0099FD0 & 0x200000000LL) != 0 )
          BYTE2(dword_1C0099FD8) = 1;
        if ( (qword_1C0099FD0 & 0x400000000LL) != 0 )
          HIBYTE(dword_1C0099FD8) = 1;
        if ( (qword_1C0099FD0 & 0x1000000000LL) != 0 )
          LOBYTE(word_1C0099FDC) = 1;
        if ( (qword_1C0099FD0 & 0x2000000000LL) != 0 )
          HIBYTE(word_1C0099FDC) = 1;
      }
      break;
    case 5:
      byte_1C0099FCC = 0;
      ndisLogger = 0;
      qword_1C0099FD0 = 0LL;
      dword_1C0099FD8 = 0;
      word_1C0099FDC = 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
    case 0xB:
      v3 = ndisEtwRegisterGuids(v6);
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(0x49u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v3);
  return v3;
}
