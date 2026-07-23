/*
 * XREFs of DbgkpLkmdFireCallbacks @ 0x1406820EC
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140681C24 (DbgkCaptureLiveDump.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     ExGetCallBackBlockContext @ 0x14008BB84 (ExGetCallBackBlockContext.c)
 *     ExDereferenceCallBackBlock @ 0x14008BC30 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x14008BD80 (ExGetCallBackBlockRoutine.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall DbgkpLkmdFireCallbacks(__int64 a1, int a2, __int64 a3)
{
  char v3; // si
  int ProcessSessionId; // ebx
  _RTL_RUN_ONCE *v8; // rdi
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rbp
  int Ptr; // eax
  int (__fastcall *v12)(__int64 (__fastcall *)(__int64, __int64, __int64), __int64 (__fastcall *)(), __int64, __int64, __int64); // rbx
  __int64 v13; // rax

  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(a3) || ProcessSessionId == -1 )
      v3 = 0;
  }
  v8 = &RunOnce;
  v9 = 8LL;
  do
  {
    v10 = ExReferenceCallBackBlock((signed __int64 *)v8);
    if ( v10 )
    {
      Ptr = (int)v8[1].Ptr;
      if ( (Ptr & a2) != 0 && ((Ptr & 4) == 0 || v3) )
      {
        v12 = (int (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, __int64), __int64 (__fastcall *)(), __int64, __int64, __int64))ExGetCallBackBlockRoutine((__int64)v10);
        (*(void (__fastcall **)(__int64))(a1 + 5192))(a1 + 5120);
        v13 = ExGetCallBackBlockContext((__int64)v10);
        if ( v12(DbgkpLkmdSnapData, DbgkpLkmdIsMemoryBlockPresentFromCallback, a1, v13, a3) < 0 )
          (*(void (__fastcall **)(__int64))(a1 + 5200))(a1 + 5120);
      }
      ExDereferenceCallBackBlock((signed __int64 *)v8, v10);
    }
    v8 += 2;
    --v9;
  }
  while ( v9 );
}
