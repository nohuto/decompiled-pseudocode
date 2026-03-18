/*
 * XREFs of SfnIMECONTROL @ 0x1C01F9180
 * Callers:
 *     <none>
 * Callees:
 *     MBToWCSEx @ 0x1C0007014 (MBToWCSEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00C568C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     WCSToMBEx @ 0x1C00C5DAC (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     THREAD_CODEPAGE @ 0x1C01FF2F0 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall SfnIMECONTROL(
        ULONG_PTR a1,
        int a2,
        unsigned __int64 a3,
        WCHAR *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r14
  unsigned int v12; // edx
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v16; // r15d
  unsigned __int8 *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r8d
  char *v21; // rdx
  WCHAR *v22; // rax
  char *v23; // r12
  _WORD *v24; // r15
  _BYTE *v25; // r9
  int v26; // r14d
  int v27; // r14d
  PCHAR v28; // r8
  signed __int64 v29; // rsi
  unsigned __int16 v30; // ax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // r14d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 *v41; // r14
  __int64 v42; // r14
  __int128 *v43; // rcx
  CHAR *v44; // xmm1_8
  _QWORD *v45; // r9
  char *v46; // rcx
  __int16 v47; // cx
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ebx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 *v56; // rcx
  unsigned int v57; // [rsp+30h] [rbp-438h]
  int v58; // [rsp+40h] [rbp-428h] BYREF
  int v59; // [rsp+44h] [rbp-424h] BYREF
  void *v60; // [rsp+48h] [rbp-420h] BYREF
  _QWORD v61[6]; // [rsp+50h] [rbp-418h] BYREF
  ULONG_PTR v62; // [rsp+80h] [rbp-3E8h]
  char *v63; // [rsp+88h] [rbp-3E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-3D8h] BYREF
  __int64 v65; // [rsp+98h] [rbp-3D0h]
  int *v66; // [rsp+A0h] [rbp-3C8h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-3C0h]
  __int128 v68; // [rsp+B0h] [rbp-3B8h]
  __int64 v69; // [rsp+C0h] [rbp-3A8h]
  unsigned int v70; // [rsp+C8h] [rbp-3A0h]
  __int64 v71; // [rsp+E0h] [rbp-388h] BYREF
  ULONG_PTR v72; // [rsp+E8h] [rbp-380h]
  __int128 v73; // [rsp+130h] [rbp-338h]
  volatile void *Address; // [rsp+140h] [rbp-328h]
  __int128 v75; // [rsp+148h] [rbp-320h]
  CHAR *v76; // [rsp+158h] [rbp-310h]
  _QWORD v77[4]; // [rsp+160h] [rbp-308h] BYREF
  _DWORD v78[28]; // [rsp+180h] [rbp-2E8h] BYREF
  __int128 v79; // [rsp+1F0h] [rbp-278h] BYREF
  __int64 v80; // [rsp+200h] [rbp-268h]
  unsigned int v81; // [rsp+208h] [rbp-260h]
  unsigned __int8 v82[36]; // [rsp+20Ch] [rbp-25Ch] BYREF
  unsigned __int8 v83[512]; // [rsp+230h] [rbp-238h] BYREF

  v60 = a4;
  v58 = a2;
  v10 = a1;
  RegionSize = a1;
  v65 = 0LL;
  v67 = gptiCurrent;
  if ( a1 )
    v11 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  v62 = v11;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
    goto LABEL_23;
  if ( (unsigned int)a3 <= 8 )
  {
    v12 = 1;
    v16 = 32;
    goto LABEL_24;
  }
  if ( (unsigned int)a3 <= 0xA )
    goto LABEL_21;
  if ( (unsigned int)a3 <= 0xC )
  {
    v12 = 1;
    v16 = 28;
LABEL_24:
    v57 = v16;
    goto LABEL_25;
  }
  if ( (_DWORD)a3 == 17 )
  {
LABEL_21:
    v12 = 1;
    v16 = (a7 & 1) != 0 ? 60 : 92;
    goto LABEL_24;
  }
  if ( (_DWORD)a3 != 24 )
  {
LABEL_23:
    v12 = 0;
    v16 = 0;
    goto LABEL_24;
  }
  v12 = 1;
  v13 = (unsigned __int64)*(unsigned int *)a4 << 9;
  if ( v13 > 0xFFFFFFFF )
  {
    LODWORD(v13) = -1;
    v14 = -2147024362;
  }
  else
  {
    v14 = 0;
  }
  if ( v14 < 0 )
    return 0LL;
  v16 = -1;
  if ( (int)v13 + 4 >= (unsigned int)v13 )
    v16 = v13 + 4;
  v57 = v16;
  v70 = v16;
  if ( (int)v13 + 4 < (unsigned int)v13 )
    return 0LL;
LABEL_25:
  if ( v12 )
  {
    v17 = AllocCallbackMessage(104, v12, v16, v83, 1, 0x200uLL);
    if ( !v17 )
      return 0LL;
  }
  else
  {
    v17 = (unsigned __int8 *)v78;
    memset(v78, 0, 0x68uLL);
    v78[0] = 104;
  }
  if ( v17 != (unsigned __int8 *)v78 && v17 != v83 )
    PushW32ThreadLock((__int64)v17, v77, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 5) = v11;
  *((_DWORD *)v17 + 12) = v58;
  *((_QWORD *)v17 + 7) = a3;
  *((_QWORD *)v17 + 8) = a4;
  *((_QWORD *)v17 + 9) = a5;
  *((_QWORD *)v17 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_93;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_64;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_64;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_64;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_93;
          goto LABEL_41;
        }
LABEL_64:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v17, v16, (void **)v17 + 11) >= 0 )
        {
          *((_DWORD *)v17 + 24) = v16;
          v71 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v71;
          v72 = v10;
          if ( v10 )
            ++*(_DWORD *)(v10 + 8);
          v33 = v67;
          v34 = *(_QWORD *)(v67 + 432);
          v68 = *(_OWORD *)(v34 + 64);
          v69 = *(_QWORD *)(v34 + 80);
          *(_QWORD *)(v34 + 72) = v62;
          if ( v10 )
            v35 = *(_QWORD *)v10;
          else
            v35 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v33 + 432) + 64LL) = v35;
          if ( v10 )
            v36 = *(_QWORD *)(v10 + 280);
          else
            v36 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v33 + 432) + 80LL) = v36;
          if ( gdwInAtomicOperation )
          {
            v36 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v36, gdwInAtomicOperation, v31, v32);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v17 + 2) = 0LL;
          v37 = KeUserModeCallback(94LL, v17, *(unsigned int *)v17, v61, &v59);
          EtwTraceEndCallback(94LL);
          EnterCrit(0LL, 1LL);
          ThreadUnlock1(v39, v38);
          v40 = *(_QWORD *)(v33 + 432);
          *(_OWORD *)(v40 + 64) = v68;
          *(_QWORD *)(v40 + 80) = v69;
          if ( v37 >= 0 && v59 == 24 )
          {
            v41 = (__int64 *)v61[0];
            if ( (unsigned __int64)(v61[0] + 8LL) < v61[0] || (unsigned __int64)(v61[0] + 8LL) > W32UserProbeAddress )
              v41 = (__int64 *)W32UserProbeAddress;
            v42 = *v41;
            v65 = v42;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v43 = (__int128 *)v61[0];
              if ( (unsigned __int64)(v61[0] + 24LL) < v61[0] || (unsigned __int64)(v61[0] + 24LL) > W32UserProbeAddress )
                v43 = (__int128 *)W32UserProbeAddress;
              v73 = *v43;
              v44 = (CHAR *)*((_QWORD *)v43 + 2);
              Address = v44;
              v75 = v73;
              v76 = v44;
              ProbeForRead(v44, v16, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(v60, v44, v16);
              }
              else
              {
                v44[v16 - 1] = 0;
                v45 = v60;
                v46 = (char *)v60 + 28;
                v63 = (char *)v60 + 28;
                *(_OWORD *)v60 = *(_OWORD *)v44;
                v45[2] = *((_QWORD *)v44 + 2);
                *((_DWORD *)v45 + 6) = *((_DWORD *)v44 + 6);
                memset(v46, 0, 0x40uLL);
                MBToWCSEx(v47, v44 + 28, -1, (PWCH *)&v63, 32);
              }
            }
            goto LABEL_111;
          }
        }
        goto LABEL_110;
      }
    }
  }
LABEL_41:
  switch ( a3 )
  {
    case 8uLL:
      v20 = 32;
      goto LABEL_49;
    case 0xCuLL:
      v20 = 28;
      goto LABEL_49;
    case 0xAuLL:
      if ( (a7 & 1) != 0 )
      {
        v60 = v82;
        v79 = *(_OWORD *)a4;
        v80 = *((_QWORD *)a4 + 2);
        v81 = *((_DWORD *)a4 + 6);
        memset(v82, 0, 0x20uLL);
        WCSToMBEx(0, a4 + 14, -1, (PCHAR *)&v60, 0x20u);
        v20 = 60;
        v21 = (char *)&v79;
        goto LABEL_50;
      }
      v20 = 92;
LABEL_49:
      v21 = (char *)a4;
LABEL_50:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, v21, v20, (void **)v17 + 8) < 0 )
        goto LABEL_110;
      goto LABEL_93;
  }
  if ( (a7 & 1) == 0 )
  {
    v20 = v16;
    goto LABEL_49;
  }
  v66 = &v58;
  v22 = (WCHAR *)Win32AllocPool(v16, 1835627349LL);
  v23 = (char *)v22;
  v63 = (char *)v22;
  if ( !v22 )
    goto LABEL_110;
  v24 = v22 + 2;
  v25 = v60;
  v26 = *(_DWORD *)v60;
  *(_DWORD *)v22 = *(_DWORD *)v60;
  v27 = v26 << 8;
  if ( v27 )
  {
    v28 = (char *)&v58 + 1;
    v29 = v25 - (_BYTE *)v22;
    do
    {
      --v27;
      *v28 = 0;
      v30 = THREAD_CODEPAGE();
      WCSToMBEx(v30, (_WORD *)((char *)v24 + v29), 1, (PCHAR *)&v66, 2u);
      v28 = (char *)v66 + 1;
      if ( *((_BYTE *)v66 + 1) )
        *v24 = _byteswap_ushort(*(_WORD *)v66);
      else
        *v24 = *(unsigned __int8 *)v66;
      ++v24;
    }
    while ( v27 );
    v10 = RegionSize;
    v23 = v63;
  }
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, v23, v57, (void **)v17 + 8) < 0 )
    goto LABEL_110;
  Win32FreePool(v23);
LABEL_93:
  v71 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v71;
  v72 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v48 = v67;
  v49 = *(_QWORD *)(v67 + 432);
  v68 = *(_OWORD *)(v49 + 64);
  v69 = *(_QWORD *)(v49 + 80);
  *(_QWORD *)(v49 + 72) = v62;
  if ( v10 )
    v50 = *(_QWORD *)v10;
  else
    v50 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v48 + 432) + 64LL) = v50;
  if ( v10 )
    v51 = *(_QWORD *)(v10 + 280);
  else
    v51 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v48 + 432) + 80LL) = v51;
  if ( gdwInAtomicOperation )
  {
    v51 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v51, gdwInAtomicOperation, v18, v19);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v52 = KeUserModeCallback(94LL, v17, *(unsigned int *)v17, v61, &v59);
  EtwTraceEndCallback(94LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v54, v53);
  v55 = *(_QWORD *)(v48 + 432);
  *(_OWORD *)(v55 + 64) = v68;
  *(_QWORD *)(v55 + 80) = v69;
  if ( v52 >= 0 && v59 == 24 )
  {
    v56 = (__int64 *)v61[0];
    if ( (unsigned __int64)(v61[0] + 8LL) < v61[0] || (unsigned __int64)(v61[0] + 8LL) > W32UserProbeAddress )
      v56 = (__int64 *)W32UserProbeAddress;
    v42 = *v56;
    v65 = *v56;
    goto LABEL_111;
  }
LABEL_110:
  v42 = 0LL;
LABEL_111:
  if ( v17 != (unsigned __int8 *)v78 && v17 != v83 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v77);
  }
  return v42;
}
