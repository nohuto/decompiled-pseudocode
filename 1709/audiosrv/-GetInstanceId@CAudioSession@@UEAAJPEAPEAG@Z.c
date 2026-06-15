/*
 * XREFs of ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180071C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180017590 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AC2C8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::GetInstanceId(CAudioSession *this, unsigned __int16 **a2)
{
  int v4; // eax
  unsigned __int16 *v5; // rbx
  int v6; // edi
  size_t v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned __int16 *v10; // [rsp+30h] [rbp+8h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v10, (__int64)&ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToString((__int64)this + 720, (__int64 *)&v10);
  v5 = v10;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_6;
  v7 = 2LL * (*((_DWORD *)v10 - 4) + 1);
  v8 = (unsigned __int16 *)MIDL_user_allocate(v7);
  *a2 = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetInstanceId", 450, v6);
    goto LABEL_7;
  }
  v6 = StringCbCopyW(v8, v7, v5);
  if ( v6 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
    goto LABEL_6;
  }
LABEL_7:
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
  return (unsigned int)v6;
}
