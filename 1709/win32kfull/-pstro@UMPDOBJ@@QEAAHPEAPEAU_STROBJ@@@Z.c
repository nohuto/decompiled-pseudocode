/*
 * XREFs of ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C00B9D04
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C00B7CF0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::pstro(UMPDOBJ *this, struct _STROBJ **a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  void *v7; // rdi
  void *v8; // rsi
  char *v9; // rax
  char *KernelPtr; // rax
  __int64 i; // r8
  __int64 v13; // rdx
  void *v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = (char *)*a2;
  if ( !*a2 )
    return 1LL;
  v7 = (void *)*((_QWORD *)v4 + 5);
  v14 = v7;
  if ( v7 )
  {
    if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v14, 2 * *(_DWORD *)v4, a4) )
      return 0LL;
    v7 = v14;
  }
  v8 = (void *)*((_QWORD *)v4 + 4);
  v14 = v8;
  if ( v8 )
  {
    if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v14, 24 * *(_DWORD *)v4, a4) )
      return 0LL;
    v8 = v14;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)v14);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v4; *(_QWORD *)&KernelPtr[8 * v13 + 8] = 0LL )
    {
      v13 = 3 * i;
      i = (unsigned int)(i + 1);
    }
  }
  if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 192), (const void **)a2, 48LL) )
  {
    v9 = UMPDOBJ::GetKernelPtr(this, (char *)*a2);
    *((_QWORD *)v9 + 5) = v7;
    *((_QWORD *)v9 + 4) = v8;
    return 1LL;
  }
  return 0LL;
}
