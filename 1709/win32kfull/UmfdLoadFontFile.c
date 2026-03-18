/*
 * XREFs of UmfdLoadFontFile @ 0x1C0041350
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0038470 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00419A0 (UmfdUnloadFontFileInternal.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdLoadFontFile(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 CurrentProcess; // rax
  int v12; // r15d
  __int64 v13; // rbx
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+48h] [rbp-C0h]
  struct _SLIST_ENTRY v20[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+80h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+C8h] [rbp-40h]
  int v25; // [rsp+DCh] [rbp-2Ch]
  int v26; // [rsp+E0h] [rbp-28h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  __int64 v28; // [rsp+150h] [rbp+48h]
  int v29; // [rsp+158h] [rbp+50h]
  __int64 v30; // [rsp+160h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v32; // [rsp+188h] [rbp+80h]
  int v33; // [rsp+190h] [rbp+88h]
  int v34; // [rsp+194h] [rbp+8Ch]

  CurrentProcess = PsGetCurrentProcess();
  PsGetProcessImageFileName(CurrentProcess);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v20, 4);
  v28 = 0LL;
  v30 = 0LL;
  v20[0].Next = (struct _SLIST_ENTRY *)&LoadFontFileRequest::`vftable';
  v12 = -1;
  v27 = a5;
  v21 = a1;
  v13 = 0LL;
  v25 = a6;
  v26 = a7;
  v29 = -1;
  v22 = a2;
  v23 = a3;
  v24 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(2u, v20) >= 0 )
  {
    v13 = v30;
    if ( v30 )
      goto LABEL_3;
  }
  if ( v28 )
  {
    v18 = v28;
    v19 = v29;
    UmfdUnloadFontFileInternal(&v18);
  }
  if ( v13 )
LABEL_3:
    v12 = *(_DWORD *)(v13 + 8);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
  {
    v34 = 0;
    v32 = &v17;
    LODWORD(v17) = v12;
    v33 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9BE2, v14, v15, 3u, &pData);
  }
  return v13;
}
