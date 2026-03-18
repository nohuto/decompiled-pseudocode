/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0082310
 * Callers:
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 * Callees:
 *     MNInitUAHMenuItem @ 0x1C007FEA0 (MNInitUAHMenuItem.c)
 *     GetDPIServerInfoForDpi @ 0x1C00825C8 (GetDPIServerInfoForDpi.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     MNUpdateUAHMaxPopupWidths @ 0x1C011DCEC (MNUpdateUAHMaxPopupWidths.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(
        struct tagMENU *a1,
        struct tagITEM *a2,
        struct tagWND *a3,
        unsigned int a4,
        HDC a5)
{
  __int64 result; // rax
  __int64 DPIServerInfoForDpi; // rax
  bool v11; // zf
  int v12; // ecx
  __int64 v13; // rcx
  __int128 v14; // xmm1
  int v15; // ecx
  int v16; // eax
  _QWORD v17[14]; // [rsp+20h] [rbp-51h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( *((_DWORD *)a2 + 28) != -1 )
    return 0LL;
  v17[1] = *((unsigned int *)a2 + 2);
  v17[0] = 1LL;
  DPIServerInfoForDpi = GetDPIServerInfoForDpi(a4);
  v11 = (*(_DWORD *)a2 & 0x100) == 0;
  v12 = *(_DWORD *)(DPIServerInfoForDpi + 36);
  v17[3] = *((_QWORD *)a2 + 8);
  LODWORD(v17[2]) = v12;
  if ( !v11 || *((_QWORD *)a2 + 13) == -1LL && a3 )
  {
    xxxSendMessage(a3, 44LL, 0LL, v17);
    if ( (unsigned int)MNGetpItemIndex(a1, a2) == -1 )
      return 0LL;
  }
  if ( !(unsigned int)MNIsUAHMenu(a1) || !a3 )
    goto LABEL_11;
  v17[4] = a1 ? *(_QWORD *)a1 : 0LL;
  v17[5] = a5;
  LODWORD(v17[6]) = *((_DWORD *)a1 + 14);
  MNInitUAHMenuItem(v13, (__int64)a2, (__int64)&v17[7]);
  xxxSendMessage(a3, 148LL, 0LL, v17);
  if ( (unsigned int)MNGetpItemIndex(a1, a2) == -1 )
    return 0LL;
  v14 = *(_OWORD *)((char *)&v17[9] + 4);
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)((char *)&v17[7] + 4);
  *(_OWORD *)((char *)a2 + 136) = v14;
  if ( (*((_DWORD *)a1 + 14) & 1) != 0 )
  {
    v16 = MNUpdateUAHMaxPopupWidths(a1, a2);
    v15 = v16 + HIDWORD(v17[1]);
    goto LABEL_12;
  }
LABEL_11:
  v15 = HIDWORD(v17[1]);
LABEL_12:
  *((_DWORD *)a2 + 28) = v15;
  result = 1LL;
  *((_DWORD *)a2 + 29) = v17[2];
  return result;
}
