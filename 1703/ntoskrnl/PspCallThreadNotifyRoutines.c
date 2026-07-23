/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1404FA280
 * Callers:
 *     PspInitializeThunkContext @ 0x1404F8B04 (PspInitializeThunkContext.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     ExGetCallBackBlockContext @ 0x14008BB84 (ExGetCallBackBlockContext.c)
 *     ExDereferenceCallBackBlock @ 0x14008BC30 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x14008BD80 (ExGetCallBackBlockRoutine.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall PspCallThreadNotifyRoutines(_QWORD *a1, unsigned __int8 a2, char a3)
{
  bool v5; // r12
  _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rsi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbp
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rdi
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rax
  _RTL_RUN_ONCE *v14; // rbx
  __int64 v15; // rsi
  struct _EX_RUNDOWN_REF *v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rbp
  __int64 v18; // rdi
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // rax
  _RTL_RUN_ONCE *v20; // rbx
  __int64 v21; // rsi
  struct _EX_RUNDOWN_REF *v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rdi
  void (__fastcall *v26)(_QWORD, _QWORD, _QWORD); // rax

  v5 = a1[243] != 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v20 = &PspCreateThreadNotifyRoutine;
        v21 = 64LL;
        do
        {
          v22 = ExReferenceCallBackBlock((signed __int64 *)v20);
          v23 = v22;
          if ( v22 )
          {
            if ( (ExGetCallBackBlockContext((__int64)v22) & 1) != 0 )
            {
              v25 = a1[68];
              v26 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v24);
              v26(*(_QWORD *)(v25 + 736), a1[200], a2);
            }
            ExDereferenceCallBackBlock((signed __int64 *)v20, v23);
          }
          ++v20;
          --v21;
        }
        while ( v21 );
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
            v12 = a1[68];
            v13 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v11);
            v13(*(_QWORD *)(v12 + 736), a1[200], a2);
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
    v14 = &PspCreateThreadNotifyRoutine;
    v15 = 64LL;
    do
    {
      v16 = ExReferenceCallBackBlock((signed __int64 *)v14);
      v17 = v16;
      if ( v16 )
      {
        if ( !v5 || (ExGetCallBackBlockContext((__int64)v16) & 2) != 0 )
        {
          v18 = a1[68];
          v19 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine((__int64)v17);
          v19(*(_QWORD *)(v18 + 736), a1[200], 0LL);
        }
        ExDereferenceCallBackBlock((signed __int64 *)v14, v17);
      }
      ++v14;
      --v15;
    }
    while ( v15 );
  }
}
