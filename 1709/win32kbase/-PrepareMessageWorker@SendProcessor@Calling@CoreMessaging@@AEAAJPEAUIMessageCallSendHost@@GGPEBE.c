/*
 * XREFs of ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C0087668
 * Callers:
 *     CoreUICallSend @ 0x1C008726C (CoreUICallSend.c)
 *     ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C0087A84 (-ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@P.c)
 * Callees:
 *     ?PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIH@Z @ 0x1C008758C (-PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIH@Z.c)
 *     ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXH@Z @ 0x1C00875F8 (-PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C015690C (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        __int16 a3,
        __int16 a4,
        const unsigned __int8 *a5,
        char *a6,
        int a7,
        unsigned int a8)
{
  _DWORD *v8; // rdi
  int v9; // r10d
  CoreMessaging::Calling::SendProcessor *v10; // r11
  unsigned int v11; // ecx
  const unsigned __int16 **v12; // rbx
  unsigned int v13; // ebp
  unsigned __int8 *v14; // rax
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  const void *v17; // rdx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  char *v24; // rax
  char v25; // cl
  const unsigned __int16 **v27; // rax
  const unsigned __int16 *v28; // rdx

  v8 = (_DWORD *)((char *)this + 120);
  *((_DWORD *)this + 31) = -1;
  v9 = 0;
  *((_DWORD *)this + 34) = 0;
  v10 = this;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)this = a5;
  *((_QWORD *)this + 16) = a2;
  *((_WORD *)this + 70) = a3;
  *((_WORD *)this + 71) = a4;
  v11 = *a5;
  *((_DWORD *)v10 + 20) = v11;
  *(_QWORD *)v10 = a5 + 1;
  if ( v11 > 0x10 || (v12 = (const unsigned __int16 **)a6, !a7) && v11 && !a6 )
  {
    *v8 = 204;
    goto LABEL_22;
  }
  *((_DWORD *)v10 + 31) = 0;
  v13 = 8;
  *((_QWORD *)v10 + 1) = a5 + 1;
  if ( v11 )
  {
    while ( 1 )
    {
      v14 = (unsigned __int8 *)*((_QWORD *)v10 + 1);
      v15 = v13;
      *((_DWORD *)v10 + 21) = 0;
      v16 = *v14;
      *((_QWORD *)v10 + 1) = v14 + 1;
      if ( v16 <= 9 )
        break;
      switch ( v16 )
      {
        case 0xAu:
          goto LABEL_48;
        case 0xBu:
          goto LABEL_47;
        case 0xCu:
          goto LABEL_44;
        case 0xDu:
          if ( a7 )
            v28 = 0LL;
          else
            v28 = *v12++;
          v18 = CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(v10, v28, a8, a7);
          break;
        case 0xEu:
          if ( a7 )
            v17 = 0LL;
          else
            v17 = *v12++;
          v18 = CoreMessaging::Calling::SendProcessor::PrepareStruct(v10, v17, a7);
          break;
        case 0xFu:
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
            0x2E0uLL);
        case 0x10u:
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
            0x2EDuLL);
        default:
LABEL_46:
          *v8 = 205;
          goto LABEL_22;
      }
      v9 = v18;
      if ( v18 < 0 )
        goto LABEL_22;
LABEL_14:
      *((_DWORD *)v10 + *((unsigned int *)v10 + 31) + 4) = *((_DWORD *)v10 + 21);
      v19 = *((_DWORD *)v10 + 21);
      if ( v19 > 0xFFFFFFFC )
        goto LABEL_53;
      v20 = (v19 + 3) & 0xFFFFFFFC;
      if ( v20 + 4 < v20 )
        goto LABEL_53;
      v21 = v20 + 4;
      v22 = v20 + 4 + v13;
      v23 = -1;
      if ( v21 + v13 >= v13 )
        v23 = v22;
      v13 = v23;
      if ( v22 < v15 )
      {
LABEL_53:
        *v8 = 106;
        goto LABEL_22;
      }
      if ( ++*((_DWORD *)v10 + 31) >= *((_DWORD *)v10 + 20) )
        goto LABEL_20;
    }
    if ( v16 == 9 )
      goto LABEL_32;
    if ( v16 != 1 )
    {
      switch ( v16 )
      {
        case 2u:
          goto LABEL_47;
        case 3u:
LABEL_32:
          *((_DWORD *)v10 + 21) = 4;
LABEL_33:
          v27 = v12 + 1;
          if ( a7 )
            v27 = v12;
          v12 = v27;
          goto LABEL_14;
        case 4u:
LABEL_48:
          *((_DWORD *)v10 + 21) = 8;
          goto LABEL_33;
      }
      if ( v16 != 5 )
      {
        if ( v16 != 6 )
        {
          if ( v16 == 7 )
            goto LABEL_32;
          if ( v16 != 8 )
            goto LABEL_46;
          goto LABEL_48;
        }
LABEL_47:
        *((_DWORD *)v10 + 21) = 2;
        goto LABEL_33;
      }
    }
LABEL_44:
    *((_DWORD *)v10 + 21) = 1;
    goto LABEL_33;
  }
LABEL_20:
  v24 = (char *)*((_QWORD *)v10 + 1);
  v25 = *v24;
  *((_QWORD *)v10 + 1) = v24 + 1;
  if ( v25 )
  {
    *v8 = 203;
  }
  else
  {
    *((_DWORD *)v10 + 34) = v13;
    v9 = 0;
  }
LABEL_22:
  if ( *v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)v10 + 16) + 48LL))(*((_QWORD *)v10 + 16), v8);
    if ( v9 >= 0 )
      return (unsigned int)-2147024809;
  }
  return (unsigned int)v9;
}
