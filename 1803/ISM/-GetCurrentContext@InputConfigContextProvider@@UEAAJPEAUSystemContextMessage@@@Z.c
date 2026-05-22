/*
 * XREFs of ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180090720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputConfigContextProvider::GetCurrentContext(
        InputConfigContextProvider *this,
        struct SystemContextMessage *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 31) == *((_QWORD *)this + 32) )
    {
      return (unsigned int)-2147023728;
    }
    else
    {
      *(_DWORD *)a2 = 1;
      *((_DWORD *)a2 + 2) = (*((_QWORD *)this + 32) - *((_QWORD *)this + 31)) / 24LL;
      *((_QWORD *)a2 + 2) = *((_QWORD *)this + 31);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
