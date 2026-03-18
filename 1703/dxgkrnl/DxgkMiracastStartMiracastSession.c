/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C004025C
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C017CC40 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C003DCFC (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C003DDC0 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C003E278 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003ED50 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     Template_pxzqq @ 0x1C004125C (Template_pxzqq.c)
 *     Template_qqqz @ 0x1C0041340 (Template_qqqz.c)
 *     Template_qqz @ 0x1C0041408 (Template_qqz.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0042E10 (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C0043650 (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C01C6E98 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C01C7244 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C01C72F8 (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01C7500 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01C77A0 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C01C7F78 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C01C8288 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(__int64 a1, struct _KEVENT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  int v6; // r14d
  __int128 v7; // xmm0
  _DWORD *v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 DeviceContextFromName; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  MIRACAST_CHUNK_LIST *v16; // rcx
  MIRACAST_CHUNK_LIST *v17; // rcx
  MIRACAST_CHUNK_LIST *v18; // rcx
  MIRACAST_CHUNK_LIST *v19; // rcx
  MIRACAST_CHUNK_LIST *v20; // rcx
  MIRACAST_CHUNK_LIST *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  PRKEVENT v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned int v28; // r13d
  _DWORD *PoolWithTag; // rax
  int DisplayAdapterFdo; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  void *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  char v43; // cl
  char v44; // dl
  char v45; // r9
  char v46; // r10
  int v47; // ecx
  int v48; // edx
  int v49; // eax
  char v50; // al
  unsigned int v51; // eax
  char v52; // al
  _DWORD *v53; // r13
  int Context; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rax
  _DWORD *v63; // rax
  int v64; // ecx
  _DWORD *v65; // rax
  int v66; // ecx
  _DWORD *v67; // rax
  int v68; // ecx
  _DWORD *v69; // rax
  MIRACAST_CHUNK_LIST *v70; // rcx
  _DWORD *v71; // rdx
  __int64 v72; // rax
  _QWORD *v73; // rax
  MIRACAST_CHUNK_LIST *v74; // rax
  __int64 v75; // rax
  size_t v76; // rbx
  __int64 v77; // rcx
  _QWORD *v78; // r13
  __int64 v79; // rax
  int v80; // eax
  struct _KEVENT *v81; // rsi
  __int64 *v82; // rax
  int v83; // edx
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  _QWORD *v91; // [rsp+30h] [rbp-D0h]
  __int64 v92; // [rsp+38h] [rbp-C8h]
  char v93; // [rsp+60h] [rbp-A0h] BYREF
  char DeviceObject; // [rsp+61h] [rbp-9Fh] BYREF
  char v95; // [rsp+62h] [rbp-9Eh]
  char v96; // [rsp+63h] [rbp-9Dh]
  char v97; // [rsp+64h] [rbp-9Ch]
  char v98; // [rsp+65h] [rbp-9Bh]
  char v99; // [rsp+66h] [rbp-9Ah]
  __int64 v100; // [rsp+68h] [rbp-98h] BYREF
  __int64 v101; // [rsp+70h] [rbp-90h]
  __int64 *v102; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  _QWORD v104[3]; // [rsp+88h] [rbp-78h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  _DWORD *v106; // [rsp+A8h] [rbp-58h]
  _QWORD v107[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v108[3]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v110; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v111[8]; // [rsp+100h] [rbp+0h] BYREF

  LOWORD(v3) = 0;
  v101 = a1;
  v106 = a3;
  memset(v104, 0, 20);
  v5 = 0LL;
  v6 = 2;
  Event = a2;
  v7 = *(_OWORD *)(a1 + 536);
  v100 = 0LL;
  v8 = 0LL;
  v93 = 0;
  v110 = v7;
  v99 = 0;
  v9 = 0;
  v98 = 0;
  v96 = 0;
  v95 = 0;
  v97 = 0;
  DeviceObject = 0;
  Src = (void *)(a1 + 536);
  TraceLoggingWriteMiracastStartSessionEntry(&v110);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  if ( !DeviceContextFromName )
  {
    LODWORD(v13) = -1073741275;
    v9 = 2;
    v6 = -2147483642;
    v14 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v14 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v14);
LABEL_39:
    v24 = Event;
    if ( Event )
    {
      KeSetEvent(Event, 0, 0);
      ObfDereferenceObject(v24);
    }
    goto LABEL_41;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v104) >= 0 && !LOBYTE(v104[1]) )
  {
    v107[0] = 0LL;
    v107[1] = 0LL;
    v91 = v107;
    LODWORD(v13) = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( (int)v13 < 0 )
    {
      AcquireMiniportListMutex();
      v9 = 17;
      v6 = -2147483647;
      goto LABEL_7;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *(_DWORD *)(a1 + 524);
  v25 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v25 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v25 + 2 * v3) );
  }
  v26 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v26 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(v26 + 2 * v27) );
  }
  else
  {
    LOWORD(v27) = 0;
  }
  v28 = 2 * ((unsigned __int16)v3 + (unsigned __int16)v27) + 68;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x74727044u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v28);
    v8[1] = v28;
    *v8 = 19;
    v8[10] = 0;
    *((_QWORD *)v8 + 4) = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_WORD *)v8 + 30) = v3;
    *((_WORD *)v8 + 31) = v27;
    if ( (_WORD)v3 )
      memmove(v8 + 16, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v3);
    if ( (_WORD)v27 )
      memmove(
        (char *)v8 + 2 * (unsigned __int16)v3 + 66,
        *(const void **)(DeviceContextFromName + 344),
        2LL * (unsigned __int16)v27);
  }
  DisplayAdapterFdo = DpiMiracastFindDisplayAdapterFdo(*(_QWORD *)(DeviceContextFromName + 184), &v100, &v93);
  v5 = v100;
  if ( DisplayAdapterFdo < 0 || !v100 )
  {
    LODWORD(v13) = -1073741637;
    v6 = -2147483647;
    v9 = 4;
    v88 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v88 + 24) = -2147483647LL;
    WdLogEvent5_WdError(v88);
    goto LABEL_7;
  }
  v99 = 1;
  v102 = (__int64 *)(v100 + 3072);
  if ( *(_QWORD *)(v100 + 3072) )
  {
    LODWORD(v13) = -1073741637;
    v9 = 6;
    v6 = -2147483647;
    v33 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v33 + 24) = -2147483647LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_7;
  }
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v100 + 64), (PVOID)DeviceContextFromName, File, 1u, 0x20u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
  v98 = 1;
  if ( *(_DWORD *)(DeviceContextFromName + 408) )
  {
    LODWORD(v13) = -1073741661;
    v6 = -2147483647;
    v9 = 6;
    v36 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v36 + 24) = DeviceContextFromName;
    *(_QWORD *)(v36 + 32) = -2147483647LL;
    WdLogEvent5_WdError(v36);
LABEL_63:
    v5 = v100;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(DeviceContextFromName + 400) )
  {
    LODWORD(v13) = -1073741275;
    v6 = -2147483642;
    v9 = 2;
    v37 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v37 + 24) = DeviceContextFromName;
    WdLogEvent5_WdEvent(v37);
    goto LABEL_63;
  }
  *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
  *(_DWORD *)(DeviceContextFromName + 656) = 0;
  *(_BYTE *)(DeviceContextFromName + 590) = 0;
  *(_DWORD *)(DeviceContextFromName + 652) = 0;
  *(_DWORD *)(DeviceContextFromName + 664) = 0;
  *(_DWORD *)(DeviceContextFromName + 672) = dword_1C006FD98;
  v38 = v101;
  *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
  *(_DWORD *)(DeviceContextFromName + 648) = 0;
  *(_BYTE *)(DeviceContextFromName + 591) = 0;
  *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
  LODWORD(v38) = *(_DWORD *)(v38 + 524);
  *(_DWORD *)(DeviceContextFromName + 700) = -1;
  *(_DWORD *)(DeviceContextFromName + 788) = v38;
  *(_DWORD *)(DeviceContextFromName + 704) = 0;
  v95 = 1;
  memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
  v39 = Src;
  *(_DWORD *)(DeviceContextFromName + 776) = 256;
  memmove((void *)(DeviceContextFromName + 112), v39, 0x10uLL);
  if ( ++*(_DWORD *)(DeviceContextFromName + 440) >= 0xFFFFFFFE )
    *(_DWORD *)(DeviceContextFromName + 440) = 0;
  v5 = v100;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    Template_pxzqq(
      v40,
      &EventMiracastStartMiracastSession,
      v41,
      *(_QWORD *)(v100 + 48),
      *(_QWORD *)(DeviceContextFromName + 96),
      *(_QWORD *)(DeviceContextFromName + 152),
      *(_DWORD *)(DeviceContextFromName + 656),
      *(_DWORD *)(DeviceContextFromName + 664));
  *(_DWORD *)(DeviceContextFromName + 192) = *(_DWORD *)(v5 + 1108);
  *(_DWORD *)(DeviceContextFromName + 196) = *(_DWORD *)(v5 + 1112);
  v42 = *(_DWORD *)(v5 + 1104);
  if ( v42 == 1 )
  {
    v40 = (*(_DWORD *)(v5 + 1108) << 16) | (unsigned int)(unsigned __int16)*(_DWORD *)(v5 + 1112);
    *(_DWORD *)(DeviceContextFromName + 200) = v40;
  }
  else if ( v42 == 2 )
  {
    v43 = *(_BYTE *)(v5 + 1112);
    LOBYTE(v41) = 97;
    if ( ((unsigned __int8)(v43 - 48) <= 9u || (unsigned __int8)((v43 | 0x20) - 97) <= 5u)
      && ((v44 = *(_BYTE *)(v5 + 1113), (unsigned __int8)(v44 - 48) <= 9u) || (unsigned __int8)((v44 | 0x20) - 97) <= 5u)
      && ((v45 = *(_BYTE *)(v5 + 1114), (unsigned __int8)(v45 - 48) <= 9u) || (unsigned __int8)((v45 | 0x20) - 97) <= 5u)
      && ((v46 = *(_BYTE *)(v5 + 1115), (unsigned __int8)(v46 - 48) <= 9u) || (unsigned __int8)((v46 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v5 + 1112) - 48) > 9u )
        v47 = (v43 - 7) & 0xF;
      else
        v47 = v43 - 48;
      if ( (unsigned __int8)(v44 - 48) > 9u )
        v41 = (v44 - 7) & 0xF;
      else
        v41 = (unsigned int)(v44 - 48);
      if ( (unsigned __int8)(v45 - 48) > 9u )
        v48 = (v45 - 7) & 0xF;
      else
        v48 = v45 - 48;
      if ( (unsigned __int8)(v46 - 48) > 9u )
        v49 = (v46 - 7) & 0xF;
      else
        v49 = v46 - 48;
      v40 = v49 | (16 * (v48 | (16 * ((unsigned int)v41 | (16 * v47)))));
    }
    else
    {
      v40 = *(unsigned __int16 *)(v5 + 1114);
    }
    v50 = *(_BYTE *)(v5 + 1108);
    if ( v50 == 32 || v50 == 95 )
    {
      v52 = *(_BYTE *)(v5 + 1109);
      if ( v52 == 32 || v52 == 95 )
        v51 = *(_DWORD *)(v5 + 1108) & 0xFFFF0000;
      else
        v51 = (*(_DWORD *)(v5 + 1108) & 0xFFFFFF00) << 8;
    }
    else
    {
      v51 = *(_DWORD *)(v5 + 1108) << 16;
    }
    *(_DWORD *)(DeviceContextFromName + 200) = v40 | v51;
  }
  else
  {
    *(_DWORD *)(DeviceContextFromName + 200) = 0;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    Template_qqz(
      v40,
      &EventMiracastPerfTrackStartMiracastSession,
      v41,
      *(unsigned int *)(DeviceContextFromName + 440),
      *(_DWORD *)(DeviceContextFromName + 200),
      *(_QWORD *)(DeviceContextFromName + 352),
      v91,
      v92);
  *(_BYTE *)(DeviceContextFromName + 589) = 0;
  v108[1] = DpiMiracastCbSendUserModeMessage;
  v53 = (_DWORD *)(DeviceContextFromName + 456);
  v108[0] = DeviceContextFromName;
  v108[2] = DpiMiracastCbReportChunkInfo;
  Context = DpiMiracastDdiMiracastCreateContext(v5, v108, DeviceContextFromName + 448, DeviceContextFromName + 456);
  v13 = Context;
  if ( Context < 0 )
  {
    if ( Context == -1073740024 )
    {
      v9 = 7;
      v6 = -2147483646;
    }
    else
    {
      v9 = 8;
      v6 = -2147483647;
    }
    v58 = WdLogNewEntry5_WdError(v56, v55);
    *(_QWORD *)(v58 + 24) = v13;
    WdLogEvent5_WdError(v58);
    *v53 = -1;
    *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    goto LABEL_7;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v57);
  v61 = *(_DWORD *)(v5 + 3064);
  v96 = 1;
  if ( *v53 != v61 )
  {
    LODWORD(v13) = -1073741811;
    v6 = -2147483647;
    v9 = 9;
    v62 = WdLogNewEntry5_WdError(v60, v59);
    *(_QWORD *)(v62 + 24) = -2147483647LL;
    WdLogEvent5_WdError(v62);
    goto LABEL_7;
  }
  *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId();
  *(_BYTE *)(DeviceContextFromName + 588) = 0;
  *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
  *(_WORD *)(v5 + 3088) = 0;
  *(_DWORD *)(v5 + 3092) = 0;
  v63 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v63 )
  {
    v64 = *(_DWORD *)(v5 + 3056);
    v63[4] = 0;
    v63[5] = v64;
    *((_QWORD *)v63 + 1) = v63;
    *(_QWORD *)v63 = v63;
  }
  else
  {
    v63 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 488) = v63;
  v65 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v65 )
  {
    v66 = *(_DWORD *)(v5 + 3056);
    v65[4] = 0;
    v65[5] = v66;
    *((_QWORD *)v65 + 1) = v65;
    *(_QWORD *)v65 = v65;
  }
  else
  {
    v65 = 0LL;
  }
  *(_QWORD *)(v5 + 3096) = v65;
  v67 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v67 )
  {
    v68 = *(_DWORD *)(v5 + 3056);
    v67[4] = 0;
    v67[5] = v68;
    *((_QWORD *)v67 + 1) = v67;
    *(_QWORD *)v67 = v67;
  }
  else
  {
    v67 = 0LL;
  }
  *(_QWORD *)(v5 + 3104) = v67;
  v69 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v71 = v69;
  if ( v69 )
  {
    v70 = (MIRACAST_CHUNK_LIST *)*(unsigned int *)(v5 + 3056);
    v69[4] = 0;
    v69[5] = (_DWORD)v70;
    *((_QWORD *)v69 + 1) = v69;
    *(_QWORD *)v69 = v69;
  }
  else
  {
    v71 = 0LL;
  }
  *(_QWORD *)(v5 + 3112) = v71;
  if ( !*(_QWORD *)(DeviceContextFromName + 488) )
    goto LABEL_149;
  v70 = *(MIRACAST_CHUNK_LIST **)(v5 + 3096);
  if ( !v70 || !*(_QWORD *)(v5 + 3104) || !v71 )
    goto LABEL_149;
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v70, 0x14u) )
  {
LABEL_130:
    v9 = 11;
LABEL_131:
    v6 = -2147483647;
    LODWORD(v13) = -1073741801;
    v72 = WdLogNewEntry5_WdLowResource(v70);
    *(_QWORD *)(v72 + 24) = -2147483647LL;
    WdLogEvent5_WdLowResource(v72);
    goto LABEL_7;
  }
  *(_DWORD *)(v5 + 3092) = 20;
  v73 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v73 )
  {
    v73[2] = 0LL;
    v73[1] = v73;
    *v73 = v73;
  }
  else
  {
    v73 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 504) = v73;
  v74 = (MIRACAST_CHUNK_LIST *)operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v70 = v74;
  if ( v74 )
  {
    *((_QWORD *)v74 + 2) = 0LL;
    *((_QWORD *)v74 + 1) = v74;
    *(_QWORD *)v74 = v74;
  }
  else
  {
    v70 = 0LL;
  }
  v75 = *(_QWORD *)(DeviceContextFromName + 504);
  *(_QWORD *)(DeviceContextFromName + 512) = v70;
  if ( !v75 || !v70 )
  {
LABEL_149:
    v9 = 10;
    goto LABEL_131;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v70, 0x14u) )
    goto LABEL_130;
  KeAcquireInStackQueuedSpinLock(&qword_1C006FD58, &LockHandle);
  *(_QWORD *)(DeviceContextFromName + 432) = *(_QWORD *)(v5 + 24);
  *v102 = DeviceContextFromName;
  *(_QWORD *)(v5 + 3080) = *(_QWORD *)(DeviceContextFromName + 96);
  *(_QWORD *)(DeviceContextFromName + 376) = *(_QWORD *)(v5 + 4512);
  *(_QWORD *)(DeviceContextFromName + 384) = *(_QWORD *)(v5 + 4520);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v97 = 1;
  v102 = (__int64 *)(v5 + 4544);
  LODWORD(v101) = *(unsigned __int16 *)(v5 + 4544) + 72;
  v76 = (unsigned int)v101;
  v78 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v101, 0x74727044u);
  if ( v78 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(DeviceContextFromName + 24));
    _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
    v80 = *(_DWORD *)(DeviceContextFromName + 408);
    v81 = Event;
    *(_QWORD *)(DeviceContextFromName + 472) = Event;
    *(_DWORD *)(DeviceContextFromName + 412) = v80;
    *(_DWORD *)(DeviceContextFromName + 408) = 1;
    ++dword_1C006FD80;
    KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
    if ( v81 )
      KeClearEvent(v81);
    memset(v78, 0, v76);
    v5 = v100;
    *v78 = DeviceContextFromName;
    *((_DWORD *)v78 + 2) = *(_DWORD *)(DeviceContextFromName + 440);
    *(_QWORD *)((char *)v78 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
    *(_QWORD *)((char *)v78 + 20) = *(_QWORD *)(v5 + 2536);
    *(_QWORD *)((char *)v78 + 28) = *(_QWORD *)((char *)&v104[1] + 4);
    *((_DWORD *)v78 + 9) = *(_DWORD *)(DeviceContextFromName + 440);
    *((_DWORD *)v78 + 10) = dword_1C006FD84;
    *((_BYTE *)v78 + 44) = v93;
    v82 = v102;
    *((_OWORD *)v78 + 3) = *(_OWORD *)(DeviceContextFromName + 112);
    memmove(v78 + 8, *(const void **)(v5 + 4552), *(unsigned __int16 *)v82);
    RemlockSize[0] = v101 - 12;
    v84 = DpiMiracastSendAsyncUserModeRequest(
            DeviceContextFromName,
            v83,
            2295812,
            (int)v78 + 12,
            *(size_t *)RemlockSize,
            0LL,
            0,
            (__int64)DpiMiracastStartSessionRequestCallback,
            (__int64)v78,
            (PDEVICE_OBJECT)&DeviceObject,
            DeviceContextFromName + 424);
    v13 = v84;
    if ( v84 >= 0 )
    {
      *(_DWORD *)(DeviceContextFromName + 416) = 2;
      DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_30:
      *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
      if ( v6 < 0 )
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), (PVOID)DeviceContextFromName, 0x20u);
      goto LABEL_32;
    }
    v6 = -2147483647;
    v9 = 13;
    v87 = WdLogNewEntry5_WdError(v86, v85);
    *(_QWORD *)(v87 + 24) = v13;
    WdLogEvent5_WdError(v87);
    *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
    --dword_1C006FD80;
    if ( !DeviceObject )
    {
      ExFreePoolWithTag(v78, 0);
      DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
    }
  }
  else
  {
    LODWORD(v13) = -1073741801;
    v9 = 12;
    v6 = -2147483647;
    v79 = WdLogNewEntry5_WdLowResource(v77);
    *(_QWORD *)(v79 + 24) = -2147483647LL;
    WdLogEvent5_WdLowResource(v79);
  }
LABEL_7:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    Template_qqqz(
      *(unsigned int *)(DeviceContextFromName + 200),
      &EventMiracastStartMiracastSessionFail,
      v15,
      v9,
      v13,
      *(_DWORD *)(DeviceContextFromName + 200),
      *(_QWORD *)(DeviceContextFromName + 352));
  if ( v95 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = v6;
    *(_DWORD *)(DeviceContextFromName + 784) = v9;
    if ( v96 )
    {
      DpiMiracastDdiMiracastDestroyContext(v5, *(_QWORD *)(DeviceContextFromName + 448));
      *(_DWORD *)(DeviceContextFromName + 456) = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    }
    if ( v97 )
    {
      *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
      KeAcquireInStackQueuedSpinLock(&qword_1C006FD58, &LockHandle);
      *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
      *(_QWORD *)(v5 + 3072) = 0LL;
      *(_QWORD *)(v5 + 3080) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeFlushQueuedDpcs();
    }
    v16 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
    if ( v16 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v16);
      *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
    }
    v17 = *(MIRACAST_CHUNK_LIST **)(v5 + 3096);
    if ( v17 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v17);
      *(_QWORD *)(v5 + 3096) = 0LL;
    }
    v18 = *(MIRACAST_CHUNK_LIST **)(v5 + 3104);
    if ( v18 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v18);
      *(_QWORD *)(v5 + 3104) = 0LL;
    }
    v19 = *(MIRACAST_CHUNK_LIST **)(v5 + 3112);
    if ( v19 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v19);
      *(_QWORD *)(v5 + 3112) = 0LL;
    }
    v20 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
    if ( v20 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v20);
      *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
    }
    v21 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
    if ( v21 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v21);
      *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      Template_qqz(
        v22,
        &EventMiracastPerfTrackStartMiracastSessionFailed,
        v23,
        *(unsigned int *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352),
        v91,
        v92);
    TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
  }
  if ( v98 )
    goto LABEL_30;
LABEL_32:
  if ( v99 )
  {
    if ( *(_BYTE *)(v5 + 483) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3888LL));
      v5 = v100;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 < 0 )
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v6 < 0 )
    goto LABEL_39;
LABEL_41:
  *v106 = v13;
  if ( v8 )
  {
    v8[12] = v13;
    v8[13] = v6;
    v8[14] = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    memset(v111, 0, sizeof(v111));
    v111[0] = 0x4000000006LL;
    memset(&v111[1], 0, 36);
    LODWORD(v111[6]) = 69;
    HIDWORD(v111[6]) = v13;
    v111[7] = __PAIR64__(v9, v6);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v111);
  }
  return (unsigned int)v6;
}
