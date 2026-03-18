/*
 * XREFs of ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C006C904
 * Callers:
 *     CoreUICallSend @ 0x1C006BF70 (CoreUICallSend.c)
 *     ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C006CD1C (-ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@P.c)
 * Callees:
 *     ?PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIH@Z @ 0x1C006C83C (-PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIH@Z.c)
 *     ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXH@Z @ 0x1C006C89C (-PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0157190 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
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
  int v12; // r9d
  const unsigned __int16 **v13; // rbx
  unsigned int v14; // esi
  unsigned __int8 *v15; // rax
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  const void *v18; // rdx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax
  char *v25; // rax
  char v26; // cl
  const unsigned __int16 **v28; // rax
  const unsigned __int16 *v29; // rdx

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
  if ( v11 > 0x10 || (v12 = a7, v13 = (const unsigned __int16 **)a6, !a7) && v11 && !a6 )
  {
    *v8 = 204;
    goto LABEL_22;
  }
  *((_DWORD *)v10 + 31) = 0;
  v14 = 8;
  *((_QWORD *)v10 + 1) = a5 + 1;
  if ( v11 )
  {
    while ( 1 )
    {
      v15 = (unsigned __int8 *)*((_QWORD *)v10 + 1);
      v16 = v14;
      *((_DWORD *)v10 + 21) = 0;
      v17 = *v15;
      *((_QWORD *)v10 + 1) = v15 + 1;
      if ( v17 <= 9 )
        break;
      switch ( v17 )
      {
        case 0xAu:
          goto LABEL_47;
        case 0xBu:
          goto LABEL_40;
        case 0xCu:
          goto LABEL_45;
        case 0xDu:
          if ( v12 )
            v29 = 0LL;
          else
            v29 = *v13++;
          v19 = CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(v10, v29, a8, v12);
          break;
        case 0xEu:
          if ( v12 )
            v18 = 0LL;
          else
            v18 = *v13++;
          v19 = CoreMessaging::Calling::SendProcessor::PrepareStruct(v10, v18, v12);
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
LABEL_51:
          *v8 = 205;
          goto LABEL_22;
      }
      v9 = v19;
      if ( v19 < 0 )
        goto LABEL_22;
LABEL_14:
      *((_DWORD *)v10 + *((unsigned int *)v10 + 31) + 4) = *((_DWORD *)v10 + 21);
      v20 = *((_DWORD *)v10 + 21);
      if ( v20 > 0xFFFFFFFC )
        goto LABEL_53;
      v21 = (v20 + 3) & 0xFFFFFFFC;
      if ( v21 + 4 < v21 )
        goto LABEL_53;
      v22 = v21 + 4;
      v23 = v21 + 4 + v14;
      v24 = -1;
      if ( v22 + v14 >= v14 )
        v24 = v23;
      v14 = v24;
      if ( v23 < v16 )
      {
LABEL_53:
        *v8 = 106;
        goto LABEL_22;
      }
      if ( ++*((_DWORD *)v10 + 31) >= *((_DWORD *)v10 + 20) )
        goto LABEL_20;
    }
    if ( v17 == 9 )
      goto LABEL_32;
    if ( v17 != 1 )
    {
      switch ( v17 )
      {
        case 2u:
          goto LABEL_40;
        case 3u:
LABEL_32:
          *((_DWORD *)v10 + 21) = 4;
LABEL_33:
          v28 = v13 + 1;
          if ( v12 )
            v28 = v13;
          v13 = v28;
          goto LABEL_14;
        case 4u:
LABEL_47:
          *((_DWORD *)v10 + 21) = 8;
          goto LABEL_33;
      }
      if ( v17 != 5 )
      {
        if ( v17 != 6 )
        {
          if ( v17 == 7 )
            goto LABEL_32;
          if ( v17 != 8 )
            goto LABEL_51;
          goto LABEL_47;
        }
LABEL_40:
        *((_DWORD *)v10 + 21) = 2;
        goto LABEL_33;
      }
    }
LABEL_45:
    *((_DWORD *)v10 + 21) = 1;
    goto LABEL_33;
  }
LABEL_20:
  v25 = (char *)*((_QWORD *)v10 + 1);
  v26 = *v25;
  *((_QWORD *)v10 + 1) = v25 + 1;
  if ( v26 )
  {
    *v8 = 203;
  }
  else
  {
    *((_DWORD *)v10 + 34) = v14;
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
