/*
 * XREFs of ?PreRender@CRenderTargetManager@@QEAAJXZ @ 0x18005F194
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x180061B70 (-PreRender@CHwndRenderTarget@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::PreRender(CRenderTargetManager *this)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 (__fastcall *v10)(CHwndRenderTarget *__hidden); // rax
  int v11; // eax
  __int64 v13; // rsi
  _QWORD *v14; // r14
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v1 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)this + 2) + 1184LL);
  if ( v3 >= 2 )
  {
    v13 = 0LL;
    if ( *((_DWORD *)this + 12) )
    {
      while ( 1 )
      {
        v14 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v13);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v14 + 48LL))(v14, 118LL) )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD *))(v14[8] + 40LL))(v14 + 8);
          v1 = v6;
          if ( v6 < 0 )
            break;
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= *((_DWORD *)this + 12) )
          goto LABEL_2;
      }
      v16 = 175;
      goto LABEL_20;
    }
  }
LABEL_2:
  v4 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v4);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
      v1 = v6;
      if ( v6 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
        goto LABEL_5;
    }
    v16 = 183;
LABEL_20:
    v15 = v6;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16);
    return v1;
  }
LABEL_5:
  v7 = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 3);
      v9 = *(_QWORD *)(v8 + 8 * v7);
      if ( v3 < 2
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 48LL))(*(_QWORD *)(v8 + 8 * v7), 118LL) )
      {
        v10 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)(v9 + 64) + 40LL);
        v11 = v10 == CHwndRenderTarget::PreRender
            ? CHwndRenderTarget::PreRender((CHwndRenderTarget *)(v9 + 64))
            : ((__int64 (*)(void))v10)();
        v1 = v11;
        if ( v11 < 0 )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 12) )
        return v1;
    }
    v16 = 194;
    v15 = v11;
    goto LABEL_24;
  }
  return v1;
}
