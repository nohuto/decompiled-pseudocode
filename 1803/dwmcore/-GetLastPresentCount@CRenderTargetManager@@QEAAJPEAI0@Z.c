/*
 * XREFs of ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x18005F970
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18005F088 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005FB40 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x180060A80 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::GetLastPresentCount(
        CRenderTargetManager *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  _QWORD *v8; // rsi
  __int64 (__fastcall *v9)(_QWORD *, __int64); // rax
  char v10; // al
  CHwndRenderTarget *v11; // rcx
  unsigned int *v12; // rdx
  __int64 (__fastcall *v13)(CHwndRenderTarget *__hidden, unsigned int *); // rax
  int LastPresentCount; // eax
  __int64 result; // rax
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  int v17; // eax

  v3 = 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)this + 12) )
    goto LABEL_24;
  do
  {
    if ( (unsigned int)v3 >= *a2 )
      break;
    v8 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v4);
    v9 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v8 + 48LL);
    if ( (char *)v9 == (char *)CHwndRenderTarget::IsOfType )
      v10 = CHwndRenderTarget::IsOfType(v8, 76LL);
    else
      v10 = v9(v8, 76LL);
    if ( v10 && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 216LL))(v8) )
    {
      v11 = (CHwndRenderTarget *)(v8 + 8);
      v12 = &a3[v3];
      v13 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, unsigned int *))(v8[8] + 104LL);
      if ( v13 == CHwndRenderTarget::GetLastPresentCount )
        LastPresentCount = CHwndRenderTarget::GetLastPresentCount(v11, v12);
      else
        LastPresentCount = v13(v11, v12);
      if ( LastPresentCount < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, LastPresentCount, 0x43Du);
      v3 = (unsigned int)(v3 + 1);
    }
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *((_DWORD *)this + 12) );
  if ( !(_DWORD)v3 )
  {
LABEL_24:
    if ( *a2 )
    {
      PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef(this);
      if ( PrimaryRenderTargetNoRef )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*((_QWORD *)PrimaryRenderTargetNoRef + 8) + 104LL))(
                (__int64)PrimaryRenderTargetNoRef + 64,
                a3);
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v17, 0x449u);
        LODWORD(v3) = 1;
      }
    }
  }
  result = 2291662989LL;
  *a2 = v3;
  return result;
}
