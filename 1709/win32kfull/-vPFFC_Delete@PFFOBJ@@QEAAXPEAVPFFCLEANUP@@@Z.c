/*
 * XREFs of ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C003903C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     bKillPFFOBJ @ 0x1C0041A4C (bKillPFFOBJ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00B459C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C0293CC0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C003C0B0 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     FreeFileView @ 0x1C010FC34 (FreeFileView.c)
 */

void __fastcall PFFOBJ::vPFFC_Delete(PFFOBJ *this, struct PFFCLEANUP *a2, __int64 a3)
{
  __int64 v3; // rdi
  struct PFFCLEANUP *v4; // rsi
  __int64 i; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  for ( i = *(_QWORD *)(*(_QWORD *)this + 224LL);
        (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)this + 144LL);
        v3 = (unsigned int)(v3 + 1) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)this + 8 * v3 + 224);
    if ( v14 )
      PFEOBJ::vDelete((PFEOBJ *)&v14);
  }
  *((_QWORD *)v4 + 1) = *(_QWORD *)(*(_QWORD *)this + 80LL);
  *(_QWORD *)v4 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  *((_QWORD *)v4 + 2) = *(_QWORD *)(*(_QWORD *)this + 168LL);
  v7 = *(_QWORD *)this;
  v8 = *(_QWORD *)(*(_QWORD *)this + 168LL);
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 152);
    if ( v10 )
    {
      a3 = *(_QWORD *)(v7 + 24);
      if ( a3 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v10 + 80LL) == a3 )
        {
          v11 = 0LL;
          if ( *(_DWORD *)(v8 + 36) )
          {
            do
            {
              v12 = *(_QWORD *)(*(_QWORD *)this + 168LL);
              v13 = *(_QWORD *)(*(_QWORD *)(v12 + 152) + 8 * v11);
              a3 = v12
                 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 152LL) + 8 * v11) + 80LL)
                 - *(_QWORD *)this;
              v11 = (unsigned int)(v11 + 1);
              *(_QWORD *)(v13 + 80) = a3;
            }
            while ( (unsigned int)v11 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 168LL) + 36LL) );
          }
        }
      }
    }
    a2 = *(struct PFFCLEANUP **)(*(_QWORD *)this + 168LL);
    *((_QWORD *)a2 + 21) = 0LL;
  }
  else
  {
    if ( *(_QWORD *)(v7 + 152) )
    {
      a2 = (struct PFFCLEANUP *)*(unsigned int *)(v7 + 36);
      if ( (_DWORD)a2 )
        FreeFileView();
    }
    v9 = *(_QWORD *)(*(_QWORD *)this + 208LL);
    if ( v9 )
      Win32FreePool(v9, a2, a3);
  }
  if ( i )
    Win32FreePool(i, a2, a3);
  Win32FreePool(*(_QWORD *)this, a2, a3);
  *(_QWORD *)this = 0LL;
}
