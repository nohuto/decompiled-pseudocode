/*
 * XREFs of ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CCA10
 * Callers:
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x1800CC080 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x1800CC988 (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CCA10 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CCA10 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

void __fastcall CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry(CHwBitmapCache::FormatCacheEntry *this)
{
  void *v1; // rbx
  char *v3; // rbx
  __int64 i; // rdi
  CMILRefCountBase *v5; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry(*((CHwBitmapCache::FormatCacheEntry **)this + 1));
    operator delete(v1);
  }
  v3 = (char *)this + 16;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v3 + 6); i = (unsigned int)(i + 1) )
  {
    v5 = *(CMILRefCountBase **)(*(_QWORD *)v3 + 72 * i + 64);
    if ( v5 )
      CMILRefCountBase::Release(v5);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(v3);
}
