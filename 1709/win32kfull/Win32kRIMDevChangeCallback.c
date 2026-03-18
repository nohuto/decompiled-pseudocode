/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C01ABBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     PostDeviceNotification @ 0x1C00C7F8C (PostDeviceNotification.c)
 *     HMUnlockObject @ 0x1C00CF2F0 (HMUnlockObject.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C00D6C00 (UpdatePointerDeviceSystemMetrics.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01A2E98 (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01A3088 (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z @ 0x1C01AB324 (-ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z.c)
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01AB768 (RIMDevChangeDoUsermodeCallback.c)
 *     IsPublicPointerDevice @ 0x1C01CA42C (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C01CA66C (UpdatePointerDeviceCount.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F51CC (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F52C0 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F53F4 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F5490 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C044 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C310 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall Win32kRIMDevChangeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v5; // esi
  int v6; // ebx
  int v8; // r12d
  unsigned int v9; // edi
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *j; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r12d
  __int64 v22; // rdi
  unsigned __int16 *v23; // rsi
  int v24; // eax
  InteractiveControlManager *v25; // rax
  __int64 v26; // rdx
  __int64 i; // r8
  int v28; // eax
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 updated; // r8
  unsigned __int64 v33; // r9
  __int64 *v34; // r14
  __int64 v35; // rax
  int v36; // r13d
  __int64 v37; // rdi
  unsigned __int16 *v38; // rsi
  int v39; // eax
  InteractiveControlManager *v40; // rax
  _BYTE v41[8]; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v42[80]; // [rsp+88h] [rbp-50h] BYREF
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+E0h] [rbp+8h]
  bool v44; // [rsp+E8h] [rbp+10h]
  bool v45; // [rsp+E8h] [rbp+10h]
  char v46; // [rsp+F8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = gcPointerDevices;
  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(v4 + 536);
  v11 = v4 + 64;
  RIMDevChangeDoUsermodeCallback(a1, a2, a3, a4);
  if ( (*(_DWORD *)(v4 + 248) & 0x4000) == 0 )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v13, v12, v14, v15);
    v16 = (unsigned int)(*(_DWORD *)a1 - 1);
    if ( *(_DWORD *)a1 == 1 )
    {
      LOBYTE(v16) = 19;
      v34 = (__int64 *)HMCreateHandleForObject(v4 + 64, v16);
      if ( v34 )
      {
        if ( *(_DWORD *)(a1 + 4) == 2 )
        {
          v13 = *(unsigned int *)(v4 + 264);
          if ( (v13 & 0x80u) != 0LL )
          {
            LOBYTE(v17) = 22;
            v35 = HMCreateHandleForObject(v10, v17);
            if ( v35 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
              v13 = *v34;
              *(_QWORD *)(v35 + 696) = *v34;
              if ( (*(_DWORD *)(v35 + 276) & 0x20) == 0 )
              {
                v36 = *(_DWORD *)(v4 + 248);
                v45 = (v36 & 0x800) == 0 && (v36 & 0x400) == 0 && (v36 & 0x80u) == 0;
                v37 = *(_QWORD *)(v4 + 536);
                v38 = *(unsigned __int16 **)(v4 + 520);
                TraceLoggingRimHidDeviceArrivedEvent(
                  v38[20],
                  v38[55],
                  v38[56],
                  *(_DWORD *)(v37 + 24),
                  *(_DWORD *)(v37 + 680),
                  *(_DWORD *)(v37 + 24) == 6,
                  (struct _UNICODE_STRING *)(v37 + 280),
                  (struct _UNICODE_STRING *)(v37 + 808),
                  (unsigned __int8)(v36 & 0x40) >> 6,
                  v45,
                  *(_DWORD *)(v4 + 352),
                  *(_DWORD *)(v4 + 336),
                  *(_DWORD *)(v4 + 232),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v4 + 144),
                  ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - *(_BYTE *)(v4 + 152));
              }
            }
            else
            {
              HMMarkObjectDestroy(v34);
              HMRemoveHandleForObject(v34);
              v34 = 0LL;
            }
          }
        }
        if ( v34 )
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v42, gpRimDevBackedDeviceInfoListLock);
          v34[7] = gpRimDevBackedDeviceInfoList;
          gpRimDevBackedDeviceInfoList = v34;
          RawInputManagerDeviceObjectReference(v4);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v42);
        }
      }
      v39 = *(_DWORD *)(v4 + 264);
      if ( (v39 & 0x100) != 0 )
      {
        v40 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceAttach(v40, (struct RawInputManagerDeviceObject *)v4);
      }
      else if ( (v39 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)v4);
      }
    }
    else if ( *(_DWORD *)a1 == 2 )
    {
      if ( (unsigned int)IsPublicPointerDevice(v4 + 64, (unsigned int)(*(_DWORD *)a1 - 2), 0LL) )
        updated = (unsigned int)UpdatePointerDeviceCount((unsigned int)v33);
      PostDeviceNotification(0LL, (struct DEVICEINFO *)(v4 + 64), updated, v33, updated);
      if ( (*(_DWORD *)(v4 + 264) & 0x200) != 0 )
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)v4);
      v8 = 1;
    }
    else
    {
      v17 = (unsigned int)(*(_DWORD *)a1 - 3);
      if ( *(_DWORD *)a1 == 3 )
      {
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v41, gpRimDevBackedDeviceInfoListLock);
        for ( i = gpRimDevBackedDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
        {
          v28 = IsPublicPointerDevice(i, v26, i);
          v29 = v6 - 1;
          if ( !v28 )
            v29 = v6;
          v6 = v29;
          if ( i == v11 )
            break;
        }
        if ( (*(_DWORD *)(v4 + 248) & 0x1000) != 0 )
        {
          UpdatePointerDeviceCount(2LL);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v4 + 64), v30, 2uLL, v6 + 1);
        }
        else
        {
          if ( (unsigned int)IsPublicPointerDevice(v4 + 64, v26, i) )
          {
            v9 = v6 + 1;
            UpdatePointerDeviceCount(2LL);
          }
          PostDeviceNotification(0LL, (struct DEVICEINFO *)(v4 + 64), v31, 2uLL, v9);
        }
        if ( (*(_DWORD *)(v4 + 264) & 0x200) != 0 )
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)v4);
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v41);
      }
      else if ( *(_DWORD *)a1 == 4 )
      {
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v46, gpRimDevBackedDeviceInfoListLock);
        for ( j = (_QWORD *)gpRimDevBackedDeviceInfoList; *j; j = (_QWORD *)(*j + 56LL) )
        {
          if ( *j == v11 )
          {
            *j = *(_QWORD *)(v4 + 120);
            *(_QWORD *)(v4 + 120) = 0LL;
            RawInputManagerDeviceObjectDereference(*(_QWORD *)(a1 + 24));
            if ( *(_DWORD *)(a1 + 4) != 2 || (*(_DWORD *)(v4 + 264) & 0x80u) == 0 )
              goto LABEL_28;
            if ( (*(_DWORD *)(v10 + 276) & 0x20) == 0 )
            {
              v21 = *(_DWORD *)(v4 + 248);
              v44 = (v21 & 0x800) == 0 && (v21 & 0x400) == 0 && (v21 & 0x80u) == 0;
              v22 = *(_QWORD *)(v4 + 536);
              v23 = *(unsigned __int16 **)(v4 + 520);
              TraceLoggingRimHidDeviceRemovedEvent(
                v23[20],
                v23[55],
                v23[56],
                *(_DWORD *)(v22 + 24),
                *(_DWORD *)(v22 + 680),
                *(_DWORD *)(v22 + 24) == 6,
                (struct _UNICODE_STRING *)(v22 + 280),
                (struct _UNICODE_STRING *)(v22 + 808),
                (unsigned __int8)(v21 & 0x40) >> 6,
                v44,
                *(_DWORD *)(v4 + 352),
                *(_DWORD *)(v4 + 336),
                *(_DWORD *)(v4 + 232),
                ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - *(_BYTE *)(v4 + 144),
                ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - *(_BYTE *)(v4 + 152));
              v5 = 0;
            }
            if ( (*(_DWORD *)(v4 + 248) & 0x1000) != 0 || (unsigned int)IsPublicPointerDevice(v4 + 64, v19, v20) )
              v5 = 1;
            HMUnlockObject(v10);
            if ( !*(_DWORD *)(v10 + 8) && (unsigned int)HMMarkObjectDestroy(v10) )
            {
              HMRemoveHandleForObject(v10);
LABEL_28:
              if ( (unsigned int)HMMarkObjectDestroy(v4 + 64) )
                HMRemoveHandleForObject(v4 + 64);
            }
            v8 = 1;
            break;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v46);
        if ( v5 )
          UpdatePointerDeviceSystemMetrics(0LL);
        v24 = *(_DWORD *)(v4 + 264);
        if ( (v24 & 0x100) != 0 )
        {
          v25 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceRemoval(v25, (struct RawInputManagerDeviceObject *)v4);
        }
        else if ( (v24 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)v4);
        }
      }
    }
    if ( !IsResourceAcquiredExclusiveLite )
      LeaveDeviceInfoListCrit_(v13, v17, v14);
    if ( v8 == 1 )
      ApplyRimDevBackedDeviceSummaryInfomation(*(_DWORD *)(a1 + 4));
  }
}
