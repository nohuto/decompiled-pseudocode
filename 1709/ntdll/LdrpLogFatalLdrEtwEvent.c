/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x180002258
 * Callers:
 *     LdrpInitializationFailure @ 0x180002208 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180087990 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

_WORD *__fastcall LdrpLogFatalLdrEtwEvent(const void **a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  _WORD *v5; // rbx
  int v6; // eax
  _WORD *result; // rax
  _WORD *v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]

  v3 = *(unsigned __int16 *)a1;
  if ( v3 + 2 > *((unsigned __int16 *)a1 + 1) || (v5 = a1[1], v5[v3 >> 1]) )
  {
    result = (_WORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(NtdllBaseTag + 1572864), v3 + 2);
    v5 = result;
    if ( !result )
      return result;
    memmove(result, a1[1], *(unsigned __int16 *)a1);
    v5[(unsigned __int64)*(unsigned __int16 *)a1 >> 1] = 0;
  }
  v6 = *(unsigned __int16 *)a1 + 2;
  v8 = v5;
  v9 = v6;
  v10 = 0;
  result = (_WORD *)((__int64 (__fastcall *)(void *, __int64, __int64, _WORD **))EtwEventWriteNoRegistration)(
                      &UserLoaderGuid,
                      a2,
                      1LL,
                      &v8);
  if ( v5 != a1[1] )
    return (_WORD *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  return result;
}
