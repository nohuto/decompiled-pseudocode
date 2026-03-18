/*
 * XREFs of ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C01CD244
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearStaleEntries(struct tagINPUTTRANSFORMLIST *a1, __int64 a2)
{
  char *v2; // rsi
  char *v4; // rbx
  unsigned __int64 v5; // r8
  char *v6; // rcx
  __int64 v7; // rcx
  char **v8; // rax
  char *v9; // rdi

  v2 = (char *)a1 + 8;
  v4 = (char *)*((_QWORD *)a1 + 1);
  if ( v4 != (char *)a1 + 8 && v4 != *((char **)a1 + 2) )
  {
    v5 = gqpcAgeLimit;
    if ( gqpcAgeLimit || (v5 = 5LL * gliQpcFreq, (gqpcAgeLimit = 5LL * gliQpcFreq) != 0) )
    {
      v6 = *(char **)v4;
      if ( *(char **)v4 != v2 )
      {
        do
        {
          if ( a2 - *((_QWORD *)v4 + 2) > v5 )
            break;
          v4 = v6;
          v6 = *(char **)v6;
        }
        while ( v6 != v2 );
        while ( 1 )
        {
          v9 = *(char **)v4;
          if ( *(char **)v4 == v2 )
            break;
          EtwTraceTransformAgeDecay(a1, *((_QWORD *)v9 + 2));
          v7 = *(_QWORD *)v9;
          v8 = (char **)*((_QWORD *)v9 + 1);
          if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || *v8 != v9 )
            __fastfail(3u);
          *v8 = (char *)v7;
          *(_QWORD *)(v7 + 8) = v8;
          Win32FreePool(v9);
          *((_DWORD *)a1 + 22) |= 2u;
        }
      }
    }
  }
}
