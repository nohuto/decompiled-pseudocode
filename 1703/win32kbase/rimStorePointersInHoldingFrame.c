/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C010ED10
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0007B88 (WPP_RECORDER_SF_dd.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C0095120 (rimFindHoldingFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0116A4C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmGetButtonContact @ 0x1C0116C18 (RIMCmGetButtonContact.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  _QWORD *HoldingFrame; // rbx
  unsigned int v9; // ecx
  void *v10; // rdx
  __int64 v11; // rax
  _OWORD *v12; // rdx
  _OWORD *v13; // rdx
  __int64 active; // rax
  __int64 v15; // rsi
  __int64 v16; // r11
  __int64 v17; // xmm1_8
  __int128 v18; // xmm0
  unsigned int v19; // edx
  __int64 v20; // rax
  _OWORD *v21; // r8
  _OWORD *v22; // rdx
  _OWORD *v23; // rdx
  __int128 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h]
  _BYTE v26[24]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    return 0LL;
  if ( (_DWORD)v6 && (v9 = 168 * v6, (unsigned __int64)(168 * v6) <= 0xFFFFFFFF) && v9 )
    v10 = Win32AllocPoolZInit(v9, 1701868370LL);
  else
    v10 = 0LL;
  HoldingFrame[9] = v10;
  if ( !v10 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      20,
      47,
      (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
    return 0LL;
  }
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( a4 )
  {
    v11 = RIMCmGetButtonContact(v4) + 2376;
    if ( (*(_DWORD *)(v11 + 28) & 0x2000) != 0 )
      HoldingFrame[10] = v12;
    *v12 = *(_OWORD *)v11;
    v12[1] = *(_OWORD *)(v11 + 16);
    v12[2] = *(_OWORD *)(v11 + 32);
    v12[3] = *(_OWORD *)(v11 + 48);
    v12[4] = *(_OWORD *)(v11 + 64);
    v12[5] = *(_OWORD *)(v11 + 80);
    v12[6] = *(_OWORD *)(v11 + 96);
    v13 = v12 + 8;
    *(v13 - 1) = *(_OWORD *)(v11 + 112);
    *v13 = *(_OWORD *)(v11 + 128);
    v13[1] = *(_OWORD *)(v11 + 144);
    *((_QWORD *)v13 + 4) = *(_QWORD *)(v11 + 160);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(v26, v4);
    v15 = v4 + 1560;
    v16 = 8LL;
    while ( 1 )
    {
      v17 = *(_QWORD *)(active + 16);
      v18 = *(_OWORD *)active;
      v19 = *(_DWORD *)(v15 + 8);
      v25 = v17;
      v20 = *(_QWORD *)v15 + 16LL * v19;
      v24 = v18;
      if ( (_QWORD)v18 == v15 && DWORD2(v24) == v19 && v17 == v20 )
        break;
      v21 = (_OWORD *)(v17 + 2360);
      if ( (*(_DWORD *)(v17 + 2304) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v17 + 2388) & 0x2000) != 0 )
          HoldingFrame[10] = HoldingFrame[9] + 168LL * *((unsigned int *)HoldingFrame + 11);
        v22 = (_OWORD *)(HoldingFrame[9] + 168LL * *((unsigned int *)HoldingFrame + 11));
        *v22 = *v21;
        v22[1] = *(_OWORD *)(v17 + 2376);
        v22[2] = *(_OWORD *)(v17 + 2392);
        v22[3] = *(_OWORD *)(v17 + 2408);
        v22[4] = *(_OWORD *)(v17 + 2424);
        v22[5] = *(_OWORD *)(v17 + 2440);
        v22[6] = *(_OWORD *)(v17 + 2456);
        v23 = &v22[v16];
        *(v23 - 1) = *(_OWORD *)(v17 + 2472);
        *v23 = v21[v16];
        v23[1] = v21[v16 + 1];
        *((_QWORD *)v23 + 4) = *(_QWORD *)&v21[v16 + 2];
        ++*((_DWORD *)HoldingFrame + 11);
      }
      active = ListTableIteratorNext(v26, &v24);
    }
  }
  if ( *((_DWORD *)HoldingFrame + 11) != *((_DWORD *)HoldingFrame + 10) )
  {
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x30u,
      (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids,
      *((_DWORD *)HoldingFrame + 11),
      *((_DWORD *)HoldingFrame + 10));
    return 0LL;
  }
  return 1LL;
}
