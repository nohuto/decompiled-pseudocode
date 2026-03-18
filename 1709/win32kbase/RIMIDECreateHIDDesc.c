/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C0108550
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 * Callees:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C000B420 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreePointerDevice @ 0x1C000B580 (RIMFreePointerDevice.c)
 *     RIMSearchHidTLCInfo @ 0x1C000C774 (RIMSearchHidTLCInfo.c)
 *     rimAnySecondaryRimUsagesMatchingUsages @ 0x1C000C854 (rimAnySecondaryRimUsagesMatchingUsages.c)
 *     RIMIsInteractiveCtrl @ 0x1C000C8DC (RIMIsInteractiveCtrl.c)
 *     RIMFreeHidDesc @ 0x1C000D2C8 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C000E5AC (WPP_RECORDER_SF_qDD.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C000E92C (RIMIDEFreeInjectedInfo.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0099AB0 (WPP_RECORDER_SF_DDq.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     rimHidP_FreeCollectionDescription @ 0x1C0107B10 (rimHidP_FreeCollectionDescription.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C01080B4 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v4; // xmm2
  __int128 v7; // xmm1
  __int64 v8; // rsi
  __int128 v9; // xmm0
  __m128i v10; // xmm1
  unsigned int Caps; // ebx
  int v12; // ebx
  char *v13; // rax
  __int128 v14; // xmm0
  void *v15; // rax
  unsigned __int16 epi16; // r14
  void *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r14
  int v21; // kr00_4
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // r8
  __int64 v30; // rdx
  struct _HIDP_CAPS v31; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v32; // [rsp+80h] [rbp-80h]
  __int128 v33; // [rsp+90h] [rbp-70h]
  void *Src; // [rsp+C0h] [rbp-40h]
  struct _HIDP_CAPS v35; // [rsp+D0h] [rbp-30h] BYREF
  struct _HIDP_DEVICE_DESC v36; // [rsp+110h] [rbp+10h] BYREF

  v4 = a3[1];
  v7 = a3[3];
  v8 = 0LL;
  *(_OWORD *)&v36.ReportIDs = a3[2];
  v9 = a3[4];
  *(_OWORD *)&v36.CollectionDesc = v4;
  *(_OWORD *)&v36.Dbg.Args[3] = v9;
  *(_OWORD *)&v36.Dbg.ErrorCode = v7;
  v10 = *(__m128i *)(v4 + 16);
  v33 = *(_OWORD *)v4;
  Src = *(void **)(v4 + 32);
  v32 = v10;
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v35);
  else
    Caps = -1073741637;
  v12 = Caps >> 31;
  if ( v12 )
    goto LABEL_31;
  v13 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v8 = (__int64)v13;
  v12 = 0;
  if ( !v13 )
  {
    v12 = 1;
    goto LABEL_31;
  }
  v14 = *(_OWORD *)&v35.Usage;
  *(_QWORD *)(a2 + 456) = v13;
  *(_OWORD *)(v13 + 40) = v14;
  *(_OWORD *)(v13 + 56) = *(_OWORD *)&v35.Reserved[3];
  *(_OWORD *)(v13 + 72) = *(_OWORD *)&v35.Reserved[11];
  *(_OWORD *)(v13 + 88) = *(_OWORD *)&v35.NumberInputValueCaps;
  v15 = Win32AllocPoolZInit(*((unsigned __int16 *)v13 + 22), 1785620818LL);
  *(_QWORD *)(v8 + 24) = v15;
  if ( !v15 )
  {
    v12 = 1;
    goto LABEL_31;
  }
  epi16 = _mm_extract_epi16(v32, 5);
  v17 = (void *)Win32AllocPool(epi16, 0x6A6E6952u);
  *(_QWORD *)(v8 + 16) = v17;
  if ( !v17 )
  {
    v12 = 1;
    goto LABEL_31;
  }
  memmove(v17, Src, epi16);
  *(_DWORD *)(v8 + 112) = 0x10000;
  *(_DWORD *)(v8 + 108) = 0;
  *(_DWORD *)(v8 + 104) = epi16;
  v18 = RIMSearchHidTLCInfo(v35.UsagePage, v35.Usage);
  v20 = (__int64)v18;
  if ( v18 )
  {
    WPP_RECORDER_SF_DDq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v35.UsagePage,
      v19,
      0xBu,
      (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids,
      v35.UsagePage,
      v35.Usage,
      v18);
  }
  else
  {
    v20 = RIMAllocateAndLinkHidTLCInfo(v35.UsagePage, v35.Usage);
    if ( !v20 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0xCu,
        (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids,
        a1);
      v12 = 1;
    }
    WPP_RECORDER_SF_qDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xDu,
      (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids,
      v20,
      v35.UsagePage,
      v35.Usage);
    if ( v12 )
      goto LABEL_31;
  }
  ++*(_DWORD *)(v20 + 20);
  v21 = *(_DWORD *)&v35.Usage;
  *(_QWORD *)(a2 + 464) = v20;
  if ( HIWORD(v21) == 13 && (_WORD)v21 != 3 && (_WORD)v21 && (unsigned __int16)v21 < 6u )
  {
    *(_OWORD *)&v31.Usage = v33;
    *(_QWORD *)&v31.Reserved[11] = Src;
    *(__m128i *)&v31.Reserved[3] = v32;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, a3, v8, &v31) )
    {
LABEL_29:
      v12 = 1;
      goto LABEL_31;
    }
  }
  else
  {
    v31 = v35;
    if ( (unsigned int)RIMIsInteractiveCtrl(&v31) )
      *(_DWORD *)(a2 + 200) |= 0x100u;
  }
  if ( *(_DWORD *)(a1 + 976) )
  {
    RIMLockExclusive((__int64)&gObListLock);
    v31 = v35;
    if ( (unsigned int)rimAnySecondaryRimUsagesMatchingUsages(&v31) )
    {
      *(_DWORD *)(a2 + 184) |= 0xC000u;
      *(_DWORD *)(a2 + 200) |= 0x40u;
    }
    qword_1C0193AE8 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  v23 = RIMIDEAllocateInjectedInfo(v22, (__int64)a3);
  *(_QWORD *)(a2 + 376) = v23;
  if ( !v23 )
    goto LABEL_29;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25, v24, v26);
  *(_DWORD *)(CurrentProcessWin32Process + 776) |= 0x100000u;
  *(_DWORD *)(*(_QWORD *)(a2 + 376) + 84LL) = *(_DWORD *)(CurrentProcessWin32Process + 56);
LABEL_31:
  rimHidP_FreeCollectionDescription(&v36);
  v36.CollectionDesc = 0LL;
  if ( !v12 )
    return v8;
  if ( v8 )
    RIMFreeHidDesc(v8);
  v30 = *(_QWORD *)(a2 + 472);
  if ( v30 )
  {
    RIMFreePointerDevice(a1, v30);
    *(_QWORD *)(a2 + 472) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2, v30, v28);
  return 0LL;
}
