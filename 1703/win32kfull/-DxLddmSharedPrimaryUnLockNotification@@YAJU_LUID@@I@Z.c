/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C024F60C
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C02511E0 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0032418 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     vSpUnTearDownSprites @ 0x1C0266BB0 (vSpUnTearDownSprites.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  DWORD LowPart; // ebx
  unsigned int v4; // r14d
  int v5; // r15d
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  __int64 i; // rsi
  __int64 v8; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[4]; // [rsp+20h] [rbp-20h] BYREF
  LONG HighPart; // [rsp+84h] [rbp+44h]
  __int64 v24; // [rsp+90h] [rbp+50h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v4 = 0;
  v5 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v24);
  for ( i = hdevEnumerate(0LL); i; i = hdevEnumerate(i) )
  {
    v24 = i;
    if ( (*(_DWORD *)(i + 32) & 0x20400) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v24)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v24)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v24)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v24 + 2592) + 272LL) == a2 )
    {
      GreLockVisRgn(v24);
      GreLockSprite(v24);
      GreLockDisplayDevice(v24);
      v8 = v24;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v8 + 2640, CurrentProcessId & 0xFFFFFFFC);
      v11 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v12 = v24;
          if ( *(_QWORD *)(v24 + 2664) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v24 + 2664))(*(_QWORD *)(v24 + 1816), v11 + 28);
            v12 = v24;
          }
          --*(_DWORD *)(v12 + 2656);
          if ( (*(_DWORD *)(v11 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v24, v11 + 28, 1LL);
            if ( *(_DWORD *)(v11 + 44) != giVisRgnUniqueness )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v24);
      GreUnlockSprite(v24);
      GreUnlockVisRgn(v24);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  if ( v5 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v24);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
    v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v22;
    v22[1] = v14;
    ++*(_DWORD *)(v14 + 8);
    xxxInternalInvalidate((struct tagWND *)v14, (HRGN)1, 1157LL);
    ThreadUnlock1(v16, v15);
    if ( !(_DWORD)v24 )
      UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  }
  return v4;
}
