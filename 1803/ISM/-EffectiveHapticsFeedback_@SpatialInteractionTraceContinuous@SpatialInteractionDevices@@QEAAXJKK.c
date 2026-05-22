/*
 * XREFs of ?EffectiveHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKE@Z @ 0x1800D42DC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call @ 0x1800DAB90 (std--_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_--_Do_call.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::EffectiveHapticsFeedback_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        int a2,
        int a3,
        int a4,
        char a5)
{
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  int *v7; // [rsp+58h] [rbp-1h]
  __int64 v8; // [rsp+60h] [rbp+7h]
  int *v9; // [rsp+68h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+17h]
  int *v11; // [rsp+78h] [rbp+1Fh]
  __int64 v12; // [rsp+80h] [rbp+27h]
  char *v13; // [rsp+88h] [rbp+2Fh]
  __int64 v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+C0h] [rbp+67h] BYREF
  int v16; // [rsp+C8h] [rbp+6Fh] BYREF
  int v17; // [rsp+D0h] [rbp+77h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v5 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v8 = 4LL;
    v7 = &v15;
    v9 = &v16;
    v11 = &v17;
    v13 = &a5;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 1LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_1801127BB, 0LL, 0LL, 6u, &pData);
  }
}
