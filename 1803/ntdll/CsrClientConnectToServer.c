/*
 * XREFs of CsrClientConnectToServer @ 0x1800597A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     sub_18005996C @ 0x18005996C (sub_18005996C.c)
 *     sub_18005CEA8 @ 0x18005CEA8 (sub_18005CEA8.c)
 *     RtlCreateTagHeap @ 0x18007D190 (RtlCreateTagHeap.c)
 *     sub_1800C8094 @ 0x1800C8094 (sub_1800C8094.c)
 */

__int64 __fastcall CsrClientConnectToServer(void *Src, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v13[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return 3221225485LL;
  if ( !byte_18015CAB1 )
  {
    v9 = NtCurrentPeb();
    byte_18015CAB1 = 1;
    qword_18015CB00 = (__int64)v9->ProcessHeap;
  }
  if ( qword_18015CAA8 && !byte_18015CAB0 )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0LL;
  }
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v12);
  v10 = byte_18015CAB0;
  if ( *(_WORD *)(v12 + 92) != 1 )
    v10 = 1;
  byte_18015CAB0 = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1, 0LL, 0LL, (__int64)&unk_1801100A8, v13);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(v13[0], &qword_1801100B8, 0, &qword_18015CAA8, 0, retaddr);
    if ( (int)result < 0 )
      return result;
    qword_18015CAF0 = (__int64)NtCurrentPeb()->ProcessHeap;
    dword_18015CAF8 = RtlCreateTagHeap((void *)qword_18015CAF0);
    goto LABEL_23;
  }
  result = 0LL;
  if ( byte_18015C298 )
  {
    if ( a2 == 1 )
      result = sub_1800C8094();
    else
      result = 3221225659LL;
  }
  else if ( a3 )
  {
    if ( qword_18015CAE8 )
      goto LABEL_19;
    result = sub_18005996C(Src, (__int64)&v15);
    if ( (int)result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_19:
      result = sub_18005CEA8(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
