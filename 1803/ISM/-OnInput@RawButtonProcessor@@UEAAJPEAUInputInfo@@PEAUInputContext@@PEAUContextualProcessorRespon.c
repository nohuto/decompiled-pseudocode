/*
 * XREFs of ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B6950
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RawButtonProcessor::OnInput(
        RawButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  unsigned int v4; // ebx
  bool v5; // zf
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = *(_BYTE *)a2 >= 0;
  v7 = 0;
  v14 = 0LL;
  if ( v5 )
  {
    *(_DWORD *)a4 = 0;
    return v4;
  }
  *(_DWORD *)a4 = 3;
  v8 = *((unsigned int *)a2 + 130);
  if ( *((_BYTE *)a2 + 512) )
  {
    if ( *((_BYTE *)this + v8 + 48) )
      return (unsigned int)-2147418113;
    v7 = 5;
  }
  else if ( *((_BYTE *)a2 + 524) )
  {
    v7 = 1;
    if ( *((_BYTE *)this + v8 + 48) )
      v7 = 2;
    else
      *((_BYTE *)this + v8 + 48) = 1;
  }
  else if ( *((_BYTE *)this + v8 + 48) )
  {
    v7 = 4;
    *((_BYTE *)this + v8 + 48) = 0;
  }
  v9 = *((_DWORD *)a2 + 130);
  v10 = *((_QWORD *)this + 5);
  LODWORD(v14) = v9;
  v11 = v7;
  v12 = *((_QWORD *)this + 3);
  HIDWORD(v14) = v11;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64 *, int))(*(_QWORD *)v12 + 152LL))(
         v12,
         v10,
         4LL,
         &v14,
         8) < 0 )
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (_QWORD *)this + 4,
      *((_QWORD *)this + 4));
  return v4;
}
