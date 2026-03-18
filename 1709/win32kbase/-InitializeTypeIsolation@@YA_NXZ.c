/*
 * XREFs of ?InitializeTypeIsolation@@YA_NXZ @ 0x1C009ACA4
 * Callers:
 *     HmgCreate @ 0x1C006F330 (HmgCreate.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     ?Create@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C009ACF8 (-Create@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

bool InitializeTypeIsolation(void)
{
  unsigned __int8 **v0; // rax
  char v1; // bl
  _QWORD *v2; // rdi
  __int64 v3; // rax

  v0 = (unsigned __int8 **)Win32AllocPool(8LL, 0x6F736955u);
  v1 = 0;
  gpTypeIsolation = v0;
  v2 = v0;
  if ( v0 )
  {
    *v0 = 0LL;
    v3 = NSInstrumentation::CTypeIsolation<163840,640>::Create();
    if ( v3 )
    {
      *v2 = v3;
      v1 = 1;
    }
    LOBYTE(v0) = v1;
  }
  return (char)v0;
}
