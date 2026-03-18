/*
 * XREFs of MiMarkProcessCfgBits @ 0x1404B5B54
 * Callers:
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiMarkPrivateOpenCfgBits @ 0x1404B3928 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkSharedImageCfgBits @ 0x1404B4820 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x140574F8C (MiMarkPrivateImageCfgBits.c)
 */

__int64 __fastcall MiMarkProcessCfgBits(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 *a7)
{
  int v8; // ecx
  int v10; // ecx
  int v11; // r9d

  v8 = a1 - 1;
  if ( !v8 )
    return MiMarkSharedImageCfgBits(a6, a2, a3);
  v10 = v8 - 1;
  if ( !v10 )
    return MiMarkPrivateImageCfgBits(a6);
  if ( v10 != 1 )
    return 3221225473LL;
  if ( a7 )
    v11 = *a7;
  else
    v11 = 1;
  return MiMarkPrivateOpenCfgBits(a6, a4, a5, v11);
}
