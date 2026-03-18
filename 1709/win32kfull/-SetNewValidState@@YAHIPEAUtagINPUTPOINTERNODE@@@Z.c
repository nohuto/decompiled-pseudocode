/*
 * XREFs of ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F61EC
 * Callers:
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F5838 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z @ 0x1C01F59D4 (-CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F64D8 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetNewValidState(unsigned int a1, struct tagINPUTPOINTERNODE *a2)
{
  unsigned int v4; // r8d
  int v5; // edx
  bool v6; // zf
  bool v7; // cf
  bool v8; // zf
  char *v9; // rax
  __int64 v10; // rcx
  char **v11; // rdx

  if ( (a1 & 0x70006) == 0x10006 )
  {
    v4 = 0;
    v7 = *((_DWORD *)a2 + 9) == 0;
    v8 = *((_DWORD *)a2 + 9) == 1;
    v5 = 2;
  }
  else
  {
    if ( (a1 & 0x70006) == 0x20000 )
    {
      v4 = 0;
      v5 = 3;
      v6 = *((_DWORD *)a2 + 9) == 1;
      goto LABEL_12;
    }
    if ( (a1 & 0x70006) != 0x20002 )
    {
      if ( (a1 & 0x70006) == 0x20006 )
      {
        v5 = 2;
      }
      else
      {
        if ( (a1 & 0x70006) != 0x40000 )
        {
          v4 = 0;
          if ( (a1 & 0x70006) != 0x40002 )
            return v4;
          v5 = 1;
          goto LABEL_11;
        }
        v5 = 3;
      }
      v4 = 0;
LABEL_11:
      v6 = *((_DWORD *)a2 + 9) == 2;
LABEL_12:
      LOBYTE(v4) = v6;
      goto LABEL_17;
    }
    v4 = 0;
    v7 = *((_DWORD *)a2 + 9) == 0;
    v8 = *((_DWORD *)a2 + 9) == 1;
    v5 = 1;
  }
  LOBYTE(v4) = v7 || v8;
LABEL_17:
  if ( v4 )
  {
    if ( (a1 & 4) != 0 )
      v4 = (a1 & 0x1F0) != 0;
    if ( v4 )
    {
      if ( (*((_DWORD *)a2 + 38) & 8) != 0 )
        v4 = (a1 >> 15) & 1;
      if ( v4 )
      {
        *((_DWORD *)a2 + 9) = v5;
        if ( v5 == 3 )
        {
          v9 = (char *)a2 + 16;
          if ( *(char **)v9 != v9 )
          {
            v10 = *(_QWORD *)v9;
            if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v11 = (char **)*((_QWORD *)a2 + 3), *v11 != v9) )
              __fastfail(3u);
            *v11 = (char *)v10;
            *(_QWORD *)(v10 + 8) = v11;
            *((_QWORD *)a2 + 3) = (char *)a2 + 16;
            *(_QWORD *)v9 = v9;
          }
        }
        *((_DWORD *)a2 + 38) = *((_DWORD *)a2 + 38) & 0xFFFFFFF3 | ((a1 & 0x2000 | (a1 >> 1) & 0x4000) >> 11);
      }
    }
  }
  return v4;
}
