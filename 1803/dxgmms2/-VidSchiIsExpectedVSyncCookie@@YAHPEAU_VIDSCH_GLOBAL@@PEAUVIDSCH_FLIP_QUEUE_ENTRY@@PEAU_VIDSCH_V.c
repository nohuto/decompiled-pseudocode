/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00104A4
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00278AC (-VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_.c)
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3)
{
  int v3; // eax
  unsigned int v4; // edi
  int v8; // ecx
  int v9; // eax
  int v11; // ebp
  unsigned int v12; // edx
  unsigned int v13; // esi
  unsigned int v14; // ebp
  bool v15; // zf
  int v16; // eax
  char v17; // cl
  char v18; // dl
  char v19; // r8
  _DWORD *v20; // r10
  int v21; // r12d
  __int64 v22; // r11
  __int64 v23; // r13
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  _DWORD *v27; // [rsp+20h] [rbp-48h]
  char v28; // [rsp+80h] [rbp+18h]
  char v29; // [rsp+88h] [rbp+20h]

  v3 = *((_DWORD *)a3 + 24);
  v4 = 0;
  if ( v3 && v3 != *((_DWORD *)a2 + 267) )
    return 0LL;
  v8 = *((_DWORD *)a3 + 4);
  if ( v8 == 10 )
    return VidSchiIsExpectedVSyncCookie2(a1, a2, a3);
  v9 = *((_DWORD *)a2 + 280) & 0x10;
  if ( v8 == 3 )
  {
    if ( !v9 )
    {
      LOBYTE(v4) = *((_QWORD *)a3 + 14) == *(_QWORD *)(*(_DWORD *)(*((_QWORD *)a2 + 145) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 145) + 8LL) + 175) & 0xFFFFFFF8)
                                                     + *((_QWORD *)a2 + 145)
                                                     + 40LL);
      return v4;
    }
    return 0LL;
  }
  if ( v9 )
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
      v15 = !_BitScanForward((unsigned int *)&v16, v14);
      v17 = -1;
      v18 = 0;
      v19 = 0;
      if ( !v15 )
        v17 = v16;
      v28 = 0;
      while ( v14 )
      {
        v20 = (_DWORD *)*((_QWORD *)a2 + 145);
        v21 = 1 << v17;
        if ( (*v20 & (1 << v17) & 0x3FF) != 0 )
        {
          v22 = (unsigned int)v18;
          v23 = 5LL * v19;
          if ( *((_QWORD *)a3 + 5 * v19 + 14) != *(_QWORD *)((char *)&v20[12 * v22 + 10]
                                                           + ((8 * v20[2] + 175) & 0xFFFFFFF8) * v20[1]) )
            return 0LL;
          v27 = (_DWORD *)((char *)v20 + ((8 * v20[2] + 175) & 0xFFFFFFF8) * (unsigned int)v22 + 144);
          if ( RtlCompareMemory(v27, (char *)a3 + 40 * v19 + 120, 8uLL) != 8 )
            return 0LL;
          if ( RtlCompareMemory(v27 + 2, (char *)a3 + 8 * v23 + 128, 8uLL) != 8 )
            return 0LL;
          v24 = *((_DWORD *)a3 + 2 * v23 + 36);
          v25 = v27[7];
          if ( (((unsigned __int8)v25 ^ *((_BYTE *)a3 + 8 * v23 + 144)) & 1) != 0
            || (((unsigned __int8)v25 ^ (unsigned __int8)v24) & 2) != 0
            || (((unsigned __int8)v25 ^ (unsigned __int8)v24) & 0x18) != 0 )
          {
            return 0LL;
          }
          v19 = v29;
          v18 = ++v28;
        }
        v17 = -1;
        v14 &= ~v21;
        v15 = !_BitScanForward((unsigned int *)&v26, v14);
        if ( !v15 )
          v17 = v26;
        v29 = ++v19;
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
