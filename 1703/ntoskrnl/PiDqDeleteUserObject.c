/*
 * XREFs of PiDqDeleteUserObject @ 0x1406985F8
 * Callers:
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140698714 (PiDqDeleteUserObjectFromLoadedHives.c)
 * Callees:
 *     wcsrchr @ 0x14016BD30 (wcsrchr.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1404BE590 (PiDqGetRelativeObjectRegPath.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall PiDqDeleteUserObject(char *a1, __int64 a2, int a3)
{
  int RelativeObjectRegPath; // eax
  wchar_t *v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // esi
  unsigned int i; // esi
  wchar_t *v12; // rax
  __int64 v13; // r8
  wchar_t *Str; // [rsp+58h] [rbp+20h] BYREF

  Str = 0LL;
  RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(a2, a3, (PVOID *)&Str);
  v6 = Str;
  v7 = RelativeObjectRegPath;
  if ( RelativeObjectRegPath < 0 )
    goto LABEL_18;
  if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
    v8 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
  else
    v8 = 0LL;
  v7 = RegRtlDeleteTreeInternal(a1, Str, v8, 0);
  v9 = 2;
  v10 = a3 - 1;
  if ( !v10 )
    goto LABEL_9;
  if ( v10 != 2 )
  {
    v9 = 0;
LABEL_9:
    i = 0;
    if ( !v9 )
      goto LABEL_18;
    goto LABEL_10;
  }
  v9 = 1;
  for ( i = 0; i < v9; ++i )
  {
LABEL_10:
    v12 = wcsrchr(v6, 0x5Cu);
    if ( v12 )
    {
      *v12 = 0;
      if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
        v13 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
      else
        v13 = 0LL;
      if ( (int)RegRtlDeleteKeyTransacted(a1, v6, v13) < 0 )
        break;
    }
  }
LABEL_18:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x58706E50u);
  return v7;
}
