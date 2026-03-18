/*
 * XREFs of ?Start@CMit@@QEAAJXZ @ 0x1801A0668
 * Callers:
 *     ?Reset@CMit@@QEAAJXZ @ 0x1801A0608 (-Reset@CMit@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::Start(HANDLE *this)
{
  DWORD v1; // ebx
  DWORD v3; // r9d
  HANDLE v4; // rax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = -2147467260;
    dwCreationFlags = 147;
  }
  else
  {
    v4 = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CMit::RunInputThreadStatic, this, 4u, &ThreadId);
    this[1] = v4;
    if ( v4 )
    {
      SetThreadPriority(v4, 16);
      ResumeThread(this[1]);
      return v1;
    }
    v3 = -2147024882;
    dwCreationFlags = 163;
  }
  v1 = v3;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE10, 1u, v3, dwCreationFlags);
  return v1;
}
