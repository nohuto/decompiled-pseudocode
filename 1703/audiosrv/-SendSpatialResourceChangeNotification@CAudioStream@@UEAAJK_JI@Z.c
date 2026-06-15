/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x180096890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_qixd @ 0x180097124 (WPP_SF_qixd.c)
 */

__int64 __fastcall CAudioStream::SendSpatialResourceChangeNotification(
        CAudioStream *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v6; // r13d
  int MediaEvent; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // r12d
  char *v13; // rax
  void *v14; // rbx
  __int64 v15; // r8
  __int64 v17; // [rsp+20h] [rbp-48h]

  v6 = a2;
  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qixd(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, *((_QWORD *)this + 7), *((_QWORD *)this + 65), a3, a4);
  }
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 864);
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
      *((_QWORD *)v13 + 6) = *((_QWORD *)this + 65);
      *((_QWORD *)v13 + 7) = a3;
      *((_DWORD *)v13 + 16) = a4;
      *((_DWORD *)v13 + 17) = v6;
      MediaEvent = StringCbCopyW(v13 + 72, v11, *(char **)(*((_QWORD *)this + 7) + 864LL));
      if ( MediaEvent >= 0 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(v17) = *((_DWORD *)this + 18);
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x3Bu,
            (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids,
            v14,
            v17);
        }
        MediaEvent = GenerateMediaEvent(v14, *((unsigned int *)this + 18), v15);
      }
      operator delete(v14);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioStream::SendSpatialResourceChangeNotification", 2628, MediaEvent);
    }
  }
  return (unsigned int)MediaEvent;
}
