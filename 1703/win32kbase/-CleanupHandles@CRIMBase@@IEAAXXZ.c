/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C004FE90
 * Callers:
 *     ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x1C004FD00 (-UninitializeSensor@CBaseInput@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 */

void __fastcall CRIMBase::CleanupHandles(HANDLE *this)
{
  char *v2; // rbx
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  HANDLE v7; // rcx
  CRIMBase *v8; // rcx

  v2 = (char *)(this + 21);
  v3 = 11LL;
  do
  {
    v4 = (void *)*((_QWORD *)v2 - 1);
    if ( v4 )
    {
      ObCloseHandle(v4, 1);
      *((_QWORD *)v2 - 1) = 0LL;
    }
    if ( *(_QWORD *)v2 )
    {
      ZwClose(*(HANDLE *)v2);
      *(_QWORD *)v2 = 0LL;
    }
    v5 = (void *)*((_QWORD *)v2 + 1);
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      *((_QWORD *)v2 + 1) = 0LL;
    }
    v6 = *((_QWORD *)v2 + 2);
    if ( v6 )
    {
      Win32FreePool(v6);
      *((_QWORD *)v2 + 2) = 0LL;
    }
    *((_DWORD *)v2 - 3) = 0;
    *((_DWORD *)v2 - 4) = 11;
    v2 += 40;
    --v3;
  }
  while ( v3 );
  if ( this[1] != (HANDLE)-1LL )
  {
    RIMUnregisterForInput();
    ObCloseHandle(this[1], 1);
    this[1] = (HANDLE)-1LL;
  }
  v7 = this[2];
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    this[2] = 0LL;
  }
  v8 = (CRIMBase *)this[9];
  if ( v8 )
  {
    if ( v8 != (CRIMBase *)(this + 10) )
    {
      Win32FreePool((__int64)v8);
      this[9] = 0LL;
    }
  }
}
