/*
 * XREFs of ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C001F340
 * Callers:
 *     GreSfmDwmShutdown @ 0x1C009BCA0 (GreSfmDwmShutdown.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall SfmTokenArray::DeInitialize(SfmTokenArray *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)this;
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *(_QWORD *)this = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
}
