/*
 * XREFs of ?Reset@CMit@@QEAAJXZ @ 0x1800B5E3C
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::Reset(HANDLE *this)
{
  unsigned int v1; // edi
  HANDLE v3; // rax
  int v5; // ebx
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !this[1] )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v5 = -2147467260;
      MilInstrumentationCheckHR(0x14u, &dword_1801F3CC0, 1u, -2147467260, 0x8Eu);
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
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_1801F3CC0, 1u, -2147024882, 0x9Eu);
    }
    v1 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB4u);
    return v1;
  }
LABEL_5:
  if ( !*((_BYTE *)this + 24) )
    SetEvent(this[2]);
  return v1;
}
