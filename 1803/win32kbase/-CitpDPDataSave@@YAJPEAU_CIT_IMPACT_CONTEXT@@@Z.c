/*
 * XREFs of ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0161834
 * Callers:
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01610DC (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01620C8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0164958 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CitpDPDataSave(struct _CIT_IMPACT_CONTEXT *a1)
{
  void *v1; // rdi
  char *Data; // rbx
  int v3; // r9d
  __int64 v4; // r8
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = (void *)*((_QWORD *)a1 + 65);
  Data = (char *)a1 + 528;
  v3 = *((_DWORD *)a1 + 72);
  v4 = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)a1 + 136) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                        - *((_DWORD *)a1 + 190);
  *((_QWORD *)a1 + 69) = v4;
  *((_DWORD *)a1 + 135) = v3;
  if ( !v1 )
    return -1073741637;
  RtlInitUnicodeString(&DestinationString, L"DP");
  result = ZwSetValueKey(v1, &DestinationString, 0, 3u, Data, 0xE8u);
  if ( result >= 0 )
    return 0;
  return result;
}
