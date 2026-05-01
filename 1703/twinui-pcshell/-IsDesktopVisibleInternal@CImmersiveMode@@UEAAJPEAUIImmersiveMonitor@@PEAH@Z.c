/*
 * XREFs of ?IsDesktopVisibleInternal@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x1800308C0
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
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
    for ( i = 0LL; i < *((_QWORD *)this + 40); ++i )
    {
      if ( (unsigned int)SHIsSameObject(
                           **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 39) + 8 * i),
                           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
      {
        _mm_lfence();
        LOBYTE(v3) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 39) + 8 * i) + 12LL) != 0;
        *a3 = v3;
        return 0LL;
      }
    }
  }
  else
  {
    LOBYTE(v3) = *((_BYTE *)this + 276) != 0;
    *a3 = v3;
  }
  return 0LL;
}
