/*
 * XREFs of CsrClientConnectToServer @ 0x18000B620
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AEF4 @ 0x18000AEF4 (sub_18000AEF4.c)
 *     sub_18000B7EC @ 0x18000B7EC (sub_18000B7EC.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 *     sub_1800D39E4 @ 0x1800D39E4 (sub_1800D39E4.c)
 */

__int64 __fastcall CsrClientConnectToServer(void *Src, int a2, void *a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return 3221225485LL;
  if ( !byte_18015BA59 )
  {
    v9 = NtCurrentPeb();
    byte_18015BA59 = 1;
    qword_18015BAA0 = (__int64)v9->ProcessHeap;
  }
  if ( qword_18015BA50 && !byte_18015BA58 )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0LL;
  }
  RtlImageNtHeaderEx(3LL, NtCurrentPeb()->ImageBaseAddress, 0LL, &v12);
  v10 = byte_18015BA58;
  if ( *(_WORD *)(v12 + 92) != 1 )
    v10 = 1;
  byte_18015BA58 = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1, 0, 0, (unsigned int)&unk_180110170, (__int64)v13);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(
               v13[0],
               (unsigned int)&unk_180110180,
               0,
               (unsigned int)&qword_18015BA50,
               0,
               retaddr);
    if ( (int)result < 0 )
      return result;
    qword_18015BA90 = (__int64)NtCurrentPeb()->ProcessHeap;
    dword_18015BA98 = RtlCreateTagHeap((void *)qword_18015BA90);
    goto LABEL_23;
  }
  result = 0LL;
  if ( byte_18015B26C )
  {
    if ( a2 == 1 )
      result = sub_1800D39E4();
    else
      result = 3221225659LL;
  }
  else if ( a3 )
  {
    if ( qword_18015BA88 )
      goto LABEL_19;
    result = sub_18000B7EC(Src, (__int64)&v15);
    if ( (int)result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_19:
      result = sub_18000AEF4(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
