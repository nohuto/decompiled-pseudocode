/*
 * XREFs of ?IsSameByInputDest@DWMInputTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x180021F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DWMInputTarget::IsSameByInputDest(DWMInputTarget *this, const struct tagINPUTDEST *a2)
{
  if ( !*((_QWORD *)this + 17) && !*(_QWORD *)((char *)a2 + 4) )
    return operator==((char *)a2 + 40, (char *)this + 88);
  return *((_DWORD *)this + 35) == *((_DWORD *)a2 + 2) && *((_DWORD *)this + 34) == *((_DWORD *)a2 + 1);
}
