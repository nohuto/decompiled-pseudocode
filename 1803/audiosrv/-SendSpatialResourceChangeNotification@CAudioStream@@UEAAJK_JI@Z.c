/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800B60F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     WPP_SF_qixd @ 0x1800B6B20 (WPP_SF_qixd.c)
 */

__int64 __fastcall CAudioStream::SendSpatialResourceChangeNotification(
        CAudioStream *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v6; // r13d
  int MediaEvent; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // r12d
  char *v13; // rax
  void *v14; // rdi
  unsigned int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-48h]

  v6 = a2;
  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qixd(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, *((_QWORD *)this + 8), *((_QWORD *)this + 67), a3, a4);
  }
  v9 = *((_QWORD *)this + 8);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 728);
    v11 = 2 * *(_DWORD *)(v10 - 16) + 2;
    v12 = 2 * *(_DWORD *)(v10 - 16) + 74;
    v13 = (char *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = v12;
      *((_DWORD *)v13 + 1) = 0x20000;
      *((_DWORD *)v13 + 6) = v11;
      *(GUID *)(v13 + 28) = GUID_00000000_0000_0000_0000_000000000000;
      *((_QWORD *)v13 + 6) = *((_QWORD *)this + 67);
      *((_QWORD *)v13 + 7) = a3;
      *((_DWORD *)v13 + 16) = a4;
      *((_DWORD *)v13 + 17) = v6;
      MediaEvent = StringCbCopyW(v13 + 72, v11, *(char **)(*((_QWORD *)this + 8) + 728LL));
      if ( MediaEvent >= 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(v17) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x33u,
            (__int64)&WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
            v14,
            v17);
        }
        v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
        MediaEvent = GenerateMediaEvent(v14, v15);
      }
      operator delete(v14);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioStream::SendSpatialResourceChangeNotification", 2548, MediaEvent);
    }
  }
  return (unsigned int)MediaEvent;
}
