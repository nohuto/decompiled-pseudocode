/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x140018140
 * Callers:
 *     ?remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140018360 (-remove_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJUEvent.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140049F4C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400166A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14002F870 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x14004A34C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        __int64 a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r14
  unsigned int v4; // ebp
  volatile signed __int32 *v6; // rbx
  Microsoft::WRL::Details::EventTargetArray *v7; // r15
  struct IUnknown **v8; // rax
  Microsoft::WRL::Details::EventTargetArray *v9; // r12
  char v10; // r13
  __int64 v11; // r15
  __int64 v12; // r15
  Microsoft::WRL::Details::EventTargetArray *v13; // rcx
  int v15; // eax
  Microsoft::WRL::Details::EventTargetArray *v16; // rax
  void **v17; // rbp
  struct IUnknown **v18; // r14
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF
  void **v21; // [rsp+78h] [rbp+20h]

  v2 = (RTL_SRWLOCK *)(a1 + 16);
  v4 = 0;
  v6 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v7 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
  if ( *(_QWORD *)a1 )
  {
    v8 = (struct IUnknown **)*((_QWORD *)v7 + 2);
    v9 = 0LL;
    v10 = 0;
    v11 = *((_QWORD *)v7 + 3) - (_QWORD)v8;
    v19 = 0LL;
    v12 = (v11 >> 3) - 1;
    v20 = v12;
    if ( !v12 )
    {
      if ( *v8 != a2 )
      {
LABEL_10:
        if ( v2 )
          ReleaseSRWLockExclusive(v2);
        if ( v6 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
        return v4;
      }
LABEL_4:
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v6 = 0LL;
      if ( &v19 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
      {
        v6 = *(volatile signed __int32 **)a1;
        *(_QWORD *)a1 = 0LL;
      }
      v13 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
      *(_QWORD *)a1 = v9;
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v13);
      if ( a1 != -8 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
      goto LABEL_10;
    }
    v15 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
            &v19,
            &v20);
    if ( v15 >= 0 )
    {
      v16 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
      v9 = v19;
      v21 = *(void ***)(*(_QWORD *)a1 + 32LL);
      if ( *((_QWORD *)v16 + 2) == *((_QWORD *)v16 + 3) )
        goto LABEL_29;
      v17 = v21;
      v18 = (struct IUnknown **)*((_QWORD *)v16 + 2);
      do
      {
        if ( v10 || a2 != *v18 )
        {
          if ( !v12 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v18, *v17++);
          --v12;
        }
        else
        {
          v10 = 1;
        }
        ++v18;
      }
      while ( v18 != *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) );
      v2 = (RTL_SRWLOCK *)(a1 + 16);
      v4 = 0;
      if ( !v10 )
      {
LABEL_29:
        if ( v9 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v9);
        goto LABEL_10;
      }
      goto LABEL_4;
    }
    v4 = v15;
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v19);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v4;
}
