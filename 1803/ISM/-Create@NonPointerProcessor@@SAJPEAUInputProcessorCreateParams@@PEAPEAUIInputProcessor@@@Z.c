/*
 * XREFs of ?Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006B000
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall NonPointerProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax

  v2 = 0;
  if ( *(_QWORD *)a1 && (*(_BYTE *)(*(_QWORD *)a1 + 4LL) & 0x3B) != 0 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v5 = malloc(0x28uLL);
    v6 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x28uLL);
      v7 = *((_QWORD *)a1 + 1);
      v8 = *(_QWORD *)a1;
      v6[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v6 + 4) = 1;
      *v6 = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
      v6[1] = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
      v6[4] = v8;
      v6[3] = v7;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
      *a2 = (struct IInputProcessor *)v6;
    else
      return (unsigned int)-2147024882;
  }
  return v2;
}
