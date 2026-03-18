/*
 * XREFs of vGetJpn98FixPitch @ 0x1C00C00E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00C1278 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bQueryFntCacheReg @ 0x1C00C1354 (bQueryFntCacheReg.c)
 */

NTSTATUS vGetJpn98FixPitch()
{
  int v0; // ebx
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  result = GetGreRegKey(
             &Handle,
             0x80000000,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize");
  if ( result >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle) )
    {
      LOBYTE(v0) = 0;
      gbJpn98FixPitch = v0;
    }
    return ZwClose(Handle);
  }
  return result;
}
