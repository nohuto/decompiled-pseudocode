/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1404D28E0
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspInitializeThunkContext @ 0x14053F16C (PspInitializeThunkContext.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1400A5610 (ExDereferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400A5660 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x1400A63E0 (ExGetCallBackBlockContext.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall PspCallThreadNotifyRoutines(_QWORD *a1, unsigned __int8 a2, char a3)
{
  bool v5; // r15
  _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  char v10; // al
  __int64 v11; // rcx
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rax
  _RTL_RUN_ONCE *v13; // rbx
  __int64 v14; // rdi
  struct _EX_RUNDOWN_REF *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rsi
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // rax
  _RTL_RUN_ONCE *v18; // rbx
  __int64 v19; // rdi
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rsi
  __int64 v22; // rcx
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // rax

  v5 = a1[244] != 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v18 = &PspCreateThreadNotifyRoutine;
        v19 = 64LL;
        do
        {
          v20 = ExReferenceCallBackBlock((signed __int64 *)v18);
          v21 = v20;
          if ( v20 )
          {
            if ( (ExGetCallBackBlockContext((__int64)v20) & 1) != 0 )
            {
              v23 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v22);
              v23(*(_QWORD *)(a1[68] + 736LL), a1[200], a2);
            }
            ExDereferenceCallBackBlock((signed __int64 *)v18, v21);
          }
          ++v18;
          --v19;
        }
        while ( v19 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v6 = &PspCreateThreadNotifyRoutine;
      v7 = 64LL;
      do
      {
        v8 = ExReferenceCallBackBlock((signed __int64 *)v6);
        v9 = v8;
        if ( v8 )
        {
          v10 = ExGetCallBackBlockContext((__int64)v8);
          if ( (v10 & 1) == 0 && (!v5 || (v10 & 2) != 0) )
          {
            v12 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v11);
            v12(*(_QWORD *)(a1[68] + 736LL), a1[200], a2);
          }
          ExDereferenceCallBackBlock((signed __int64 *)v6, v9);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v13 = &PspCreateThreadNotifyRoutine;
    v14 = 64LL;
    do
    {
      v15 = ExReferenceCallBackBlock((signed __int64 *)v13);
      v16 = v15;
      if ( v15 )
      {
        if ( !v5 || (ExGetCallBackBlockContext((__int64)v15) & 2) != 0 )
        {
          v17 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine((__int64)v16);
          v17(*(_QWORD *)(a1[68] + 736LL), a1[200], 0LL);
        }
        ExDereferenceCallBackBlock((signed __int64 *)v13, v16);
      }
      ++v13;
      --v14;
    }
    while ( v14 );
  }
}
