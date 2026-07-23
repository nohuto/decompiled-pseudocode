/*
 * XREFs of CsrVerifyRegion @ 0x1800D3C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CsrVerifyRegion(unsigned __int64 a1, unsigned int a2)
{
  struct _PEB *v3; // rcx
  unsigned __int64 v4; // r9
  PVOID ReadOnlySharedMemoryBase; // rdx
  bool result; // al

  result = 0;
  if ( !byte_18015B26C )
  {
    v3 = NtCurrentPeb();
    v4 = a2 + a1 - 1;
    if ( v4 >= a1 )
    {
      ReadOnlySharedMemoryBase = v3->ReadOnlySharedMemoryBase;
      if ( v4 <= (unsigned __int64)ReadOnlySharedMemoryBase + qword_18015BA78 - 1
        && a1 >= (unsigned __int64)ReadOnlySharedMemoryBase )
      {
        return 1;
      }
    }
  }
  return result;
}
