/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AFC0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C000B298 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C000B328 (-GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B60C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B6CC (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C009ECF0 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        unsigned int a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  _DWORD *v9; // rcx
  __int128 v10; // xmm0
  int v11; // ecx
  __int128 v12; // xmm1
  int v13; // eax
  unsigned int *v14; // r12
  unsigned __int64 v15; // r8
  int v16; // edi
  struct tagPOINT v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  unsigned int v24; // eax
  __int64 v26; // rax
  _DWORD *v27; // rcx
  __int64 v28; // rcx
  _DWORD *v29; // rax
  _OWORD v30[6]; // [rsp+38h] [rbp-21h] BYREF

  memset(v30, 0, sizeof(v30));
  if ( !*(_QWORD *)(gptiCurrent + 1224LL) )
  {
    v26 = Win32AllocPoolZInit(128LL, 1347253077LL);
    if ( !v26 )
      goto LABEL_31;
    *(_QWORD *)(gptiCurrent + 1224LL) = v26;
  }
  if ( a5 )
  {
    v9 = *(_DWORD **)(gptiCurrent + 1224LL);
    if ( (*v9 & 0x10) != 0 )
    {
      *v9 &= ~0x10u;
      **(_DWORD **)(gptiCurrent + 1224LL) &= ~4u;
    }
  }
  if ( (unsigned int)IsMiPMouseMessage(*((_DWORD *)a3 + 6)) )
  {
    v10 = *(_OWORD *)a3;
    v11 = dword_1C0327610;
    LODWORD(v30[0]) = 4;
    *(_OWORD *)a1 = v10;
    DWORD1(v30[0]) = 1;
    v12 = *((_OWORD *)a3 + 1);
    DWORD2(v30[0]) = v11;
    *((_OWORD *)a1 + 1) = v12;
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
    v13 = v11 + 1;
    if ( v11 == -1 )
      v13 = 1;
    dword_1C0327610 = v13;
    *(_QWORD *)&v30[1] = ghMouseDevice;
    *((_QWORD *)&v30[1] + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v14 = (unsigned int *)((char *)a1 + 24);
    v15 = *((_QWORD *)a3 + 4);
    LODWORD(v30[4]) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v30[5] = *((_QWORD *)a3 + 16);
    DWORD1(v30[4]) = 1;
    HIDWORD(v30[0]) = GetPointerFlagsFromMouse(
                        (unsigned int *)a1 + 6,
                        a2,
                        v15,
                        (unsigned int *)&v30[4] + 3,
                        (enum tagPOINTER_BUTTON_CHANGE_TYPE *)((char *)&v30[5] + 8));
    v16 = HIDWORD(v30[0]);
    if ( HIDWORD(v30[0]) )
    {
      if ( (**(_DWORD **)(gptiCurrent + 1224LL) & 4) == 0 )
      {
        v16 = HIDWORD(v30[0]) | 0x2000;
        HIDWORD(v30[0]) |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x2000) != 0 )
      {
        v16 |= 0x400000u;
        HIDWORD(v30[0]) = v16;
      }
      LODWORD(v30[2]) = *((__int16 *)a3 + 20);
      DWORD1(v30[2]) = *((__int16 *)a3 + 21);
      v17 = MiPConvertPoint((const struct tagPOINT *)&v30[2]);
      *(_QWORD *)&v30[3] = *(_QWORD *)&v30[2];
      *((struct tagPOINT *)&v30[2] + 1) = v17;
      *((struct tagPOINT *)&v30[3] + 1) = v17;
      *((_QWORD *)a1 + 13) = gptiCurrent;
      if ( (v16 & 0x180000) != 0 )
      {
        v28 = (*((unsigned __int16 *)a3 + 17) << 16) | 1LL;
        DWORD2(v30[4]) = *((__int16 *)a3 + 17);
        *((_QWORD *)a1 + 4) = v28;
      }
      else
      {
        *((_QWORD *)a1 + 4) = ((unsigned __int16)(WORD6(v30[0]) & 0xE1F7) << 16) | 1LL;
      }
      v18 = *(_QWORD *)(gptiCurrent + 1224LL);
      v19 = v30[1];
      *(_OWORD *)(v18 + 24) = v30[0];
      v20 = v30[2];
      *(_OWORD *)(v18 + 40) = v19;
      v21 = v30[3];
      *(_OWORD *)(v18 + 56) = v20;
      v22 = v30[4];
      *(_OWORD *)(v18 + 72) = v21;
      v23 = v30[5];
      *(_OWORD *)(v18 + 88) = v22;
      *(_OWORD *)(v18 + 104) = v23;
      **(_DWORD **)(gptiCurrent + 1224LL) |= 1u;
      if ( a5 )
      {
        if ( ((*v14 - 579) & 0xFFFFFFFB) == 0 )
        {
          v27 = *(_DWORD **)(gptiCurrent + 1224LL);
          if ( (*v27 & 4) != 0 )
          {
            *v27 |= 0x10u;
            **(_DWORD **)(gptiCurrent + 1224LL) &= ~2u;
          }
        }
      }
      v24 = *v14;
      if ( *v14 < 0x241 || v24 > 0x242 && v24 - 581 > 1 )
      {
        StopMiPIdleNotificationTimer(a4);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1224LL) + 120LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_31:
  v29 = *(_DWORD **)(gptiCurrent + 1224LL);
  if ( v29 )
    *v29 &= ~1u;
  return 0LL;
}
