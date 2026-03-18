/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C013D924
 * Callers:
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // r15
  char *v4; // rbx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  signed __int64 v10; // rcx

  v2 = (_QWORD *)Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v3 = v2;
  if ( v2 )
  {
    v4 = (char *)a1 + 32;
    v5 = *((_QWORD *)a1 + 4);
    v6 = (_QWORD *)((char *)a1 + 32);
    while ( v5 != 1 )
    {
      v7 = HMValidateHandleNoSecure(v5, 1);
      if ( !v7 )
        goto LABEL_9;
      do
      {
        v8 = *(_QWORD *)(v7 + 168);
        if ( (*(_BYTE *)(v8 + 94) & 1) != 0 )
          break;
        if ( *(_WORD *)(v8 + 8) == *(_WORD *)(gpsi + 882LL) )
          break;
        v7 = *(_QWORD *)(v7 + 120);
      }
      while ( v7 );
      if ( v7 )
      {
        *v3++ = *v6;
      }
      else
      {
LABEL_9:
        *(_QWORD *)v4 = *v6;
        v4 += 8;
      }
      v5 = *++v6;
    }
    *v3 = 0LL;
    v9 = *v2;
    if ( *v2 )
    {
      v10 = (char *)v2 - v4;
      do
      {
        *(_QWORD *)v4 = v9;
        v4 += 8;
        v9 = *(_QWORD *)&v4[v10];
      }
      while ( v9 );
    }
    if ( *(_QWORD *)v4 != 1LL )
      *(_QWORD *)v4 = 1LL;
    Win32FreePool(v2);
  }
  return a1;
}
