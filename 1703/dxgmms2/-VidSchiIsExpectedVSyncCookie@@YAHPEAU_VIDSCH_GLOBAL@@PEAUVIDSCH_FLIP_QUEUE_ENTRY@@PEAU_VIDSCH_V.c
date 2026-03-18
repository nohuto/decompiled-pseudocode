/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0003C90
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00228EC (-VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_.c)
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3)
{
  int v3; // eax
  unsigned int v4; // esi
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int *v11; // rdx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  unsigned int v15; // edi
  char v16; // cl
  unsigned int v17; // r12d
  int v18; // eax
  char v19; // r8
  char v20; // dl
  int v21; // eax
  __int64 v22; // r9
  int v23; // r15d
  __int64 v24; // r10
  __int64 v25; // r13
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  _DWORD *v29; // [rsp+20h] [rbp-48h]
  char i; // [rsp+80h] [rbp+18h]
  char v31; // [rsp+88h] [rbp+20h]

  v3 = *((_DWORD *)a3 + 24);
  v4 = 0;
  if ( v3 && v3 != *((_DWORD *)a2 + 265) )
    return 0LL;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 10 )
    return VidSchiIsExpectedVSyncCookie2(a1, a2, a3);
  v8 = v7 == 3;
  v9 = *((_DWORD *)a2 + 278);
  if ( v8 )
  {
    if ( (v9 & 0x10) == 0 )
    {
      LOBYTE(v4) = *((_QWORD *)a3 + 14) == *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 144) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 144) + 8LL) + 167) & 0xFFFFFFF8)
                                                     + *((_QWORD *)a2 + 144)
                                                     + 40LL);
      return v4;
    }
    return 0LL;
  }
  if ( (v9 & 0x10) != 0 )
  {
    v11 = (int *)*((_QWORD *)a2 + 144);
    v12 = *((_DWORD *)a3 + 25);
    if ( ((unsigned __int8)v12 & *((_BYTE *)v11 + 1)) != 0 )
      return 0LL;
    v13 = *v11;
    v14 = (unsigned __int8)*v11;
    if ( (unsigned __int8)(v12 & v13) != v14 )
      return 0LL;
    v15 = 1;
    if ( v14 )
    {
      v17 = (unsigned __int8)v12;
      v20 = 0;
      v8 = !_BitScanForward((unsigned int *)&v21, (unsigned __int8)v12);
      v16 = -1;
      v31 = 0;
      v19 = 0;
      if ( !v8 )
        v16 = v21;
      for ( i = 0; v17; v31 = v19 )
      {
        v22 = *((_QWORD *)a2 + 144);
        v23 = 1 << v16;
        if ( ((unsigned __int8)(1 << v16) & *(_BYTE *)v22) != 0 )
        {
          v24 = (unsigned int)v20;
          v25 = 5LL * v19;
          v26 = *(_DWORD *)(v22 + 8);
          if ( *((_QWORD *)a3 + 5 * v19 + 14) != *(_QWORD *)(48 * v24
                                                           + *(_DWORD *)(v22 + 4) * ((8 * v26 + 167) & 0xFFFFFFF8)
                                                           + v22
                                                           + 40) )
            return 0LL;
          v29 = (_DWORD *)(v22 + 144 + (unsigned int)v24 * ((8 * v26 + 167) & 0xFFFFFFF8));
          if ( RtlCompareMemory(v29, (char *)a3 + 40 * v19 + 120, 8uLL) != 8 )
            return 0LL;
          if ( RtlCompareMemory(v29 + 2, (char *)a3 + 8 * v25 + 128, 8uLL) != 8 )
            return 0LL;
          v27 = *((_DWORD *)a3 + 2 * v25 + 36);
          v28 = v29[7];
          if ( (((unsigned __int8)v27 ^ *((_BYTE *)v29 + 28)) & 1) != 0
            || (((unsigned __int8)v27 ^ (unsigned __int8)v28) & 2) != 0
            || (((unsigned __int8)v27 ^ (unsigned __int8)v28) & 0x18) != 0 )
          {
            return 0LL;
          }
          v19 = v31;
          v20 = ++i;
        }
        v16 = -1;
        v17 &= ~v23;
        v8 = !_BitScanForward((unsigned int *)&v18, v17);
        if ( !v8 )
          v16 = v18;
        ++v19;
      }
    }
  }
  else
  {
    v15 = 1;
    if ( (unsigned __int8)*((_DWORD *)a3 + 25) != 1
      || *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 144) + 4LL)
                   * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 144) + 8LL) + 167) & 0xFFFFFFF8)
                   + *((_QWORD *)a2 + 144)
                   + 40LL) != *((_QWORD *)a3 + 14) )
    {
      return 0;
    }
  }
  return v15;
}
