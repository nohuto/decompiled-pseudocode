/*
 * XREFs of ?IsDesktopObscuredInternal@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x180030960
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 */

__int64 __fastcall CImmersiveMode::IsDesktopObscuredInternal(
        CImmersiveMode *this,
        struct IImmersiveMonitor *a2,
        int *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // ebp
  unsigned __int8 v8; // di
  __int64 v9; // rcx

  *a3 = 0;
  v3 = 0LL;
  v7 = -2147319765;
  if ( *((_QWORD *)this + 40) )
  {
    v8 = 1;
    while ( !(unsigned int)SHIsSameObject(
                             **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 39) + 8 * v3),
                             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
    {
      if ( (unsigned __int64)++v3 >= *((_QWORD *)this + 40) )
        return v7;
    }
    v9 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v3);
    if ( *(_BYTE *)(v9 + 12) && !*(_BYTE *)(v9 + 13) )
      v8 = 0;
    v7 = 0;
    *a3 = v8;
  }
  return v7;
}
