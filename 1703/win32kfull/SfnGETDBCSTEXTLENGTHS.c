/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C00C3FA0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00C511C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00C568C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rbx
  __int64 v22; // rbx
  int v24; // ecx
  int v25; // edx
  BOOL v26; // eax
  int v27; // eax
  unsigned int v28; // r15d
  unsigned int v29; // r14d
  __int64 v30; // r12
  unsigned __int8 *v31; // rax
  unsigned __int8 *v32; // rbx
  int v33; // ecx
  ULONG_PTR v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 *v43; // rdi
  __int64 v44; // rdi
  unsigned __int64 v45; // rcx
  __int64 v46; // xmm1_8
  int v47; // eax
  bool v48; // cl
  bool v49; // al
  bool v50; // cl
  bool v51; // zf
  int v52; // [rsp+30h] [rbp-408h]
  int v53; // [rsp+34h] [rbp-404h]
  int v54; // [rsp+40h] [rbp-3F8h] BYREF
  int v55; // [rsp+44h] [rbp-3F4h]
  int v56[10]; // [rsp+48h] [rbp-3F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-3C8h] BYREF
  __int64 v58; // [rsp+78h] [rbp-3C0h]
  unsigned __int64 v59; // [rsp+80h] [rbp-3B8h] BYREF
  __int64 v60; // [rsp+88h] [rbp-3B0h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-398h] BYREF
  _QWORD v62[5]; // [rsp+B0h] [rbp-388h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-360h]
  __int64 v64; // [rsp+E8h] [rbp-350h]
  __int128 v65; // [rsp+F0h] [rbp-348h]
  __int64 v66; // [rsp+100h] [rbp-338h]
  _QWORD v67[3]; // [rsp+140h] [rbp-2F8h] BYREF
  _QWORD v68[3]; // [rsp+158h] [rbp-2E0h] BYREF
  __int128 v69; // [rsp+170h] [rbp-2C8h] BYREF
  __int64 v70; // [rsp+180h] [rbp-2B8h]
  _QWORD v71[3]; // [rsp+188h] [rbp-2B0h] BYREF
  unsigned __int8 v72[96]; // [rsp+1A0h] [rbp-298h] BYREF
  unsigned __int8 v73[512]; // [rsp+200h] [rbp-238h] BYREF

  RegionSize = a3;
  v55 = a2;
  v53 = a4 != 0;
  v52 = a7 & 1;
  v11 = *(_QWORD *)(a1 + 160);
  v58 = 0LL;
  v12 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  memset(v62, 0, sizeof(v62));
  v62[0] = v12;
  LODWORD(v62[1]) = a2;
  v62[2] = a3;
  v62[3] = a5;
  v62[4] = a6;
  v67[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v67;
  v67[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v63 = *(_OWORD *)(v15 + 64);
  v64 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = *(_QWORD *)a1;
  v16 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v16;
  if ( gdwInAtomicOperation )
  {
    v16 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation, v13, v14);
  EtwTraceBeginCallback(6LL);
  v17 = KeUserModeCallback(6LL, v62, 40LL, &v61, &v54);
  EtwTraceEndCallback(6LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v63;
  *(_QWORD *)(v20 + 80) = v64;
  if ( v17 < 0 || v54 != 24 )
    return 0LL;
  v21 = (__int64 *)v61;
  if ( v61 + 8 < v61 || v61 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v58 = v22;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 )
    return v22;
  if ( (a7 & 2) != 0 )
    return v22;
  if ( (int)v22 <= 0 )
    return v22;
  v24 = v53;
  v25 = a7 & 1;
  if ( v53 == v52 )
    return v22;
  if ( *(_QWORD *)(a1 + 160) != v11 )
  {
LABEL_57:
    v22 *= 2LL;
    return v22;
  }
  v26 = 0;
  if ( a2 == 14 )
    goto LABEL_17;
  if ( !HMValidateHandleNoSecure(*(_QWORD *)a1, 1) )
    return 0LL;
  v47 = *(_DWORD *)(a1 + 68);
  if ( a2 == 394 )
  {
    v48 = (v47 & 0x30) != 0;
    v49 = (v47 & 0x40) == 0;
    goto LABEL_54;
  }
  if ( a2 != 329 )
    return 0LL;
  v48 = (v47 & 0x30) != 0;
  v49 = (*(_DWORD *)(a1 + 68) & 0x200) == 0;
LABEL_54:
  v50 = v49 && v48;
  v26 = v50;
  v25 = a7 & 1;
  v51 = !v50;
  v24 = v53;
  if ( !v51 )
  {
    v22 = 8LL;
    v58 = 8LL;
  }
LABEL_17:
  if ( v26 )
    return v22;
  v27 = *(_DWORD *)(gptiCurrent + 440LL);
  if ( (v27 & 0x4000000) != 0 )
  {
    if ( v24 )
      goto LABEL_57;
    return v22;
  }
  v28 = v22 + 1;
  v29 = v22 + 1;
  v60 = 0LL;
  v30 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  *(_DWORD *)(gptiCurrent + 440LL) = v27 | 0x4000000;
  if ( !v25 )
    v29 = 2 * v28;
  v31 = AllocCallbackMessage(96, 1u, v29, v73, 0, 0x200uLL);
  v32 = v31;
  if ( !v31 )
    return 0LL;
  if ( v31 != v72 && v31 != v73 )
    PushW32ThreadLock((__int64)v31, v71, (__int64)Win32FreePool);
  *((_QWORD *)v32 + 5) = v30;
  v33 = v55;
  *((_DWORD *)v32 + 12) = v55 - 1;
  v34 = v28;
  if ( v33 != 14 )
    v34 = RegionSize;
  *((_QWORD *)v32 + 7) = v34;
  *((_QWORD *)v32 + 8) = a5;
  *((_QWORD *)v32 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v32, v29, (void **)v32 + 10) < 0 )
    goto LABEL_46;
  *((_DWORD *)v32 + 22) = v29;
  v68[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v68;
  v68[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  v37 = *(_QWORD *)(gptiCurrent + 432LL);
  v65 = *(_OWORD *)(v37 + 64);
  v66 = *(_QWORD *)(v37 + 80);
  *(_QWORD *)(v37 + 72) = v30;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = *(_QWORD *)a1;
  v38 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v38;
  if ( gdwInAtomicOperation )
  {
    v38 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v38, gdwInAtomicOperation, v35, v36);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v32 + 2) = 0LL;
  v39 = KeUserModeCallback(35LL, v32, *(unsigned int *)v32, &v59, v56);
  EtwTraceEndCallback(35LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v41, v40);
  v42 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v42 + 64) = v65;
  *(_QWORD *)(v42 + 80) = v66;
  if ( v39 < 0 )
    goto LABEL_46;
  if ( v56[0] == 24 )
  {
    v43 = (__int64 *)v59;
    if ( v59 + 8 < v59 || v59 + 8 > W32UserProbeAddress )
      v43 = (__int64 *)W32UserProbeAddress;
    v44 = *v43;
    v60 = v44;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v44 > 0 )
    {
      v45 = v59;
      if ( v59 + 24 < v59 || v59 + 24 > W32UserProbeAddress )
        v45 = W32UserProbeAddress;
      v46 = *(_QWORD *)(v45 + 16);
      v69 = *(_OWORD *)v45;
      v70 = v46;
      v44 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v69, v44, v53, v52);
      v60 = v44;
    }
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x4000000u;
  }
  else
  {
LABEL_46:
    v44 = 0LL;
  }
  if ( v32 != v72 && v32 != v73 )
  {
    if ( *((_QWORD *)v32 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v32 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v71);
  }
  return v44;
}
