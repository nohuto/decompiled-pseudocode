/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025669C
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0101358 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DoFontManagement(struct DCOBJ *a1, int a2, unsigned int a3, unsigned __int16 *a4)
{
  size_t v5; // r14
  _DWORD *v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // r8
  _QWORD v19[10]; // [rsp+50h] [rbp-78h] BYREF
  struct _FD_XFORM *v20; // [rsp+D0h] [rbp+8h] BYREF
  int v21; // [rsp+D8h] [rbp+10h]

  v21 = a2;
  v5 = a3;
  v8 = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 3080LL) )
    return 0LL;
  if ( a2 == 8 )
    return _guard_dispatch_icall_fptr();
  v20 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v20, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v20[33].eXX);
  if ( !v20 )
  {
LABEL_8:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20, v10, v11);
    return 0LL;
  }
  if ( a2 == 514 )
  {
    v12 = (unsigned __int64)(int)v5 >> 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 32LL) & 0x8000) != 0 )
    {
      if ( (unsigned int)v5 > 0x2710000 )
        goto LABEL_8;
      v13 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v5, 1886221383LL, 0);
      v14 = v13;
      if ( !v13 )
        goto LABEL_8;
      memmove(v13, a4, v5);
    }
    else
    {
      v14 = a4;
    }
    if ( (unsigned int)v12 > 0x9C4000 )
      v8 = 0LL;
    else
      v8 = PALLOCMEM2((unsigned int)(4 * v12), 1835426887LL, 1);
    if ( !v8 )
    {
      if ( v14 != a4 )
        Win32FreePool(v14, v10, v11);
      goto LABEL_8;
    }
    if ( (int)v12 > 1 )
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v20, v14 + 1, v12 - 1, v8 + 1, 0, 0);
    *v8 = *v14;
    if ( v14 != a4 )
      Win32FreePool(v14, v10, v11);
  }
  v15 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)(*(_QWORD *)a1 + 512LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 512LL) != 0LL)) == 0 )
  {
    memset(v19, 0, sizeof(v19));
    v19[2] = *(_QWORD *)(v15 + 24);
    v19[3] = *(_QWORD *)(v15 + 48);
    WORD2(v19[9]) = 1;
  }
  v17 = _guard_dispatch_icall_fptr();
  if ( v8 )
    Win32FreePool(v8, v16, v18);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20, v16, v18);
  return v17;
}
