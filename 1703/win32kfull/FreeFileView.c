/*
 * XREFs of FreeFileView @ 0x1C010796C
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C002C808 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0021448 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C002741C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     vUnmapRemoteFonts @ 0x1C026B140 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall FreeFileView(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rcx
  struct _FILEVIEW **v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 *v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v13, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
  if ( UmfdFileviewLookup )
  {
    v9 = (__int64 *)a1;
    v10 = 0LL;
    v11 = (unsigned __int64)(8 * v2 + 7) >> 3;
    if ( a1 > a1 + 8 * v2 )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        v12 = *v9;
        if ( (*(_DWORD *)(*v9 + 40) & 0x20) != 0 )
        {
          v14 = *(_DWORD *)(v12 + 64);
          NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v12, &v14);
        }
        ++v9;
        ++v10;
      }
      while ( v10 < v11 );
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
  v4 = a1 + 8 * v2;
  v5 = (struct _FILEVIEW **)a1;
  v6 = 0LL;
  v7 = (v4 - a1 + 7) >> 3;
  if ( a1 > v4 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      if ( *((_QWORD *)*v5 + 11) )
        vUnmapRemoteFonts();
      else
        vUnreferenceFileviewSection(*v5);
      ++v5;
      ++v6;
    }
    while ( v6 < v7 );
  }
  return Win32FreePool(a1);
}
