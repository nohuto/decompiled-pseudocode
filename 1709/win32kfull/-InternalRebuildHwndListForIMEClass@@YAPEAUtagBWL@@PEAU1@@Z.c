/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C0143CF8
 * Callers:
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // r14
  _QWORD *v6; // r15
  char *v7; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  signed __int64 v11; // rcx

  v5 = (_QWORD *)Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = (char *)a1 + 32;
    v8 = *((_QWORD *)a1 + 4);
    v9 = (_QWORD *)((char *)a1 + 32);
    while ( v8 != 1 )
    {
      LOBYTE(v2) = 1;
      v3 = HMValidateHandleNoSecure(v8, v2, v3, v4);
      if ( !v3 )
        goto LABEL_9;
      do
      {
        v4 = *(_QWORD *)(v3 + 168);
        if ( (*(_BYTE *)(v4 + 102) & 1) != 0 )
          break;
        v2 = gpsi;
        if ( *(_WORD *)(v4 + 8) == *(_WORD *)(gpsi + 882LL) )
          break;
        v3 = *(_QWORD *)(v3 + 120);
      }
      while ( v3 );
      if ( v3 )
      {
        *v6++ = *v9;
      }
      else
      {
LABEL_9:
        *(_QWORD *)v7 = *v9;
        v7 += 8;
      }
      v8 = *++v9;
    }
    *v6 = 0LL;
    v10 = *v5;
    if ( *v5 )
    {
      v11 = (char *)v5 - v7;
      do
      {
        *(_QWORD *)v7 = v10;
        v7 += 8;
        v10 = *(_QWORD *)&v7[v11];
      }
      while ( v10 );
    }
    if ( *(_QWORD *)v7 != 1LL )
      *(_QWORD *)v7 = 1LL;
    Win32FreePool(v5, v2, v3);
  }
  return a1;
}
