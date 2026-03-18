/*
 * XREFs of ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C016978C
 * Callers:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C016978C (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C0169930 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C016978C (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0169C24 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
        CoreMessaging::Calling::ReceiveProcessor *this,
        unsigned int *a2,
        bool *a3,
        unsigned int *a4)
{
  unsigned __int8 *v4; // rax
  unsigned int v8; // r10d
  unsigned int v10; // r10d
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d
  unsigned int v16; // r10d
  __int64 result; // rax
  unsigned int v18; // r10d
  unsigned int v19; // r10d
  unsigned int v20; // r10d
  unsigned int v21; // r10d
  unsigned int v22; // r10d
  unsigned int v23; // r10d
  int v24; // edx
  __int16 v25; // cx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  bool v28; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v30; // [rsp+50h] [rbp+18h] BYREF

  v4 = (unsigned __int8 *)*((_QWORD *)this + 1);
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = *v4;
  *((_QWORD *)this + 1) = v4 + 1;
  if ( v8 <= 9 )
  {
    if ( v8 == 9 )
      goto LABEL_14;
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_36;
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_14;
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_11:
        *a2 = 8;
        return 0LL;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 == 1 )
              goto LABEL_11;
            goto LABEL_22;
          }
LABEL_14:
          *a2 = 4;
          return 0LL;
        }
LABEL_36:
        *a2 = 2;
        return 0LL;
      }
    }
    goto LABEL_35;
  }
  v18 = v8 - 10;
  if ( !v18 )
    goto LABEL_11;
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_36;
  v20 = v19 - 1;
  if ( !v20 )
  {
LABEL_35:
    *a2 = 1;
    return 0LL;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v26 = *((_QWORD *)this + 51);
    if ( !v26 )
      return 0LL;
    v27 = *((unsigned int *)this + 21);
    if ( (v27 & 1) == 0 && !*(_WORD *)(v26 + 2 * (v27 >> 1) - 2) )
      return 0LL;
LABEL_27:
    *((_DWORD *)this + 30) = 202;
    return 2147942487LL;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v24 = v4[1];
    *((_QWORD *)this + 1) = v4 + 2;
    v25 = v4[2];
    *((_QWORD *)this + 1) = v4 + 3;
    *a2 = v24 | (unsigned __int16)(v25 << 8);
    return 0LL;
  }
  v23 = v22 - 1;
  if ( !v23 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x1DEuLL);
  if ( v23 != 1 )
  {
LABEL_22:
    *((_DWORD *)this + 30) = 205;
    return 2147942487LL;
  }
  result = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(this, &v29, &v28, &v30);
  if ( (int)result >= 0 )
  {
    *a3 = 1;
    if ( !*((_QWORD *)this + 51) )
      return 0LL;
    if ( !(*((_DWORD *)this + 21) % v29) )
    {
      *a4 = *((_DWORD *)this + 21) / v29;
      return 0LL;
    }
    goto LABEL_27;
  }
  return result;
}
