/*
 * XREFs of ?Initialize@DripsBlockerInfoList@@QEAAJXZ @ 0x1C01AA9D8
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0119AB0 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00089FC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DripsBlockerInfoList::Initialize(DripsBlockerInfoList *this)
{
  char *v2; // rax
  char *v3; // rbx
  unsigned int v4; // edi
  __int64 i; // rbx
  __int64 v6; // rsi
  PVOID v7; // rax

  v2 = (char *)operator new[](0x608uLL, 0x4B677844u, PagedPool);
  if ( v2 )
  {
    *(_QWORD *)v2 = 32LL;
    v3 = v2 + 8;
    `vector constructor iterator'(
      v2 + 8,
      48LL,
      32LL,
      (void (__fastcall *)(char *))DripsBlockerInfoList::DripsBlockerInfoEntry::DripsBlockerInfoEntry);
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)this + 1) = v3;
  if ( v3 )
  {
    v4 = 0;
    for ( i = 0LL; ; i += 48LL )
    {
      v6 = *((_QWORD *)this + 1);
      v7 = operator new[](0x10uLL, 0x4B677844u, PagedPool);
      if ( !v7 )
        break;
      *(_WORD *)(i + v6 + 2) = 16;
      ++v4;
      *(_QWORD *)(i + v6 + 8) = v7;
      if ( v4 >= 0x20 )
        return 0LL;
    }
  }
  return 3221225495LL;
}
