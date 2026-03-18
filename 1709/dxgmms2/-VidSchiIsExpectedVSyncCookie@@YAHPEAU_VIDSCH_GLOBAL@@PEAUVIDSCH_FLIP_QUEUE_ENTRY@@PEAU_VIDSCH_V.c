/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00046C4
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0024D94 (-VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_.c)
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
  int v11; // r14d
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned int v14; // r14d
  int v15; // eax
  char v16; // cl
  char v17; // dl
  char v18; // r8
  _DWORD *v19; // r9
  int v20; // r12d
  __int64 v21; // r11
  unsigned int v22; // r13d
  _DWORD *v23; // r13
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  __int64 v27; // [rsp+20h] [rbp-48h]
  char v28; // [rsp+80h] [rbp+18h]
  char v29; // [rsp+88h] [rbp+20h]

  v3 = *((_DWORD *)a3 + 24);
  v4 = 0;
  if ( v3 && v3 != *((_DWORD *)a2 + 267) )
    return 0LL;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 10 )
    return VidSchiIsExpectedVSyncCookie2(a1, a2, a3);
  v8 = v7 == 3;
  v9 = *((_DWORD *)a2 + 280);
  if ( v8 )
  {
    if ( (v9 & 0x10) == 0 )
    {
      LOBYTE(v4) = *((_QWORD *)a3 + 14) == *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 145) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 145) + 8LL) + 175) & 0xFFFFFFF8)
                                                     + *((_QWORD *)a2 + 145)
                                                     + 40LL);
      return v4;
    }
    return 0LL;
  }
  if ( (v9 & 0x10) != 0 )
  {
    v11 = *((_DWORD *)a3 + 25);
    v12 = **((_DWORD **)a2 + 145);
    if ( (v11 & (v12 >> 10) & 0x3FF) != 0 || (v12 & v11 & 0x3FF) != (v12 & 0x3FF) )
      return 0LL;
    v13 = 1;
    if ( (v12 & 0x3FF) != 0 )
    {
      v14 = *((_DWORD *)a3 + 25) & 0x3FF;
      v29 = 0;
      v8 = !_BitScanForward((unsigned int *)&v15, v14);
      v16 = -1;
      v17 = 0;
      v18 = 0;
      if ( !v8 )
        v16 = v15;
      v28 = 0;
      while ( v14 )
      {
        v19 = (_DWORD *)*((_QWORD *)a2 + 145);
        v20 = 1 << v16;
        if ( (*v19 & (1 << v16) & 0x3FF) != 0 )
        {
          v21 = (unsigned int)v17;
          v22 = (8 * v19[2] + 175) & 0xFFFFFFF8;
          v27 = v18;
          if ( *((_QWORD *)a3 + 5 * v18 + 14) != *(_QWORD *)((char *)&v19[12 * v21 + 10] + v22 * v19[1]) )
            return 0LL;
          v23 = (_DWORD *)((char *)v19 + (unsigned int)v21 * v22);
          if ( RtlCompareMemory(v23 + 36, (char *)a3 + 40 * v18 + 120, 8uLL) != 8 )
            return 0LL;
          if ( RtlCompareMemory(v23 + 38, (char *)a3 + 32 * v27 + 8 * v27 + 128, 8uLL) != 8 )
            return 0LL;
          v24 = v23[43];
          v25 = *((_DWORD *)a3 + 10 * v27 + 36);
          if ( (((unsigned __int8)v24 ^ *((_BYTE *)a3 + 40 * v27 + 144)) & 1) != 0
            || (((unsigned __int8)v24 ^ (unsigned __int8)v25) & 2) != 0
            || (((unsigned __int8)v24 ^ (unsigned __int8)v25) & 0x18) != 0 )
          {
            return 0LL;
          }
          v18 = v29;
          v17 = ++v28;
        }
        v16 = -1;
        v14 &= ~v20;
        v8 = !_BitScanForward((unsigned int *)&v26, v14);
        if ( !v8 )
          v16 = v26;
        v29 = ++v18;
      }
    }
  }
  else
  {
    v13 = 1;
    if ( (*((_DWORD *)a3 + 25) & 0x3FF) != 1
      || *((_QWORD *)a3 + 14) != *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 145) + 4LL)
                                           * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 145) + 8LL) + 175) & 0xFFFFFFF8)
                                           + *((_QWORD *)a2 + 145)
                                           + 40LL) )
    {
      return 0;
    }
  }
  return v13;
}
