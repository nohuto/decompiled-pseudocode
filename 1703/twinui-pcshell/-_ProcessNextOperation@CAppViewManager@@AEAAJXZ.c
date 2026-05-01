/*
 * XREFs of ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x1800432F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___::Run @ 0x180045D10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___--Run.c)
 * Callees:
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18004113C (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b__&___ptr64_ @ 0x180044954 (Microsoft--WRL--Callback_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_ProcessNextOperation(CAppViewManager *this)
{
  __int64 v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // r12
  unsigned __int64 v7; // rdx
  char *Event; // r15
  signed int LastError; // eax
  signed int v10; // esi
  unsigned __int64 v11; // rdi
  _QWORD v13[4]; // [rsp+30h] [rbp-20h] BYREF
  signed int v14; // [rsp+90h] [rbp+40h] BYREF
  __int64 pvParam; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+58h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = **((_QWORD **)this + 16);
  v17 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( *((_QWORD *)this + 17) )
  {
    v3 = (__int64 *)*((_QWORD *)this + 16);
    v4 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = *((_QWORD *)this + 17);
    if ( v5 != 1 )
      memmove(*((void **)this + 16), (const void *)(*((_QWORD *)this + 16) + 8LL), 8 * v5 - 8);
    --*((_QWORD *)this + 17);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) && HIDWORD(pvParam) )
  {
    v6 = 1;
    QueryUnbiasedInterruptTime(&UnbiasedTime);
    v7 = (UnbiasedTime - *((_QWORD *)this + 21)) / 0x2710;
    if ( (unsigned int)v7 < 0x1C2 )
      Sleep(450 - v7);
  }
  else
  {
    v6 = 0;
  }
  Event = (char *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    v10 = 0;
  }
  else
  {
    LastError = GetLastError();
    v10 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v10 = LastError;
    if ( v10 >= 0 )
      v10 = -2147467259;
  }
  v14 = v10;
  if ( v10 >= 0 )
  {
    v13[0] = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v13[1] = Event;
    v13[2] = &v14;
    Microsoft::WRL::Callback_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b______ptr64_(&UnbiasedTime, v13);
    v11 = UnbiasedTime;
    v10 = CAppViewManager::_AddDelayedOperation(this, (struct IAsyncCallback *)UnbiasedTime);
    v14 = v10;
    if ( v10 >= 0 )
    {
      WaitForSingleObjectEx(Event, 0xFFFFFFFF, 0);
      v10 = v14;
      if ( v14 == 1 )
      {
        if ( v6 )
        {
          QueryUnbiasedInterruptTime((PULONGLONG)this + 21);
          v10 = v14;
        }
      }
    }
    if ( v11 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
      v10 = v14;
    }
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      v10 = v14;
    }
  }
  if ( (unsigned __int64)(Event - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(Event);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v10;
}
