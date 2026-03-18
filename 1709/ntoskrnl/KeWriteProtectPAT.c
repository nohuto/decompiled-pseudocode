/*
 * XREFs of KeWriteProtectPAT @ 0x14042EAF0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcess @ 0x1400574C0 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401822F0 (KiSetUserTbFlushPending.c)
 */

void __fastcall KeWriteProtectPAT(char a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int128 *v4; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v2 = 8LL;
  *(_QWORD *)&v8 = __readmsr(0x277u);
  v3 = a1 == 0;
  v4 = &v8;
  _R8D = 1;
  if ( v3 )
  {
    do
    {
      if ( *(_BYTE *)v4 == 5 )
        *(_BYTE *)v4 = 6;
      v4 = (__int128 *)((char *)v4 + 1);
      --v2;
    }
    while ( v2 );
  }
  else
  {
    do
    {
      if ( *(_BYTE *)v4 == 6 )
        *(_BYTE *)v4 = 5;
      v4 = (__int128 *)((char *)v4 + 1);
      --v2;
    }
    while ( v2 );
  }
  __writemsr(0x277u, v8);
  if ( KiFlushPcid )
  {
    *(_QWORD *)&v8 = 2LL;
    __asm { invpcid r8d, [rsp+48h+var_28] }
    if ( !PsGetCurrentProcess()->AddressPolicy )
      KiSetUserTbFlushPending();
  }
  else
  {
    v6 = __readcr4();
    if ( (v6 & 0x20080) != 0 )
    {
      __writecr4(v6 ^ 0x80);
      __writecr4(v6);
    }
    else
    {
      v7 = __readcr3();
      __writecr3(v7);
    }
  }
}
