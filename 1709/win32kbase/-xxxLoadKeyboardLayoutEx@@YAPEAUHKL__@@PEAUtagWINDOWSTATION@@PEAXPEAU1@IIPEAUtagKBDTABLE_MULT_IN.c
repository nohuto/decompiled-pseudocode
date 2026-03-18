/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0071BA0 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     HMAllocObject @ 0x1C003E6C0 (HMAllocObject.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     DestroyKF @ 0x1C0071050 (DestroyKF.c)
 *     HKLtoPKL @ 0x1C00719E0 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0071AA8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0072088 (ApiSetEditionNotifyShellLanguageHook.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0072560 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00725C0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0072808 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C0072A40 (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0072B20 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C00733F8 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C012C420 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        signed int a8,
        unsigned int a9)
{
  HKL v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // r14
  unsigned int v14; // esi
  struct tagKL *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  const unsigned __int16 *v25; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r15d
  const WCHAR *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // r12
  struct tagKBDFILE *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int inited; // [rsp+4Ch] [rbp-B4h]
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h]
  PCWSTR SourceString[2]; // [rsp+70h] [rbp-90h]
  __int128 v47; // [rsp+80h] [rbp-80h]
  void *v48[2]; // [rsp+90h] [rbp-70h]
  __int128 v49; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v53; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v54; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v55[3]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v56[3]; // [rsp+118h] [rbp+18h] BYREF
  int v57; // [rsp+130h] [rbp+30h] BYREF
  __int16 v58; // [rsp+134h] [rbp+34h]
  int v59; // [rsp+14Ch] [rbp+4Ch]

  v10 = (HKL)a3;
  v11 = 0LL;
  v48[0] = a2;
  v12 = (unsigned int)a8;
  SourceString[0] = a7;
  *(_QWORD *)&v45 = a3;
  v44 = 0LL;
  if ( !a8 || (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 0LL;
  v13 = gptiCurrent;
  if ( a3 )
  {
    v11 = HKLtoPKL((__int64)gptiCurrent, a3);
    if ( !v11 )
      return 0LL;
    v12 = (unsigned int)a8;
  }
  if ( (_DWORD)v12 == (_DWORD)v10 )
    return *(HKL *)(v11 + 40);
  v14 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)v13) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004);
      return 0LL;
    }
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v15 = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, 1LL);
      if ( !v15 )
        break;
      xxxInternalUnloadKeyboardLayout((struct tagKL **)a1, v15, 0x80000000);
    }
    v10 = (HKL)v45;
    v12 = (unsigned int)a8;
  }
  v16 = *((_QWORD *)a1 + 5);
  v17 = v16;
  if ( v16 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v17 + 40) == (int)v12 )
      {
        v11 = *(unsigned int *)(v17 + 32);
        if ( (int)v11 >= 0 )
          break;
      }
      v17 = *(_QWORD *)(v17 + 16);
      if ( v17 == v16 )
        goto LABEL_30;
    }
    if ( (v11 & 0x20000000) != 0 )
    {
      v18 = (char *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)*(_DWORD *)v17;
      v18[25] &= ~1u;
      *(_DWORD *)(v17 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v14 = a9 & 0xFFFFFF7F;
    }
LABEL_15:
    v55[0] = *((_QWORD *)v13 + 49);
    *((_QWORD *)v13 + 49) = v55;
    v55[1] = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    if ( v10 )
    {
      v37 = HKLtoPKL((__int64)v13, (__int64)v10);
      if ( v37 )
      {
        v56[0] = *((_QWORD *)v13 + 49);
        *((_QWORD *)v13 + 49) = v56;
        v56[1] = v37;
        _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
        xxxSetPKLinThreads((struct tagKL *)v17, (struct tagKL *)v37);
        xxxInternalUnloadKeyboardLayout((struct tagKL **)a1, (struct tagKL *)v37, 0x80000000);
        ThreadUnlock1(v39, v38, v40, v41);
      }
    }
    if ( (v14 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v17);
    xxxWindowEvent(0x80000000LL, 0LL, 0LL, 0LL, 0);
    if ( (v14 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v13, 0LL, 0LL);
    if ( (v14 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(v17, v14, 0LL);
    if ( (v14 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v17);
      *((_QWORD *)&v47 + 1) = v17;
      *(_QWORD *)&v47 = &gspklBaseLayout;
      v54 = v47;
      HMAssignmentLock((__int64 **)&v54);
      xxxSetPKLinThreads((struct tagKL *)v17, 0LL);
    }
    if ( (v14 & 0x80000000) != 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v17);
    v23 = ThreadUnlock1(v20, v19, v21, v22);
    if ( v23 )
      return *(HKL *)(v23 + 40);
    return 0LL;
  }
LABEL_30:
  if ( (int)IsEditionResetIMELayoutSupported(v11, v12) < 0
    || (unsigned int)EditionResetIMELayout((unsigned int)a8, a9, &v44) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v57);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v48[0], a4, a5, v25, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      v27 = HMAllocObject(0LL, 0LL, 0xDu, 0x78u);
      v17 = v27;
      if ( v27 )
      {
        v48[1] = KeyboardLayoutFile;
        v48[0] = (void *)(v27 + 56);
        v49 = *(_OWORD *)v48;
        HMAssignmentLock((__int64 **)&v49);
        v28 = *(unsigned int *)a6;
        v29 = 0;
        if ( (_DWORD)v28 )
        {
          v33 = Win32AllocPoolZInit(8 * v28, 1953198933LL);
          *(_QWORD *)(v17 + 96) = v33;
          if ( v33 )
          {
            v34 = 0LL;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v29 + 324] )
                {
                  a6[36 * v29 + 33] = 0;
                  v35 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v29 + 324],
                          *(_DWORD *)&a6[8 * v29 + 328],
                          *(_DWORD *)&a6[8 * v29 + 330],
                          (const unsigned __int16 *)(2LL * v29),
                          &a6[36 * v29 + 2],
                          *(_DWORD *)&a6[36 * v29 + 34],
                          *(_DWORD *)&a6[36 * v29 + 36]);
                  if ( !v35 )
                    break;
                  v36 = *(_QWORD *)(v17 + 96);
                  *((_QWORD *)&v47 + 1) = v35;
                  *(_QWORD *)&v47 = v36 + 8 * v34;
                  v50 = v47;
                  HMAssignmentLock((__int64 **)&v50);
                  v34 = (unsigned int)(v34 + 1);
                }
                ++v29;
              }
              while ( v29 < *(_DWORD *)a6 );
              v14 = a9;
            }
            *(_DWORD *)(v17 + 88) = v34;
            v10 = (HKL)v45;
          }
        }
        v30 = SourceString[0];
        *(_QWORD *)(v17 + 40) = a8;
        *(_QWORD *)(v17 + 16) = v17;
        *(_QWORD *)(v17 + 24) = v17;
        *(_DWORD *)(v17 + 32) = 0;
        *(_WORD *)(v17 + 74) = 0;
        RtlInitUnicodeString(&DestinationString, v30);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v17 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v17 + 32) |= 0x80000000;
        SourceString[1] = *(PCWSTR *)(v17 + 56);
        SourceString[0] = (PCWSTR)(v17 + 48);
        v52 = *(_OWORD *)SourceString;
        HMAssignmentLock((__int64 **)&v52);
        v31 = *(_QWORD *)(v17 + 48);
        *(_DWORD *)(v17 + 104) = *(_DWORD *)(*(_QWORD *)(v31 + 32) + 96LL);
        *(_DWORD *)(v17 + 108) = *(_DWORD *)(*(_QWORD *)(v31 + 32) + 100LL);
        *(_DWORD *)(*(_QWORD *)(v31 + 32) + 80LL) |= (v14 >> 15) & 7;
        *(_QWORD *)(v17 + 80) = v44;
        if ( inited )
        {
          *(_WORD *)(v17 + 72) = v58;
          *(_DWORD *)(v17 + 64) = v59;
          *(_DWORD *)(v17 + 68) = v57;
        }
        else
        {
          *(_WORD *)(v17 + 72) = 0;
          *(_QWORD *)(v17 + 64) = 1LL;
        }
        v32 = *((_QWORD *)a1 + 5);
        if ( v32 )
        {
          *(_QWORD *)(v17 + 16) = v32;
          *(_QWORD *)(v17 + 24) = *(_QWORD *)(v32 + 24);
          *(_QWORD *)(*(_QWORD *)(v32 + 24) + 16LL) = v17;
          *(_QWORD *)(v32 + 24) = v17;
        }
        else
        {
          *(_QWORD *)&v45 = (char *)a1 + 40;
          *((_QWORD *)&v45 + 1) = v17;
          v53 = v45;
          HMAssignmentLock((__int64 **)&v53);
        }
        goto LABEL_15;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v44 )
      Win32FreePool(v44);
  }
  return 0LL;
}
