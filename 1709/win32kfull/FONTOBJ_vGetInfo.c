/*
 * XREFs of FONTOBJ_vGetInfo @ 0x1C026FEB0
 * Callers:
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C028F990 (NtGdiFONTOBJ_vGetInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?vGetInfo@RFONTOBJ@@QEAAXPEAU_FONTINFO@@@Z @ 0x1C0283D6C (-vGetInfo@RFONTOBJ@@QEAAXPEAU_FONTINFO@@@Z.c)
 */

void __stdcall FONTOBJ_vGetInfo(FONTOBJ *pfo, ULONG cjSize, FONTINFO *pfi)
{
  unsigned int v3; // r9d
  void *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _FONTINFO Src; // [rsp+20h] [rbp-28h] BYREF
  FONTOBJ *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = pfo;
  RFONTOBJ::vGetInfo((RFONTOBJ *)&v8, &Src);
  if ( v3 >= 0x1C )
    v3 = 28;
  memmove(v4, &Src, v3);
  v8 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8, v5, v6);
}
