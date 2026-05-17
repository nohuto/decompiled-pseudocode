/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800D9180
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  wchar_t *v5; // rax
  wchar_t *v6; // r14
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
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
      v5 = (wchar_t *)sub_18003B5E0(v4 + 2);
      v6 = v5;
      if ( v5 )
      {
        memmove(v5, Src, v4);
        v6[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3E0, v7, v8, v9);
        Buffer = DestinationString.Buffer;
        DestinationString.Length = v4;
        DestinationString.MaximumLength = v4 + 2;
        DestinationString.Buffer = v6;
        RtlReleaseSRWLockExclusive(&qword_18015D3E0);
        if ( Buffer != stru_18015B2C0.Buffer )
          RtlDeleteBoundaryDescriptor((__int64)Buffer);
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
