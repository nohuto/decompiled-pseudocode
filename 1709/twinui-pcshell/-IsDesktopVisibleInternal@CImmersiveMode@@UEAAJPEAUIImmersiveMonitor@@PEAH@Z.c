/*
 * XREFs of ?IsDesktopVisibleInternal@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x180032080
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 */

__int64 __fastcall CImmersiveMode::IsDesktopVisibleInternal(
        CImmersiveMode *this,
        struct IImmersiveMonitor *a2,
        int *a3)
{
  int v3; // ebx
  unsigned __int64 i; // rdi

  v3 = 0;
  *a3 = 0;
  if ( a2 )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 44); ++i )
    {
      if ( (unsigned int)SHIsSameObject(
                           **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 43) + 8 * i),
                           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
      {
        _mm_lfence();
        LOBYTE(v3) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 43) + 8 * i) + 12LL) != 0;
        *a3 = v3;
        return 0LL;
      }
    }
  }
  else
  {
    LOBYTE(v3) = *((_BYTE *)this + 308) != 0;
    *a3 = v3;
  }
  return 0LL;
}
