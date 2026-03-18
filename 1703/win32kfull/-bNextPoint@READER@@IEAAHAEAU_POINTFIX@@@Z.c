/*
 * XREFs of ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C012068C
 * Callers:
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0120314 (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vNextPoint@LINER@@AEAAXXZ @ 0x1C01203BC (-vNextPoint@LINER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall READER::bNextPoint(READER *this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // rax
  unsigned int v5; // r8d
  int v7; // eax
  __int64 v8; // rdx

  v2 = (struct _POINTFIX *)*((_QWORD *)this + 3);
  if ( (unsigned __int64)v2 >= *((_QWORD *)this + 4) )
  {
    if ( (*((_DWORD *)this + 2) & 2) != 0 )
    {
      return 0;
    }
    else
    {
      v7 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8));
      v5 = 1;
      if ( v7 )
        *((_DWORD *)this + 10) |= 1u;
      else
        *((_DWORD *)this + 10) &= ~1u;
      *a2 = **((struct _POINTFIX **)this + 2);
      v8 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 3) = v8 + 8;
      *((_QWORD *)this + 4) = v8 + 8LL * *((unsigned int *)this + 3);
    }
  }
  else
  {
    v5 = 1;
    *a2 = *v2;
    *((_QWORD *)this + 3) += 8LL;
  }
  return v5;
}
