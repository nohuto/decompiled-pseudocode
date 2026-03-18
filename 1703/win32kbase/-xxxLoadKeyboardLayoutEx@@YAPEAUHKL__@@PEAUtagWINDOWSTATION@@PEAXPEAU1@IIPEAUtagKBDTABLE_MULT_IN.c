/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0079760 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMAllocObject @ 0x1C0040370 (HMAllocObject.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     DestroyKF @ 0x1C0078758 (DestroyKF.c)
 *     HKLtoPKL @ 0x1C0079610 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0079674 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0079C48 (ApiSetEditionNotifyShellLanguageHook.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C007A120 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C007A180 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C007A3A8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C007A5E0 (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C007A6C0 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C007AF84 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C012CE7C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
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
  signed int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct tagKL *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  char *v21; // rax
  _DWORD *v22; // rax
  const unsigned __int16 *v24; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // r15d
  const WCHAR *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // r12
  struct tagKBDFILE *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  void *v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+60h] [rbp-A0h]
  unsigned int v39; // [rsp+64h] [rbp-9Ch]
  int inited; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v42[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h]
  PCWSTR SourceString; // [rsp+A8h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v46[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v47; // [rsp+D8h] [rbp-28h] BYREF
  __int16 v48; // [rsp+DCh] [rbp-24h]
  int v49; // [rsp+F4h] [rbp-Ch]

  v38 = a5;
  v10 = (HKL)a3;
  v11 = 0LL;
  v37[0] = a2;
  v12 = (unsigned int)a8;
  SourceString = a7;
  v39 = a4;
  v43 = a3;
  v41 = 0LL;
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
      UserSetLastError(1004LL, v15, v16, v17);
      return 0LL;
    }
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v18 = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, 1LL);
      if ( !v18 )
        break;
      xxxInternalUnloadKeyboardLayout((struct tagKL **)a1, v18, 0x80000000);
    }
    v10 = (HKL)v43;
    v12 = (unsigned int)a8;
  }
  v19 = *((_QWORD *)a1 + 5);
  v20 = v19;
  if ( v19 )
  {
    v11 = (int)v12;
    while ( *(_QWORD *)(v20 + 40) != (int)v12 || *(int *)(v20 + 32) < 0 )
    {
      v20 = *(_QWORD *)(v20 + 16);
      if ( v20 == v19 )
        goto LABEL_31;
    }
    if ( (*(_DWORD *)(v20 + 32) & 0x20000000) != 0 )
    {
      v21 = (char *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*(_DWORD *)v20;
      v21[25] &= ~1u;
      *(_DWORD *)(v20 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v14 = a9 & 0xFFFFFF7F;
    }
LABEL_16:
    v46[0] = *((_QWORD *)v13 + 46);
    *((_QWORD *)v13 + 46) = v46;
    v46[1] = v20;
    ++*(_DWORD *)(v20 + 8);
    if ( v10 )
    {
      v36 = HKLtoPKL((__int64)v13, (__int64)v10);
      if ( v36 )
      {
        *(_QWORD *)&v42[0] = *((_QWORD *)v13 + 46);
        *((_QWORD *)v13 + 46) = v42;
        ++*(_DWORD *)(v36 + 8);
        *((_QWORD *)&v42[0] + 1) = v36;
        xxxSetPKLinThreads((struct tagKL *)v20, (struct tagKL *)v36);
        xxxInternalUnloadKeyboardLayout((struct tagKL **)a1, (struct tagKL *)v36, 0x80000000);
        ThreadUnlock1();
      }
    }
    if ( (v14 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v20);
    xxxWindowEvent(0x80000000LL, 0LL, 0LL);
    if ( (v14 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v13, 0LL, 0LL);
    if ( (v14 & 1) != 0 )
      xxxInternalActivateKeyboardLayout((struct tagKL *)v20);
    if ( (v14 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v20);
      v37[1] = (void *)v20;
      v37[0] = &gspklBaseLayout;
      v42[0] = *(_OWORD *)v37;
      HMAssignmentLock((__int64)v42);
      xxxSetPKLinThreads((struct tagKL *)v20, 0LL);
    }
    if ( v14 < 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v20);
    v22 = ThreadUnlock1();
    if ( v22 )
      return (HKL)*((_QWORD *)v22 + 5);
    return 0LL;
  }
LABEL_31:
  if ( (int)IsEditionResetIMELayoutSupported(v11, v12) < 0
    || (unsigned int)EditionResetIMELayout((unsigned int)a8, a9, &v41) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString, &v47);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v37[0], v39, v38, v24, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      v26 = HMAllocObject(0LL, 0LL, 0xDu, 0x78u);
      v20 = v26;
      if ( v26 )
      {
        v37[1] = KeyboardLayoutFile;
        v37[0] = (void *)(v26 + 56);
        HMAssignmentLock((__int64)v37);
        v27 = *(unsigned int *)a6;
        v28 = 0;
        if ( (_DWORD)v27 )
        {
          v32 = Win32AllocPoolZInit(8 * v27, 1953198933LL);
          *(_QWORD *)(v20 + 96) = v32;
          if ( v32 )
          {
            v33 = 0LL;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v28 + 324] )
                {
                  a6[36 * v28 + 33] = 0;
                  v34 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v28 + 324],
                          *(_DWORD *)&a6[8 * v28 + 328],
                          *(_DWORD *)&a6[8 * v28 + 330],
                          (const unsigned __int16 *)(2LL * v28),
                          &a6[36 * v28 + 2],
                          *(_DWORD *)&a6[36 * v28 + 34],
                          *(_DWORD *)&a6[36 * v28 + 36]);
                  if ( !v34 )
                    break;
                  v35 = *(_QWORD *)(v20 + 96);
                  v37[1] = v34;
                  v37[0] = (void *)(v35 + 8 * v33);
                  v42[0] = *(_OWORD *)v37;
                  HMAssignmentLock((__int64)v42);
                  v33 = (unsigned int)(v33 + 1);
                }
                ++v28;
              }
              while ( v28 < *(_DWORD *)a6 );
              v14 = a9;
            }
            *(_DWORD *)(v20 + 88) = v33;
            v10 = (HKL)v43;
          }
        }
        v29 = SourceString;
        *(_QWORD *)(v20 + 40) = a8;
        *(_QWORD *)(v20 + 16) = v20;
        *(_QWORD *)(v20 + 24) = v20;
        *(_DWORD *)(v20 + 32) = 0;
        *(_WORD *)(v20 + 74) = 0;
        RtlInitUnicodeString(&DestinationString, v29);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v20 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v20 + 32) |= 0x80000000;
        v37[1] = *(void **)(v20 + 56);
        v37[0] = (void *)(v20 + 48);
        v42[0] = *(_OWORD *)v37;
        HMAssignmentLock((__int64)v42);
        v30 = *(_QWORD *)(v20 + 48);
        *(_DWORD *)(v20 + 104) = *(_DWORD *)(*(_QWORD *)(v30 + 32) + 96LL);
        *(_DWORD *)(v20 + 108) = *(_DWORD *)(*(_QWORD *)(v30 + 32) + 100LL);
        *(_DWORD *)(*(_QWORD *)(v30 + 32) + 80LL) |= ((unsigned int)v14 >> 15) & 7;
        *(_QWORD *)(v20 + 80) = v41;
        if ( inited )
        {
          *(_WORD *)(v20 + 72) = v48;
          *(_DWORD *)(v20 + 64) = v49;
          *(_DWORD *)(v20 + 68) = v47;
        }
        else
        {
          *(_WORD *)(v20 + 72) = 0;
          *(_QWORD *)(v20 + 64) = 1LL;
        }
        v31 = *((_QWORD *)a1 + 5);
        if ( v31 )
        {
          *(_QWORD *)(v20 + 16) = v31;
          *(_QWORD *)(v20 + 24) = *(_QWORD *)(v31 + 24);
          *(_QWORD *)(*(_QWORD *)(v31 + 24) + 16LL) = v20;
          *(_QWORD *)(v31 + 24) = v20;
        }
        else
        {
          v37[0] = (char *)a1 + 40;
          v37[1] = (void *)v20;
          v42[0] = *(_OWORD *)v37;
          HMAssignmentLock((__int64)v42);
        }
        goto LABEL_16;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v41 )
      Win32FreePool(v41);
  }
  return 0LL;
}
