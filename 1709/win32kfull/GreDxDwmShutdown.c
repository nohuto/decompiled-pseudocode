/*
 * XREFs of GreDxDwmShutdown @ 0x1C0252A20
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003D6D0 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreDxDwmShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 HDEV; // rax
  __int64 i; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  if ( !(unsigned int)UserIsRemoteConnection(a1, a2, a3, a4) )
  {
    gDxgkInterface[58](-1LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
    HDEV = UserGetHDEV(v4);
    GreLockVisRgn(HDEV);
    for ( i = 0LL; ; i = v11 )
    {
      v9 = hdevEnumerate(i);
      v11 = v9;
      if ( !v9 )
        break;
      v7 = *(_DWORD *)(v9 + 32);
      v14 = v11;
      if ( (v7 & 1) != 0
        && (v7 & 0x400) == 0
        && (v7 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v14) )
      {
        GreLockDisplayDevice(v11);
        if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))gDxgkInterface[95])(
               *(_QWORD *)(*(_QWORD *)(v11 + 2592) + 256LL),
               *(unsigned int *)(*(_QWORD *)(v11 + 2592) + 272LL)) )
        {
          if ( *(_QWORD *)(v11 + 2744) )
          {
            LOBYTE(v8) = 1;
            DrvDxgkDisplayOnOff(v11, v8, 3LL);
            (*(void (__fastcall **)(_QWORD, __int64))(v11 + 2744))(*(_QWORD *)(v11 + 1816), 1LL);
          }
        }
        GreUnlockDisplayDevice(v11);
      }
    }
    v12 = UserGetHDEV(v10);
    GreUnlockVisRgn(v12);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  }
}
