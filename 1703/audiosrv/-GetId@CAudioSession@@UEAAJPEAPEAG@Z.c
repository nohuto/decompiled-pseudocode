/*
 * XREFs of ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18008C260
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180031F44 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::GetId(CAudioSession *this, unsigned __int16 **a2)
{
  int v4; // eax
  unsigned __int16 *v5; // rbx
  int v6; // edi
  size_t v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned __int16 *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      *((const wchar_t **)this + 108));
  }
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v10,
    (volatile signed __int32 *)&ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToPersistedString((char **)this + 99, &v10, 0);
  v5 = v10;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_10;
  v7 = 2LL * (*((_DWORD *)v10 - 4) + 1);
  v8 = (unsigned __int16 *)MIDL_user_allocate(v7);
  *a2 = v8;
  if ( v8 )
  {
    v6 = StringCbCopyW((char *)v8, v7, (char *)v5);
    if ( v6 >= 0 )
      goto LABEL_11;
    operator delete(*a2);
    *a2 = 0LL;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetId", 535, v6);
    goto LABEL_11;
  }
  v6 = -2147024882;
LABEL_11:
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
  return (unsigned int)v6;
}
