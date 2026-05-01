/*
 * XREFs of ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180136A60
 * Callers:
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38 (_lambda_0d74f069fa796de4b01adcedcd59308d_--operator().c)
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     _lambda_16dbbe28c6f74937ed7301029aac4a5a_::operator() @ 0x18006EEE0 (_lambda_16dbbe28c6f74937ed7301029aac4a5a_--operator().c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180072120 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     _lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::operator() @ 0x180088BAC (_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_--operator().c)
 * Callees:
 *     memcpy_s_1 @ 0x1801283D0 (memcpy_s_1.c)
 */

void __fastcall wil::details::StoredCallContextInfo::AssignMessage(
        wil::details::StoredCallContextInfo *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rax

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  if ( v2 )
  {
    v5 = 2 * v2 + 2;
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, v5);
    *((_QWORD *)this + 2) = v7;
    if ( v7 )
    {
      *((_BYTE *)this + 24) = 1;
      memcpy_s_1(v7, v5, a2, v5);
    }
  }
}
