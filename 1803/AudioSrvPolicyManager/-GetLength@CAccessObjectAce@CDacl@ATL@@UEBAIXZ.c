/*
 * XREFs of ?GetLength@CAccessObjectAce@CDacl@ATL@@UEBAIXZ @ 0x180033500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::CAccessObjectAce::GetLength(ATL::CDacl::CAccessObjectAce *this)
{
  int v1; // ebx

  v1 = *((_QWORD *)this + 19) != 0LL ? 28 : 12;
  if ( *((_QWORD *)this + 20) )
    v1 = *((_QWORD *)this + 19) != 0LL ? 44 : 28;
  return v1 + GetLengthSid((char *)this + 16);
}
