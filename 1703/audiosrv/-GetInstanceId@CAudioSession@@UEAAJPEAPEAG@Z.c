/*
 * XREFs of ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18008C360
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001F9E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::GetInstanceId(const wchar_t **this, unsigned __int16 **a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned __int16 *v7; // rbx
  int v8; // edi
  size_t v9; // rdi
  unsigned __int16 *v10; // rax
  unsigned __int16 *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      this[108]);
  }
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v12,
    (volatile signed __int32 *)&ATL::g_strmgr);
  v6 = CAudioSessionInstanceId::ToString((__int64)(this + 99), &v12, v4, v5);
  v7 = v12;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_10;
  v9 = 2LL * (*((_DWORD *)v12 - 4) + 1);
  v10 = (unsigned __int16 *)MIDL_user_allocate(v9);
  *a2 = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetInstanceId", 486, v8);
    goto LABEL_11;
  }
  v8 = StringCbCopyW((char *)v10, v9, (char *)v7);
  if ( v8 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
    goto LABEL_10;
  }
LABEL_11:
  ATL::CStringData::Release((ATL::CStringData *)(v7 - 12));
  return (unsigned int)v8;
}
