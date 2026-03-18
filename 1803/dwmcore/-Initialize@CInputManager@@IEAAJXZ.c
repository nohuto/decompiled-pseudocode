/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x1800C86D0
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C84AC (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Reset@CMit@@QEAAJXZ @ 0x18001E108 (-Reset@CMit@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ @ 0x1800C8618 (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ.c)
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C8794 (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int CanReceiveInputThreadMessages; // eax
  HANDLE **v10; // rsi
  int v11; // eax
  int v12; // eax

  v1 = (__int64 *)((char *)this + 248);
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x194u);
  }
  else
  {
    v6 = *v1;
    v7 = *((_QWORD *)this + 32);
    if ( v7 )
    {
      *((_QWORD *)this + 32) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, (char *)this + 256);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x195u);
    }
    else
    {
      CanReceiveInputThreadMessages = CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(this);
      v5 = CanReceiveInputThreadMessages;
      if ( CanReceiveInputThreadMessages < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CanReceiveInputThreadMessages, 0x197u);
      }
      else
      {
        v10 = (HANDLE **)((char *)this + 240);
        v11 = CMit::Create(*((struct CComposition **)this + 2), (struct CMit **)this + 30);
        v5 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x19Du);
        }
        else if ( *v10 )
        {
          v12 = CMit::Reset(*v10);
          v5 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1A1u);
        }
      }
    }
  }
  return v5;
}
