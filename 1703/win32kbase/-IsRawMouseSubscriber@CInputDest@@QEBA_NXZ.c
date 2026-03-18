/*
 * XREFs of ?IsRawMouseSubscriber@CInputDest@@QEBA_NXZ @ 0x1C0118410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInputDest::IsRawMouseSubscriber(CInputDest *this)
{
  int v1; // eax

  if ( *((_DWORD *)this + 23) == 1 )
    return (*(_DWORD *)(*((_QWORD *)this + 10) + 124LL) & 2u) >> 1;
  else
    LOBYTE(v1) = 0;
  return v1;
}
