/*
 * XREFs of ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x180132238
 * Callers:
 *     ?GetDesktopLastPresentCount@CComposition@@QEAAJPEAI0@Z @ 0x180131B3C (-GetDesktopLastPresentCount@CComposition@@QEAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::GetLastPresentCount(
        CRenderTargetManager *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v3; // rbx
  __int64 i; // rsi
  _QWORD *v8; // r15
  int v9; // eax
  __int64 result; // rax

  v3 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)v3 >= *a2 )
      break;
    v8 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v8 + 48LL))(v8, 38LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 176LL))(v8) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(v8[8] + 104LL))(v8 + 8, &a3[v3]);
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v9, 0x518u);
      v3 = (unsigned int)(v3 + 1);
    }
  }
  result = 2291662989LL;
  *a2 = v3;
  return result;
}
