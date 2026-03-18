/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C003EE7C
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C0167FA0 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C003C964 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C003CA30 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C003CEE8 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003D9C0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0pxzqq @ 0x1C003FEB8 (McTemplateK0pxzqq.c)
 *     McTemplateK0qqqz @ 0x1C003FF98 (McTemplateK0qqqz.c)
 *     McTemplateK0qqz @ 0x1C0040068 (McTemplateK0qqz.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0042B34 (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C0043374 (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DCF54 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C01FE960 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C01FED1C (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C01FEDD0 (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01FEFE0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01FF2C0 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C01FFA78 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C01FFD78 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(__int64 a1, struct _KEVENT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  struct _IO_REMOVE_LOCK *v5; // rsi
  int v6; // r14d
  __int128 v7; // xmm0
  _DWORD *v8; // r12
  int v9; // r15d
  __int64 v10; // rcx
  __int64 DeviceContextFromName; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r8d
  char v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r13d
  _DWORD *PoolWithTag; // rax
  int DisplayAdapterFdo; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  MIRACAST_CHUNK_LIST *v24; // rcx
  MIRACAST_CHUNK_LIST *v25; // rcx
  MIRACAST_CHUNK_LIST *v26; // rcx
  MIRACAST_CHUNK_LIST *v27; // rcx
  MIRACAST_CHUNK_LIST *v28; // rcx
  MIRACAST_CHUNK_LIST *v29; // rcx
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // rdx
  int v37; // ecx
  int v38; // r8d
  int Flink; // eax
  char Blink; // cl
  char v41; // dl
  char v42; // r9
  int v43; // ecx
  int v44; // r10d
  int v45; // edx
  int v46; // edx
  int v47; // eax
  char v48; // al
  unsigned int v49; // eax
  char v50; // al
  _DWORD *v51; // r13
  int Context; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  int v56; // eax
  _DWORD *v57; // rax
  volatile LONG Lock; // ecx
  struct _LIST_ENTRY *v59; // rax
  volatile LONG v60; // ecx
  struct _LIST_ENTRY *v61; // rax
  volatile LONG v62; // ecx
  _DWORD *v63; // rax
  MIRACAST_CHUNK_LIST *v64; // rcx
  _DWORD *v65; // rdx
  __int64 v66; // rax
  _QWORD *v67; // rax
  MIRACAST_CHUNK_LIST *v68; // rax
  size_t v69; // rbx
  _QWORD *v70; // r13
  int v71; // eax
  struct _KEVENT *v72; // rsi
  unsigned __int16 *v73; // rax
  int v74; // edx
  int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  PRKEVENT v79; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  char v82; // [rsp+60h] [rbp-A0h]
  char v83; // [rsp+61h] [rbp-9Fh]
  char v84; // [rsp+62h] [rbp-9Eh]
  char v85; // [rsp+63h] [rbp-9Dh] BYREF
  char DeviceObject; // [rsp+64h] [rbp-9Ch] BYREF
  char v87; // [rsp+65h] [rbp-9Bh]
  char v88; // [rsp+66h] [rbp-9Ah]
  struct _IO_REMOVE_LOCK *v89; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *p_Blink; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  _QWORD v93[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-60h]
  _DWORD *v95; // [rsp+A8h] [rbp-58h]
  __int64 v96; // [rsp+B0h] [rbp-50h]
  __int64 v97; // [rsp+B8h] [rbp-48h]
  _QWORD v98[3]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v100; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v101[8]; // [rsp+100h] [rbp+0h] BYREF

  LOWORD(v3) = 0;
  v94 = a1;
  v95 = a3;
  memset(v93, 0, 20);
  v5 = 0LL;
  v6 = 2;
  Event = a2;
  v7 = *(_OWORD *)(a1 + 536);
  v89 = 0LL;
  v8 = 0LL;
  v85 = 0;
  v100 = v7;
  v84 = 0;
  v9 = 0;
  v82 = 0;
  v87 = 0;
  v83 = 0;
  v88 = 0;
  DeviceObject = 0;
  Src = (void *)(a1 + 536);
  TraceLoggingWriteMiracastStartSessionEntry(&v100);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  if ( !DeviceContextFromName )
  {
    LODWORD(v12) = -1073741275;
    v9 = 2;
    v6 = -2147483642;
    v13 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v13 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v13);
LABEL_150:
    v79 = Event;
    if ( Event )
    {
      KeSetEvent(Event, 0, 0);
      ObfDereferenceObject(v79);
    }
    goto LABEL_152;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v93) >= 0 && !LOBYTE(v93[1]) )
  {
    v96 = 0LL;
    v97 = 0LL;
    LODWORD(v12) = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( (int)v12 < 0 )
    {
      AcquireMiniportListMutex();
      v9 = 17;
      v6 = -2147483647;
      v15 = 0;
      goto LABEL_27;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *(_DWORD *)(a1 + 524);
  v16 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v16 + 2 * v17) );
  }
  else
  {
    LOWORD(v17) = 0;
  }
  v18 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v18 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v18 + 2 * v3) );
  }
  LODWORD(p_Blink) = (unsigned __int16)v17;
  v19 = 2 * ((unsigned __int16)v17 + (unsigned __int16)v3) + 68;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x74727044u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v19);
    v8[1] = v19;
    *v8 = 19;
    v8[10] = 0;
    *((_QWORD *)v8 + 4) = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_WORD *)v8 + 30) = v17;
    *((_WORD *)v8 + 31) = v3;
    if ( (_WORD)v17 )
      memmove(v8 + 16, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v17);
    if ( (_WORD)v3 )
      memmove(
        (char *)v8 + 2 * (unsigned int)((_DWORD)p_Blink + 1) + 64,
        *(const void **)(DeviceContextFromName + 344),
        2LL * (unsigned __int16)v3);
  }
  DisplayAdapterFdo = DpiMiracastFindDisplayAdapterFdo(*(_QWORD *)(DeviceContextFromName + 184), &v89, &v85);
  v5 = v89;
  if ( DisplayAdapterFdo >= 0 && v89 )
  {
    v84 = 1;
    p_Blink = &v89[96].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( v89[96].Common.RemoveEvent.Header.WaitListHead.Blink )
    {
      LODWORD(v12) = -1073741637;
      v9 = 6;
LABEL_25:
      v6 = -2147483647;
      v23 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v23 + 24) = -2147483647LL;
      WdLogEvent5_WdError(v23);
LABEL_26:
      v15 = v82;
      goto LABEL_27;
    }
    IoAcquireRemoveLockEx(v89 + 2, (PVOID)DeviceContextFromName, File, 1u, 0x20u);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
    v15 = 1;
    *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
    v82 = 1;
    if ( *(_DWORD *)(DeviceContextFromName + 408) )
    {
      LODWORD(v12) = -1073741661;
      v6 = -2147483647;
      v9 = 6;
      v33 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v33 + 24) = DeviceContextFromName;
      *(_QWORD *)(v33 + 32) = -2147483647LL;
      WdLogEvent5_WdError(v33);
LABEL_54:
      v5 = v89;
      goto LABEL_27;
    }
    if ( !*(_QWORD *)(DeviceContextFromName + 400) )
    {
      LODWORD(v12) = -1073741275;
      v6 = -2147483642;
      v9 = 2;
      v34 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v34 + 24) = DeviceContextFromName;
      WdLogEvent5_WdEvent(v34);
      goto LABEL_54;
    }
    *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
    *(_DWORD *)(DeviceContextFromName + 656) = 0;
    *(_BYTE *)(DeviceContextFromName + 590) = 0;
    *(_DWORD *)(DeviceContextFromName + 652) = 0;
    *(_DWORD *)(DeviceContextFromName + 664) = 0;
    *(_DWORD *)(DeviceContextFromName + 672) = dword_1C007AB70;
    v35 = v94;
    *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
    *(_DWORD *)(DeviceContextFromName + 648) = 0;
    *(_BYTE *)(DeviceContextFromName + 591) = 0;
    *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
    *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
    *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
    LODWORD(v35) = *(_DWORD *)(v35 + 524);
    *(_DWORD *)(DeviceContextFromName + 700) = -1;
    *(_DWORD *)(DeviceContextFromName + 788) = v35;
    *(_DWORD *)(DeviceContextFromName + 704) = 0;
    v83 = 1;
    memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
    v36 = Src;
    *(_DWORD *)(DeviceContextFromName + 776) = 256;
    memmove((void *)(DeviceContextFromName + 112), v36, 0x10uLL);
    if ( ++*(_DWORD *)(DeviceContextFromName + 440) >= 0xFFFFFFFE )
      *(_DWORD *)(DeviceContextFromName + 440) = 0;
    v5 = v89;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      McTemplateK0pxzqq(
        v37,
        (unsigned int)&EventMiracastStartMiracastSession,
        v38,
        v89[1].Common.RemoveEvent.Header.WaitListHead.Flink,
        *(_QWORD *)(DeviceContextFromName + 96),
        *(_QWORD *)(DeviceContextFromName + 152),
        *(_DWORD *)(DeviceContextFromName + 656),
        *(_DWORD *)(DeviceContextFromName + 664));
    *(_DWORD *)(DeviceContextFromName + 192) = HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Flink);
    *(_DWORD *)(DeviceContextFromName + 196) = v5[34].Common.RemoveEvent.Header.WaitListHead.Blink;
    Flink = (int)v5[34].Common.RemoveEvent.Header.WaitListHead.Flink;
    if ( Flink == 1 )
    {
      v37 = (HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Flink) << 16) | (unsigned __int16)LODWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink);
      *(_DWORD *)(DeviceContextFromName + 200) = v37;
    }
    else if ( Flink == 2 )
    {
      Blink = (char)v5[34].Common.RemoveEvent.Header.WaitListHead.Blink;
      if ( ((unsigned __int8)(Blink - 48) <= 9u || (unsigned __int8)((Blink | 0x20) - 97) <= 5u)
        && ((v41 = BYTE1(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink), (unsigned __int8)(v41 - 48) <= 9u)
         || (unsigned __int8)((v41 | 0x20) - 97) <= 5u)
        && ((LOBYTE(v38) = BYTE2(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink), (unsigned __int8)(v38 - 48) <= 9u)
         || (unsigned __int8)((v38 | 0x20) - 97) <= 5u)
        && ((v42 = BYTE3(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink), (unsigned __int8)(v42 - 48) <= 9u)
         || (unsigned __int8)((v42 | 0x20) - 97) <= 5u) )
      {
        if ( (unsigned __int8)(Blink - 48) > 9u )
          v43 = (Blink - 7) & 0xF;
        else
          v43 = Blink - 48;
        if ( (unsigned __int8)(v41 - 48) > 9u )
          v44 = (v41 - 7) & 0xF;
        else
          v44 = v41 - 48;
        v45 = (char)v38;
        LOBYTE(v38) = v38 - 48;
        if ( (unsigned __int8)v38 > 9u )
          v46 = ((_BYTE)v45 - 7) & 0xF;
        else
          v46 = v45 - 48;
        if ( (unsigned __int8)(v42 - 48) > 9u )
          v47 = (v42 - 7) & 0xF;
        else
          v47 = v42 - 48;
        v37 = v47 | (16 * (v46 | (16 * (v44 | (16 * v43)))));
      }
      else
      {
        v37 = WORD1(v5[34].Common.RemoveEvent.Header.WaitListHead.Blink);
      }
      v48 = BYTE4(v5[34].Common.RemoveEvent.Header.WaitListHead.Flink);
      if ( v48 == 32 || v48 == 95 )
      {
        v50 = BYTE5(v5[34].Common.RemoveEvent.Header.WaitListHead.Flink);
        if ( v50 == 32 || v50 == 95 )
          v49 = HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Flink) & 0xFFFF0000;
        else
          v49 = (HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Flink) & 0xFFFFFF00) << 8;
      }
      else
      {
        v49 = HIDWORD(v5[34].Common.RemoveEvent.Header.WaitListHead.Flink) << 16;
      }
      *(_DWORD *)(DeviceContextFromName + 200) = v37 | v49;
    }
    else
    {
      *(_DWORD *)(DeviceContextFromName + 200) = 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0qqz(
        v37,
        (unsigned int)&EventMiracastPerfTrackStartMiracastSession,
        v38,
        *(_DWORD *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352));
    *(_BYTE *)(DeviceContextFromName + 589) = 0;
    v98[1] = DpiMiracastCbSendUserModeMessage;
    v51 = (_DWORD *)(DeviceContextFromName + 456);
    v98[0] = DeviceContextFromName;
    v98[2] = DpiMiracastCbReportChunkInfo;
    Context = DpiMiracastDdiMiracastCreateContext(v5, v98, DeviceContextFromName + 448, DeviceContextFromName + 456);
    v12 = Context;
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
      v55 = WdLogNewEntry5_WdError(v53);
      *(_QWORD *)(v55 + 24) = v12;
      WdLogEvent5_WdError(v55);
      *v51 = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
      goto LABEL_142;
    }
    DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v54);
    v56 = (int)v5[96].Common.RemoveEvent.Header.WaitListHead.Flink;
    v87 = 1;
    if ( *v51 != v56 )
    {
      LODWORD(v12) = -1073741811;
      v9 = 9;
      goto LABEL_25;
    }
    *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId(v22);
    *(_BYTE *)(DeviceContextFromName + 588) = 0;
    *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
    LOWORD(v5[97].Common.RemoveEvent.Header.Lock) = 0;
    v5[97].Common.RemoveEvent.Header.SignalState = 0;
    v57 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v57 )
    {
      Lock = v5[96].Common.RemoveEvent.Header.Lock;
      v57[4] = 0;
      v57[5] = Lock;
      *((_QWORD *)v57 + 1) = v57;
      *(_QWORD *)v57 = v57;
    }
    else
    {
      v57 = 0LL;
    }
    *(_QWORD *)(DeviceContextFromName + 488) = v57;
    v59 = (struct _LIST_ENTRY *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v59 )
    {
      v60 = v5[96].Common.RemoveEvent.Header.Lock;
      LODWORD(v59[1].Flink) = 0;
      HIDWORD(v59[1].Flink) = v60;
      v59->Blink = v59;
      v59->Flink = v59;
    }
    else
    {
      v59 = 0LL;
    }
    v5[97].Common.RemoveEvent.Header.WaitListHead.Flink = v59;
    v61 = (struct _LIST_ENTRY *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v61 )
    {
      v62 = v5[96].Common.RemoveEvent.Header.Lock;
      LODWORD(v61[1].Flink) = 0;
      HIDWORD(v61[1].Flink) = v62;
      v61->Blink = v61;
      v61->Flink = v61;
    }
    else
    {
      v61 = 0LL;
    }
    v5[97].Common.RemoveEvent.Header.WaitListHead.Blink = v61;
    v63 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    v65 = v63;
    if ( v63 )
    {
      v64 = (MIRACAST_CHUNK_LIST *)(unsigned int)v5[96].Common.RemoveEvent.Header.Lock;
      v63[4] = 0;
      v63[5] = (_DWORD)v64;
      *((_QWORD *)v63 + 1) = v63;
      *(_QWORD *)v63 = v63;
    }
    else
    {
      v65 = 0LL;
    }
    *(_QWORD *)&v5[98].Common.Removed = v65;
    if ( *(_QWORD *)(DeviceContextFromName + 488) )
    {
      v64 = (MIRACAST_CHUNK_LIST *)v5[97].Common.RemoveEvent.Header.WaitListHead.Flink;
      if ( v64 )
      {
        if ( v5[97].Common.RemoveEvent.Header.WaitListHead.Blink && v65 )
        {
          if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v64, 0x14u) )
          {
LABEL_121:
            v9 = 11;
LABEL_122:
            LODWORD(v12) = -1073741801;
            v6 = -2147483647;
            v66 = WdLogNewEntry5_WdLowResource(v64);
            *(_QWORD *)(v66 + 24) = -2147483647LL;
            WdLogEvent5_WdLowResource(v66);
            goto LABEL_26;
          }
          v5[97].Common.RemoveEvent.Header.SignalState = 20;
          v67 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
          if ( v67 )
          {
            v67[2] = 0LL;
            v67[1] = v67;
            *v67 = v67;
          }
          else
          {
            v67 = 0LL;
          }
          *(_QWORD *)(DeviceContextFromName + 504) = v67;
          v68 = (MIRACAST_CHUNK_LIST *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
          v64 = v68;
          if ( v68 )
          {
            *((_QWORD *)v68 + 2) = 0LL;
            *((_QWORD *)v68 + 1) = v68;
            *(_QWORD *)v68 = v68;
          }
          else
          {
            v64 = 0LL;
          }
          *(_QWORD *)(DeviceContextFromName + 512) = v64;
          if ( *(_QWORD *)(DeviceContextFromName + 504) && v64 )
          {
            if ( MIRACAST_CHUNK_LIST::AllocateNewChunks(v64, 0x14u) )
            {
              KeAcquireInStackQueuedSpinLock(&qword_1C007AB30, &LockHandle);
              *(_QWORD *)(DeviceContextFromName + 432) = v5->Common.RemoveEvent.Header.WaitListHead.Blink;
              *p_Blink = DeviceContextFromName;
              *(_QWORD *)&v5[97].Common.Removed = *(_QWORD *)(DeviceContextFromName + 96);
              *(_QWORD *)(DeviceContextFromName + 376) = *(_QWORD *)&v5[146].Common.RemoveEvent.Header.Lock;
              *(_QWORD *)(DeviceContextFromName + 384) = v5[146].Common.RemoveEvent.Header.WaitListHead.Flink;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v88 = 1;
              Src = &v5[147].Common.RemoveEvent;
              LODWORD(p_Blink) = LOWORD(v5[147].Common.RemoveEvent.Header.Lock) + 72;
              v69 = (unsigned int)p_Blink;
              v70 = ExAllocatePoolWithTag(PagedPool, (unsigned int)p_Blink, 0x74727044u);
              if ( v70 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(DeviceContextFromName + 24));
                _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
                v71 = *(_DWORD *)(DeviceContextFromName + 408);
                v72 = Event;
                *(_QWORD *)(DeviceContextFromName + 472) = Event;
                *(_DWORD *)(DeviceContextFromName + 412) = v71;
                *(_DWORD *)(DeviceContextFromName + 408) = 1;
                ++dword_1C007AB58;
                KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
                if ( v72 )
                  KeClearEvent(v72);
                memset(v70, 0, v69);
                v5 = v89;
                *v70 = DeviceContextFromName;
                *((_DWORD *)v70 + 2) = *(_DWORD *)(DeviceContextFromName + 440);
                *(_QWORD *)((char *)v70 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
                *(_QWORD *)((char *)v70 + 20) = *(_QWORD *)&v5[79].Common.RemoveEvent.Header.Lock;
                *(_QWORD *)((char *)v70 + 28) = *(_QWORD *)((char *)&v93[1] + 4);
                *((_DWORD *)v70 + 9) = *(_DWORD *)(DeviceContextFromName + 440);
                *((_DWORD *)v70 + 10) = dword_1C007AB5C;
                *((_BYTE *)v70 + 44) = v85;
                v73 = (unsigned __int16 *)Src;
                *((_OWORD *)v70 + 3) = *(_OWORD *)(DeviceContextFromName + 112);
                memmove(v70 + 8, v5[147].Common.RemoveEvent.Header.WaitListHead.Flink, *v73);
                RemlockSize[0] = (_DWORD)p_Blink - 12;
                v75 = DpiMiracastSendAsyncUserModeRequest(
                        DeviceContextFromName,
                        v74,
                        2295812,
                        (int)v70 + 12,
                        *(size_t *)RemlockSize,
                        0LL,
                        0,
                        (__int64)DpiMiracastStartSessionRequestCallback,
                        (__int64)v70,
                        (PDEVICE_OBJECT)&DeviceObject,
                        DeviceContextFromName + 424);
                v12 = v75;
                if ( v75 >= 0 )
                {
                  *(_DWORD *)(DeviceContextFromName + 416) = 2;
                  DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_50:
                  *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
                  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
                  if ( v6 < 0 )
                    IoReleaseRemoveLockEx(v5 + 2, (PVOID)DeviceContextFromName, 0x20u);
                  goto LABEL_143;
                }
                v6 = -2147483647;
                v9 = 13;
                v77 = WdLogNewEntry5_WdError(v76);
                *(_QWORD *)(v77 + 24) = v12;
                WdLogEvent5_WdError(v77);
                *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
                --dword_1C007AB58;
                if ( !DeviceObject )
                {
                  ExFreePoolWithTag(v70, 0);
                  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
                }
                goto LABEL_26;
              }
              v9 = 12;
              goto LABEL_122;
            }
            goto LABEL_121;
          }
        }
      }
    }
    v9 = 10;
    goto LABEL_122;
  }
  LODWORD(v12) = -1073741637;
  v6 = -2147483647;
  v9 = 4;
  v78 = WdLogNewEntry5_WdError(v22);
  *(_QWORD *)(v78 + 24) = -2147483647LL;
  WdLogEvent5_WdError(v78);
LABEL_142:
  v15 = v84;
  v83 = v84;
LABEL_27:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    McTemplateK0qqqz(
      *(_DWORD *)(DeviceContextFromName + 200),
      (unsigned int)&EventMiracastStartMiracastSessionFail,
      v14,
      v9,
      v12,
      *(_DWORD *)(DeviceContextFromName + 200),
      *(_QWORD *)(DeviceContextFromName + 352));
  if ( v83 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = v6;
    *(_DWORD *)(DeviceContextFromName + 784) = v9;
    if ( v87 )
    {
      DpiMiracastDdiMiracastDestroyContext(v5, *(_QWORD *)(DeviceContextFromName + 448));
      *(_DWORD *)(DeviceContextFromName + 456) = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    }
    if ( v88 )
    {
      *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
      KeAcquireInStackQueuedSpinLock(&qword_1C007AB30, &LockHandle);
      *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
      v5[96].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
      *(_QWORD *)&v5[97].Common.Removed = 0LL;
      *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeFlushQueuedDpcs();
    }
    v24 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
    if ( v24 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v24);
      *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
    }
    v25 = (MIRACAST_CHUNK_LIST *)v5[97].Common.RemoveEvent.Header.WaitListHead.Flink;
    if ( v25 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v25);
      v5[97].Common.RemoveEvent.Header.WaitListHead.Flink = 0LL;
    }
    v26 = (MIRACAST_CHUNK_LIST *)v5[97].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( v26 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v26);
      v5[97].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
    }
    v27 = *(MIRACAST_CHUNK_LIST **)&v5[98].Common.Removed;
    if ( v27 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v27);
      *(_QWORD *)&v5[98].Common.Removed = 0LL;
    }
    v28 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
    if ( v28 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v28);
      *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
    }
    v29 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
    if ( v29 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v29);
      *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0qqz(
        v30,
        (unsigned int)&EventMiracastPerfTrackStartMiracastSessionFailed,
        v31,
        *(_DWORD *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352));
    TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
  }
  if ( v15 )
    goto LABEL_50;
LABEL_143:
  if ( v84 )
  {
    if ( v5[15].Common.Reserved[2] )
    {
      _InterlockedDecrement((volatile signed __int32 *)&v5->Common.RemoveEvent.Header.WaitListHead.Blink[4].Flink[244].Blink);
      v5 = v89;
    }
    ExReleaseResourceLite(*(PERESOURCE *)&v5[5].Common.RemoveEvent.Header.Lock);
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx(v5 + 2, v5, 0x20u);
  }
  if ( v6 < 0 )
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( v6 < 0 )
    goto LABEL_150;
LABEL_152:
  *v95 = v12;
  if ( v8 )
  {
    v8[12] = v12;
    v8[13] = v6;
    v8[14] = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    memset(v101, 0, sizeof(v101));
    v101[0] = 0x4000000006LL;
    memset(&v101[1], 0, 36);
    LODWORD(v101[6]) = 69;
    HIDWORD(v101[6]) = v12;
    v101[7] = __PAIR64__(v9, v6);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v101);
  }
  return (unsigned int)v6;
}
