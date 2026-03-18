/*
 * XREFs of ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C00330C0
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0097CEC (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::CConnection(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *result; // rax

  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 7) = 8LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_BYTE *)this + 240) = 0;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *(_DWORD *)this = 1;
  InitializeSListHead((PSLIST_HEADER)this + 6);
  *((_QWORD *)this + 24) = (char *)this + 184;
  *((_QWORD *)this + 23) = (char *)this + 184;
  result = this;
  *((_DWORD *)this + 44) = 60;
  *((_DWORD *)this + 45) = 1;
  return result;
}
