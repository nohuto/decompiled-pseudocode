/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02510B4
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C0252CA0 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003D6D0 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     UserRedrawDesktop @ 0x1C020CFB4 (UserRedrawDesktop.c)
 *     vSpUnTearDownSprites @ 0x1C0265E40 (vSpUnTearDownSprites.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  DWORD LowPart; // ebx
  unsigned int v4; // r14d
  int v5; // r15d
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  __int64 i; // rsi
  int v8; // eax
  __int64 v9; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  LONG HighPart; // [rsp+64h] [rbp+44h]
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v4 = 0;
  v5 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  for ( i = hdevEnumerate(0LL); i; i = hdevEnumerate(i) )
  {
    v17 = i;
    v8 = *(_DWORD *)(i + 32);
    if ( (v8 & 0x400) == 0
      && (v8 & 0x20000) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v17)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v17)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v17 + 2592) + 272LL) == a2 )
    {
      GreLockVisRgn(v17);
      GreLockSprite(v17);
      GreLockDisplayDevice(v17);
      v9 = v17;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v9 + 2640, CurrentProcessId & 0xFFFFFFFC);
      v12 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v13 = v17;
          if ( *(_QWORD *)(v17 + 2664) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v17 + 2664))(*(_QWORD *)(v17 + 1816), v12 + 28);
            v13 = v17;
          }
          --*(_DWORD *)(v13 + 2656);
          if ( (*(_DWORD *)(v12 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v17, v12 + 28, 1LL);
            if ( *(_DWORD *)(v12 + 44) != giVisRgnUniqueness )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v17);
      GreUnlockSprite(v17);
      GreUnlockVisRgn(v17);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  if ( v5 )
    UserRedrawDesktop();
  return v4;
}
