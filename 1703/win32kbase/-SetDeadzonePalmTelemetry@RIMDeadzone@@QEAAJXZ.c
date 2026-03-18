/*
 * XREFs of ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C01166CC
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C0116134 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall RIMDeadzone::SetDeadzonePalmTelemetry(RIMDeadzone *this)
{
  unsigned int v1; // edi
  char *v3; // rax
  char *v4; // rsi

  v1 = 0;
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = (char *)Win32AllocPoolZInit(0x300CuLL, 2053394514LL);
    v4 = v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 4) = 0LL;
      *(_DWORD *)v3 = 0;
      memset(v3 + 2060, 0, 0x2800uLL);
      memset(v4 + 12, 0, 0x800uLL);
      v4[12] = 0;
      *((_QWORD *)this + 7) = v4;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
