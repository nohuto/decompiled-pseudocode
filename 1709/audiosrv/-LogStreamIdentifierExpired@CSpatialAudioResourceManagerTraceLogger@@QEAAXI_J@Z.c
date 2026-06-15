/*
 * XREFs of ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x1800C39FC
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1800C0A34 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     std::_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std::allocator_int__void_::_Do_call @ 0x1800C2B40 (std--_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-58h] BYREF
  int *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  const GUID **v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+98h] [rbp+10h] BYREF
  const GUID *v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  if ( (unsigned int)dword_18014A370 > 4 )
  {
    v5 = &v11;
    v7 = 0;
    v6 = 4;
    v8 = &v12;
    v10 = 0;
    v9 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_180110DE7, a3, a4, 4u, &v4);
  }
}
