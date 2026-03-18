/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C0109528
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMIDEFreeInjectedInfo @ 0x1C0008870 (RIMIDEFreeInjectedInfo.c)
 *     RIMFreePointerDevice @ 0x1C0009450 (RIMFreePointerDevice.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     RIMFreeHidDesc @ 0x1C0055EEC (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0055F74 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0090B14 (WPP_RECORDER_SF_DDq.c)
 *     RIMIsInteractiveCtrl @ 0x1C0090FE8 (RIMIsInteractiveCtrl.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00960DC (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00961CC (RIMSearchHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     rimHidP_FreeCollectionDescription @ 0x1C0106E24 (rimHidP_FreeCollectionDescription.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C010908C (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v4; // xmm2
  __int128 v7; // xmm1
  __int64 v8; // rdi
  __int128 v9; // xmm0
  __m128i v10; // xmm1
  unsigned int Caps; // ebx
  int v12; // ebx
  char *v13; // rax
  __int128 v14; // xmm0
  void *v15; // rax
  unsigned __int16 epi16; // r14
  void *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  _WORD *v22; // r14
  int v23; // kr00_4
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rdx
  struct _HIDP_CAPS v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+90h] [rbp-70h]
  void *Src; // [rsp+C0h] [rbp-40h]
  struct _HIDP_CAPS v33; // [rsp+D0h] [rbp-30h] BYREF
  struct _HIDP_DEVICE_DESC v34; // [rsp+110h] [rbp+10h] BYREF

  v4 = a3[1];
  v7 = a3[3];
  v8 = 0LL;
  *(_OWORD *)&v34.ReportIDs = a3[2];
  v9 = a3[4];
  *(_OWORD *)&v34.CollectionDesc = v4;
  *(_OWORD *)&v34.Dbg.Args[3] = v9;
  *(_OWORD *)&v34.Dbg.ErrorCode = v7;
  v10 = *(__m128i *)(v4 + 16);
  v31 = *(_OWORD *)v4;
  Src = *(void **)(v4 + 32);
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v33);
  else
    Caps = -1073741637;
  v12 = Caps >> 31;
  if ( v12 )
    goto LABEL_27;
  v13 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v8 = (__int64)v13;
  v12 = 0;
  if ( !v13 )
  {
    v12 = 1;
    goto LABEL_27;
  }
  v14 = *(_OWORD *)&v33.Usage;
  *(_QWORD *)(a2 + 456) = v13;
  *(_OWORD *)(v13 + 40) = v14;
  *(_OWORD *)(v13 + 56) = *(_OWORD *)&v33.Reserved[3];
  *(_OWORD *)(v13 + 72) = *(_OWORD *)&v33.Reserved[11];
  *(_OWORD *)(v13 + 88) = *(_OWORD *)&v33.NumberInputValueCaps;
  v15 = Win32AllocPoolZInit(*((unsigned __int16 *)v13 + 22), 1785620818LL);
  *(_QWORD *)(v8 + 24) = v15;
  if ( !v15 )
  {
    v12 = 1;
    goto LABEL_27;
  }
  epi16 = _mm_extract_epi16(v10, 5);
  v17 = (void *)Win32AllocPool(epi16, 0x6A6E6952u);
  *(_QWORD *)(v8 + 16) = v17;
  if ( !v17 )
  {
    v12 = 1;
    goto LABEL_27;
  }
  memmove(v17, Src, epi16);
  *(_DWORD *)(v8 + 112) = 0x10000;
  *(_DWORD *)(v8 + 108) = 0;
  *(_DWORD *)(v8 + 104) = epi16;
  v19 = RIMSearchHidTLCInfo(v18, v33.UsagePage, v33.Usage);
  v22 = v19;
  if ( v19 )
  {
    WPP_RECORDER_SF_DDq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v33.UsagePage,
      v21,
      0xBu,
      (__int64)&WPP_fda5dd94230439844a6c55081ca9359e_Traceguids,
      v33.UsagePage,
      v33.Usage,
      v19);
  }
  else
  {
    v22 = RIMAllocateAndLinkHidTLCInfo(v20, v33.UsagePage, v33.Usage);
    if ( !v22 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0xCu,
        (__int64)&WPP_fda5dd94230439844a6c55081ca9359e_Traceguids,
        a1);
      v12 = 1;
    }
    WPP_RECORDER_SF_qDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xDu,
      (__int64)&WPP_fda5dd94230439844a6c55081ca9359e_Traceguids,
      v22,
      v33.UsagePage,
      v33.Usage);
    if ( v12 )
      goto LABEL_27;
  }
  ++*((_DWORD *)v22 + 5);
  v23 = *(_DWORD *)&v33.Usage;
  *(_QWORD *)(a2 + 464) = v22;
  if ( HIWORD(v23) == 13 && (_WORD)v23 != 3 && (_WORD)v23 && (unsigned __int16)v23 < 6u )
  {
    *(_OWORD *)&v30.Usage = v31;
    *(_QWORD *)&v30.Reserved[11] = Src;
    *(__m128i *)&v30.Reserved[3] = v10;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, (_DWORD)a3, v8, (__int64)&v30) )
      goto LABEL_25;
  }
  else
  {
    v30 = v33;
    if ( (unsigned int)RIMIsInteractiveCtrl(&v30) )
      *(_DWORD *)(a2 + 200) |= 0x100u;
  }
  v25 = RIMIDEAllocateInjectedInfo(v24, (__int64)a3);
  *(_QWORD *)(a2 + 376) = v25;
  if ( !v25 )
  {
LABEL_25:
    v12 = 1;
    goto LABEL_27;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
  *(_DWORD *)(CurrentProcessWin32Process + 768) |= 0x100000u;
  *(_DWORD *)(*(_QWORD *)(a2 + 376) + 84LL) = *(_DWORD *)(CurrentProcessWin32Process + 56);
LABEL_27:
  rimHidP_FreeCollectionDescription(&v34);
  v34.CollectionDesc = 0LL;
  if ( !v12 )
    return v8;
  if ( v8 )
    RIMFreeHidDesc(v8);
  v29 = *(_QWORD *)(a2 + 472);
  if ( v29 )
  {
    RIMFreePointerDevice(a1, v29);
    *(_QWORD *)(a2 + 472) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
