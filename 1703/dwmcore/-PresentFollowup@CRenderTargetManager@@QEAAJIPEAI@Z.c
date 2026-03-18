/*
 * XREFs of ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x180144C30
 * Callers:
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x18013F944 (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18006B420 (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::PresentFollowup(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  char v5; // di
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v9; // r14
  _QWORD *v10; // r13
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  unsigned int v16; // [rsp+70h] [rbp+8h]

  v3 = *((_DWORD *)this + 12);
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( v3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v16 = 0;
      v10 = *(_QWORD **)(v9 + *((_QWORD *)this + 3));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 38LL) && (unsigned int)v6 < a2 )
      {
        v11 = a3[v6];
        v6 = (unsigned int)(v6 + 1);
        v16 = v11;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 192LL))(v10) )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v10[8] + 64LL))(v10 + 8, 0LL, v16);
        v13 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x215u);
        if ( v13 == 142213130 )
          v5 = 1;
        v14 = CRenderTargetManager::HandlePresentErrors(this, v13);
        v4 = v14;
        if ( v14 < 0 )
          break;
      }
      ++v7;
      v9 += 8LL;
      if ( v7 >= v3 )
        goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x21Cu);
LABEL_13:
    if ( v5 )
      return 142213130;
  }
  return v4;
}
