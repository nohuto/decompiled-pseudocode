/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C0169930
 * Callers:
 *     CoreUICallReceive @ 0x1C0168D48 (CoreUICallReceive.c)
 * Callees:
 *     ?NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C0078B88 (-NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallRece.c)
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C016978C (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0169C24 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        bool a5,
        char *a6,
        unsigned int a7)
{
  char *v7; // r8
  __int64 v9; // rsi
  struct MsgCallState *v11; // rdi
  int v12; // r9d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rdx
  int v21; // ecx
  unsigned __int8 *v22; // rdx
  int v23; // eax
  unsigned __int8 *v24; // rdx
  __int64 v25; // rbp
  unsigned int *v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // edx
  __int64 v29; // rcx
  CoreMessaging::Calling::ReceiveProcessor *v30; // rcx
  const struct MsgCallTypeDefinition *v31; // [rsp+50h] [rbp+18h] BYREF
  const unsigned __int8 *v32; // [rsp+58h] [rbp+20h] BYREF

  v32 = a4;
  v31 = a3;
  v7 = a6;
  if ( !a2 )
    return 2147942487LL;
  v9 = a7;
  if ( !a7 )
    return 0LL;
  if ( !a6 )
    return 2147942487LL;
  *((_DWORD *)this + 31) = -1;
  v11 = (CoreMessaging::Calling::ReceiveProcessor *)((char *)this + 120);
  v12 = 0;
  *((_QWORD *)this + 16) = a2;
  *((_DWORD *)this + 30) = 0;
  if ( (((_DWORD)v9 + 3) & 0xFFFFFFFC) != (_DWORD)v9 )
    goto LABEL_48;
  *((_BYTE *)this + 112) = 1;
  v13 = -1LL;
  *((_QWORD *)this + 11) = v7;
  *((_QWORD *)this + 12) = v7;
  if ( &v7[v9] >= v7 )
    v13 = (__int64)&v7[v9];
  *((_QWORD *)this + 13) = v13;
  if ( &v7[v9] < v7 || (unsigned int)v9 < 8 )
    goto LABEL_48;
  if ( (unsigned int)(v13 - (_DWORD)v7) < 8 || (*((_QWORD *)this + 12) = v7 + 8, !v7) )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x82uLL);
  if ( *(_DWORD *)v7 <= (unsigned int)v9 )
  {
    v14 = 0;
    v15 = 0LL;
    while ( *(_WORD *)((char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
                     + v15) != *((_WORD *)v7 + 2) )
    {
      ++v14;
      v15 += 16LL;
      if ( v14 >= 1 )
        goto LABEL_18;
    }
    v16 = (char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
        + 16 * v14;
    if ( !v16 )
    {
LABEL_18:
      *(_DWORD *)v11 = 103;
      goto LABEL_49;
    }
    v17 = *((unsigned __int16 *)v7 + 3);
    if ( (unsigned int)v17 < *((unsigned __int16 *)v16 + 1) )
    {
      *((_QWORD *)this + 17) = v16;
      v18 = *((_QWORD *)v16 + 1);
      v19 = 16 * v17 + v18 == 0;
      v20 = 16 * v17 + v18;
      *((_QWORD *)this + 18) = v20;
      if ( v19 )
      {
        *(_DWORD *)v11 = 201;
      }
      else
      {
        v21 = *(unsigned __int8 *)(v20 + 10);
        *((_DWORD *)this + 20) = v21;
        if ( v21 )
        {
          *(_QWORD *)this = Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_sh5cJFw12n6iIxQgi$RdP8nM2RA_IRegistrar;
          v22 = &Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_sh5cJFw12n6iIxQgi$RdP8nM2RA_IRegistrar[*(unsigned __int16 *)(v20 + 8)];
          *(_QWORD *)this = v22;
          if ( v22 >= byte_1C0175419
            || v22 < Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_sh5cJFw12n6iIxQgi$RdP8nM2RA_IRegistrar )
          {
            *(_DWORD *)v11 = 202;
          }
          else
          {
            v23 = *v22;
            v24 = v22 + 1;
            *(_QWORD *)this = v24;
            if ( v23 == v21 )
            {
              v25 = 0LL;
              *((_QWORD *)this + 1) = v24;
              *((_DWORD *)this + 31) = 0;
              while ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) >= 4 )
              {
                v26 = (unsigned int *)*((_QWORD *)this + 12);
                *((_QWORD *)this + 12) = v26 + 1;
                if ( !v26 )
                  break;
                v27 = *v26;
                *((_DWORD *)this + 21) = *v26;
                if ( v27 > 0xFFFFFFFC )
                  goto LABEL_46;
                if ( v27 )
                {
                  v28 = (v27 + 3) & 0xFFFFFFFC;
                  if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) >= v28 )
                  {
                    v29 = *((_QWORD *)this + 12);
                    *((_QWORD *)this + 12) = v29 + v28;
                  }
                  else
                  {
                    v29 = 0LL;
                  }
                  *((_QWORD *)this + 51) = v29;
                  if ( !v29 )
                    goto LABEL_48;
                }
                else
                {
                  *((_QWORD *)this + 51) = 0LL;
                }
                v12 = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
                        this,
                        (unsigned int *)&v32,
                        &a5,
                        (unsigned int *)&v31);
                if ( v12 < 0 )
                  goto LABEL_49;
                if ( (_DWORD)v32 != *((_DWORD *)this + 21) && (_DWORD)v32 )
                  goto LABEL_46;
                *((_QWORD *)this + v25 + 19) = *((_QWORD *)this + 51);
                v25 = (unsigned int)(v25 + 1);
                if ( a5 )
                {
                  *((_QWORD *)this + v25 + 19) = (unsigned int)v31;
                  v25 = (unsigned int)(v25 + 1);
                }
                if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
                  goto LABEL_44;
              }
            }
            *(_DWORD *)v11 = 105;
          }
        }
        else
        {
LABEL_44:
          if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) == (_DWORD)v9 )
            v12 = 0;
          else
LABEL_46:
            *(_DWORD *)v11 = 106;
        }
      }
    }
    else
    {
      *(_DWORD *)v11 = 104;
    }
  }
  else
  {
LABEL_48:
    *(_DWORD *)v11 = 102;
  }
LABEL_49:
  v30 = (CoreMessaging::Calling::ReceiveProcessor *)*(unsigned int *)v11;
  if ( (_DWORD)v30 )
  {
    if ( (unsigned int)((_DWORD)v30 - 100) > 0x63 && (unsigned int)((_DWORD)v30 - 200) > 0x63 )
      CoreMessaging::Calling::FailFast::Error(
        (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
        0x165uLL);
    return (unsigned int)CoreMessaging::Calling::ReceiveProcessor::NotifyProtocolViolationHelper(
                           v30,
                           *((struct IMessageCallReceiveHost **)this + 16),
                           v11);
  }
  return (unsigned int)v12;
}
