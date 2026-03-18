/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C01A8830
 * Callers:
 *     <none>
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     PostDeviceNotification @ 0x1C00B173C (PostDeviceNotification.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C00FE9D0 (UpdatePointerDeviceSystemMetrics.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01973D8 (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01975D0 (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     IsPublicPointerDevice @ 0x1C01A74FC (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C01A77EC (UpdatePointerDeviceCount.c)
 *     ?ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z @ 0x1C01A7F84 (-ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01A83DC (RIMDevChangeDoUsermodeCallback.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E91BC (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E92B4 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E93F8 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E949C (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ADD0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021B0A8 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall Win32kRIMDevChangeCallback(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // esi
  int v3; // ebx
  int v5; // r13d
  unsigned int v6; // edi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *j; // rcx
  int v12; // r13d
  __int64 v13; // rdi
  unsigned __int16 *v14; // rsi
  int v16; // eax
  InteractiveControlManager *v17; // rax
  __int64 i; // r8
  BOOL v19; // eax
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 updated; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  __int64 *v27; // r14
  __int64 v28; // rax
  int v29; // r15d
  __int64 v30; // rdi
  unsigned __int16 *v31; // rsi
  int v32; // eax
  InteractiveControlManager *v33; // rax
  _BYTE v34[8]; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v35[80]; // [rsp+88h] [rbp-50h] BYREF
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+E0h] [rbp+8h]
  bool v37; // [rsp+E8h] [rbp+10h]
  bool v38; // [rsp+E8h] [rbp+10h]
  char v39; // [rsp+F8h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v3 = gcPointerDevices;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(v1 + 536);
  v8 = v1 + 64;
  RIMDevChangeDoUsermodeCallback(a1);
  if ( (*(_DWORD *)(v1 + 248) & 0x4000) == 0 )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v9);
    v10 = (unsigned int)(*(_DWORD *)a1 - 1);
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        LOBYTE(v10) = 19;
        v27 = (__int64 *)HMCreateHandleForObject(v1 + 64, v10);
        if ( v27 )
        {
          if ( *(_DWORD *)(a1 + 4) == 2 )
          {
            v9 = *(unsigned int *)(v1 + 264);
            if ( (v9 & 0x80u) != 0LL )
            {
              LOBYTE(v26) = 22;
              v28 = HMCreateHandleForObject(v7, v26);
              if ( v28 )
              {
                ++*(_DWORD *)(v28 + 8);
                v9 = *v27;
                *(_QWORD *)(v28 + 712) = *v27;
                if ( (*(_DWORD *)(v28 + 260) & 0x20) == 0 )
                {
                  v29 = *(_DWORD *)(v1 + 248);
                  v38 = (v29 & 0x800) == 0 && (v29 & 0x400) == 0 && (v29 & 0x80u) == 0;
                  v30 = *(_QWORD *)(v1 + 536);
                  v31 = *(unsigned __int16 **)(v1 + 520);
                  TraceLoggingRimHidDeviceArrivedEvent(
                    v31[20],
                    v31[55],
                    v31[56],
                    *(_DWORD *)(v30 + 24),
                    *(_DWORD *)(v30 + 696),
                    *(_DWORD *)(v30 + 24) == 6,
                    (struct _UNICODE_STRING *)(v30 + 296),
                    (struct _UNICODE_STRING *)(v30 + 1472),
                    (unsigned __int8)(v29 & 0x40) >> 6,
                    v38,
                    *(_DWORD *)(v1 + 352),
                    *(_DWORD *)(v1 + 336),
                    *(_DWORD *)(v1 + 232),
                    ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - *(_BYTE *)(v1 + 144),
                    ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - *(_BYTE *)(v1 + 152));
                }
              }
              else
              {
                HMMarkObjectDestroy(v27);
                HMRemoveHandleForObject(v27);
                v27 = 0LL;
              }
            }
          }
          if ( v27 )
          {
            CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v35, gpRimDevBackedDeviceInfoListLock);
            v27[7] = gpRimDevBackedDeviceInfoList;
            gpRimDevBackedDeviceInfoList = v27;
            RawInputManagerDeviceObjectReference(v1);
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v35);
          }
        }
        v32 = *(_DWORD *)(v1 + 264);
        if ( (v32 & 0x100) != 0 )
        {
          v33 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceAttach(v33, (struct RawInputManagerDeviceObject *)v1);
        }
        else if ( (v32 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v1);
        }
        break;
      case 2:
        if ( IsPublicPointerDevice(v1 + 64) )
          updated = (unsigned int)UpdatePointerDeviceCount(v25);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), updated, v25, updated);
        if ( (*(_DWORD *)(v1 + 264) & 0x200) != 0 )
          InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v1);
        v5 = 1;
        break;
      case 3:
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v34, gpRimDevBackedDeviceInfoListLock);
        for ( i = gpRimDevBackedDeviceInfoList; i; i = *(_QWORD *)(v20 + 56) )
        {
          v19 = IsPublicPointerDevice(i);
          v21 = v3 - 1;
          if ( !v19 )
            v21 = v3;
          v3 = v21;
          if ( v20 == v8 )
            break;
        }
        if ( (*(_DWORD *)(v1 + 248) & 0x1000) != 0 )
        {
          UpdatePointerDeviceCount(2);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), v22, 2uLL, v3 + 1);
        }
        else
        {
          if ( IsPublicPointerDevice(v1 + 64) )
          {
            v6 = v3 + 1;
            UpdatePointerDeviceCount(2);
          }
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), v23, 2uLL, v6);
        }
        if ( (*(_DWORD *)(v1 + 264) & 0x200) != 0 )
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v1);
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v34);
        break;
      case 4:
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v39, gpRimDevBackedDeviceInfoListLock);
        for ( j = (_QWORD *)gpRimDevBackedDeviceInfoList; *j; j = (_QWORD *)(*j + 56LL) )
        {
          if ( *j == v8 )
          {
            *j = *(_QWORD *)(v1 + 120);
            *(_QWORD *)(v1 + 120) = 0LL;
            RawInputManagerDeviceObjectDereference(*(_QWORD *)(a1 + 24));
            if ( *(_DWORD *)(a1 + 4) != 2 || (*(_DWORD *)(v1 + 264) & 0x80u) == 0 )
              goto LABEL_30;
            if ( (*(_DWORD *)(v7 + 260) & 0x20) == 0 )
            {
              v12 = *(_DWORD *)(v1 + 248);
              v37 = (v12 & 0x800) == 0 && (v12 & 0x400) == 0 && (v12 & 0x80u) == 0;
              v13 = *(_QWORD *)(v1 + 536);
              v14 = *(unsigned __int16 **)(v1 + 520);
              TraceLoggingRimHidDeviceRemovedEvent(
                v14[20],
                v14[55],
                v14[56],
                *(_DWORD *)(v13 + 24),
                *(_DWORD *)(v13 + 696),
                *(_DWORD *)(v13 + 24) == 6,
                (struct _UNICODE_STRING *)(v13 + 296),
                (struct _UNICODE_STRING *)(v13 + 1472),
                (unsigned __int8)(v12 & 0x40) >> 6,
                v37,
                *(_DWORD *)(v1 + 352),
                *(_DWORD *)(v1 + 336),
                *(_DWORD *)(v1 + 232),
                ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - *(_BYTE *)(v1 + 144),
                ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - *(_BYTE *)(v1 + 152));
              v2 = 0;
            }
            if ( (*(_DWORD *)(v1 + 248) & 0x1000) != 0 || IsPublicPointerDevice(v1 + 64) )
              v2 = 1;
            if ( (*(_DWORD *)(v7 + 8))-- == 1 )
              HMUnlockObjectInternal(v7);
            if ( !*(_DWORD *)(v7 + 8) && (unsigned int)HMMarkObjectDestroy(v7) )
            {
              HMRemoveHandleForObject(v7);
LABEL_30:
              if ( (unsigned int)HMMarkObjectDestroy(v1 + 64) )
                HMRemoveHandleForObject(v1 + 64);
            }
            v5 = 1;
            break;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v39);
        if ( v2 )
          UpdatePointerDeviceSystemMetrics(0LL);
        v16 = *(_DWORD *)(v1 + 264);
        if ( (v16 & 0x100) != 0 )
        {
          v17 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceRemoval(v17, (struct RawInputManagerDeviceObject *)v1);
        }
        else if ( (v16 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v1);
        }
        break;
    }
    if ( !IsResourceAcquiredExclusiveLite )
      LeaveDeviceInfoListCrit_(v9);
    if ( v5 == 1 )
      ApplyRimDevBackedDeviceSummaryInfomation(*(_DWORD *)(a1 + 4));
  }
}
