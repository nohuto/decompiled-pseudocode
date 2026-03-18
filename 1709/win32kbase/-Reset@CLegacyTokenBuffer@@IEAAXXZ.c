/*
 * XREFs of ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00393CC
 * Callers:
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0035EAC (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     NtDCompositionRetireFrame @ 0x1C0037500 (NtDCompositionRetireFrame.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00394BC (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C009A8C8 (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CLegacyTokenBuffer::Reset(CLegacyTokenBuffer *this, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  __int64 v5; // rax
  char **v6; // rcx

  v3 = (char *)this + 16;
  v5 = *((_QWORD *)this + 3);
  if ( *(CLegacyTokenBuffer **)v5 != (CLegacyTokenBuffer *)((char *)this + 16)
    || (v6 = *(char ***)(v5 + 8), *v6 != (char *)v5) )
  {
    __fastfail(3u);
  }
  while ( 1 )
  {
    *((_QWORD *)v3 + 1) = v6;
    *v6 = v3;
    if ( (char *)v5 == v3 )
      break;
    if ( v5 )
      Win32FreePool(v5, a2, a3);
    v5 = *((_QWORD *)v3 + 1);
    if ( *(char **)v5 == v3 )
    {
      v6 = *(char ***)(v5 + 8);
      if ( *v6 == (char *)v5 )
        continue;
    }
    __fastfail(3u);
  }
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 521) = 0;
  *((_QWORD *)this + 262) = (char *)this + 36;
  *((_QWORD *)this + 261) = v3;
  *((_DWORD *)this + 526) = 2048;
  *((_BYTE *)this + 2108) = 0;
}
