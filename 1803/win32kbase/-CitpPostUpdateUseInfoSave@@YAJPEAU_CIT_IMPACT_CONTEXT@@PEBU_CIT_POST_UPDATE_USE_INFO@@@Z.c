/*
 * XREFs of ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0163794
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0162E30 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0164958 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C01624B4 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0163604 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 */

NTSTATUS __fastcall CitpPostUpdateUseInfoSave(struct _CIT_IMPACT_CONTEXT *a1, _BYTE *Data)
{
  NTSTATUS result; // eax
  _BYTE *v5; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v8[112]; // [rsp+50h] [rbp-88h] BYREF

  KeyHandle = 0LL;
  memset(v8, 0, sizeof(v8));
  if ( !*((_WORD *)a1 + 148) )
    return -1073741823;
  if ( !Data )
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)v8);
  result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PUUActive");
    v5 = v8;
    if ( Data )
      v5 = Data;
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, v5, 0x70u);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
