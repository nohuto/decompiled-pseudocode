/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0087604
 * Callers:
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C00531CC (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00846B4 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitDisplayPowerChange @ 0x1C00996FC (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01535C0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0154F8C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0052258 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C00535D8 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0085F48 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0085FB8 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00871BC (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C0155130 (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C01552AC (-CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C0155758 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C0155CF0 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 */

__int64 __fastcall CitpContextFlush(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2, __int64 a3, void *a4)
{
  struct tagPROCESSINFO *v4; // rdi
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // r15
  NTSTATUS v20; // edi
  unsigned int v22; // edx
  unsigned int v23; // edx
  int v24; // eax
  int v25; // r8d
  unsigned int v26; // ecx
  bool v27; // cf
  int v28; // edx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rdx
  int v32; // edx
  unsigned int v33; // eax
  int v34; // r11d
  int v35; // eax
  __int64 v36; // r10
  int v37; // r13d
  int v38; // r8d
  unsigned int v39; // eax
  int v40; // eax
  HANDLE v41; // r14
  void *v42; // rsi
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  char *v50; // rbx
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int64 v55; // rax
  int v56; // eax
  void *Src; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int Size; // [rsp+38h] [rbp-C8h] BYREF
  ULONG Size_4; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Data; // [rsp+48h] [rbp-B8h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+50h] [rbp-B0h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v65; // [rsp+70h] [rbp-90h]
  __int128 v66; // [rsp+80h] [rbp-80h]
  __int128 v67; // [rsp+90h] [rbp-70h]
  __int128 v68; // [rsp+A0h] [rbp-60h]
  __int128 v69; // [rsp+B0h] [rbp-50h]
  __int128 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int128 v73; // [rsp+F0h] [rbp-10h]
  __int128 v74; // [rsp+100h] [rbp+0h]
  __int128 v75; // [rsp+110h] [rbp+10h]
  __int128 v76; // [rsp+120h] [rbp+20h]
  __int128 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  unsigned __int8 v79[16]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR SourceString[40]; // [rsp+160h] [rbp+60h] BYREF

  v4 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 55);
  Src = 0LL;
  Data = 0LL;
  KeyHandle = 0LL;
  if ( v4 )
  {
    CitpSetForegroundProcess(a1, a2, 0LL, 0LL, 0LL, 0LL);
    CitpSetForegroundProcess(a1, a2, v4, 0LL, 0LL, 0LL);
  }
  CitpInteractionSummariesFlush(a1);
  v7 = *((_OWORD *)a1 + 1);
  v65 = *(_OWORD *)a1;
  v8 = *((_OWORD *)a1 + 2);
  v66 = v7;
  v9 = *((_OWORD *)a1 + 3);
  v67 = v8;
  v10 = *((_OWORD *)a1 + 4);
  v68 = v9;
  v11 = *((_OWORD *)a1 + 5);
  v69 = v10;
  v12 = *((_OWORD *)a1 + 6);
  v70 = v11;
  v13 = *((_OWORD *)a1 + 8);
  v71 = v12;
  v72 = *((_OWORD *)a1 + 7);
  v14 = *((_OWORD *)a1 + 9);
  v73 = v13;
  v15 = *((_OWORD *)a1 + 10);
  v74 = v14;
  v16 = *((_OWORD *)a1 + 11);
  v75 = v15;
  v17 = *((_OWORD *)a1 + 12);
  v18 = *((_QWORD *)a1 + 26);
  v76 = v16;
  v77 = v17;
  v78 = v18;
  v19 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  qword_1C018E8E8 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  qword_1C018E8F0 = LocalTime.QuadPart;
  if ( !*((_QWORD *)a1 + 52) && (unsigned __int8)RtlIsMultiSessionSku() || !*((_DWORD *)a1 + 92) )
    return (unsigned int)-1073741637;
  CitpStatIncrement((unsigned __int16 *)a1 + 99, 1);
  LOBYTE(v22) = ~*((_BYTE *)a1 + 432);
  v23 = *((_DWORD *)a1 + 24) + ((v22 >> 1) & 1);
  v24 = -1;
  v25 = -1;
  if ( v23 >= *((_DWORD *)a1 + 24) )
    v24 = v23;
  v26 = *((_DWORD *)a1 + 25) + a2 - *((_DWORD *)a1 + 126);
  v27 = v26 < *((_DWORD *)a1 + 25);
  v28 = -1;
  *((_DWORD *)a1 + 24) = v24;
  if ( !v27 )
    v28 = v26;
  *((_DWORD *)a1 + 25) = v28;
  v29 = *((_DWORD *)a1 + 40);
  v30 = -1;
  v31 = (v19 - *((_QWORD *)a1 + 64)) / 0x2710uLL;
  if ( v31 <= 0xFFFFFFFF )
    v25 = (v19 - *((_QWORD *)a1 + 64)) / 0x2710uLL;
  LOBYTE(v31) = ~*((_BYTE *)a1 + 432);
  LODWORD(v31) = v29 + (((unsigned int)v31 >> 1) & 1);
  if ( (unsigned int)v31 >= v29 )
    v30 = v31;
  v32 = -1;
  *((_DWORD *)a1 + 40) = v30;
  v33 = *((_DWORD *)a1 + 41);
  if ( v33 + v25 >= v33 )
    v32 = v33 + v25;
  *((_DWORD *)a1 + 41) = v32;
  CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 592), a2);
  v35 = v34;
  v37 = *(_DWORD *)(v36 + 12);
  v38 = v37 - *((_DWORD *)a1 + 130);
  if ( (unsigned int)(*((_DWORD *)a1 + 149) + *((_DWORD *)a1 + 44) - *((_DWORD *)a1 + 131)) >= *((_DWORD *)a1 + 44) )
    v35 = *((_DWORD *)a1 + 149) + *((_DWORD *)a1 + 44) - *((_DWORD *)a1 + 131);
  *((_DWORD *)a1 + 44) = v35;
  v39 = *((_DWORD *)a1 + 45);
  if ( v39 + v38 >= v39 )
    v34 = v39 + v38;
  *((_DWORD *)a1 + 45) = v34;
  if ( *((_DWORD *)a1 + 134) )
  {
    if ( !byte_1C018E8B5 )
    {
LABEL_35:
      v42 = Src;
      v41 = KeyHandle;
LABEL_36:
      *((_BYTE *)a1 + 432) |= 2u;
      v56 = *((_DWORD *)a1 + 149);
      v20 = 0;
      *((_DWORD *)a1 + 126) = a2;
      *((_QWORD *)a1 + 64) = v19;
      *((_DWORD *)a1 + 131) = v56;
      *((_DWORD *)a1 + 130) = v37;
      goto LABEL_37;
    }
    CitpBitmapUpdateForTimeRange(a1, *((_DWORD *)a1 + 132), a2, dword_1C018E8D8, (unsigned int)dword_1C018E880);
  }
  if ( !byte_1C018E8B5 )
    goto LABEL_35;
  v40 = CitpEnsureDataKey(&KeyHandle);
  v41 = KeyHandle;
  v20 = v40;
  if ( v40 < 0
    || (v20 = CitpSavedDataPrune(KeyHandle), v20 < 0)
    || (v20 = CitpSavedDataPrepare(a1, (struct _CIT_PERSISTED_HEADER **)&Src, &Size), v20 < 0) )
  {
    v42 = Src;
  }
  else
  {
    v42 = Src;
    v20 = CitpSavedDataCompress(Src, Size, &Data, &Size_4);
    if ( v20 >= 0 )
    {
      CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v79, *((void **)a1 + 52));
      CitpBytesToString(v79, 0x10u, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v20 = ZwSetValueKey(v41, &DestinationString, 0, 3u, Data, Size_4);
      if ( v20 >= 0 )
        goto LABEL_36;
    }
  }
  v43 = v66;
  *(_OWORD *)a1 = v65;
  v44 = v67;
  *((_OWORD *)a1 + 1) = v43;
  v45 = v68;
  *((_OWORD *)a1 + 2) = v44;
  v46 = v69;
  *((_OWORD *)a1 + 3) = v45;
  v47 = v70;
  *((_OWORD *)a1 + 4) = v46;
  v48 = v71;
  *((_OWORD *)a1 + 5) = v47;
  v49 = v72;
  *((_OWORD *)a1 + 6) = v48;
  v50 = (char *)a1 + 128;
  *((_OWORD *)v50 - 1) = v49;
  v51 = v74;
  *(_OWORD *)v50 = v73;
  v52 = v75;
  *((_OWORD *)v50 + 1) = v51;
  v53 = v76;
  *((_OWORD *)v50 + 2) = v52;
  v54 = v77;
  v55 = v78;
  *((_OWORD *)v50 + 3) = v53;
  *((_OWORD *)v50 + 4) = v54;
  *((_QWORD *)v50 + 10) = v55;
LABEL_37:
  if ( v42 )
    Win32FreePool((__int64)v42);
  if ( Data )
    Win32FreePool((__int64)Data);
  if ( v41 )
    ZwClose(v41);
  return (unsigned int)v20;
}
