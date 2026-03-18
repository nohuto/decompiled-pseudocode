/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18005F57C
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18003444C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005FB40 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x180060C90 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::Present(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r13d
  int v4; // r14d
  __int64 v5; // rbp
  unsigned int v6; // r15d
  __int64 v8; // r12
  unsigned int v9; // edi
  _QWORD *v10; // rbx
  __int64 (__fastcall *v11)(_QWORD *, __int64); // rax
  char v12; // al
  __int64 (__fastcall *v13)(_QWORD *, __int64); // rax
  char v14; // al
  __int64 v15; // rdx
  CHwndRenderTarget *v16; // rcx
  __int64 (__fastcall *v17)(CHwndRenderTarget *__hidden, bool, unsigned int); // rax
  int v18; // eax
  int v19; // edi
  __int64 (__fastcall *v20)(_QWORD *, __int64); // rax
  __int64 v22; // rax
  bool v23; // al
  __int64 result; // rax
  int v25; // ecx

  v3 = *((_DWORD *)this + 12);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( v3 )
  {
    v8 = 0LL;
    do
    {
      v9 = 0;
      v10 = *(_QWORD **)(v8 + *((_QWORD *)this + 3));
      v11 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL);
      if ( (char *)v11 == (char *)CHwndRenderTarget::IsOfType )
        v12 = CHwndRenderTarget::IsOfType(v10, 76LL);
      else
        v12 = v11(v10, 76LL);
      if ( v12
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 91LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 79LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 70LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 17LL) )
      {
        v13 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL);
        if ( (char *)v13 == (char *)CHwndRenderTarget::IsOfType )
          v14 = CHwndRenderTarget::IsOfType(v10, 76LL);
        else
          v14 = v13(v10, 76LL);
        if ( v14 && v6 < a2 )
        {
          v9 = a3[v5];
          v5 = (unsigned int)(v5 + 1);
        }
        LOBYTE(v15) = *((_BYTE *)this + 113);
        v16 = (CHwndRenderTarget *)(v10 + 8);
        v17 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, unsigned int))(v10[8] + 64LL);
        if ( v17 == CHwndRenderTarget::Present )
          v18 = CHwndRenderTarget::Present(v16, v15, v9);
        else
          v18 = v17(v16, v15, v9);
        v19 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1A5u);
        if ( !v4 || v4 >= 0 && v19 < 0 )
          v4 = v19;
        if ( !*((_BYTE *)this + 112) )
        {
          v20 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL);
          if ( (char *)v20 == (char *)CHwndRenderTarget::IsOfType
             ? CHwndRenderTarget::IsOfType(v10, 76LL)
             : (unsigned __int8)v20(v10, 76LL) )
          {
            v22 = v10[105];
            v23 = v22 && *(_BYTE *)(v22 + 1194);
            *((_BYTE *)this + 112) = v23;
          }
        }
      }
      ++v6;
      v8 += 8LL;
    }
    while ( v6 < v3 );
  }
  result = (unsigned int)v4;
  *((_BYTE *)this + 113) = 0;
  v25 = dword_1802D6238;
  if ( dword_1802D6238 <= (unsigned int)v5 )
    v25 = v5;
  dword_1802D6238 = v25;
  return result;
}
