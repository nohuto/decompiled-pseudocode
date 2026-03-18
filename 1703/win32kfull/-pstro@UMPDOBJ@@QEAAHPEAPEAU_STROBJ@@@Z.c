/*
 * XREFs of ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C0097914
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C009B990 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00974C0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::pstro(UMPDOBJ *this, struct _STROBJ **a2)
{
  char *v2; // rbx
  void *v5; // rdi
  void *v6; // rsi
  char *v7; // rax
  char *KernelPtr; // rax
  __int64 i; // r8
  __int64 v11; // rdx
  void *v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = (char *)*a2;
  if ( !*a2 )
    return 1LL;
  v5 = (void *)*((_QWORD *)v2 + 5);
  v12 = v5;
  if ( v5 )
  {
    if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v12, 2 * *(_DWORD *)v2) )
      return 0LL;
    v5 = v12;
  }
  v6 = (void *)*((_QWORD *)v2 + 4);
  v12 = v6;
  if ( v6 )
  {
    if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v12, 24 * *(_DWORD *)v2) )
      return 0LL;
    v6 = v12;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)v12);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v2; *(_QWORD *)&KernelPtr[8 * v11 + 8] = 0LL )
    {
      v11 = 3 * i;
      i = (unsigned int)(i + 1);
    }
  }
  if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 192), (const void **)a2, 0x30u) )
  {
    v7 = UMPDOBJ::GetKernelPtr(this, (char *)*a2);
    *((_QWORD *)v7 + 5) = v5;
    *((_QWORD *)v7 + 4) = v6;
    return 1LL;
  }
  return 0LL;
}
