/*
 * XREFs of RtlxQueryRegistryValues @ 0x1C006EA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlxQueryRegistryValues(
        unsigned int RelativeTo,
        const wchar_t *Path,
        _RTL_QUERY_REGISTRY_TABLE *QueryTable,
        void *Context,
        void *Environment)
{
  __int64 (__fastcall *SystemRoutineAddress)(_QWORD, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *); // rax
  _UNICODE_STRING FunctionName; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&FunctionName, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(_QWORD, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *))MmGetSystemRoutineAddress(&FunctionName);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(_QWORD, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *))RtlQueryRegistryValues;
  return SystemRoutineAddress(RelativeTo, Path, QueryTable, Context, Environment);
}
