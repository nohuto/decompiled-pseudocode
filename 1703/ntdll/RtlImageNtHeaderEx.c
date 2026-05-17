/*
 * XREFs of RtlImageNtHeaderEx @ 0x180033760
 * Callers:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     CsrClientConnectToServer @ 0x18000B620 (CsrClientConnectToServer.c)
 *     sub_1800108D8 @ 0x1800108D8 (sub_1800108D8.c)
 *     sub_18001094C @ 0x18001094C (sub_18001094C.c)
 *     LdrGetDllHandleByMapping @ 0x18001A750 (LdrGetDllHandleByMapping.c)
 *     sub_18001BC68 @ 0x18001BC68 (sub_18001BC68.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_18002FEC4 @ 0x18002FEC4 (sub_18002FEC4.c)
 *     sub_18002FF94 @ 0x18002FF94 (sub_18002FF94.c)
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_18003999C @ 0x18003999C (sub_18003999C.c)
 *     sub_18003A658 @ 0x18003A658 (sub_18003A658.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 *     sub_18003A958 @ 0x18003A958 (sub_18003A958.c)
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     LdrpResGetResourceDirectory @ 0x18005A920 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x18005BF00 (LdrpResGetMappingSize.c)
 *     sub_18007FB7C @ 0x18007FB7C (sub_18007FB7C.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     sub_1800868D4 @ 0x1800868D4 (sub_1800868D4.c)
 *     sub_180086ED8 @ 0x180086ED8 (sub_180086ED8.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D75C8 @ 0x1800D75C8 (sub_1800D75C8.c)
 *     sub_1800D7D58 @ 0x1800D7D58 (sub_1800D7D58.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_1800F13DC @ 0x1800F13DC (sub_1800F13DC.c)
 * Callees:
 *     sub_1800F6AF0 @ 0x1800F6AF0 (sub_1800F6AF0.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  unsigned __int64 v7; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) == 0 && a3 < 0x40 )
    return 3221225595LL;
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_15:
    result = 3221225595LL;
    goto LABEL_18;
  }
  v7 = *(unsigned int *)(a2 + 60);
  if ( (a1 & 1) == 0 && (v7 >= a3 || (unsigned int)v7 >= 0xFFFFFFE7 || v7 + 24 >= a3) )
  {
    result = 3221225595LL;
    v6 = 0LL;
    goto LABEL_18;
  }
  if ( (unsigned int)v7 < 0x10000000 )
  {
    v6 = (_DWORD *)(a2 + v7);
    if ( a2 + v7 >= a2 && *v6 == 17744 )
      goto LABEL_18;
    goto LABEL_15;
  }
  result = 3221225595LL;
  v6 = 0LL;
LABEL_18:
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
