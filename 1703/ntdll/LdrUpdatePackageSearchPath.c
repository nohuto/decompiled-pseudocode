/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800DF900
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  wchar_t *v5; // rax
  wchar_t *v6; // r14
  wchar_t *Buffer; // rsi

  v1 = 0;
  if ( !Src )
    return (unsigned int)-1073741811;
  if ( !DestinationString.Length )
    return (unsigned int)-1073741811;
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3;
  if ( v4 )
  {
    if ( v4 >= 0xFFFE )
    {
      return (unsigned int)-1073741562;
    }
    else
    {
      v5 = (wchar_t *)sub_180043FE0(v4 + 2);
      v6 = v5;
      if ( v5 )
      {
        memmove(v5, Src, v4);
        v6[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive(&qword_18015C3A8);
        Buffer = DestinationString.Buffer;
        DestinationString.Length = v4;
        DestinationString.MaximumLength = v4 + 2;
        DestinationString.Buffer = v6;
        RtlReleaseSRWLockExclusive(&qword_18015C3A8);
        if ( Buffer != stru_18015A2C0.Buffer )
          RtlDeleteBoundaryDescriptor();
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
