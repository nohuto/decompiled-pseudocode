/*
 * XREFs of ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C0169400
 * Callers:
 *     CoreUICallSend @ 0x1C0168DF8 (CoreUICallSend.c)
 *     ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C0168F48 (-ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C01695DC (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
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
  unsigned int v11; // ecx
  const unsigned __int8 *v12; // rax
  unsigned int v13; // esi
  _DWORD *v14; // r14
  unsigned int v15; // r15d
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned __int8 v20; // cl

  v8 = (_DWORD *)((char *)this + 120);
  *((_DWORD *)this + 31) = -1;
  v9 = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)this = a5;
  *((_QWORD *)this + 16) = a2;
  *((_WORD *)this + 70) = a3;
  *((_WORD *)this + 71) = a4;
  v11 = *a5;
  v12 = a5 + 1;
  *((_DWORD *)this + 20) = v11;
  *(_QWORD *)this = a5 + 1;
  if ( v11 <= 0x10 && (a7 || !v11 || a6) )
  {
    *((_DWORD *)this + 31) = 0;
    v13 = 8;
    *((_QWORD *)this + 1) = v12;
    if ( v11 )
    {
      v14 = (_DWORD *)((char *)this + 84);
      while ( 1 )
      {
        v15 = v13;
        v9 = CoreMessaging::Calling::SendProcessor::ReadParameterSize(
               this,
               &a6,
               a7,
               a8,
               0,
               0,
               (unsigned int *)this + 21);
        if ( v9 < 0 )
          break;
        *((_DWORD *)this + *((unsigned int *)this + 31) + 4) = *v14;
        if ( *v14 > 0xFFFFFFFC )
          goto LABEL_17;
        v16 = (*v14 + 3) & 0xFFFFFFFC;
        if ( v16 + 4 < v16 )
          goto LABEL_17;
        v17 = v16 + 4;
        v18 = v16 + 4 + v13;
        v19 = -1;
        if ( v17 + v13 >= v13 )
          v19 = v18;
        v13 = v19;
        if ( v18 < v15 )
        {
LABEL_17:
          *v8 = 106;
          break;
        }
        if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
        {
          v12 = (const unsigned __int8 *)*((_QWORD *)this + 1);
          goto LABEL_15;
        }
      }
    }
    else
    {
LABEL_15:
      v20 = *v12;
      *((_QWORD *)this + 1) = v12 + 1;
      if ( v20 )
      {
        *v8 = 203;
      }
      else
      {
        *((_DWORD *)this + 34) = v13;
        v9 = 0;
      }
    }
  }
  else
  {
    *v8 = 204;
  }
  if ( *v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), v8);
    if ( v9 >= 0 )
      return (unsigned int)-2147024809;
  }
  return (unsigned int)v9;
}
