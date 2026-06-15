/*
 * XREFs of ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800A9D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180017CA0 (MIDL_user_allocate.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180042DB0 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioSession::GetId(const void **this, unsigned __int16 **a2)
{
  int v4; // eax
  unsigned __int16 *v5; // rbx
  int v6; // edi
  size_t v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned __int16 *v10; // [rsp+30h] [rbp+8h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v10, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToPersistedString(this + 82, &v10, 0);
  v5 = v10;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_6;
  v7 = 2LL * (*((_DWORD *)v10 - 4) + 1);
  v8 = (unsigned __int16 *)MIDL_user_allocate(v7);
  *a2 = v8;
  if ( v8 )
  {
    v6 = StringCbCopyW((char *)v8, v7, (char *)v5);
    if ( v6 >= 0 )
      goto LABEL_7;
    operator delete(*a2);
    *a2 = 0LL;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetId", 480, v6);
    goto LABEL_7;
  }
  v6 = -2147024882;
LABEL_7:
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
  return (unsigned int)v6;
}
