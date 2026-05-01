/*
 * XREFs of ?RemoveThumbnailHandle@ThumbnailInteropFactoryBase@@UEAAXPEAX@Z @ 0x180167A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ThumbnailInteropFactoryBase::RemoveThumbnailHandle(ThumbnailInteropFactoryBase *this, void *a2)
{
  void **v2; // rdi
  void **v4; // rdx
  __int64 v6; // rcx
  void **v7; // rax
  unsigned __int64 v8; // r8
  size_t v9; // rbx

  v2 = (void **)*((_QWORD *)this + 7);
  v4 = (void **)*((_QWORD *)this + 8);
  while ( v2 != v4 && *v2 != a2 )
    ++v2;
  if ( v2 != v4 )
  {
    v6 = 0LL;
    v7 = v2 + 1;
    v8 = (unsigned __int64)((char *)v4 - (char *)(v2 + 1) + 7) >> 3;
    if ( v2 + 1 > v4 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( *v7 != a2 )
          *v2++ = *v7;
        ++v7;
        ++v6;
      }
      while ( v6 != v8 );
    }
    if ( v2 != v4 )
    {
      v9 = *((_QWORD *)this + 8) - (_QWORD)v4;
      memmove(v2, v4, v9);
      *((_QWORD *)this + 8) = (char *)v2 + v9;
    }
  }
}
