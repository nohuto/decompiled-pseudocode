/*
 * XREFs of ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18000BA7C
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000B6A4 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplication::Initialize(CApplication *this, const unsigned __int16 *a2)
{
  __int64 v2; // r9
  signed int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  BOOL v8; // eax
  __int64 v9; // rax
  signed int LastError; // eax

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  v5 = _AllocStringWorker<CTCoAllocPolicy>(this, a2, a2);
  if ( v5 >= 0 )
  {
    v6 = CApplication::s_lastAppToken + 1;
    *((_DWORD *)this + 4) = CApplication::s_lastAppToken + 1;
    v7 = *a2;
    CApplication::s_lastAppToken = v6;
    v8 = v7 != 0;
    *((_DWORD *)this + 139) = v8;
    *((_DWORD *)this + 138) = v8;
    if ( !v7 )
    {
      *((_DWORD *)this + 42) = 1;
      *((_DWORD *)this + 44) = 2;
      *((_DWORD *)this + 71) = 2;
      *((_DWORD *)this + 72) = 2;
    }
    v9 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CApplication::SoundLevelChangeCompletionCallback,
           this);
    *((_QWORD *)this + 28) = v9;
    if ( v9 )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        return (unsigned int)LastError;
    }
  }
  return (unsigned int)v5;
}
