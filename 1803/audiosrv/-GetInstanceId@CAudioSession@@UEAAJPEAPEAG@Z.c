/*
 * XREFs of ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800A9DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180017CA0 (MIDL_user_allocate.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180031BD0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioSession::GetInstanceId(CAudioSession *this, unsigned __int16 **a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned __int16 *v7; // rbx
  int v8; // edi
  size_t v9; // rdi
  unsigned __int16 *v10; // rax
  unsigned __int16 *v12; // [rsp+30h] [rbp+8h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v12, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v6 = CAudioSessionInstanceId::ToString((__int64)this + 656, (const void **)&v12, v4, v5);
  v7 = v12;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_6;
  v9 = 2LL * (*((_DWORD *)v12 - 4) + 1);
  v10 = (unsigned __int16 *)MIDL_user_allocate(v9);
  *a2 = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetInstanceId", 432, v8);
    goto LABEL_7;
  }
  v8 = StringCbCopyW((char *)v10, v9, (char *)v7);
  if ( v8 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
    goto LABEL_6;
  }
LABEL_7:
  ATL::CStringData::Release((ATL::CStringData *)(v7 - 12));
  return (unsigned int)v8;
}
