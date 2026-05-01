/*
 * XREFs of ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x180045868
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___::Run @ 0x180046A20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___--Run.c)
 * Callees:
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800434B4 (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b__&___ptr64_ @ 0x180046474 (Microsoft--WRL--Callback_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_ProcessNextOperation(CAppViewManager *this)
{
  __int64 v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  char v5; // r12
  unsigned __int64 v6; // rdx
  char *Event; // r15
  signed int LastError; // eax
  signed int v9; // esi
  unsigned __int64 v10; // rdi
  _QWORD v12[4]; // [rsp+30h] [rbp-20h] BYREF
  signed int v13; // [rsp+90h] [rbp+40h] BYREF
  __int64 pvParam; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+58h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = **((_QWORD **)this + 18);
  v16 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( *((_QWORD *)this + 19) )
  {
    v3 = (__int64 *)*((_QWORD *)this + 18);
    v4 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    if ( *((_QWORD *)this + 19) != 1LL )
      memmove(*((void **)this + 18), (const void *)(*((_QWORD *)this + 18) + 8LL), 8 * (*((_QWORD *)this + 19) - 1LL));
    --*((_QWORD *)this + 19);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) && HIDWORD(pvParam) )
  {
    v5 = 1;
    QueryUnbiasedInterruptTime(&UnbiasedTime);
    v6 = (UnbiasedTime - *((_QWORD *)this + 23)) / 0x2710;
    if ( (unsigned int)v6 < 0x1C2 )
      Sleep(450 - v6);
  }
  else
  {
    v5 = 0;
  }
  Event = (char *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    v9 = 0;
  }
  else
  {
    LastError = GetLastError();
    v9 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v9 = LastError;
    if ( v9 >= 0 )
      v9 = -2147467259;
  }
  v13 = v9;
  if ( v9 >= 0 )
  {
    v12[0] = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v12[1] = Event;
    v12[2] = &v13;
    Microsoft::WRL::Callback_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b______ptr64_(&UnbiasedTime, v12);
    v10 = UnbiasedTime;
    v9 = CAppViewManager::_AddDelayedOperation(this, (struct IAsyncCallback *)UnbiasedTime);
    v13 = v9;
    if ( v9 >= 0 )
    {
      WaitForSingleObjectEx(Event, 0xFFFFFFFF, 0);
      v9 = v13;
      if ( v13 == 1 )
      {
        if ( v5 )
        {
          QueryUnbiasedInterruptTime((PULONGLONG)this + 23);
          v9 = v13;
        }
      }
    }
    if ( v10 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
      v9 = v13;
    }
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      v9 = v13;
    }
  }
  if ( (unsigned __int64)(Event - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(Event);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v9;
}
