/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180194C10 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     IsCreateSystemInputHostPresent @ 0x1800C4894 (IsCreateSystemInputHostPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ @ 0x180194D28 (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ.c)
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801A03C0 (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Reset@CMit@@QEAAJXZ @ 0x1801A0608 (-Reset@CMit@@QEAAJXZ.c)
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801A070C (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Reset@CDWMInputThread@@QEAAJXZ @ 0x1801A08E8 (-Reset@CDWMInputThread@@QEAAJXZ.c)
 *     ?Create@CISMInputThread@@SAJPEAPEAV1@@Z @ 0x1801A0B3C (-Create@CISMInputThread@@SAJPEAPEAV1@@Z.c)
 *     ?Reset@CISMInputThread@@QEAAJXZ @ 0x1801A0C0C (-Reset@CISMInputThread@@QEAAJXZ.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  __int64 *v1; // rdi
  signed int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  signed int v6; // eax
  signed int CanReceiveInputThreadMessages; // eax
  CMit **v8; // rdi
  signed int v9; // eax
  signed int v10; // eax
  CISMInputThread **v11; // rdi
  signed int v12; // eax
  CDWMInputThread **v13; // r14
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax

  v1 = (__int64 *)((char *)this + 240);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 30);
  v3 = CoreUICreate(v1);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x1EEu);
  }
  else
  {
    v5 = *v1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 31);
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, (char *)this + 248);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1EFu);
    }
    else
    {
      CanReceiveInputThreadMessages = CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(this);
      v4 = CanReceiveInputThreadMessages;
      if ( CanReceiveInputThreadMessages < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CanReceiveInputThreadMessages, 0x1F1u);
      }
      else if ( (dword_18027278C & 4) != 0 )
      {
        v8 = (CMit **)((char *)this + 232);
        v9 = CMit::Create(*((struct CComposition **)this + 2), (struct CMit **)this + 29);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1F7u);
        }
        else if ( *v8 )
        {
          v10 = CMit::Reset(*v8);
          v4 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1FBu);
        }
      }
      else
      {
        v11 = (CISMInputThread **)((char *)this + 224);
        if ( *((_QWORD *)this + 28)
          || !IsCreateSystemInputHostPresent()
          || (v12 = CISMInputThread::Create((struct CISMInputThread **)this + 28), v4 = v12, v12 >= 0) )
        {
          v13 = (CDWMInputThread **)((char *)this + 216);
          if ( *((_QWORD *)this + 27)
            || IsCreateSystemInputHostPresent() && (unsigned int)IsSystemInputHostStandalone()
            || (v14 = CDWMInputThread::Create(*((struct CComposition **)this + 2), (struct CDWMInputThread **)this + 27),
                v4 = v14,
                v14 >= 0) )
          {
            if ( *v11 && (v15 = CISMInputThread::Reset(*v11), v4 = v15, v15 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x214u);
            }
            else if ( *v13 )
            {
              v16 = CDWMInputThread::Reset(*v13);
              v4 = v16;
              if ( v16 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x219u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x20Fu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x206u);
        }
      }
    }
  }
  return v4;
}
