/*
 * XREFs of ?Reset@CMit@@QEAAJXZ @ 0x18001E108
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800C86D0 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::Reset(HANDLE *this)
{
  unsigned int v1; // ebx
  HANDLE v3; // rax
  unsigned int v5; // eax
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !this[1] )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v1 = -2147467260;
      v5 = 148;
    }
    else
    {
      v3 = CreateThread(0LL, 0LL, CMit::RunInputThreadStatic, this, 4u, &ThreadId);
      this[1] = v3;
      if ( v3 )
      {
        SetThreadPriority(v3, 16);
        ResumeThread(this[1]);
        goto LABEL_5;
      }
      v1 = -2147024882;
      v5 = 164;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277A68, 1u, v1, v5);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xBAu);
    return v1;
  }
LABEL_5:
  if ( !*((_BYTE *)this + 24) )
    SetEvent(this[2]);
  return v1;
}
