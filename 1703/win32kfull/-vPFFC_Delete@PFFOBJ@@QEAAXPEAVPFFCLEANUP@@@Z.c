/*
 * XREFs of ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C002C808
 * Callers:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C002998C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C002C974 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     bKillPFFOBJ @ 0x1C010B5E8 (bKillPFFOBJ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02975F0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C002FDC4 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     FreeFileView @ 0x1C010796C (FreeFileView.c)
 */

void __fastcall PFFOBJ::vPFFC_Delete(PFFOBJ *this, struct PFFCLEANUP *a2)
{
  __int64 v2; // rdi
  __int64 i; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)this + 224LL);
        (unsigned int)v2 < *(_DWORD *)(*(_QWORD *)this + 144LL);
        v2 = (unsigned int)(v2 + 1) )
  {
    v15 = *(_QWORD *)(*(_QWORD *)this + 8 * v2 + 224);
    if ( v15 )
      PFEOBJ::vDelete((PFEOBJ *)&v15);
  }
  *((_QWORD *)a2 + 1) = *(_QWORD *)(*(_QWORD *)this + 80LL);
  *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  *((_QWORD *)a2 + 2) = *(_QWORD *)(*(_QWORD *)this + 168LL);
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)(*(_QWORD *)this + 168LL);
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 152);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v6 + 24);
      if ( v10 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v9 + 80LL) == v10 )
        {
          v11 = 0LL;
          if ( *(_DWORD *)(v7 + 36) )
          {
            do
            {
              v12 = *(_QWORD *)(*(_QWORD *)this + 168LL);
              v13 = *(_QWORD *)(*(_QWORD *)(v12 + 152) + 8 * v11);
              v14 = v12
                  + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 152LL) + 8 * v11) + 80LL)
                  - *(_QWORD *)this;
              v11 = (unsigned int)(v11 + 1);
              *(_QWORD *)(v13 + 80) = v14;
            }
            while ( (unsigned int)v11 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 168LL) + 36LL) );
          }
        }
      }
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 168LL) + 168LL) = 0LL;
  }
  else
  {
    if ( *(_QWORD *)(v6 + 152) && *(_DWORD *)(v6 + 36) )
      FreeFileView();
    v8 = *(_QWORD *)(*(_QWORD *)this + 208LL);
    if ( v8 )
      Win32FreePool(v8);
  }
  if ( i )
    Win32FreePool(i);
  Win32FreePool(*(_QWORD *)this);
  *(_QWORD *)this = 0LL;
}
