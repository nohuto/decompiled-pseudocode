/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0005AC0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0005D90 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C0005E0C (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00060F8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00061B8 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0049448 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        unsigned int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  __int64 v9; // rax
  _DWORD *v10; // rcx
  __int128 v11; // xmm0
  int v12; // ecx
  __int128 v13; // xmm1
  int v14; // eax
  unsigned int *v15; // r12
  unsigned __int64 v16; // r8
  int v17; // edi
  struct tagPOINT v18; // rax
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned int v27; // eax
  _DWORD *v29; // rcx
  _DWORD *v30; // rax
  _OWORD v31[6]; // [rsp+38h] [rbp-21h] BYREF

  memset(v31, 0, sizeof(v31));
  if ( !*(_QWORD *)(gptiCurrent + 1136LL) )
  {
    v9 = Win32AllocPoolZInit(128LL, 1347253077LL);
    if ( !v9 )
      goto LABEL_31;
    *(_QWORD *)(gptiCurrent + 1136LL) = v9;
  }
  if ( a5 )
  {
    v10 = *(_DWORD **)(gptiCurrent + 1136LL);
    if ( (*v10 & 0x10) != 0 )
    {
      *v10 &= ~0x10u;
      **(_DWORD **)(gptiCurrent + 1136LL) &= ~4u;
    }
  }
  if ( (unsigned int)IsMiPMouseMessage(*((_DWORD *)a3 + 6)) )
  {
    v11 = *(_OWORD *)a3;
    v12 = dword_1C032C390;
    LODWORD(v31[0]) = 4;
    *(_OWORD *)a1 = v11;
    DWORD1(v31[0]) = 1;
    v13 = *((_OWORD *)a3 + 1);
    DWORD2(v31[0]) = v12;
    *((_OWORD *)a1 + 1) = v13;
    *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
    *((_OWORD *)a1 + 4) = *((_OWORD *)a3 + 4);
    *((_OWORD *)a1 + 5) = *((_OWORD *)a3 + 5);
    *((_OWORD *)a1 + 6) = *((_OWORD *)a3 + 6);
    *((_OWORD *)a1 + 7) = *((_OWORD *)a3 + 7);
    *((_OWORD *)a1 + 8) = *((_OWORD *)a3 + 8);
    *((_OWORD *)a1 + 9) = *((_OWORD *)a3 + 9);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    v14 = v12 + 1;
    if ( v12 == -1 )
      v14 = 1;
    dword_1C032C390 = v14;
    *(_QWORD *)&v31[1] = ghMouseDevice;
    *((_QWORD *)&v31[1] + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v15 = (unsigned int *)((char *)a1 + 24);
    v16 = *((_QWORD *)a3 + 4);
    LODWORD(v31[4]) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v31[5] = *((_QWORD *)a3 + 16);
    DWORD1(v31[4]) = 1;
    HIDWORD(v31[0]) = GetPointerFlagsFromMouse(
                        (unsigned int *)a1 + 6,
                        a2,
                        v16,
                        (unsigned int *)&v31[4] + 3,
                        (enum tagPOINTER_BUTTON_CHANGE_TYPE *)((char *)&v31[5] + 8));
    v17 = HIDWORD(v31[0]);
    if ( HIDWORD(v31[0]) )
    {
      if ( (**(_DWORD **)(gptiCurrent + 1136LL) & 4) == 0 )
      {
        v17 = HIDWORD(v31[0]) | 0x2000;
        HIDWORD(v31[0]) |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x2000) != 0 )
      {
        v17 |= 0x400000u;
        HIDWORD(v31[0]) = v17;
      }
      LODWORD(v31[2]) = *((__int16 *)a3 + 20);
      DWORD1(v31[2]) = *((__int16 *)a3 + 21);
      v18 = MiPConvertPoint((const struct tagPOINT *)&v31[2]);
      *(_QWORD *)&v31[3] = *(_QWORD *)&v31[2];
      *((struct tagPOINT *)&v31[2] + 1) = v18;
      *((struct tagPOINT *)&v31[3] + 1) = v18;
      *((_QWORD *)a1 + 13) = gptiCurrent;
      if ( (v17 & 0x180000) != 0 )
      {
        DWORD2(v31[4]) = *((__int16 *)a3 + 17);
        v19 = WORD4(v31[4]);
      }
      else
      {
        v19 = WORD6(v31[0]) & 0xE1F7;
      }
      v20 = v31[0];
      v21 = v31[1];
      *((_QWORD *)a1 + 4) = (v19 << 16) | 1;
      v22 = *(_QWORD *)(gptiCurrent + 1136LL);
      *(_OWORD *)(v22 + 24) = v20;
      v23 = v31[2];
      *(_OWORD *)(v22 + 40) = v21;
      v24 = v31[3];
      *(_OWORD *)(v22 + 56) = v23;
      v25 = v31[4];
      *(_OWORD *)(v22 + 72) = v24;
      v26 = v31[5];
      *(_OWORD *)(v22 + 88) = v25;
      *(_OWORD *)(v22 + 104) = v26;
      **(_DWORD **)(gptiCurrent + 1136LL) |= 1u;
      if ( a5 )
      {
        if ( ((*v15 - 579) & 0xFFFFFFFB) == 0 )
        {
          v29 = *(_DWORD **)(gptiCurrent + 1136LL);
          if ( (*v29 & 4) != 0 )
          {
            *v29 |= 0x10u;
            **(_DWORD **)(gptiCurrent + 1136LL) &= ~2u;
          }
        }
      }
      v27 = *v15;
      if ( *v15 < 0x241 || v27 > 0x242 && v27 - 581 > 1 )
      {
        StopMiPIdleNotificationTimer(a4);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1136LL) + 120LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_31:
  v30 = *(_DWORD **)(gptiCurrent + 1136LL);
  if ( v30 )
    *v30 &= ~1u;
  return 0LL;
}
