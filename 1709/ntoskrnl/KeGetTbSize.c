/*
 * XREFs of KeGetTbSize @ 0x14084971C
 * Callers:
 *     MiInitializeTbFlushing @ 0x1408493FC (MiInitializeTbFlushing.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 KeGetTbSize()
{
  unsigned __int8 CpuVendor; // cl
  unsigned int v6; // ebx
  __int64 *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  int *v10; // r8
  __int128 v17; // [rsp+0h] [rbp-80h]
  char v18; // [rsp+10h] [rbp-70h]
  __int64 v19; // [rsp+18h] [rbp-68h] BYREF
  char v20; // [rsp+20h] [rbp-60h]
  __int64 v21; // [rsp+28h] [rbp-58h]
  char v22; // [rsp+30h] [rbp-50h]
  __int64 v23; // [rsp+38h] [rbp-48h]
  char v24; // [rsp+40h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-38h]
  char v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+58h] [rbp-28h]
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF

  v18 = -76;
  v21 = 512LL;
  v27 = 512LL;
  v19 = 256LL;
  v20 = 100;
  v22 = -63;
  CpuVendor = KeGetCurrentPrcb()->CpuVendor;
  v23 = 1024LL;
  v24 = -61;
  v25 = 1536LL;
  v26 = -54;
  if ( CpuVendor == 1 )
  {
    _RAX = 2147483654LL;
    __asm { cpuid }
    return WORD1(_RBX) & 0xFFF;
  }
  else
  {
    _RAX = 2LL;
    if ( CpuVendor == 2 )
    {
      __asm { cpuid }
      *(_QWORD *)((char *)&v17 + 4) = __PAIR64__(_RCX, _RBX);
      v6 = 0;
      HIDWORD(v17) = _RDX;
      v7 = &v19;
      LODWORD(v17) = _RAX;
      v28 = v17;
      do
      {
        v8 = 0;
        while ( 2 )
        {
          v9 = 0;
          v10 = (int *)&v28;
          do
          {
            if ( *v10 >= 0 && (unsigned __int8)((unsigned int)*v10 >> v8) == *((unsigned __int8 *)v7 - 8) )
              return *v7;
            ++v9;
            ++v10;
          }
          while ( v9 < 4 );
          v8 += 8;
          if ( v8 < 0x20 )
            continue;
          break;
        }
        ++v6;
        v7 += 2;
      }
      while ( v6 < 5 );
    }
    return 0LL;
  }
}
