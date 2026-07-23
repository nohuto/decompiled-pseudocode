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

int __fastcall CsrClientConnectToServer(void *Src, int a2, void *a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  int result; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-28h] BYREF
  PVOID DllHandle; // [rsp+38h] [rbp-20h] BYREF
  PVOID *Callback; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return -1073741811;
  if ( !byte_18015BA59 )
  {
    v9 = NtCurrentPeb();
    byte_18015BA59 = 1;
    qword_18015BAA0 = v9->ProcessHeap;
  }
  if ( ProcedureAddress && !byte_18015BA58 )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0;
  }
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  v10 = byte_18015BA58;
  if ( OutHeaders->OptionalHeader.Subsystem != 1 )
    v10 = 1;
  byte_18015BA58 = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1u, 0LL, 0LL, (PUNICODE_STRING)&DllName, &DllHandle);
    if ( result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&ProcedureName, 0, &ProcedureAddress, 0, Callback);
    if ( result < 0 )
      return result;
    qword_18015BA90 = NtCurrentPeb()->ProcessHeap;
    Flags = RtlCreateTagHeap(qword_18015BA90, 0, (PWSTR)L"CSRPORT!", (PWSTR)L"CAPTURE");
    goto LABEL_23;
  }
  result = 0;
  if ( byte_18015B26C )
  {
    if ( a2 == 1 )
      result = sub_1800D39E4();
    else
      result = -1073741637;
  }
  else if ( a3 )
  {
    if ( PortHandle )
      goto LABEL_19;
    result = sub_18000B7EC(Src, (__int64)&v15);
    if ( result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_19:
      result = sub_18000AEF4(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
