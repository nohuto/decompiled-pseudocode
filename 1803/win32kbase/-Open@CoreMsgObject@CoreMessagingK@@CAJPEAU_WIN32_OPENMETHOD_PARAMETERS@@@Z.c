/*
 * XREFs of ?Open@CoreMsgObject@CoreMessagingK@@CAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C01670E8
 * Callers:
 *     CoreMsgObjectCallout @ 0x1C01653FC (CoreMsgObjectCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::CoreMsgObject::Open(struct _WIN32_OPENMETHOD_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rsi
  int ProcessSessionId; // eax

  v2 = 0;
  if ( !(unsigned __int8)PsIsSystemProcess(*((_QWORD *)a1 + 1)) )
  {
    v3 = (_DWORD *)*((_QWORD *)a1 + 2);
    ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)a1 + 1));
    if ( ProcessSessionId == -1 || ProcessSessionId != *v3 )
      return (unsigned int)-1073741790;
  }
  return v2;
}
