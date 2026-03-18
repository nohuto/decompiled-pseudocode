/*
 * XREFs of ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1C01CD31C
 * Callers:
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01CD3B4 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 * Callees:
 *     <none>
 */

struct tagINPUTTRANSFORMENTRY *__fastcall FindEntryByTime(
        struct tagINPUTTRANSFORMLIST *a1,
        struct tagINPUTTRANSFORMLIST **a2,
        __int64 a3)
{
  struct tagINPUTTRANSFORMLIST *v3; // rbx
  char *v4; // r10
  struct tagINPUTTRANSFORMENTRY *v6; // r9
  struct tagINPUTTRANSFORMLIST *v7; // rdi
  __int64 v8; // rdx
  struct tagINPUTTRANSFORMENTRY *v10; // rdx
  struct tagINPUTTRANSFORMENTRY *i; // r8

  v3 = *a2;
  v4 = (char *)a1 + 8;
  v6 = (struct tagINPUTTRANSFORMENTRY *)a2;
  if ( *a2 == (struct tagINPUTTRANSFORMLIST *)((char *)a1 + 8) )
    return v6;
  if ( a2[1] != (struct tagINPUTTRANSFORMLIST *)v4 )
  {
LABEL_8:
    v10 = (struct tagINPUTTRANSFORMENTRY *)*((_QWORD *)v6 + 1);
    for ( i = *(struct tagINPUTTRANSFORMENTRY **)v6;
          i != (struct tagINPUTTRANSFORMENTRY *)v4
       && (unsigned __int64)(a3 - *((_QWORD *)v6 + 2)) >= *((_QWORD *)v10 + 2) - *((_QWORD *)v6 + 2);
          i = *(struct tagINPUTTRANSFORMENTRY **)i )
    {
      v10 = v6;
      v6 = i;
    }
    return v6;
  }
  v7 = a2[2];
  v8 = *((_QWORD *)a1 + 2);
  if ( (unsigned __int64)(a3 - (_QWORD)v7) >= *(_QWORD *)(v8 + 16) - (_QWORD)v7 )
  {
    v6 = v3;
    goto LABEL_8;
  }
  if ( a3 - (__int64)v7 <= (unsigned __int64)(*(_QWORD *)(v8 + 16) - a3) )
    return v6;
  return (struct tagINPUTTRANSFORMENTRY *)v8;
}
