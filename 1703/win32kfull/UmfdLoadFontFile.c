/*
 * XREFs of UmfdLoadFontFile @ 0x1C00BA910
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     UmfdUnloadFontFileInternal @ 0x1C01082F0 (UmfdUnloadFontFileInternal.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdLoadFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  int v12; // r15d
  __int64 v13; // rbx
  const GUID *v15; // r8
  const GUID *v16; // r9
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+48h] [rbp-C0h]
  void **v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+B8h] [rbp-50h]
  int v27; // [rsp+CCh] [rbp-3Ch]
  int v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  __int64 v30; // [rsp+140h] [rbp+38h]
  int v31; // [rsp+148h] [rbp+40h]
  __int64 v32; // [rsp+150h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v34; // [rsp+178h] [rbp+70h]
  int v35; // [rsp+180h] [rbp+78h]
  int v36; // [rsp+184h] [rbp+7Ch]

  v10 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  PsGetProcessImageFileName(CurrentProcess);
  LODWORD(v21) = 4;
  v12 = -1;
  v30 = 0LL;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v20 = &LoadFontFileRequest::`vftable';
  v29 = a5;
  LODWORD(v23) = v10;
  v13 = 0LL;
  v27 = a6;
  v28 = a7;
  v31 = -1;
  v24 = a2;
  v25 = a3;
  v26 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(2u, (__int64)&v20) >= 0 )
  {
    v13 = v32;
    if ( v32 )
      goto LABEL_3;
  }
  if ( v30 )
  {
    v18 = v30;
    v19 = v31;
    UmfdUnloadFontFileInternal(&v18);
  }
  if ( v13 )
LABEL_3:
    v12 = *(_DWORD *)(v13 + 8);
  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
  {
    v36 = 0;
    v34 = &v17;
    LODWORD(v17) = v12;
    v35 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02ECF88, v15, v16, 3u, &pData);
  }
  return v13;
}
