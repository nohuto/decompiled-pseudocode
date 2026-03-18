/*
 * XREFs of AllocThreadBufferWithTag @ 0x1C003B1F0
 * Callers:
 *     CaptureDriverInfo2W @ 0x1C007C9C0 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C008CFC0 (CaptureDEVMODEW.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v8; // ecx

  v3 = 0LL;
  if ( a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v8 = a1 + 32;
      if ( v8 > 0x400 && v8 + 4096 >= v8 )
        v8 = (v8 + 4095) & 0xFFFFF000;
      a1 = v8 - 32;
    }
    v5 = a1 + 32;
    if ( a1 != -32 )
    {
      if ( (int)IsWin32AllocPoolImplSupported() < 0 )
        v6 = 0LL;
      else
        v6 = Win32AllocPoolImpl(33LL, v5, a2);
      if ( v6 )
      {
        v3 = v6 + 32;
        PushThreadGuardedObject(v6, v6 + 32, FreeThreadBufferWithTag);
      }
    }
  }
  return v3;
}
