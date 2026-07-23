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

int __fastcall LdrpLogFatalLdrEtwEvent(const void **a1, const EVENT_DESCRIPTOR *a2)
{
  unsigned __int64 v3; // rcx
  _WORD *v5; // rbx
  unsigned int v6; // eax
  _WORD *Heap; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(unsigned __int16 *)a1;
  if ( v3 + 2 > *((unsigned __int16 *)a1 + 1) || (v5 = a1[1], v5[v3 >> 1]) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v5 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, a1[1], *(unsigned __int16 *)a1);
    v5[(unsigned __int64)*(unsigned __int16 *)a1 >> 1] = 0;
  }
  v6 = *(unsigned __int16 *)a1 + 2;
  UserData.Ptr = (unsigned __int64)v5;
  UserData.Size = v6;
  UserData.Reserved = 0;
  LODWORD(Heap) = EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1u, &UserData);
  if ( v5 != a1[1] )
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return (int)Heap;
}
