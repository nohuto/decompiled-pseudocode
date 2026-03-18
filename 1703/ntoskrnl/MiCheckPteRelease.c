/*
 * XREFs of MiCheckPteRelease @ 0x140220610
 * Callers:
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckPteRelease(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // r8
  ULONG_PTR v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rcx
  unsigned __int8 i; // cf
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 j; // r9
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  volatile signed __int32 *v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r10
  __int64 result; // rax
  int v19; // r8d
  unsigned __int64 v20; // rcx

  if ( !a2 )
    KeBugCheckEx(0xDAu, 0x300uLL, a1 << 25 >> 16, 0LL, 0LL);
  if ( (unsigned int)MiGetSystemRegionType(a1 << 25 >> 16) != 9 )
    KeBugCheckEx(0xDAu, 0x301uLL, v4, 0LL, 0LL);
  v5 = 2LL * (unsigned int)((v3 - qword_14036D0B0) >> 3);
  if ( _bittest64((const signed __int64 *)qword_14036CD20, v5) )
    KeBugCheckEx(0xDAu, 0x303uLL, v4, a2, 0LL);
  LOBYTE(v6) = 2;
  if ( v5 && *(_DWORD *)(qword_14036CD20 + 4 * ((v5 - 2) >> 5)) >> ((v5 - 2) & 0x1F) == 2 )
    KeBugCheckEx(0xDAu, 0x304uLL, v4, a2, 0LL);
  v7 = v5 + 1;
  for ( i = _bittest64((const signed __int64 *)qword_14036CD20, v5 + 1);
        i == 1;
        i = _bittest64((const signed __int64 *)qword_14036CD20, v7) )
  {
    v7 += 2LL;
  }
  BugCheckParameter4 = ((v7 - v5) >> 1) + 1;
  if ( BugCheckParameter4 != a2 )
    KeBugCheckEx(0xDAu, 0x305uLL, v4, a2, BugCheckParameter4);
  v10 = v5 + 2 * BugCheckParameter4;
  for ( j = v5; j < v10; j += 2LL )
  {
    if ( _bittest64((const signed __int64 *)qword_14036CD20, j) == 1 )
      KeBugCheckEx(0xDAu, 0x306uLL, v4, v4 + (((j - v5) << 11) & 0xFFFFFFFFFFFFF000uLL), BugCheckParameter4);
  }
  v12 = v5 + 2 * (a2 - 1);
  while ( 1 )
  {
    v17 = v5 & 0x1F;
    v15 = (volatile signed __int32 *)(qword_14036CD20 + 4 * (v5 >> 5));
    if ( v5 >= v12 )
      break;
    LOBYTE(v13) = 1;
    if ( v17 + 1 <= 0x20 )
    {
      v14 = 1 << v17;
LABEL_28:
      _InterlockedOr(v15, v14);
      goto LABEL_29;
    }
    if ( (v5 & 0x1F) == 0 )
      goto LABEL_27;
    _InterlockedOr(v15++, ((1 << (32 - (v5 & 0x1F))) - 1) << v17);
    v13 = 1LL - (32 - (unsigned int)(v5 & 0x1F));
    if ( v13 >= 0x20 )
    {
      v16 = v13 >> 5;
      v13 += -32LL * (v13 >> 5);
      do
      {
        *v15++ = -1;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
    {
LABEL_27:
      v14 = (1 << v13) - 1;
      goto LABEL_28;
    }
LABEL_29:
    v5 += 2LL;
  }
  if ( v17 + 2 <= 0x20 )
  {
    result = (unsigned int)(3 << v17);
    goto LABEL_39;
  }
  if ( (v5 & 0x1F) == 0 )
    goto LABEL_38;
  v19 = v5 & 0x1F;
  _InterlockedOr(v15, ((1 << (32 - v19)) - 1) << v17);
  result = (unsigned int)(32 - v19);
  ++v15;
  v6 = 2 - result;
  if ( (unsigned __int64)(2 - result) >= 0x20 )
  {
    v20 = v6 >> 5;
    result = -32LL * (v6 >> 5);
    v6 += result;
    do
    {
      *v15++ = -1;
      --v20;
    }
    while ( v20 );
  }
  if ( v6 )
  {
LABEL_38:
    result = (unsigned int)((1 << v6) - 1);
LABEL_39:
    _InterlockedOr(v15, result);
  }
  return result;
}
