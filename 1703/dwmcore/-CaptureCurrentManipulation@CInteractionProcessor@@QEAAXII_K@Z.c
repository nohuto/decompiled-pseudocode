/*
 * XREFs of ?CaptureCurrentManipulation@CInteractionProcessor@@QEAAXII_K@Z @ 0x18018D6D4
 * Callers:
 *     ?CaptureCurrentManipulation@CInteraction@@UEAAXII_K@Z @ 0x1801668A0 (-CaptureCurrentManipulation@CInteraction@@UEAAXII_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CInteractionProcessor::CaptureCurrentManipulation(
        CInteractionProcessor *this,
        int a2,
        int a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // r10
  __int64 v8; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v10; // [rsp+68h] [rbp-9h]
  __int64 v11; // [rsp+70h] [rbp-1h]
  int *v12; // [rsp+78h] [rbp+7h]
  const GUID *v13; // [rsp+80h] [rbp+Fh]
  int *v14; // [rsp+88h] [rbp+17h]
  const GUID *v15; // [rsp+90h] [rbp+1Fh]
  __int64 *v16; // [rsp+98h] [rbp+27h]
  __int64 v17; // [rsp+A0h] [rbp+2Fh]
  int v18; // [rsp+E0h] [rbp+6Fh] BYREF
  int v19; // [rsp+E8h] [rbp+77h] BYREF
  __int64 v20; // [rsp+F0h] [rbp+7Fh] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  *((_BYTE *)this + 424) |= 0x20u;
  *((_QWORD *)this + 55) = a4;
  *((_DWORD *)this + 107) = a2;
  *((_DWORD *)this + 108) = a3;
  if ( dword_18023D7F0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v8 = v7;
      v10 = &v8;
      v12 = &v18;
      v14 = &v19;
      v16 = &v20;
      v11 = 8LL;
      v13 = v6;
      v15 = v6;
      v17 = 8LL;
      TlgWrite(v4, &unk_1801F8878, v5, v6, 6u, &pData);
    }
  }
}
