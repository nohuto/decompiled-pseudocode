/*
 * XREFs of FreeFileView @ 0x1C010FC34
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C003903C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00B37A0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00B4B9C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     vUnmapRemoteFonts @ 0x1C0269EC0 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall FreeFileView(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _FILEVIEW **v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // rdi
  __int64 *v10; // r14
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  char v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v13, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
  if ( UmfdFileviewLookup )
  {
    v9 = v2;
    v10 = (__int64 *)a1;
    v11 = 0LL;
    if ( a1 > a1 + 8 * v2 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        v12 = *v10;
        if ( (*(_DWORD *)(*v10 + 40) & 0x20) != 0 )
        {
          v14 = *(_DWORD *)(v12 + 64);
          NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v12, &v14);
        }
        ++v10;
        ++v11;
      }
      while ( v11 < v9 );
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
  v6 = (struct _FILEVIEW **)a1;
  v7 = 0LL;
  if ( a1 > a1 + 8 * v2 )
    v2 = 0LL;
  if ( v2 )
  {
    do
    {
      if ( *((_QWORD *)*v6 + 11) )
        vUnmapRemoteFonts();
      else
        vUnreferenceFileviewSection(*v6);
      ++v6;
      ++v7;
    }
    while ( v7 < v2 );
  }
  return Win32FreePool(a1, v4, v5);
}
