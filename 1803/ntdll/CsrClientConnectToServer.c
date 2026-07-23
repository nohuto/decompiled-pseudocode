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

NTSTATUS __fastcall CsrClientConnectToServer(void *Src, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-28h] BYREF
  PVOID DllHandle; // [rsp+38h] [rbp-20h] BYREF
  PVOID *Callback; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return -1073741811;
  if ( !byte_18015CAB1 )
  {
    v9 = NtCurrentPeb();
    byte_18015CAB1 = 1;
    qword_18015CB00 = v9->ProcessHeap;
  }
  if ( ProcedureAddress && !byte_18015CAB0 )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0;
  }
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  v10 = byte_18015CAB0;
  if ( OutHeaders->OptionalHeader.Subsystem != 1 )
    v10 = 1;
  byte_18015CAB0 = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1u, 0LL, 0LL, (PUNICODE_STRING)&DllName, &DllHandle);
    if ( result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&ProcedureName, 0, &ProcedureAddress, 0, Callback);
    if ( result < 0 )
      return result;
    qword_18015CAF0 = NtCurrentPeb()->ProcessHeap;
    dword_18015CAF8 = RtlCreateTagHeap(qword_18015CAF0, 0, (PWSTR)L"CSRPORT!", (PWSTR)L"CAPTURE");
    goto LABEL_23;
  }
  result = 0;
  if ( byte_18015C298 )
  {
    if ( a2 == 1 )
      result = sub_1800C8094();
    else
      result = -1073741637;
  }
  else if ( a3 )
  {
    if ( PortHandle )
      goto LABEL_19;
    result = sub_18005996C(Src, (__int64)&v15);
    if ( result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_19:
      result = sub_18005CEA8(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
