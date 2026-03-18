/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140002010
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002200 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001910 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     McTemplateU0 @ 0x140004A2C (McTemplateU0.c)
 *     McTemplateU0q @ 0x140004A68 (McTemplateU0q.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  __int64 v1; // rcx
  int v2; // ebx
  HANDLE CurrentProcess; // rax
  __int64 v4; // rdx
  CDwmAppHost *v5; // rcx
  void *v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = &qword_14000F9C8;
  v2 = DwmInitializeEngine(&v9, &qword_14000F9B8);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xF6u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McTemplateU0q();
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(v1, &UdwmEstablishTransport_Start);
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    v2 = DwmClientStartup(&v9, &qword_14000F9B8);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x100u);
    }
    else
    {
      result = CDwmAppHost::StartKernelRedirection(v5, v4, v6, v7);
      v2 = result;
      if ( (int)result >= 0 )
      {
        LOBYTE(word_14000FA18) = 1;
        return result;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x102u);
    }
  }
  return (unsigned int)v2;
}
