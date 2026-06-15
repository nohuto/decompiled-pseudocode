/*
 * XREFs of ?Initialize@CApplication@@IEAAJPEBG_K@Z @ 0x1800108D4
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x1800104B8 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplication::Initialize(CApplication *this, const unsigned __int16 *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  void *v4; // rbp
  DWORD LastError; // ebx
  __int64 v9; // r9
  signed int v10; // ecx
  unsigned int v11; // eax
  BOOL v12; // ecx
  __int64 v13; // rax
  signed int v14; // eax

  v3 = (_QWORD *)((char *)this + 24);
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v4);
    SetLastError(LastError);
  }
  *v3 = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  v10 = _AllocStringWorker<CTCoAllocPolicy>(this, a2, a2);
  if ( v10 >= 0 )
  {
    v11 = CApplication::s_lastAppToken + 1;
    *((_QWORD *)this + 74) = a3;
    *((_DWORD *)this + 4) = v11;
    CApplication::s_lastAppToken = v11;
    v12 = *a2 != 0;
    *((_DWORD *)this + 139) = v12;
    *((_DWORD *)this + 138) = v12;
    if ( !v12 )
    {
      *((_DWORD *)this + 42) = 1;
      *((_DWORD *)this + 44) = 2;
      *((_DWORD *)this + 71) = 2;
      *((_DWORD *)this + 72) = 2;
    }
    v13 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
            ThreadPool,
            CApplication::SoundLevelChangeCompletionCallback,
            this);
    *((_QWORD *)this + 28) = v13;
    if ( v13 )
    {
      return 0;
    }
    else
    {
      v14 = GetLastError();
      v10 = (unsigned __int16)v14 | 0x80070000;
      if ( v14 <= 0 )
        return (unsigned int)v14;
    }
  }
  return (unsigned int)v10;
}
