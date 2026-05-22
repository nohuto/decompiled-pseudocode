/*
 * XREFs of ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x1800831C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall InputDestTarget::IsSameByInputDest(InputDestTarget *this, const struct tagINPUTDEST *a2)
{
  __int64 v2; // r8
  bool result; // al

  v2 = *(_QWORD *)((char *)a2 + 4);
  result = 1;
  if ( !*((_QWORD *)this + 7) && !v2 )
    return operator==((__int64)a2 + 32, (__int64)this + 16);
  if ( *((_QWORD *)this + 7) != v2 )
    return 0;
  return result;
}
