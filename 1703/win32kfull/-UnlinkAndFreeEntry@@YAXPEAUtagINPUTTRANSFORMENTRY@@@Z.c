/*
 * XREFs of ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01CD6F4
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkAndFreeEntry(struct tagINPUTTRANSFORMENTRY *a1)
{
  __int64 v1; // rdx
  struct tagINPUTTRANSFORMENTRY **v2; // rax

  v1 = *(_QWORD *)a1;
  v2 = (struct tagINPUTTRANSFORMENTRY **)*((_QWORD *)a1 + 1);
  if ( *(struct tagINPUTTRANSFORMENTRY **)(*(_QWORD *)a1 + 8LL) != a1 || *v2 != a1 )
    __fastfail(3u);
  *v2 = (struct tagINPUTTRANSFORMENTRY *)v1;
  *(_QWORD *)(v1 + 8) = v2;
  Win32FreePool(a1);
}
