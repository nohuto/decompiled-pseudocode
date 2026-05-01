/*
 * XREFs of ?GetCount@CGITCallbackArray@@EEAAJPEAI@Z @ 0x18030A0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGITCallbackArray::GetCount(CGITCallbackArray *this, unsigned int *a2)
{
  unsigned __int64 v2; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 > 0xFFFFFFFF )
  {
    *a2 = -1;
    return 2147942934LL;
  }
  else
  {
    *a2 = v2;
    return 0LL;
  }
}
