/*
 * XREFs of ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C000B6D8
 * Callers:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0010654 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C001714C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C004A1B4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacyTokenBuffer::Reset(CLegacyTokenBuffer *this)
{
  char *v1; // rdi
  CLegacyTokenBuffer **v3; // rax
  char **v4; // rcx

  v1 = (char *)this + 16;
  v3 = (CLegacyTokenBuffer **)*((_QWORD *)this + 3);
  if ( *v3 != (CLegacyTokenBuffer *)((char *)this + 16) || (v4 = (char **)v3[1], *v4 != (char *)v3) )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v1 + 1) = v4;
    *v4 = v1;
    if ( v3 == (CLegacyTokenBuffer **)v1 )
      break;
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    v3 = (CLegacyTokenBuffer **)*((_QWORD *)v1 + 1);
    if ( *v3 == (CLegacyTokenBuffer *)v1 )
    {
      v4 = (char **)v3[1];
      if ( *v4 == (char *)v3 )
        continue;
    }
    __fastfail(3u);
  }
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 521) = 0;
  *((_QWORD *)this + 262) = (char *)this + 36;
  *((_QWORD *)this + 261) = v1;
  *((_DWORD *)this + 526) = 2048;
  *((_BYTE *)this + 2108) = 0;
}
